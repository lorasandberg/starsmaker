using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class myGUI : MonoBehaviour {

	public AudioClip victoryAudio;
	bool victoryAudioPlaying = false;
	public AudioSource[] myAudio;

    public Texture2D barTexture;
    public Texture2D defeatBarTexture;
    public Texture2D cross;
    public GameColors myColors;
	public StellarObjectController stellars;
	public ParticleSystemController myParticleSystemController;
	public int gameLength;

	// Use this for initialization
	void Start () {
		myAudio=GetComponents<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnGUI() {
		//GUI.Box(new Rect(10,10,140,30),"Dust left " + aliveParticles);
		List<GameObject> gravityPoints = stellars.getList();
        List<PlanetResult> results = stellars.getResults();

        for(int i = 0; i < results.Count; i++)
        {
            float height = (results[i].planet == null) ? 6 : 20;

            GUI.color = results[i].color;
            GUI.DrawTexture(new Rect(10, 40 + 30 * (i - 1) + (20 - height) / 2, 10 + results[i].endMass, height), (results[i].planet != null) ? barTexture : defeatBarTexture);

            GUI.color = new Color(95, 139, 152);
            if(results[i].planet == null)
                GUI.DrawTexture(new Rect(15 + results[i].endMass, 40 + 30 * (i - 1) + 3, 12, 12), cross);
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
