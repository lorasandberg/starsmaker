using UnityEngine;
using System.Collections;

public class UserInterface : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	void OnMouseDown ()
	{
		Debug.Log("hit");
		Debug.Log( Input.mousePosition);
	}
	// Update is called once per frame
	void Update () {
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;

		Debug.Log("hop");
		if (Physics.Raycast(ray, out hit, 1000)){
			Debug.DrawLine(ray.origin, hit.point);
			Debug.Log( hit.point);
		}
	}
}
