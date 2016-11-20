using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class StellarObjectController : MonoBehaviour {


    int addedBodies = 0;
    public GameObject prefab;
    public GameObject sunPrefab;
	public GameColors myColors;
    public ResultsScreenController resultsScreen;
    List<GameObject> stellarObjects;
    List<PlanetResult> results;
    Dictionary<GameObject, float> desiredScales;
	AudioSource myAudio;
    bool endGame = false;
    float endGameCounter = 5;

    // Use this for initialization
    void Start() {
        stellarObjects = new List<GameObject>();
        results = new List<PlanetResult>();
        desiredScales = new Dictionary<GameObject, float>();

        //add sun
        addBody(Vector3.zero, 3000, Vector3.zero, sunPrefab);

		myAudio = GetComponent<AudioSource>();
	
    }

    // Update is called once per frame
    void Update() {

        for(int i = 0; i < results.Count; i++)
        {
            if(results[i].planet != null)
            {
                PlanetResult result = results[i];
                result.endMass = result.planet.GetComponent<Rigidbody>().mass;
                results[i] = result;
            }
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

        Color color = myColors.GiveColor(addedBodies);

        Renderer rend = temp.GetComponent<Renderer>();
        rend.material.color = color;

        if (prefab != sunPrefab)
        {
            PlanetResult result = new PlanetResult();
            result.endMass = mass;
            result.color = color;
            result.planet = temp;
            results.Add(result);
        }
        stellarObjects.Add(temp);
        addedBodies++;
    }

    public void destroy(GameObject planet)
    { 
        stellarObjects.Remove(planet);
        Destroy(planet);
		myAudio.Play();

        if (stellarObjects.Count == 1)
            resultsScreen.EndGame(results);
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

    public List<PlanetResult> getResults()
    {
        return results;
    }
}

public struct PlanetResult
{
    public GameObject planet;
    public float endMass { get; set; }
    public Color color;
}

struct NewPlanet
{
    public Vector3 location;
    public Vector3 speed;
    public float mass;
    public GameObject prefab;
}