using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

    public Camera camera;
    float distanceFromPlane;
    float maxDistance = 50;
    float minDistance = 5;
    float desiredScrollPosition;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        //Scrolling
        float scroll = Input.GetAxis("Mouse ScrollWheel");

        Vector3 position = camera.transform.position;

        distanceFromPlane -= scroll * 0.2f;
        distanceFromPlane = Mathf.Clamp(distanceFromPlane, 0, 1);

        desiredScrollPosition = (maxDistance - minDistance) * distanceFromPlane + minDistance;

        position.y += (desiredScrollPosition - position.y) * 0.1f;


        // Horizontal movement
        if(Input.GetMouseButton(1)) {

            position.x -= Input.GetAxis("Mouse X");
            position.z -= Input.GetAxis("Mouse Y");

        }
        camera.transform.position = position;
    }
}
