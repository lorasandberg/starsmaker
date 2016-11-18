using UnityEngine;
using System.Collections;

public class CenterController : MonoBehaviour {
    public GameObject center;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        center.transform.Rotate(0, 0.3f, 0);
	}
}
