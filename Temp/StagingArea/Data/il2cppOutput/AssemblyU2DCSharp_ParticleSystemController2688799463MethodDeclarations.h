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

// ParticleSystemController
struct ParticleSystemController_t2688799463;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void ParticleSystemController::.ctor()
extern "C"  void ParticleSystemController__ctor_m3302546402 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::Start()
extern "C"  void ParticleSystemController_Start_m2596007974 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::LateUpdate()
extern "C"  void ParticleSystemController_LateUpdate_m4223822551 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::OnGUI()
extern "C"  void ParticleSystemController_OnGUI_m2127787430 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> ParticleSystemController::getGravityPoints()
extern "C"  List_1_t1612828711 * ParticleSystemController_getGravityPoints_m771190836 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ParticleSystemController::Rotate(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  ParticleSystemController_Rotate_m742958325 (ParticleSystemController_t2688799463 * __this, Vector2_t2243707579  ___v0, float ___angle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::AddBody(UnityEngine.Vector3)
extern "C"  void ParticleSystemController_AddBody_m2376864682 (ParticleSystemController_t2688799463 * __this, Vector3_t2243707580  ___loc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::PlanetCollision(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ParticleSystemController_PlanetCollision_m472447310 (ParticleSystemController_t2688799463 * __this, GameObject_t1756533147 * ___planet10, GameObject_t1756533147 * ___planet21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleSystemController::BeginGame()
extern "C"  void ParticleSystemController_BeginGame_m841012815 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticleSystemController::GameRunning()
extern "C"  bool ParticleSystemController_GameRunning_m3480308235 (ParticleSystemController_t2688799463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
