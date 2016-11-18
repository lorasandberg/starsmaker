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

            Vector2 p = new Vector2(particles[i].position.x, particles[i].position.y);

            Vector2 angled = new Vector2(p.x, p.y);
            float distanceFromCenter = p.magnitude;
            angled = Rotate(angled, 10f / p.magnitude * 0.003f);

            Vector2 newP = Vector2.MoveTowards(p, angled, 100);

            particles[i].position = new Vector3(newP.x, newP.y, 0);


        }

        particleSystem.SetParticles(particles, aliveParticles);
	}

    Vector2 Rotate(Vector2 v, float angle)
    {
        Vector2 vector = new Vector2(v.x, v.y);
        float sin = Mathf.Sin(angle);
        float cos = Mathf.Cos(angle);

        float tx = vector.x;
        float tz = vector.y;
        vector.x = (cos * tx) + (sin * tz);
        vector.y = (cos * tz) - (sin * tx);
        
        return vector;
    }
}
