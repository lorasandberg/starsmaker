using UnityEngine;
using System.Collections;
using System.Collections.Generic;

	public class ParticleSystemController : MonoBehaviour {
	public double bodyFormDistance;
	public int aliveParticles = 0;
    public ParticleSystem myParticleSystem;
    ParticleSystem.Particle[] particles;
	public StellarObjectController stellars;

	// for adding new body
	private Vector3 addBodyLocation;
	private bool addBodyScheduled = false;
	private double bodyFormDistanceSqr;
    private float collideDistance = 0.05f;
    bool timeStopped;
	bool mouseOnGUI = false;

    // Use this for initialization
    void Start () {
		particles = new ParticleSystem.Particle[myParticleSystem.maxParticles];
		bodyFormDistanceSqr = bodyFormDistance * bodyFormDistance;
        timeStopped = true;
        Time.timeScale = 0;
	}
	
	// Update is called once per frame
	void LateUpdate ()
    {

		//List<GameObject> gravityPoints = stellars.getList();
        aliveParticles = myParticleSystem.GetParticles(particles);
		List<GameObject> gravityPoints = stellars.getList();

        for (int i = 0; i < particles.Length; i++)
        {
            Vector2 p = new Vector2(particles[i].position.x, particles[i].position.y);

            // add new body?

            if (addBodyScheduled)
            {
                Vector3 dist = addBodyLocation - particles[i].position;
                if (dist.sqrMagnitude < bodyFormDistanceSqr)
                {
                    stellars.addBody(addBodyLocation, 0.3f, particles[i].velocity);
                    particles[i].lifetime = -1;
                    addBodyScheduled = false;
                }
            }

            //Initialize newly created particles.
            if (particles[i].velocity.x == 0 && particles[i].velocity.y == 0)
            {
                Vector2 angled = new Vector2(p.x, p.y);
                angled = Rotate(angled, 90);
                angled.Normalize();
                
                //Apply initial velocity, the particles are revolving around (0,0).
                particles[i].velocity = new Vector3(angled.x, 0, angled.y)/3.0f;

                //The particles are created in a 3D sphere shape; reset third dimension to 0.
                particles[i].position = new Vector3(particles[i].position.x, 0, particles[i].position.y);
            }


			// Particles colliding with bodies

			for (int j = 0; j < gravityPoints.Count; j++)
			{
				Vector3 dist = gravityPoints[j].transform.position - particles [i].position;

                if (dist.sqrMagnitude < bodyFormDistanceSqr + (gravityPoints[j].transform.localScale.x/2f) && particles [i].lifetime > 2) {
                    stellars.IncreaseMass(gravityPoints[j], 0.07f);
					particles [i].startColor = Color.yellow;
					particles [i].lifetime = 1;
					//particles[i].
				}
			}

            //Calculate and apply gravity
            List<Vector2> gravityCenters = getGravityPoints();
            for (int g = 0; g < gravityCenters.Count; g++)
            {
				Vector3 diff = (gravityPoints [g].transform.position - particles [i].position);
				particles [i].velocity += (diff / (diff.sqrMagnitude))
					*Time.deltaTime*gravityPoints[g].GetComponent<Rigidbody>().mass/10000f;
            }

        }

       
        // planet gravity

        for (int g = 0; g < gravityPoints.Count; g++){

            stellars.UpdateMassScale(gravityPoints[g]);
            //Keep planets from moving in the third dimension
            gravityPoints[g].transform.position = new Vector3(
                gravityPoints[g].transform.position.x, 0,
                gravityPoints[g].transform.position.z);

            for (int h = 0; h < gravityPoints.Count; h++){
				if(g!=h && h < gravityPoints.Count && g < gravityPoints.Count){
					Vector3 diff = (gravityPoints [g].transform.position 
						- gravityPoints [h].transform.position);

                    gravityPoints[h].GetComponent<Rigidbody>().velocity += (diff / (diff.sqrMagnitude))
                        * Time.deltaTime * gravityPoints[g].GetComponent<Rigidbody>().mass / 10000f;

                    if (diff.magnitude - gravityPoints[g].transform.localScale.x/2f - gravityPoints[h].transform.localScale.x/2f <= collideDistance) {
                        PlanetCollision(gravityPoints[g], gravityPoints[h]);
                    }

				}
			}
		}
        
		// in case we clicked but paticles are nearby
		addBodyScheduled = false;
        myParticleSystem.SetParticles(particles, aliveParticles);
	}

	void OnGUI() {
		if (timeStopped){
			Rect startButtonRect = new Rect (Screen.width / 2 - 80, Screen.height - 50, 160, 50);
			Rect mouseStartButtonRect = new Rect (Screen.width / 2 - 80, Screen.height-(Screen.height), 160, 50);

			if (mouseStartButtonRect.Contains (Input.mousePosition)) {
				mouseOnGUI = true;
				Debug.Log ("On GUI");
			} else {
				mouseOnGUI = false;
			}

			if(GUI.Button(startButtonRect, "START GAME!")){
				BeginGame();
			}
			//else
			//  return;
		}
	}
    
    //For importing stellar objects later on.
    List<Vector2> getGravityPoints()
    {
        List<Vector2> list = new List<Vector2>();
		List<GameObject> gravityPoints = stellars.getList();

        for (int i = 0; i < gravityPoints.Count; i++)
            list.Add(new Vector2(gravityPoints[i].transform.position.x, -gravityPoints[i].transform.position.z));

        return list;
    }

    Vector2 Rotate(Vector2 v, float angle)
    {
        Vector2 vector = new Vector2(v.x, v.y);
        float sin = Mathf.Sin(angle * Mathf.Deg2Rad);
        float cos = Mathf.Cos(angle * Mathf.Deg2Rad);

        float tx = vector.x;
        float tz = vector.y;
        vector.x = (cos * tx) + (sin * tz);
        vector.y = (cos * tz) - (sin * tx);
        
        return vector;
    }

	public void AddBody(Vector3 loc ){
        if (!timeStopped || mouseOnGUI)
            return;
		addBodyLocation = loc;
		addBodyScheduled = true;
	}

    void PlanetCollision(GameObject planet1, GameObject planet2)
    {
        Rigidbody rb1 = planet1.GetComponent<Rigidbody>();
        Rigidbody rb2 = planet2.GetComponent<Rigidbody>();

        if (rb1.mass > rb2.mass)
        {
            stellars.IncreaseMass(planet1, rb2.mass);
            stellars.destroy(planet2);
        }
        else if(rb1.mass < rb2.mass)
        {
            stellars.IncreaseMass(planet2, rb1.mass);
            stellars.destroy(planet1);
        }
    }

    void BeginGame()
    {
        timeStopped = false;
        Time.timeScale = 1;
    }
}
