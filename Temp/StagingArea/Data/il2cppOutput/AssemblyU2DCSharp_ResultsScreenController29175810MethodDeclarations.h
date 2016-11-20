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

// ResultsScreenController
struct ResultsScreenController_t29175810;
// System.Collections.Generic.List`1<PlanetResult>
struct List_1_t1998434437;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlanetResult2629313305.h"

// System.Void ResultsScreenController::.ctor()
extern "C"  void ResultsScreenController__ctor_m324927145 (ResultsScreenController_t29175810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultsScreenController::Start()
extern "C"  void ResultsScreenController_Start_m2282176393 (ResultsScreenController_t29175810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultsScreenController::Update()
extern "C"  void ResultsScreenController_Update_m3438787108 (ResultsScreenController_t29175810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultsScreenController::OnGUI()
extern "C"  void ResultsScreenController_OnGUI_m2906383959 (ResultsScreenController_t29175810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ResultsScreenController::SortByMass(PlanetResult,PlanetResult)
extern "C"  int32_t ResultsScreenController_SortByMass_m459812790 (ResultsScreenController_t29175810 * __this, PlanetResult_t2629313305  ___a0, PlanetResult_t2629313305  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ResultsScreenController::SortByTime(PlanetResult,PlanetResult)
extern "C"  int32_t ResultsScreenController_SortByTime_m2403303671 (ResultsScreenController_t29175810 * __this, PlanetResult_t2629313305  ___a0, PlanetResult_t2629313305  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResultsScreenController::EndGame(System.Collections.Generic.List`1<PlanetResult>)
extern "C"  void ResultsScreenController_EndGame_m2455903517 (ResultsScreenController_t29175810 * __this, List_1_t1998434437 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
