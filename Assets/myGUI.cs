using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class myGUI : MonoBehaviour {
	
	public StellarObjectController stellars;
	public ParticleSystemController myParticleSystemController;
	int aliveParticles = 3000;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		aliveParticles = myParticleSystemController.aliveParticles;

	}

	void OnGUI() {
		GUI.Box(new Rect(10,10,140,30),"Dust left " + aliveParticles);
		List<GameObject> gravityPoints = stellars.getList();
		for (int i = 0; i < gravityPoints.Count; i++) {
			GUI.Box (new Rect (10, 40 + 30 * i, 140, 30), 
				"Body " + i + " has " + gravityPoints[i].GetComponent<Rigidbody>().mass.ToString("F2"));
		}
	}
}
