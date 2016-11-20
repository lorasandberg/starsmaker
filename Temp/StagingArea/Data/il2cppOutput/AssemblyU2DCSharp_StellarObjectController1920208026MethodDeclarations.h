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

// StellarObjectController
struct StellarObjectController_t1920208026;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<PlanetResult>
struct List_1_t1998434437;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void StellarObjectController::.ctor()
extern "C"  void StellarObjectController__ctor_m2169596419 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::Start()
extern "C"  void StellarObjectController_Start_m212317343 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::Update()
extern "C"  void StellarObjectController_Update_m3096736136 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> StellarObjectController::getList()
extern "C"  List_1_t1125654279 * StellarObjectController_getList_m3469071418 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::addBody(UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
extern "C"  void StellarObjectController_addBody_m1165970631 (StellarObjectController_t1920208026 * __this, Vector3_t2243707580  ___loc0, float ___mass1, Vector3_t2243707580  ___speed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::addBody(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.GameObject)
extern "C"  void StellarObjectController_addBody_m537620887 (StellarObjectController_t1920208026 * __this, Vector3_t2243707580  ___loc0, float ___mass1, Vector3_t2243707580  ___speed2, GameObject_t1756533147 * ___prefab3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::destroy(UnityEngine.GameObject)
extern "C"  void StellarObjectController_destroy_m3300876249 (StellarObjectController_t1920208026 * __this, GameObject_t1756533147 * ___planet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::SetGameOver()
extern "C"  void StellarObjectController_SetGameOver_m2038632157 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::IncreaseMass(UnityEngine.GameObject,System.Single)
extern "C"  void StellarObjectController_IncreaseMass_m1541879400 (StellarObjectController_t1920208026 * __this, GameObject_t1756533147 * ___planet0, float ___mass1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StellarObjectController::UpdateMassScale(UnityEngine.GameObject)
extern "C"  void StellarObjectController_UpdateMassScale_m2133232058 (StellarObjectController_t1920208026 * __this, GameObject_t1756533147 * ___planet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PlanetResult> StellarObjectController::getResults()
extern "C"  List_1_t1998434437 * StellarObjectController_getResults_m3238506301 (StellarObjectController_t1920208026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
