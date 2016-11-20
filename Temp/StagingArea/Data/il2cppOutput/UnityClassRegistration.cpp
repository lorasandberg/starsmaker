struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 71 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//20. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//23. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//24. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//25. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//26. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//27. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//28. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//29. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//30. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//31. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//32. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//33. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//34. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//35. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//36. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//37. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//38. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//39. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//40. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//41. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//42. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//43. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//44. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//45. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//46. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//47. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//48. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//49. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//50. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//51. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//52. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//53. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//54. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//55. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//56. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//57. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//58. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//59. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//60. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//61. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//62. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//63. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//64. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//65. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//66. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//67. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//68. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//69. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//70. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
