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
        GameObject asd = (GameObject)Object.Instantiate(prefab, Vector3.zero, Quaternion.identity);
        stellarObjects.Add(asd);

        Rigidbody rb = asd.GetComponent<Rigidbody>();
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
