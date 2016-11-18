using UnityEngine;
using System.Collections;

public class ParticleSystemController : MonoBehaviour {
    public ParticleSystem particleSystem;
    ParticleSystem.Particle[] particles;

    // Use this for initialization
    void Start () {
       
	}
	
	// Update is called once per frame
	void LateUpdate ()
    {
        particles = new ParticleSystem.Particle[particleSystem.maxParticles];
        int aliveParticles = particleSystem.GetParticles(particles);

        for (int i = 0; i < particles.Length; i++)
        {
            Vector3 v = particles[i].position;
            v.z = 0;
            particles[i].position = v;
        }

        particleSystem.SetParticles(particles, aliveParticles);
	}
}
