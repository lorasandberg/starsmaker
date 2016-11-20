using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class StellarObjectController : MonoBehaviour {


    int addedBodies = 0;
    public GameObject prefab;
    public GameObject sunPrefab;
	public GameColors myColors;
    List<GameObject> stellarObjects;
    List<PlanetResult> results;
    List<NewPlanet> initialPlanets;
    Dictionary<GameObject, float> desiredScales;
	AudioSource myAudio;
    bool endGame = false;
    float endGameCounter = 5;

    // Use this for initialization
    void Start() {
        Debug.Log("Start");
        stellarObjects = new List<GameObject>();
        results = new List<global::PlanetResult>();
        desiredScales = new Dictionary<GameObject, float>();
        initialPlanets = new List<NewPlanet>();

        //add sun
        addBody(Vector3.zero, 3000, Vector3.zero, sunPrefab);

		myAudio = GetComponent<AudioSource>();
	
    }

    // Update is called once per frame
    void Update() {
        if(endGame)
        {
            endGameCounter -= Time.deltaTime;

            if (endGameCounter <= 0)
                SceneManager.LoadScene("title");
        }
    }

    public List<GameObject> getList() {
        return stellarObjects;
    }

    public void addBody(Vector3 loc, float mass, Vector3 speed)
    {
        addBody(loc, mass, speed, prefab);
    }

    public void addBody(Vector3 loc, float mass, Vector3 speed, GameObject prefab)
    {
        GameObject temp = (GameObject)Object.Instantiate(prefab, loc, Quaternion.identity);
        temp.GetComponent<Rigidbody>().mass = mass;
        speed.y = 0;
        loc.y = 0;
        temp.GetComponent<Rigidbody>().velocity = speed;

        Renderer rend = temp.GetComponent<Renderer>();
		rend.material.color = myColors.GiveColor(addedBodies);

        stellarObjects.Add(temp);
        addedBodies++;
    }

    public void destroy(GameObject planet)
    {
        PlanetResult result = new PlanetResult();
        result.endMass = planet.GetComponent<Rigidbody>().mass;
        result.color = planet.GetComponent<Renderer>().material.color;
        results.Add(result);

        stellarObjects.Remove(planet);
        Destroy(planet);
		myAudio.Play();

        if (stellarObjects.Count == 1)
            endGame = true;
    }
    
    public void IncreaseMass(GameObject planet, float mass)
    {
        Rigidbody rb = planet.GetComponent<Rigidbody>();

        if (!desiredScales.ContainsKey(planet))
            desiredScales.Add(planet, planet.transform.localScale.x);
          desiredScales[planet] += mass / 100f;

        rb.mass += mass;
    }

    public void UpdateMassScale(GameObject planet)
    {
        if (!desiredScales.ContainsKey(planet))
            return;

        float diff = desiredScales[planet] - planet.transform.localScale.x;

        if (diff <= 0)
            return;

        Vector3 scale = planet.transform.localScale;
        scale.x += diff * 0.2f;
        scale.y += diff * 0.2f;
        scale.z += diff * 0.2f;
        planet.transform.localScale = scale;

    }
}

struct PlanetResult
{
    public float endMass;
    public Color color;
}

struct NewPlanet
{
    public Vector3 location;
    public Vector3 speed;
    public float mass;
    public GameObject prefab;
}