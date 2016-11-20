using UnityEngine;
using System.Collections;

public class UserInterface : MonoBehaviour {

	public ParticleSystemController psControl;
	bool mousehold = false;
	Rigidbody heldBody = null;
	AudioSource myAudio;

	// Use this for initialization
	void Start () {
		myAudio = GetComponent<AudioSource>();
	}
		
	// Update is called once per frame
	void Update () {

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;

		//nothing happens if we are out of game plane
		if (Physics.Raycast (ray, out hit, 1000)) {

			if (Input.GetMouseButton (0)) {
                // we are not helding an object
                if (!mousehold) {
                    if (hit.rigidbody) {
                        //  existing object
                        Debug.Log("catch");
                        mousehold = true;
                        heldBody = hit.rigidbody;
                    } else {
                        Debug.Log("no object");
						psControl.AddBody (hit.point);
						myAudio.Play ();

                        // create new body
                    }
                } else if (heldBody != null) {
					// we are holding an object and applying velocity change
					Vector3 rubberBand = hit.point - heldBody.position;
					// limit maximum acceleration with minimum mass
					heldBody.velocity += (rubberBand / Mathf.Max (heldBody.mass, 2)) * Time.deltaTime;
					//Debug.Log ("rubber");

				}
			} else {
				// no mouse button 0, release object
				heldBody = null;
				mousehold = false;
			}
		} 

	}
}
