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
    bool timeOut;

	// Use this for initialization
	void Start () {
		myAudio=GetComponents<AudioSource>();
        timeOut = false;
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
                GUI.DrawTexture(new Rect(17 + results[i].endMass, 40 + 30 * (i - 1) + 4, 12, 12), cross);
        }
        if(!timeOut)
            GUI.Box(new Rect(Screen.width-150,10,140,30),(gameLength-Time.time).ToString("F2"));
		if (gameLength - Time.time < 0 && !timeOut) {
            stellars.SetGameOver();
            timeOut = true;
		}
	}
}
