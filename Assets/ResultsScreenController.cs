using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Collections;

public class ResultsScreenController : MonoBehaviour {

    bool gameOver = false;
    float endGameCounter = 5;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
        if(gameOver) {

            endGameCounter -= Time.deltaTime;

            if (endGameCounter <= 0)
                SceneManager.LoadScene("title");
        }
	}

    public void EndGame(List<PlanetResult> results)
    {
        gameOver = true;
    }
}
