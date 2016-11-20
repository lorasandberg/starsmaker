using UnityEngine;
using System.Collections;

public class UserInterface : MonoBehaviour {

    public ParticleSystemController psControl;
    bool mousehold = false;
	Rigidbody heldBody = null;
	GameObject heldArrow = null;
	public GameObject arrowPrefab;
	AudioSource myAudio;
    bool planetCreatedWithThisMousePress = false;

	// Use this for initialization
	void Start () {
		myAudio = GetComponent<AudioSource>();
	}
		
	// Update is called once per frame
	void Update () {

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;

        if (!Input.GetMouseButton(0))
            planetCreatedWithThisMousePress = false;

		//nothing happens if we are out of game plane
		if (Physics.Raycast (ray, out hit, 1000)) {

			if (Input.GetMouseButton (0) && !psControl.GameRunning()) {
                // we are not helding an object
                if (!mousehold) {
                    if (hit.rigidbody) {
                        //  existing object
                        mousehold = true;
                        heldBody = hit.rigidbody;
						heldArrow = (GameObject)Object.Instantiate(arrowPrefab, hit.point, Quaternion.identity);

                    } else if(!planetCreatedWithThisMousePress) {
						psControl.AddBody (hit.point);
						myAudio.Play ();
                        planetCreatedWithThisMousePress = true;
                        // create new body
                    }
                }
                else if (heldBody != null) {
					
					// we are holding an object and applying velocity change
					Vector3 rubberBand = hit.point - heldBody.position;

					// limit maximum acceleration with minimum mass
					heldBody.velocity = (rubberBand / 5);
					//Debug.Log ("rubber");
					heldArrow.transform.position = Vector3.Lerp(hit.point, heldBody.position, 0.5f);
					heldArrow.transform.rotation = Quaternion.LookRotation(rubberBand);
					heldArrow.transform.localScale = new Vector3(0.01f,0.01f,rubberBand.magnitude/10f);
				}
			} else {
				// no mouse button 0, release object
				if (heldArrow) {
					Destroy (heldArrow);
				}
				heldBody = null;
				mousehold = false;
			}
		} 

	}
}
