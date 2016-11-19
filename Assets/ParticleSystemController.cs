using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ParticleSystemController : MonoBehaviour {
    public ParticleSystem particleSystem;
    ParticleSystem.Particle[] particles;
    public List<GameObject> gravityPoints;

    // Use this for initialization
    void Start () {

	}
	
	// Update is called once per frame
	void LateUpdate ()
    {
        particles = new ParticleSystem.Particle[particleSystem.maxParticles];
        int aliveParticles = particleSystem.GetParticles(particles);

        for (int i = 0; i < particles.Length; i++)
        {
            Vector2 p = new Vector2(particles[i].position.x, particles[i].position.y);

            //Initialize newly created particles.it
            if (particles[i].velocity.x == 0 && particles[i].velocity.y == 0)
            {
                Vector2 angled = new Vector2(p.x, p.y);
                angled = Rotate(angled, 90);
                angled.Normalize();
                
                //Apply initial velocity, the particles are revolving around (0,0).
                particles[i].velocity = new Vector3(angled.x, angled.y, 0);

                //The particles are created in a 3D sphere shape; reset third dimension to 0.
                particles[i].position = new Vector3(particles[i].position.x, particles[i].position.y, 0);
            }


            //Calculate and apply gravity
            List<Vector2> gravityCenters = getGravityPoints();
            for (int g = 0; g < gravityCenters.Count; g++)
            {
                Vector2 gravity = new Vector2(-particles[i].position.x + gravityCenters[g].x,-particles[i].position.y + gravityCenters[g].y);
                gravity.Normalize();
                gravity *= 10f / p.magnitude * 0.002f; //Strength
                particles[i].velocity = new Vector3(particles[i].velocity.x + gravity.x, particles[i].velocity.y + gravity.y, 0);
            }
        }
 
        particleSystem.SetParticles(particles, aliveParticles);
	}
    
    //For importing stellar objects later on.
    List<Vector2> getGravityPoints()
    {
        List<Vector2> list = new List<Vector2>();

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
}
