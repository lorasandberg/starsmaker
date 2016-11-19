using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class StellarObjectController : MonoBehaviour {

    public GameObject prefab;
    List<GameObject> stellarObjects;

	// Use this for initialization
	void Start () {
        Debug.Log("Start");
        stellarObjects = new List<GameObject>();

		//add sun
		addBody(Vector3.zero, 100, Vector3.zero);
    }

	// Update is called once per frame
	void Update () {
	
	}

	public List<GameObject> getList(){
		return stellarObjects;
	}

	public void addBody(Vector3 loc, float mass, Vector3 speed){
		GameObject temp = (GameObject)Object.Instantiate (prefab, loc, Quaternion.identity);
		temp.GetComponent<Rigidbody>().mass = mass;
		speed.y = 0;
		temp.GetComponent<Rigidbody>().velocity = speed;
		Debug.Log(speed);

		stellarObjects.Add (temp);
	}
}
