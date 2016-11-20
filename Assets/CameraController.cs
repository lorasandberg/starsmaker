using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

    public Camera camera;
    float distanceFromPlane;
    float maxDistance = 50;
    float minDistance = 5;
    float desiredScrollPosition;
    Vector3 desiredPosition;
    Vector3 initialPosition;

	// Use this for initialization
	void Start () {
        initialPosition = camera.transform.position;
        desiredPosition = initialPosition;
        distanceFromPlane = 0.3f;
	}
	
	// Update is called once per frame
	void Update () {

        //Scrolling
        float scroll = Input.GetAxis("Mouse ScrollWheel");

        Vector3 position = camera.transform.position;

        distanceFromPlane -= scroll * 0.2f;
        distanceFromPlane = Mathf.Clamp(distanceFromPlane, 0, 1);

        desiredPosition.y = (maxDistance - minDistance) * distanceFromPlane + minDistance;



        // Horizontal movement
        if(Input.GetMouseButton(1)) {

            desiredPosition.x -= Input.GetAxis("Mouse X");
            desiredPosition.z -= Input.GetAxis("Mouse Y");

        }

        //Reset camera position with space.
        if(Input.GetButtonDown("Space"))
        {
            desiredPosition = initialPosition;
        }


        //Smoothening
        position.y += (desiredPosition.y - position.y) * 0.1f;
        position.x += (desiredPosition.x - position.x) * 0.1f;
        position.z += (desiredPosition.z - position.z) * 0.1f;
        camera.transform.position = position;
    }
}
