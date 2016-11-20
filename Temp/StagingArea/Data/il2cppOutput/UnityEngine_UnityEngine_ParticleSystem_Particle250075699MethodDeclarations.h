#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem/Particle
struct Particle_t250075699;
struct Particle_t250075699_marshaled_pinvoke;
struct Particle_t250075699_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_Particle250075699.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
extern "C"  Vector3_t2243707580  Particle_get_position_m492152565 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
extern "C"  void Particle_set_position_m3680513126 (Particle_t250075699 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
extern "C"  Vector3_t2243707580  Particle_get_velocity_m3093571223 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
extern "C"  void Particle_set_velocity_m1865982874 (Particle_t250075699 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem/Particle::get_lifetime()
extern "C"  float Particle_get_lifetime_m3244835807 (Particle_t250075699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single)
extern "C"  void Particle_set_lifetime_m995439650 (Particle_t250075699 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m3936512348 (Particle_t250075699 * __this, Color32_t874517518  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Particle_t250075699;
struct Particle_t250075699_marshaled_pinvoke;

extern "C" void Particle_t250075699_marshal_pinvoke(const Particle_t250075699& unmarshaled, Particle_t250075699_marshaled_pinvoke& marshaled);
extern "C" void Particle_t250075699_marshal_pinvoke_back(const Particle_t250075699_marshaled_pinvoke& marshaled, Particle_t250075699& unmarshaled);
extern "C" void Particle_t250075699_marshal_pinvoke_cleanup(Particle_t250075699_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Particle_t250075699;
struct Particle_t250075699_marshaled_com;

extern "C" void Particle_t250075699_marshal_com(const Particle_t250075699& unmarshaled, Particle_t250075699_marshaled_com& marshaled);
extern "C" void Particle_t250075699_marshal_com_back(const Particle_t250075699_marshaled_com& marshaled, Particle_t250075699& unmarshaled);
extern "C" void Particle_t250075699_marshal_com_cleanup(Particle_t250075699_marshaled_com& marshaled);
