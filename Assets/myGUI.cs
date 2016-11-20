using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class myGUI : MonoBehaviour {

	public AudioClip victoryAudio;
	bool victoryAudioPlaying = false;
	public AudioSource[] myAudio;

    public Texture2D barTexture;
	public GameColors myColors;
	public StellarObjectController stellars;
	public ParticleSystemController myParticleSystemController;
	public int gameLength;
	int aliveParticles = 3000;

	// Use this for initialization
	void Start () {
		myAudio=GetComponents<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		aliveParticles = myParticleSystemController.aliveParticles;

	}

	void OnGUI() {
		//GUI.Box(new Rect(10,10,140,30),"Dust left " + aliveParticles);
		List<GameObject> gravityPoints = stellars.getList();
        List<PlanetResult> results = stellars.getResults();

        for(int i = 0; i < results.Count; i++)
        {
            GUI.color = results[i].color;
            GUI.DrawTexture(new Rect(10, 40 + 30 * (i - 1), 10 + results[i].endMass, 20), barTexture);
        }
        
		GUI.Box(new Rect(Screen.width-150,10,140,30),"Time " + (gameLength-Time.time).ToString("F2"));
		if (gameLength - Time.time < 0) {
			if (gravityPoints.Count > 1) {
				GUI.Box (new Rect (Screen.width/2 - 200, Screen.height/2-100, 400, 200), "Victory!");
				if(!victoryAudioPlaying){
					victoryAudioPlaying = true;
					myAudio [2].Stop ();
					myAudio [1].Play ();
				}
			}
		}
	}
}
