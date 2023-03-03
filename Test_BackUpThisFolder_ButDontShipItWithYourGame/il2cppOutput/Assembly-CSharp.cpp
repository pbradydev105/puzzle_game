#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Pixel[]
struct PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GamePlayHandler
struct GamePlayHandler_t14F797B30337C5635C8326BB0A00977CF1634795;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LoadingHandler
struct LoadingHandler_t6236629AD0097BDA1D557A3560270653E7EA1025;
// LoginManager
struct LoginManager_tACCBB36C3DECDFBCA298AA72420871F60AF08310;
// MainMenuHandler
struct MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModeSelectionHandler
struct ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Pixel
struct Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2;
// PixelGrid
struct PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370;
// PixelState
struct PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// SettingPanelHandler
struct SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
// System.Type
struct Type_t;
// UIHandler
struct UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// test
struct test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A;
IL2CPP_EXTERN_C String_t* _stringLiteral3F178296412650029A46BF49F4A367936D3796A2;
IL2CPP_EXTERN_C String_t* _stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207;
IL2CPP_EXTERN_C String_t* _stringLiteral52BCBB39903E01378BD121B78F682EB480133368;
IL2CPP_EXTERN_C String_t* _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87;
IL2CPP_EXTERN_C String_t* _stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4DE33DA4FFB8A4A87A150FA930A9FEDC2870B7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisPixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2_mA0090AB67731016724BB77837C40D173D9411170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m29DE8BDBFA580F00E9FAE7DDC47937BCFCC30085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B;
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// DG.Tweening.DOTweenAnimationExtensions
struct DOTweenAnimationExtensions_t322F12945BA2ABB5DA1E5C986FC693E30DE1D5C6  : public RuntimeObject
{
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_6;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_7;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_8;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_9;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_10;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_16;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_17;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_18;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_19;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_20;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_21;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_22;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_23;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_24;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_25;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_26;
	// System.Boolean DG.Tweening.Tween::isRelative
	bool ___isRelative_27;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_28;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_29;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_30;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_31;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_32;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_33;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_34;
	// System.Boolean DG.Tweening.Tween::active
	bool ___active_35;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_36;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_37;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_38;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_39;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_40;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_41;
	// System.Boolean DG.Tweening.Tween::playedOnce
	bool ___playedOnce_42;
	// System.Single DG.Tweening.Tween::position
	float ___position_43;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_44;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_45;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_46;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_47;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_48;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_49;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_50;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_51;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_52;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// PixelState
struct PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Color PixelState::fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fontColor_4;
	// UnityEngine.Color PixelState::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_5;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_9;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_10;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_11;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStart_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlay_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onUpdate_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStepComplete_15;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onComplete_16;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTweenCreated_17;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_18;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GamePlayHandler
struct GamePlayHandler_t14F797B30337C5635C8326BB0A00977CF1634795  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LoadingHandler
struct LoadingHandler_t6236629AD0097BDA1D557A3560270653E7EA1025  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LoginManager
struct LoginManager_tACCBB36C3DECDFBCA298AA72420871F60AF08310  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField LoginManager::UserNameFieldInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___UserNameFieldInput_4;
	// UnityEngine.GameObject LoginManager::WarningTxt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WarningTxt_5;
};

// MainMenuHandler
struct MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenuHandler::MidLayerPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MidLayerPanel_5;
	// UnityEngine.GameObject MainMenuHandler::BottomLayerPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BottomLayerPanel_6;
	// UnityEngine.GameObject MainMenuHandler::MenuPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MenuPanel_7;
	// UnityEngine.GameObject MainMenuHandler::SettingPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingPanel_8;
};

// ModeSelectionHandler
struct ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] ModeSelectionHandler::DifficultyBtnImags
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___DifficultyBtnImags_4;
	// UnityEngine.UI.Image[] ModeSelectionHandler::PixelBtnImags
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___PixelBtnImags_5;
	// UnityEngine.Sprite ModeSelectionHandler::RadioSelectedImg
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___RadioSelectedImg_6;
	// UnityEngine.Sprite ModeSelectionHandler::RadioUnSelectedImg
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___RadioUnSelectedImg_7;
};

// Pixel
struct Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PixelState Pixel::<state>k__BackingField
	PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* ___U3CstateU3Ek__BackingField_4;
	// UnityEngine.Vector2Int Pixel::<coordinates>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CcoordinatesU3Ek__BackingField_5;
};

// PixelGrid
struct PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Pixel[] PixelGrid::<pixels>k__BackingField
	PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* ___U3CpixelsU3Ek__BackingField_4;
	// System.Int32 PixelGrid::size
	int32_t ___size_5;
	// System.Int32 PixelGrid::height
	int32_t ___height_6;
	// System.Int32 PixelGrid::width
	int32_t ___width_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SettingPanelHandler
struct SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField SettingPanelHandler::UserNameFieldInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___UserNameFieldInput_4;
	// UnityEngine.GameObject SettingPanelHandler::WarningTxt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WarningTxt_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIHandler
struct UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// test
struct test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] test::Images
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___Images_4;
	// UnityEngine.UI.Image test::source1
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___source1_5;
	// UnityEngine.Texture2D[] test::pieces
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___pieces_6;
	// System.Int32 test::boxSize
	int32_t ___boxSize_7;
	// System.Int32 test::CurrentImgBox
	int32_t ___CurrentImgBox_8;
	// UnityEngine.GameObject[] test::LockImgOfMainImg
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___LockImgOfMainImg_9;
	// UnityEngine.UI.Image test::BigImageDisplay
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___BigImageDisplay_10;
	// UnityEngine.GameObject test::QuestionField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___QuestionField_11;
	// UnityEngine.GameObject[] test::LockImgs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___LockImgs_12;
	// System.Int32 test::currentImageQuestion
	int32_t ___currentImageQuestion_13;
	// System.Int32 test::counter
	int32_t ___counter_14;
};

// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89  : public ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C
{
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_19;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_20;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_21;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___easeCurve_22;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_23;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_24;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_25;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_26;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_27;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_28;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_29;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_30;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_31;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target_32;
	// DG.Tweening.Core.DOTweenAnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_33;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_34;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_35;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_36;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_37;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_38;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValueV3_39;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValueV2_40;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValueColor_41;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_42;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValueRect_43;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endValueTransform_44;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_45;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_46;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_47;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_48;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_49;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_50;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenCreated
	bool ____tweenCreated_51;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_52;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DG.Tweening.Tween>

// DG.Tweening.DOTweenAnimationExtensions

// DG.Tweening.DOTweenAnimationExtensions

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::logPriority
	int32_t ___logPriority_0;
};

// DG.Tweening.Core.Debugger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// DG.Tweening.Tween

// DG.Tweening.Tween

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// DG.Tweening.Tweener

// DG.Tweening.Tweener

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// PixelState

// PixelState

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// DG.Tweening.TweenCallback

// DG.Tweening.TweenCallback

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// DG.Tweening.Core.ABSAnimationComponent

// DG.Tweening.Core.ABSAnimationComponent

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GameManager

// GamePlayHandler

// GamePlayHandler

// LoadingHandler

// LoadingHandler

// LoginManager

// LoginManager

// MainMenuHandler
struct MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_StaticFields
{
	// MainMenuHandler MainMenuHandler::instance
	MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* ___instance_4;
};

// MainMenuHandler

// ModeSelectionHandler

// ModeSelectionHandler

// Pixel

// Pixel

// PixelGrid

// PixelGrid

// PlayerController

// PlayerController

// SettingPanelHandler

// SettingPanelHandler

// UIHandler

// UIHandler

// test

// test

// DG.Tweening.DOTweenAnimation

// DG.Tweening.DOTweenAnimation

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* m_Items[1];

	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pixel[]
struct PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B  : public RuntimeArray
{
	ALIGN_FIELD (8) Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* m_Items[1];

	inline Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33  : public RuntimeArray
{
	ALIGN_FIELD (8) DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* m_Items[1];

	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m581919CB70693A14993B037509BAA8E8EC1EC530_gshared (RuntimeObject* ___0_t, bool ___1_isRelative, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA2AD07BE9F0E803F61F6B09473DFE479A65ADBE1_gshared (RuntimeObject* ___0_t, bool ___1_isRelative, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared (RuntimeObject* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetDelay_TisRuntimeObject_mF70ED89B398DC4E92D4C6835829159161826326B_gshared (RuntimeObject* ___0_t, float ___1_delay, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared (RuntimeObject* ___0_t, int32_t ___1_loops, int32_t ___2_loopType, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m5303908097DB4965532C4DAE045A5ADB75808258_gshared (RuntimeObject* ___0_t, bool ___1_autoKillOnCompletion, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnKill_TisRuntimeObject_m168DA4CCA1333ECE0D8191965AFF93CEB822BA14_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m2B2A06DDF3716F8F63F6AE9B786AB9379CCA57C9_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_mDA26A73227A145837952376DD9573026EB80599F_gshared (RuntimeObject* ___0_t, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_animCurve, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___0_t, int32_t ___1_ease, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetId_TisRuntimeObject_m4B8AB59FFA372675B88C64DFDD914995A0FAB349_gshared (RuntimeObject* ___0_t, RuntimeObject* ___1_id, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m31DAD606349424C0FDDA8FD20A1155DB5DE576D7_gshared (RuntimeObject* ___0_t, bool ___1_isIndependentUpdate, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStart_TisRuntimeObject_m52FC13AB79CA3D572C72BA5BBCE169E95B255CE5_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnPlay_TisRuntimeObject_m3DC6406E5D6E8C865EB9FDFCF625C08A9A0870B7_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m15415E2F0A79910AE2BEE06E8C7B0696B9E6ECE8_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mECE3A33094D444884FDA86525A4C76348E06008A_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared (RuntimeObject* ___0_t, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void test::BuildPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_BuildPieces_m2FF3D885C879A6AFA5AB905677745B527EE4951B (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_blockWidth, int32_t ___3_blockHeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_colors, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void test::AssignThePieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_AssignThePieces_m760B58C0814E88E0BD49EF4EFBEEB6010979FB23 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivot, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void test::BackFromBigImg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_BackFromBigImg_m157135AFBA4A395BBECF31211A917BBEB88277DB (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Void GameManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_overrideSprite_m05036DA9D0E7A173E3A5D2A2156E8E0A50A7983E (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void SettingPanelHandler::CloseSettingBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPanelHandler_CloseSettingBtnClick_m8148E98A046FEB564CBED7BE9EAB0D4195DD5C07 (SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107* __this, const RuntimeMethod* method) ;
// System.Void MainMenuHandler::OnSettingPanelClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_OnSettingPanelClose_m5FBC3529DED172E0969937AFB8AB95C176855F46 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int Pixel::get_coordinates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pixel_get_coordinates_m9A35ADE3B1602963672827EBAE7ADE7B5D80A040_inline (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Pixel>()
inline PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* Component_GetComponentsInChildren_TisPixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2_mA0090AB67731016724BB77837C40D173D9411170 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void PixelGrid::set_pixels(Pixel[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelGrid_set_pixels_mB9822BBD7F7976C3C902618B48832742A20C0DB3_inline (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* ___0_value, const RuntimeMethod* method) ;
// Pixel[] PixelGrid::get_pixels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8_inline (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void Pixel::set_coordinates(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pixel_set_coordinates_mFA8E0B1B03012B99D1D2D89AF065E606F92D440C_inline (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsActive(DG.Tweening.Tween)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_m7CB8E490D86B9E14B6B4B4004F1D199790397743_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_complete, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_m9CAECBFF29991B69FF32089585F88A78CC580B7E (Type_t* ___0_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 DG.Tweening.DOTweenUtils46::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DOTweenUtils46_SwitchToRectTransform_mFC3A317C3A47555C91396ADD6B94B527998D3113 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_from, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOAnchorPos3D_mD3C94958F7972F83394BA948D2C8B647730FE6CF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOMove_mC87BC8CB9F4E50901E6E7C970083FCB10BE97DA7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOMove_mBB1F0330438A14C8380F8559F9BA19C279AE87B6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOMove_mA4F3D349D60820C1D16C10FAE5DE6AB3DC27FDC9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOLocalMove_mE8D7AFEDAD7C66BA5FC0D4120E224AE0D70285AF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORotate_m4D79691940046EC19FAB940BA10F860A88DEC522 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, int32_t ___3_mode, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DORotate_mAD9778B3D728A804C0D1FF4786D124683A82E600 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORotate_m61ED3A616AA5410E25FEB01FC262E1E0CD257852 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, int32_t ___3_mode, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOLocalRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOLocalRotate_m027486E5C7F402BCABC9BA2599BA9BC85D77731A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, int32_t ___3_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOScale_m5D4EEFCF953640BEDFDE4A43162BEB9E533C24DE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOSizeDelta_m56625FA1F626488D107A45F0A1D04C237AFF33B7 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOColor_m93DBCF7427FA75576E02531A8888053735F60AD5 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_m97E7121A6D5733170515C79FA753F6DFA5CEF7BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOColor_mACBA44C55FA1833043B88499BDE9CCDFED6E459E (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOColor_m1A1DB7FCA93E4FFB66E43D1565C62CA3632D4772 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Light,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_m1DC9FC368421A511282E4CA5D3D1F49EB086B33E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOFade_m479E5D5206F105288CF8AE4C0AB6E01028E577B7 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOFade(UnityEngine.Material,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOFade_mD6507EB288274EA459D2997A8EF5E47C7EA72C33 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_mF0F20522E904CF538B5036C6F9F6A98DE0FB98EC (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_mAE86E0EA9887447ED242D3E359B6EFA8ABFF4F25 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOIntensity(UnityEngine.Light,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOIntensity_m2FC067BB3AA544966EED16FE5706605CE1B4DA83 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_mAFACC96E8BEAA59D49D324374D840D2DA8250A7D (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOText_m6F718F5034C1576A75508D3E31E39B71F5A97E94 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_target, String_t* ___1_endValue, float ___2_duration, bool ___3_richTextEnabled, int32_t ___4_scrambleMode, String_t* ___5_scrambleChars, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOPunchAnchorPos_mAFB78DA20738B0D3E353919CE027000FBF010918 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_punch, float ___2_duration, int32_t ___3_vibrato, float ___4_elasticity, bool ___5_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchPosition_mD022015ABB94942EE909F7F8E0F3660D52FA3D9E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_punch, float ___2_duration, int32_t ___3_vibrato, float ___4_elasticity, bool ___5_snapping, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchScale_mD7D825D1761F0264BC1D00027B79330844400B9A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_punch, float ___2_duration, int32_t ___3_vibrato, float ___4_elasticity, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchRotation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchRotation_mDC55C1F23E2C17A4E9D4BF5BB787BB1DE98D7AC4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_punch, float ___2_duration, int32_t ___3_vibrato, float ___4_elasticity, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOShakeAnchorPos_m61407D2F324EB34DB519BF57A618678B30CC8951 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_target, float ___1_duration, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_strength, int32_t ___3_vibrato, float ___4_randomness, bool ___5_snapping, bool ___6_fadeOut, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakePosition_mEF231F12CB359BF88DEA0B5BF1480A270DE9366D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_duration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_strength, int32_t ___3_vibrato, float ___4_randomness, bool ___5_snapping, bool ___6_fadeOut, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeScale(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeScale_m6DF910EF19D54F5136100A2F3175B3DD53D85BBA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_duration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_strength, int32_t ___3_vibrato, float ___4_randomness, bool ___5_fadeOut, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeRotation(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeRotation_m36228095EBEDF630E0B87230083E6947A04DBB5E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, float ___1_duration, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_strength, int32_t ___3_vibrato, float ___4_randomness, bool ___5_fadeOut, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOAspect(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOAspect_m9259E372B05B663CEAF34FD052C7208B122F1B85 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Camera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_m3F4236307CE5FFE06252C267B8C4A869DD6F8A84 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOFieldOfView(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOFieldOfView_m2BDF26AA4FB6FA6D8FF303820B6DEAE4A5825E62 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOOrthoSize(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOOrthoSize_m1264C986FBD05AA4E4EBEA48697ACCA451A18CFA (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPixelRect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPixelRect_mA1A61FA657FFDA09A2BC26FE8F076940FB48DD17 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORect_mB8CE84B918D661843A2C175D715BC10D3F59453D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_target, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<DG.Tweening.Tweener>(T,System.Boolean)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___0_t, bool ___1_isRelative, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool, const RuntimeMethod*))TweenSettingsExtensions_From_TisRuntimeObject_m581919CB70693A14993B037509BAA8E8EC1EC530_gshared)(___0_t, ___1_isRelative, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetRelative<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_isRelative, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA2AD07BE9F0E803F61F6B09473DFE479A65ADBE1_gshared)(___0_t, ___1_isRelative, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, RuntimeObject* ___1_target, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared)(___0_t, ___1_target, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetDelay<DG.Tweening.Tween>(T,System.Single)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, float ___1_delay, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, float, const RuntimeMethod*))TweenSettingsExtensions_SetDelay_TisRuntimeObject_mF70ED89B398DC4E92D4C6835829159161826326B_gshared)(___0_t, ___1_delay, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Tween>(T,System.Int32,DG.Tweening.LoopType)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_loops, int32_t ___2_loopType, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared)(___0_t, ___1_loops, ___2_loopType, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_autoKillOnCompletion, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m5303908097DB4965532C4DAE045A5ADB75808258_gshared)(___0_t, ___1_autoKillOnCompletion, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnKill_TisRuntimeObject_m168DA4CCA1333ECE0D8191965AFF93CEB822BA14_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m2B2A06DDF3716F8F63F6AE9B786AB9379CCA57C9_gshared)(___0_t, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,UnityEngine.AnimationCurve)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___1_animCurve, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_mDA26A73227A145837952376DD9573026EB80599F_gshared)(___0_t, ___1_animCurve, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,DG.Tweening.Ease)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m29DE8BDBFA580F00E9FAE7DDC47937BCFCC30085 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, RuntimeObject* ___1_id, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetId_TisRuntimeObject_m4B8AB59FFA372675B88C64DFDD914995A0FAB349_gshared)(___0_t, ___1_id, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_isIndependentUpdate, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m31DAD606349424C0FDDA8FD20A1155DB5DE576D7_gshared)(___0_t, ___1_isIndependentUpdate, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStart<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStart_TisRuntimeObject_m52FC13AB79CA3D572C72BA5BBCE169E95B255CE5_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnPlay<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnPlay_TisRuntimeObject_m3DC6406E5D6E8C865EB9FDFCF625C08A9A0870B7_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m15415E2F0A79910AE2BEE06E8C7B0696B9E6ECE8_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mECE3A33094D444884FDA86525A4C76348E06008A_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___1_action, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___0_t, ___1_action, method);
}
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared)(___0_t, method);
}
// T DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared)(___0_t, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4 (RuntimeObject* ___0_targetOrId, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B (RuntimeObject* ___0_targetOrId, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF (RuntimeObject* ___0_targetOrId, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Pause_m498BECFBBC8FBD76425B8AE1F38E2ECC9AE296D4 (RuntimeObject* ___0_targetOrId, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::TogglePause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_TogglePause_m8CE7CA00FE30F3C926F34362E2DE67A161536598 (RuntimeObject* ___0_targetOrId, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, bool ___1_includeDelay, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_mC5BA3049922D5EA43F9E7A0B05735A21CADDBB64 (RuntimeObject* ___0_targetOrId, bool ___1_includeDelay, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Complete(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Complete_m12E2987F7D42218DCCE051E2FDB803E75FD8BA91 (RuntimeObject* ___0_targetOrId, bool ___1_withCallbacks, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_mAB4C96CE1F1BCF25E5347AE0FC295D064EA53FB2 (RuntimeObject* ___0_targetOrId, bool ___1_complete, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_mEFD3A1E3CC218D3916032325F2E119C2004D9473 (RuntimeObject* ___0_target, RuntimeObject* ___1_id, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_mC4FB110A49C220C2B5FE768989D133F0F8721FA7 (RuntimeObject* ___0_target, RuntimeObject* ___1_id, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_mC1FF85BCF9DC773A3E4FA3DC12377D1F9E1BADD4 (RuntimeObject* ___0_target, RuntimeObject* ___1_id, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Rewind(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Rewind_m5C4020E9007FAAF719C1BE01CE440EBB39193619 (RuntimeObject* ___0_targetOrId, bool ___1_includeDelay, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_m777E54A0343B1EC43975D4DEBBE7B1958B52A63F (RuntimeObject* ___0_target, RuntimeObject* ___1_id, bool ___2_includeDelay, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::.ctor()
inline void List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8 (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::Add(T)
inline void List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_keys, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.ABSAnimationComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328 (ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Start_mEC610EE12F006B73DD8DBE742E8660D39BFF518F (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// boxSize = source1.sprite.texture.width / 3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___source1_5;
		NullCheck(L_0);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_0, NULL);
		NullCheck(L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		__this->___boxSize_7 = ((int32_t)(L_3/3));
		// BuildPieces();
		test_BuildPieces_m2FF3D885C879A6AFA5AB905677745B527EE4951B(__this, NULL);
		// }
		return;
	}
}
// System.Void test::BuildPieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_BuildPieces_m2FF3D885C879A6AFA5AB905677745B527EE4951B (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_3 = NULL;
	{
		// for( int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_0004:
	{
		// for (int j = 0; j < 3; j++)
		V_1 = 0;
		goto IL_0078;
	}

IL_0008:
	{
		// int index = i * 3 + j;
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), L_1));
		// pieces[index] = new Texture2D(boxSize, boxSize);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_2 = __this->___pieces_6;
		int32_t L_3 = V_2;
		int32_t L_4 = __this->___boxSize_7;
		int32_t L_5 = __this->___boxSize_7;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_6, L_4, L_5, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)L_6);
		// var pixels = source1.sprite.texture.GetPixels(boxSize * i, boxSize * j,
		//     boxSize, boxSize);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___source1_5;
		NullCheck(L_7);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8;
		L_8 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_7, NULL);
		NullCheck(L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_8, NULL);
		int32_t L_10 = __this->___boxSize_7;
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___boxSize_7;
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___boxSize_7;
		int32_t L_15 = __this->___boxSize_7;
		NullCheck(L_9);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16;
		L_16 = Texture2D_GetPixels_m009D80DF4554A3B45EE4007ACA38E33764A080DE(L_9, ((int32_t)il2cpp_codegen_multiply(L_10, L_11)), ((int32_t)il2cpp_codegen_multiply(L_12, L_13)), L_14, L_15, NULL);
		V_3 = L_16;
		// pieces[index].SetPixels(pixels);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_17 = __this->___pieces_6;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = V_3;
		NullCheck(L_20);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_20, L_21, NULL);
		// pieces[index].Apply();
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_22 = __this->___pieces_6;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_25, NULL);
		// for (int j = 0; j < 3; j++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0078:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) < ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		// for( int i = 0; i < 3; i++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0080:
	{
		// for( int i = 0; i < 3; i++)
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// AssignThePieces();
		test_AssignThePieces_m760B58C0814E88E0BD49EF4EFBEEB6010979FB23(__this, NULL);
		// }
		return;
	}
}
// System.Void test::AssignThePieces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_AssignThePieces_m760B58C0814E88E0BD49EF4EFBEEB6010979FB23 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < pieces.Length; i++)
		V_0 = 0;
		goto IL_0062;
	}

IL_0004:
	{
		// Rect rec = new Rect(0, 0, pieces[i].width, pieces[i].height);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_0 = __this->___pieces_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_5 = __this->___pieces_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), (0.0f), (0.0f), ((float)L_4), ((float)L_9), NULL);
		// Vector2 pivot = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.5f), (0.5f), NULL);
		// Images[i].sprite = Sprite.Create(pieces[i], rec, pivot);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___Images_4;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_14 = __this->___pieces_6;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20;
		L_20 = Sprite_Create_m827A9BDEC4566AB71966A40DB48A09BB064D81E7(L_17, L_18, L_19, NULL);
		NullCheck(L_13);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_20, NULL);
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_22 = V_0;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_23 = __this->___pieces_6;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void test::SelectImgToPlayFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_SelectImgToPlayFor_mE6A4C9E8B111C9196348342DFA8D916FFBC8B3FE (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// CurrentImgBox = index;
		int32_t L_0 = ___0_index;
		__this->___CurrentImgBox_8 = L_0;
		// BigImageDisplay.sprite = Images[index].sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___BigImageDisplay_10;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_2 = __this->___Images_4;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_5, NULL);
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_6, NULL);
		// BigImageDisplay.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___BigImageDisplay_10;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// for (int i = 0; i < LockImgs.Length; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0034:
	{
		// LockImgs[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___LockImgs_12;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// for (int i = 0; i < LockImgs.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < LockImgs.Length; i++)
		int32_t L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___LockImgs_12;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void test::BackFromBigImg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_BackFromBigImg_m157135AFBA4A395BBECF31211A917BBEB88277DB (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// BigImageDisplay.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___BigImageDisplay_10;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// QuestionField.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___QuestionField_11;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// counter = 0;
		__this->___counter_14 = 0;
		// }
		return;
	}
}
// System.Void test::GenerateQuestion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_GenerateQuestion_mB2E09036F774FB26C1C96F17FD3FE780B810DB48 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// currentImageQuestion = index;
		int32_t L_0 = ___0_index;
		__this->___currentImageQuestion_13 = L_0;
		// QuestionField.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___QuestionField_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void test::OnCorrectAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_OnCorrectAnswer_m794C01FEC6B3F58F1C6EFC8A231ADFA4F60670B8 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// QuestionField.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___QuestionField_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// LockImgs[currentImageQuestion].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___LockImgs_12;
		int32_t L_2 = __this->___currentImageQuestion_13;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// counter++;
		int32_t L_5 = __this->___counter_14;
		__this->___counter_14 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// if (counter >= 12)
		int32_t L_6 = __this->___counter_14;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)12))))
		{
			goto IL_0050;
		}
	}
	{
		// BackFromBigImg();
		test_BackFromBigImg_m157135AFBA4A395BBECF31211A917BBEB88277DB(__this, NULL);
		// LockImgOfMainImg[CurrentImgBox].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___LockImgOfMainImg_9;
		int32_t L_8 = __this->___CurrentImgBox_8;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void test::OnWrongAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_OnWrongAnswer_m92B1DF3E11E97314DA70F6B446D53CA0F4D543DA (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		// QuestionField.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___QuestionField_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test__ctor_m679060463014204CFBD2EA912506DF1462D5CD32 (test_t6A5BA0843FCCB5B30703C74242A106AB84B5506E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GameManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GamePlayHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayHandler_Start_m66F73B954B02E384664E7F5409E7A151C73C7F04 (GamePlayHandler_t14F797B30337C5635C8326BB0A00977CF1634795* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GamePlayHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayHandler_Update_mA5ED1BBDAF0892EAAE27854BC4272A3272FCEE91 (GamePlayHandler_t14F797B30337C5635C8326BB0A00977CF1634795* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GamePlayHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayHandler__ctor_m7E4700DB7EC391BD42D045BA93218743ECD94D80 (GamePlayHandler_t14F797B30337C5635C8326BB0A00977CF1634795* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoadingHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingHandler_Start_mB00B7BB8B386C08886B0BD392AAE10C1572082DC (LoadingHandler_t6236629AD0097BDA1D557A3560270653E7EA1025* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("ChangeScene", 2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void LoadingHandler::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingHandler_ChangeScene_mF3A2EF3AA9A3487A2545D58BF8B60E88C9DF53F4 (LoadingHandler_t6236629AD0097BDA1D557A3560270653E7EA1025* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.ChangeScene("GamePlay");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700(L_0, _stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, NULL);
		// }
		return;
	}
}
// System.Void LoadingHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingHandler__ctor_m01D9173D57A99796DF8CAA1E0E2ED129DDE44E3D (LoadingHandler_t6236629AD0097BDA1D557A3560270653E7EA1025* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LoginManager::OnSignUpBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginManager_OnSignUpBtnClick_mC8DC2CAC06BFA8B02AC758785FD487692E328A82 (LoginManager_tACCBB36C3DECDFBCA298AA72420871F60AF08310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BCBB39903E01378BD121B78F682EB480133368);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SignUp");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral52BCBB39903E01378BD121B78F682EB480133368, NULL);
		// }
		return;
	}
}
// System.Void LoginManager::OnSignInBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginManager_OnSignInBtnClick_m0512E65B944859C43D1B3EFBD298F95516772727 (LoginManager_tACCBB36C3DECDFBCA298AA72420871F60AF08310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UserNameFieldInput.text == "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___UserNameFieldInput_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// WarningTxt.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___WarningTxt_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// GameManager.instance.ChangeScene("MainMenu");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700(L_4, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void LoginManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginManager__ctor_mC1C2297780135288B1A1A0E51ABFB8322BD7A4E5 (LoginManager_tACCBB36C3DECDFBCA298AA72420871F60AF08310* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenuHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_Awake_mFC38D9D25B50F2C15828B75802F18F2895CB6ADE (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* L_0 = ((MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MainMenuHandler::OpenMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_OpenMenuPanel_mC6DE403A1538C5F5ABE8DBCA452C266D0DAA38C3 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	{
		// MenuPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MenuPanel_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// MidLayerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___MidLayerPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// BottomLayerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BottomLayerPanel_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// SettingPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SettingPanel_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::CloseMenuPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_CloseMenuPanel_mB4C69C044418B5240079A0F4898B57D8F160AF15 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	{
		// MenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MenuPanel_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::OpenSettingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_OpenSettingPanel_m9E83B80EBD4272406B11A55B1521602B98C4FF9D (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	{
		// SettingPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SettingPanel_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// MidLayerPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___MidLayerPanel_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// BottomLayerPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BottomLayerPanel_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// MenuPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___MenuPanel_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::OnSettingPanelClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_OnSettingPanelClose_m5FBC3529DED172E0969937AFB8AB95C176855F46 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	{
		// MidLayerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MidLayerPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// BottomLayerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___BottomLayerPanel_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::OnTilesBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_OnTilesBtnClick_m04558293B39946FE49997C12E2C62FEBD89A849B (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE4DE33DA4FFB8A4A87A150FA930A9FEDC2870B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.ChangeScene("ModeSelection");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700(L_0, _stringLiteralFE4DE33DA4FFB8A4A87A150FA930A9FEDC2870B7, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler__ctor_m572A183806FEEAF2C7DCC83D1AB1466E86344FE7 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ModeSelectionHandler::OnDifficultyBtnClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionHandler_OnDifficultyBtnClick_m9F6704EDA12EF366F730A3A686C489135E472360 (ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < DifficultyBtnImags.Length; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// DifficultyBtnImags[i].overrideSprite = RadioUnSelectedImg;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = __this->___DifficultyBtnImags_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___RadioUnSelectedImg_7;
		NullCheck(L_3);
		Image_set_overrideSprite_m05036DA9D0E7A173E3A5D2A2156E8E0A50A7983E(L_3, L_4, NULL);
		// for (int i = 0; i < DifficultyBtnImags.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < DifficultyBtnImags.Length; i++)
		int32_t L_6 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_7 = __this->___DifficultyBtnImags_4;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// DifficultyBtnImags[index].overrideSprite = RadioSelectedImg;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_8 = __this->___DifficultyBtnImags_4;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = __this->___RadioSelectedImg_6;
		NullCheck(L_11);
		Image_set_overrideSprite_m05036DA9D0E7A173E3A5D2A2156E8E0A50A7983E(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void ModeSelectionHandler::OnPixelBtnClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionHandler_OnPixelBtnClick_m8B86E0760D37D612348D700572BEEA05369E6949 (ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < PixelBtnImags.Length; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// PixelBtnImags[i].overrideSprite = RadioUnSelectedImg;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = __this->___PixelBtnImags_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___RadioUnSelectedImg_7;
		NullCheck(L_3);
		Image_set_overrideSprite_m05036DA9D0E7A173E3A5D2A2156E8E0A50A7983E(L_3, L_4, NULL);
		// for (int i = 0; i < PixelBtnImags.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < PixelBtnImags.Length; i++)
		int32_t L_6 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_7 = __this->___PixelBtnImags_5;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// PixelBtnImags[index].overrideSprite = RadioSelectedImg;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_8 = __this->___PixelBtnImags_5;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = __this->___RadioSelectedImg_6;
		NullCheck(L_11);
		Image_set_overrideSprite_m05036DA9D0E7A173E3A5D2A2156E8E0A50A7983E(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void ModeSelectionHandler::OnContinueBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionHandler_OnContinueBtnClick_mD33FDEF8B5E25DFF4A97C9F6836B913904B54F18 (ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.ChangeScene("Loading");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		GameManager_ChangeScene_mB3D158F79B8C6B2D2524A6F4C48E629C8138D700(L_0, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
		// }
		return;
	}
}
// System.Void ModeSelectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeSelectionHandler__ctor_m08D5CD8875545C0284C91BBD568DB93C02E2BD4D (ModeSelectionHandler_tDC337612361AF62284DBED64ECDAFE2C1D26E0FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SettingPanelHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPanelHandler_OnEnable_mC2023DE39E4667EFC2E7CFB10F81EC0854552572 (SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UserNameFieldInput.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___UserNameFieldInput_4;
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// WarningTxt.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___WarningTxt_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SettingPanelHandler::OnUpdateSettingBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPanelHandler_OnUpdateSettingBtnClick_m46AECE8B66D3CB43881FD0FD23795F9725B3F298 (SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UserNameFieldInput.text == "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___UserNameFieldInput_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// WarningTxt.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___WarningTxt_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// CloseSettingBtnClick();
		SettingPanelHandler_CloseSettingBtnClick_m8148E98A046FEB564CBED7BE9EAB0D4195DD5C07(__this, NULL);
		// }
		return;
	}
}
// System.Void SettingPanelHandler::CloseSettingBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPanelHandler_CloseSettingBtnClick_m8148E98A046FEB564CBED7BE9EAB0D4195DD5C07 (SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// MainMenuHandler.instance.OnSettingPanelClose();
		MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* L_1 = ((MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_StaticFields*)il2cpp_codegen_static_fields_for(MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		MainMenuHandler_OnSettingPanelClose_m5FBC3529DED172E0969937AFB8AB95C176855F46(L_1, NULL);
		// }
		return;
	}
}
// System.Void SettingPanelHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingPanelHandler__ctor_mD3479BF14BD9A9BC0C8927A3E3F9D253F6F2A1F1 (SettingPanelHandler_t44DA162A877FF0E188033045282EC394FD36E107* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_Start_mE8CBF6D736A0AE23F76A555AD6EA940D3A46C7F2 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler_Update_mD4C7A2CA207E1276A54D5E56554804654A9D2A87 (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHandler__ctor_m546C9899F081C7913F3360DA872417C6B96CF1EE (UIHandler_tE29858BAA543F514BB34F80A11CFA76430BA5016* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// PixelState Pixel::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* Pixel_get_state_m9D5749C6709C249928C4094EA4C01E8ECBCC4359 (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) 
{
	{
		// public PixelState state { get; set; }
		PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* L_0 = __this->___U3CstateU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Pixel::set_state(PixelState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel_set_state_mC0B6727BAA8CBA92D80DD276307B85E61CEA9884 (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* ___0_value, const RuntimeMethod* method) 
{
	{
		// public PixelState state { get; set; }
		PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector2Int Pixel::get_coordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pixel_get_coordinates_m9A35ADE3B1602963672827EBAE7ADE7B5D80A040 (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int coordinates { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CcoordinatesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Pixel::set_coordinates(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel_set_coordinates_mFA8E0B1B03012B99D1D2D89AF065E606F92D440C (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int coordinates { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CcoordinatesU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Pixel::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel_OnClick_m6951182FC5C68A1D52E1580E8489A7A82AC32F3C (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F178296412650029A46BF49F4A367936D3796A2);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Debug.Log("x: " + coordinates.x + " y: " + coordinates.y);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		L_0 = Pixel_get_coordinates_m9A35ADE3B1602963672827EBAE7ADE7B5D80A040_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = Pixel_get_coordinates_m9A35ADE3B1602963672827EBAE7ADE7B5D80A040_inline(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65, L_2, _stringLiteral3F178296412650029A46BF49F4A367936D3796A2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void Pixel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pixel__ctor_m865D108A2E49E736A5446E801A2D84DB7B2BF04F (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Pixel[] PixelGrid::get_pixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8 (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) 
{
	{
		// public Pixel[] pixels { get; private set; }
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_0 = __this->___U3CpixelsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void PixelGrid::set_pixels(Pixel[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelGrid_set_pixels_mB9822BBD7F7976C3C902618B48832742A20C0DB3 (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pixel[] pixels { get; private set; }
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_0 = ___0_value;
		__this->___U3CpixelsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpixelsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void PixelGrid::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelGrid_Awake_m0C353C8A6941F9FA4404F0A71F42CA76FD760B5A (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisPixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2_mA0090AB67731016724BB77837C40D173D9411170_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pixels = GetComponentsInChildren<Pixel>();
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_0;
		L_0 = Component_GetComponentsInChildren_TisPixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2_mA0090AB67731016724BB77837C40D173D9411170(__this, Component_GetComponentsInChildren_TisPixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2_mA0090AB67731016724BB77837C40D173D9411170_RuntimeMethod_var);
		PixelGrid_set_pixels_mB9822BBD7F7976C3C902618B48832742A20C0DB3_inline(__this, L_0, NULL);
		// size = pixels.Length;
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_1;
		L_1 = PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8_inline(__this, NULL);
		NullCheck(L_1);
		__this->___size_5 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// height = 12;
		__this->___height_6 = ((int32_t)12);
		// width = Mathf.FloorToInt(size / height);
		int32_t L_2 = __this->___size_5;
		int32_t L_3 = __this->___height_6;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_2/L_3))), NULL);
		__this->___width_7 = L_4;
		// }
		return;
	}
}
// System.Void PixelGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelGrid_Start_mC3BA35D27F93844DA49804A7701B36B90A54C0E4 (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int index = 0; index < pixels.Length; index++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// var x = index % width;
		int32_t L_0 = V_0;
		int32_t L_1 = __this->___width_7;
		V_1 = ((int32_t)(L_0%L_1));
		// var y = index / height;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___height_6;
		V_2 = ((int32_t)(L_2/L_3));
		// pixels[index].coordinates = new Vector2Int(x, y);
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_4;
		L_4 = PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8_inline(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Pixel_set_coordinates_mFA8E0B1B03012B99D1D2D89AF065E606F92D440C_inline(L_7, L_10, NULL);
		// for (int index = 0; index < pixels.Length; index++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// for (int index = 0; index < pixels.Length; index++)
		int32_t L_12 = V_0;
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_13;
		L_13 = PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8_inline(__this, NULL);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PixelGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelGrid__ctor_m8EC82A8AAF03E2BDD1286E35F38D4AD3BCC305F1 (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PixelState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelState__ctor_mF8167AB9EED3BC965C95A03CFF17D98CBE3217C9 (PixelState_t23FE4EB3C5D0B94578B0A9955108A771B8E71429* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Awake_m8531F674633C180916C447ACF6C986EC18AF7B3B (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (!isActive || !isValid) return;
		bool L_0 = __this->___isActive_30;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___isValid_31;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!isActive || !isValid) return;
		return;
	}

IL_0011:
	{
		// if (animationType != DOTweenAnimationType.Move || !useTargetAsV3) {
		int32_t L_2 = __this->___animationType_33;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___useTargetAsV3_37;
		if (L_3)
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_51 = (bool)1;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Start_m908C8FD2C7336E4F04E22B4C7A821F22F621C905 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (_tweenCreated) return;
		bool L_0 = __this->____tweenCreated_51;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_tweenCreated) return;
		return;
	}

IL_0009:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_51 = (bool)1;
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_OnDestroy_mCE1919BF0059EA93C96345E2D2F7C0BE0F61B9AC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_2;
		L_2 = TweenExtensions_IsActive_m7CB8E490D86B9E14B6B4B4004F1D199790397743_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466(L_3, (bool)0, NULL);
	}

IL_0021:
	{
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m29DE8BDBFA580F00E9FAE7DDC47937BCFCC30085_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B33_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B33_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B32_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B34_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B34_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B37_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B37_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B36_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B36_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B38_0;
	memset((&G_B38_0), 0, sizeof(G_B38_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B38_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B38_2 = NULL;
	{
		// if (target == null) {
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->___target_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target is NULL, because the animation was created with a DOTween Pro version older than 0.9.255. To fix this, exit Play mode then simply select this object, and it will update automatically", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_4, L_5, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_6 = __this->___forcedTargetType_35;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_7 = __this->___forcedTargetType_35;
		__this->___targetType_34 = L_7;
	}

IL_0043:
	{
		// if (targetType == TargetType.Unset) {
		int32_t L_8 = __this->___targetType_34;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// targetType = TypeToDOTargetType(target.GetType());
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_9 = __this->___target_32;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		int32_t L_11;
		L_11 = DOTweenAnimation_TypeToDOTargetType_m9CAECBFF29991B69FF32089585F88A78CC580B7E(L_10, NULL);
		__this->___targetType_34 = L_11;
	}

IL_0061:
	{
		// switch (animationType) {
		int32_t L_12 = __this->___animationType_33;
		V_0 = L_12;
		int32_t L_13 = V_0;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0957;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_02ae;
			}
			case 3:
			{
				goto IL_02d6;
			}
			case 4:
			{
				goto IL_037b;
			}
			case 5:
			{
				goto IL_03a3;
			}
			case 6:
			{
				goto IL_0430;
			}
			case 7:
			{
				goto IL_0533;
			}
			case 8:
			{
				goto IL_0661;
			}
			case 9:
			{
				goto IL_06a7;
			}
			case 10:
			{
				goto IL_0761;
			}
			case 11:
			{
				goto IL_0733;
			}
			case 12:
			{
				goto IL_078f;
			}
			case 13:
			{
				goto IL_084c;
			}
			case 14:
			{
				goto IL_081d;
			}
			case 15:
			{
				goto IL_087b;
			}
			case 16:
			{
				goto IL_08a2;
			}
			case 17:
			{
				goto IL_08c9;
			}
			case 18:
			{
				goto IL_08ed;
			}
			case 19:
			{
				goto IL_0911;
			}
			case 20:
			{
				goto IL_0935;
			}
			case 21:
			{
				goto IL_03ed;
			}
		}
	}
	{
		goto IL_0957;
	}

IL_00cb:
	{
		// if (useTargetAsV3) {
		bool L_14 = __this->___useTargetAsV3_37;
		if (!L_14)
		{
			goto IL_01c5;
		}
	}
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// if (endValueTransform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___endValueTransform_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_011b;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target is NULL, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB, L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_19, L_20, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___endValueV3_39 = L_21;
		goto IL_01c5;
	}

IL_011b:
	{
		// if (targetType == TargetType.RectTransform) {
		int32_t L_22 = __this->___targetType_34;
		if ((!(((uint32_t)L_22) == ((uint32_t)5))))
		{
			goto IL_01b4;
		}
	}
	{
		// RectTransform endValueT = endValueTransform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___endValueTransform_44;
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_23, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (endValueT == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target should be a RectTransform, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75, L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_28, L_29, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___endValueV3_39 = L_30;
		goto IL_01c5;
	}

IL_0169:
	{
		// RectTransform rTarget = target as RectTransform;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_31 = __this->___target_32;
		V_2 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_31, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (rTarget == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a0;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target and TO target are not of the same type. Please reassign the values", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F, L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_36, L_37, NULL);
		goto IL_01c5;
	}

IL_01a0:
	{
		// endValueV3 = DOTweenUtils46.SwitchToRectTransform(endValueT, rTarget);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = DOTweenUtils46_SwitchToRectTransform_mFC3A317C3A47555C91396ADD6B94B527998D3113(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_40, NULL);
		__this->___endValueV3_39 = L_41;
		goto IL_01c5;
	}

IL_01b4:
	{
		// } else endValueV3 = endValueTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___endValueTransform_44;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		__this->___endValueV3_39 = L_43;
	}

IL_01c5:
	{
		// switch (targetType) {
		int32_t L_44 = __this->___targetType_34;
		V_3 = L_44;
		int32_t L_45 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 5)))
		{
			case 0:
			{
				goto IL_01f5;
			}
			case 1:
			{
				goto IL_0957;
			}
			case 2:
			{
				goto IL_0957;
			}
			case 3:
			{
				goto IL_0281;
			}
			case 4:
			{
				goto IL_024f;
			}
			case 5:
			{
				goto IL_0957;
			}
			case 6:
			{
				goto IL_0222;
			}
		}
	}
	{
		goto IL_0957;
	}

IL_01f5:
	{
		// tween = ((RectTransform)target).DOAnchorPos3D(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_46 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___endValueV3_39;
		float L_48 = __this->___duration_20;
		bool L_49 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_50;
		L_50 = ShortcutExtensions46_DOAnchorPos3D_mD3C94958F7972F83394BA948D2C8B647730FE6CF(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_46, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_47, L_48, L_49, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_50);
		// break;
		goto IL_0957;
	}

IL_0222:
	{
		// tween = ((Transform)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_51 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = __this->___endValueV3_39;
		float L_53 = __this->___duration_20;
		bool L_54 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_55;
		L_55 = ShortcutExtensions_DOMove_mC87BC8CB9F4E50901E6E7C970083FCB10BE97DA7(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_51, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_52, L_53, L_54, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_55);
		// break;
		goto IL_0957;
	}

IL_024f:
	{
		// tween = ((Rigidbody2D)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_56 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_57, NULL);
		float L_59 = __this->___duration_20;
		bool L_60 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_61;
		L_61 = ShortcutExtensions43_DOMove_mBB1F0330438A14C8380F8559F9BA19C279AE87B6(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_56, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_58, L_59, L_60, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_61);
		// break;
		goto IL_0957;
	}

IL_0281:
	{
		// tween = ((Rigidbody)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_62 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___endValueV3_39;
		float L_64 = __this->___duration_20;
		bool L_65 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_66;
		L_66 = ShortcutExtensions_DOMove_mA4F3D349D60820C1D16C10FAE5DE6AB3DC27FDC9(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_62, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_63, L_64, L_65, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_66);
		// break;
		goto IL_0957;
	}

IL_02ae:
	{
		// tween = transform.DOLocalMove(endValueV3, duration, optionalBool0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___endValueV3_39;
		float L_69 = __this->___duration_20;
		bool L_70 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_71;
		L_71 = ShortcutExtensions_DOLocalMove_mE8D7AFEDAD7C66BA5FC0D4120E224AE0D70285AF(L_67, L_68, L_69, L_70, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_71);
		// break;
		goto IL_0957;
	}

IL_02d6:
	{
		// switch (targetType) {
		int32_t L_72 = __this->___targetType_34;
		V_3 = L_72;
		int32_t L_73 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_73, 8)))
		{
			case 0:
			{
				goto IL_034e;
			}
			case 1:
			{
				goto IL_0327;
			}
			case 2:
			{
				goto IL_0957;
			}
			case 3:
			{
				goto IL_02fa;
			}
		}
	}
	{
		goto IL_0957;
	}

IL_02fa:
	{
		// tween = ((Transform)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_74 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = __this->___endValueV3_39;
		float L_76 = __this->___duration_20;
		int32_t L_77 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_78;
		L_78 = ShortcutExtensions_DORotate_m4D79691940046EC19FAB940BA10F860A88DEC522(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_74, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_75, L_76, L_77, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_78);
		// break;
		goto IL_0957;
	}

IL_0327:
	{
		// tween = ((Rigidbody2D)target).DORotate(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_79 = __this->___target_32;
		float L_80 = __this->___endValueFloat_38;
		float L_81 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_82;
		L_82 = ShortcutExtensions43_DORotate_mAD9778B3D728A804C0D1FF4786D124683A82E600(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_79, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_80, L_81, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_82);
		// break;
		goto IL_0957;
	}

IL_034e:
	{
		// tween = ((Rigidbody)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_83 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = __this->___endValueV3_39;
		float L_85 = __this->___duration_20;
		int32_t L_86 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_87;
		L_87 = ShortcutExtensions_DORotate_m61ED3A616AA5410E25FEB01FC262E1E0CD257852(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_83, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_84, L_85, L_86, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_87);
		// break;
		goto IL_0957;
	}

IL_037b:
	{
		// tween = transform.DOLocalRotate(endValueV3, duration, optionalRotationMode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = __this->___endValueV3_39;
		float L_90 = __this->___duration_20;
		int32_t L_91 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_92;
		L_92 = ShortcutExtensions_DOLocalRotate_m027486E5C7F402BCABC9BA2599BA9BC85D77731A(L_88, L_89, L_90, L_91, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_92);
		// break;
		goto IL_0957;
	}

IL_03a3:
	{
		// switch (targetType) {
		int32_t L_93 = __this->___targetType_34;
		// tween = transform.DOScale(optionalBool0 ? new Vector3(endValueFloat, endValueFloat, endValueFloat) : endValueV3, duration);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_95 = __this->___optionalBool0_45;
		G_B32_0 = L_94;
		G_B32_1 = __this;
		if (L_95)
		{
			G_B33_0 = L_94;
			G_B33_1 = __this;
			goto IL_03c1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = __this->___endValueV3_39;
		G_B34_0 = L_96;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_03d8;
	}

IL_03c1:
	{
		float L_97 = __this->___endValueFloat_38;
		float L_98 = __this->___endValueFloat_38;
		float L_99 = __this->___endValueFloat_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), L_97, L_98, L_99, /*hidden argument*/NULL);
		G_B34_0 = L_100;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_03d8:
	{
		float L_101 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_102;
		L_102 = ShortcutExtensions_DOScale_m5D4EEFCF953640BEDFDE4A43162BEB9E533C24DE(G_B34_1, G_B34_0, L_101, NULL);
		NullCheck(G_B34_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B34_2)->___tween_18 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B34_2)->___tween_18), (void*)L_102);
		// break;
		goto IL_0957;
	}

IL_03ed:
	{
		// tween = ((RectTransform)target).DOSizeDelta(optionalBool0 ? new Vector2(endValueFloat, endValueFloat) : endValueV2, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_103 = __this->___target_32;
		bool L_104 = __this->___optionalBool0_45;
		G_B36_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_103, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		G_B36_1 = __this;
		if (L_104)
		{
			G_B37_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_103, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
			G_B37_1 = __this;
			goto IL_0409;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = __this->___endValueV2_40;
		G_B38_0 = L_105;
		G_B38_1 = G_B36_0;
		G_B38_2 = G_B36_1;
		goto IL_041a;
	}

IL_0409:
	{
		float L_106 = __this->___endValueFloat_38;
		float L_107 = __this->___endValueFloat_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_108), L_106, L_107, /*hidden argument*/NULL);
		G_B38_0 = L_108;
		G_B38_1 = G_B37_0;
		G_B38_2 = G_B37_1;
	}

IL_041a:
	{
		float L_109 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_110;
		L_110 = ShortcutExtensions46_DOSizeDelta_m56625FA1F626488D107A45F0A1D04C237AFF33B7(G_B38_1, G_B38_0, L_109, (bool)0, NULL);
		NullCheck(G_B38_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_18 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_18), (void*)L_110);
		// break;
		goto IL_0957;
	}

IL_0430:
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// switch (targetType) {
		int32_t L_111 = __this->___targetType_34;
		V_3 = L_111;
		int32_t L_112 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_112, 3)))
		{
			case 0:
			{
				goto IL_04be;
			}
			case 1:
			{
				goto IL_050c;
			}
			case 2:
			{
				goto IL_0957;
			}
			case 3:
			{
				goto IL_0492;
			}
			case 4:
			{
				goto IL_046b;
			}
			case 5:
			{
				goto IL_0957;
			}
			case 6:
			{
				goto IL_0957;
			}
			case 7:
			{
				goto IL_04e5;
			}
		}
	}
	{
		goto IL_0957;
	}

IL_046b:
	{
		// tween = ((SpriteRenderer)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_113 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_114 = __this->___endValueColor_41;
		float L_115 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_116;
		L_116 = ShortcutExtensions43_DOColor_m93DBCF7427FA75576E02531A8888053735F60AD5(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_113, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_114, L_115, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_116);
		// break;
		goto IL_0957;
	}

IL_0492:
	{
		// tween = ((Renderer)target).material.DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_117 = __this->___target_32;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_117, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118;
		L_118 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_117, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_119 = __this->___endValueColor_41;
		float L_120 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_121;
		L_121 = ShortcutExtensions_DOColor_m97E7121A6D5733170515C79FA753F6DFA5CEF7BF(L_118, L_119, L_120, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_121);
		// break;
		goto IL_0957;
	}

IL_04be:
	{
		// tween = ((Image)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_122 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123 = __this->___endValueColor_41;
		float L_124 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_125;
		L_125 = ShortcutExtensions46_DOColor_mACBA44C55FA1833043B88499BDE9CCDFED6E459E(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_122, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), L_123, L_124, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_125);
		// break;
		goto IL_0957;
	}

IL_04e5:
	{
		// tween = ((Text)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_126 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_127 = __this->___endValueColor_41;
		float L_128 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_129;
		L_129 = ShortcutExtensions46_DOColor_m1A1DB7FCA93E4FFB66E43D1565C62CA3632D4772(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_126, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_127, L_128, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_129);
		// break;
		goto IL_0957;
	}

IL_050c:
	{
		// tween = ((Light)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_130 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_131 = __this->___endValueColor_41;
		float L_132 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_133;
		L_133 = ShortcutExtensions_DOColor_m1DC9FC368421A511282E4CA5D3D1F49EB086B33E(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_130, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_131, L_132, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_133);
		// break;
		goto IL_0957;
	}

IL_0533:
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// switch (targetType) {
		int32_t L_134 = __this->___targetType_34;
		V_3 = L_134;
		int32_t L_135 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_135, 2)))
		{
			case 0:
			{
				goto IL_063a;
			}
			case 1:
			{
				goto IL_05c5;
			}
			case 2:
			{
				goto IL_0613;
			}
			case 3:
			{
				goto IL_0957;
			}
			case 4:
			{
				goto IL_0599;
			}
			case 5:
			{
				goto IL_0572;
			}
			case 6:
			{
				goto IL_0957;
			}
			case 7:
			{
				goto IL_0957;
			}
			case 8:
			{
				goto IL_05ec;
			}
		}
	}
	{
		goto IL_0957;
	}

IL_0572:
	{
		// tween = ((SpriteRenderer)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_136 = __this->___target_32;
		float L_137 = __this->___endValueFloat_38;
		float L_138 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_139;
		L_139 = ShortcutExtensions43_DOFade_m479E5D5206F105288CF8AE4C0AB6E01028E577B7(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_136, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_137, L_138, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_139);
		// break;
		goto IL_0957;
	}

IL_0599:
	{
		// tween = ((Renderer)target).material.DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_140 = __this->___target_32;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_140, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141;
		L_141 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_140, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		float L_142 = __this->___endValueFloat_38;
		float L_143 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_144;
		L_144 = ShortcutExtensions_DOFade_mD6507EB288274EA459D2997A8EF5E47C7EA72C33(L_141, L_142, L_143, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_144);
		// break;
		goto IL_0957;
	}

IL_05c5:
	{
		// tween = ((Image)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_145 = __this->___target_32;
		float L_146 = __this->___endValueFloat_38;
		float L_147 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_148;
		L_148 = ShortcutExtensions46_DOFade_mF0F20522E904CF538B5036C6F9F6A98DE0FB98EC(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_145, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), L_146, L_147, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_148);
		// break;
		goto IL_0957;
	}

IL_05ec:
	{
		// tween = ((Text)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_149 = __this->___target_32;
		float L_150 = __this->___endValueFloat_38;
		float L_151 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_152;
		L_152 = ShortcutExtensions46_DOFade_mAE86E0EA9887447ED242D3E359B6EFA8ABFF4F25(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_149, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_150, L_151, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_152);
		// break;
		goto IL_0957;
	}

IL_0613:
	{
		// tween = ((Light)target).DOIntensity(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_153 = __this->___target_32;
		float L_154 = __this->___endValueFloat_38;
		float L_155 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_156;
		L_156 = ShortcutExtensions_DOIntensity_m2FC067BB3AA544966EED16FE5706605CE1B4DA83(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_153, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_154, L_155, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_156;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_156);
		// break;
		goto IL_0957;
	}

IL_063a:
	{
		// tween = ((CanvasGroup)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_157 = __this->___target_32;
		float L_158 = __this->___endValueFloat_38;
		float L_159 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_160;
		L_160 = ShortcutExtensions46_DOFade_mAFACC96E8BEAA59D49D324374D840D2DA8250A7D(((CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)CastclassSealed((RuntimeObject*)L_157, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var)), L_158, L_159, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_160);
		// break;
		goto IL_0957;
	}

IL_0661:
	{
		// switch (targetType) {
		int32_t L_161 = __this->___targetType_34;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0957;
		}
	}
	{
		// tween = ((Text)target).DOText(endValueString, duration, optionalBool0, optionalScrambleMode, optionalString);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_162 = __this->___target_32;
		String_t* L_163 = __this->___endValueString_42;
		float L_164 = __this->___duration_20;
		bool L_165 = __this->___optionalBool0_45;
		int32_t L_166 = __this->___optionalScrambleMode_49;
		String_t* L_167 = __this->___optionalString_50;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_168;
		L_168 = ShortcutExtensions46_DOText_m6F718F5034C1576A75508D3E31E39B71F5A97E94(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_162, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_163, L_164, L_165, L_166, L_167, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_168);
		// break;
		goto IL_0957;
	}

IL_06a7:
	{
		// switch (targetType) {
		int32_t L_169 = __this->___targetType_34;
		V_3 = L_169;
		int32_t L_170 = V_3;
		if ((((int32_t)L_170) == ((int32_t)5)))
		{
			goto IL_06bc;
		}
	}
	{
		int32_t L_171 = V_3;
		if ((((int32_t)L_171) == ((int32_t)((int32_t)11))))
		{
			goto IL_06fa;
		}
	}
	{
		goto IL_0957;
	}

IL_06bc:
	{
		// tween = ((RectTransform)target).DOPunchAnchorPos(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_172 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174;
		L_174 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_173, NULL);
		float L_175 = __this->___duration_20;
		int32_t L_176 = __this->___optionalInt0_47;
		float L_177 = __this->___optionalFloat0_46;
		bool L_178 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_179;
		L_179 = ShortcutExtensions46_DOPunchAnchorPos_mAFB78DA20738B0D3E353919CE027000FBF010918(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_172, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_174, L_175, L_176, L_177, L_178, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_179;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_179);
		// break;
		goto IL_0957;
	}

IL_06fa:
	{
		// tween = ((Transform)target).DOPunchPosition(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_180 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181 = __this->___endValueV3_39;
		float L_182 = __this->___duration_20;
		int32_t L_183 = __this->___optionalInt0_47;
		float L_184 = __this->___optionalFloat0_46;
		bool L_185 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_186;
		L_186 = ShortcutExtensions_DOPunchPosition_mD022015ABB94942EE909F7F8E0F3660D52FA3D9E(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_180, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_181, L_182, L_183, L_184, L_185, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_186);
		// break;
		goto IL_0957;
	}

IL_0733:
	{
		// tween = transform.DOPunchScale(endValueV3, duration, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
		L_187 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = __this->___endValueV3_39;
		float L_189 = __this->___duration_20;
		int32_t L_190 = __this->___optionalInt0_47;
		float L_191 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_192;
		L_192 = ShortcutExtensions_DOPunchScale_mD7D825D1761F0264BC1D00027B79330844400B9A(L_187, L_188, L_189, L_190, L_191, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_192;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_192);
		// break;
		goto IL_0957;
	}

IL_0761:
	{
		// tween = transform.DOPunchRotation(endValueV3, duration, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_193;
		L_193 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = __this->___endValueV3_39;
		float L_195 = __this->___duration_20;
		int32_t L_196 = __this->___optionalInt0_47;
		float L_197 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_198;
		L_198 = ShortcutExtensions_DOPunchRotation_mDC55C1F23E2C17A4E9D4BF5BB787BB1DE98D7AC4(L_193, L_194, L_195, L_196, L_197, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_198;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_198);
		// break;
		goto IL_0957;
	}

IL_078f:
	{
		// switch (targetType) {
		int32_t L_199 = __this->___targetType_34;
		V_3 = L_199;
		int32_t L_200 = V_3;
		if ((((int32_t)L_200) == ((int32_t)5)))
		{
			goto IL_07a4;
		}
	}
	{
		int32_t L_201 = V_3;
		if ((((int32_t)L_201) == ((int32_t)((int32_t)11))))
		{
			goto IL_07e3;
		}
	}
	{
		goto IL_0957;
	}

IL_07a4:
	{
		// tween = ((RectTransform)target).DOShakeAnchorPos(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_202 = __this->___target_32;
		float L_203 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_205;
		L_205 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_204, NULL);
		int32_t L_206 = __this->___optionalInt0_47;
		float L_207 = __this->___optionalFloat0_46;
		bool L_208 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_209;
		L_209 = ShortcutExtensions46_DOShakeAnchorPos_m61407D2F324EB34DB519BF57A618678B30CC8951(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_202, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_203, L_205, L_206, L_207, L_208, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_209;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_209);
		// break;
		goto IL_0957;
	}

IL_07e3:
	{
		// tween = ((Transform)target).DOShakePosition(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_210 = __this->___target_32;
		float L_211 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212 = __this->___endValueV3_39;
		int32_t L_213 = __this->___optionalInt0_47;
		float L_214 = __this->___optionalFloat0_46;
		bool L_215 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_216;
		L_216 = ShortcutExtensions_DOShakePosition_mEF231F12CB359BF88DEA0B5BF1480A270DE9366D(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_210, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_211, L_212, L_213, L_214, L_215, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_216;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_216);
		// break;
		goto IL_0957;
	}

IL_081d:
	{
		// tween = transform.DOShakeScale(duration, endValueV3, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_217;
		L_217 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_218 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = __this->___endValueV3_39;
		int32_t L_220 = __this->___optionalInt0_47;
		float L_221 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_222;
		L_222 = ShortcutExtensions_DOShakeScale_m6DF910EF19D54F5136100A2F3175B3DD53D85BBA(L_217, L_218, L_219, L_220, L_221, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_222;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_222);
		// break;
		goto IL_0957;
	}

IL_084c:
	{
		// tween = transform.DOShakeRotation(duration, endValueV3, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_223;
		L_223 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_224 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225 = __this->___endValueV3_39;
		int32_t L_226 = __this->___optionalInt0_47;
		float L_227 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_228;
		L_228 = ShortcutExtensions_DOShakeRotation_m36228095EBEDF630E0B87230083E6947A04DBB5E(L_223, L_224, L_225, L_226, L_227, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_228;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_228);
		// break;
		goto IL_0957;
	}

IL_087b:
	{
		// tween = ((Camera)target).DOAspect(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_229 = __this->___target_32;
		float L_230 = __this->___endValueFloat_38;
		float L_231 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_232;
		L_232 = ShortcutExtensions_DOAspect_m9259E372B05B663CEAF34FD052C7208B122F1B85(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_229, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_230, L_231, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_232);
		// break;
		goto IL_0957;
	}

IL_08a2:
	{
		// tween = ((Camera)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_233 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_234 = __this->___endValueColor_41;
		float L_235 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_236;
		L_236 = ShortcutExtensions_DOColor_m3F4236307CE5FFE06252C267B8C4A869DD6F8A84(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_233, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_234, L_235, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_236;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_236);
		// break;
		goto IL_0957;
	}

IL_08c9:
	{
		// tween = ((Camera)target).DOFieldOfView(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_237 = __this->___target_32;
		float L_238 = __this->___endValueFloat_38;
		float L_239 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_240;
		L_240 = ShortcutExtensions_DOFieldOfView_m2BDF26AA4FB6FA6D8FF303820B6DEAE4A5825E62(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_237, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_238, L_239, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_240;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_240);
		// break;
		goto IL_0957;
	}

IL_08ed:
	{
		// tween = ((Camera)target).DOOrthoSize(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_241 = __this->___target_32;
		float L_242 = __this->___endValueFloat_38;
		float L_243 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_244;
		L_244 = ShortcutExtensions_DOOrthoSize_m1264C986FBD05AA4E4EBEA48697ACCA451A18CFA(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_241, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_242, L_243, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_244);
		// break;
		goto IL_0957;
	}

IL_0911:
	{
		// tween = ((Camera)target).DOPixelRect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_245 = __this->___target_32;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_246 = __this->___endValueRect_43;
		float L_247 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_248;
		L_248 = ShortcutExtensions_DOPixelRect_mA1A61FA657FFDA09A2BC26FE8F076940FB48DD17(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_245, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_246, L_247, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_248);
		// break;
		goto IL_0957;
	}

IL_0935:
	{
		// tween = ((Camera)target).DORect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_249 = __this->___target_32;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_250 = __this->___endValueRect_43;
		float L_251 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_252;
		L_252 = ShortcutExtensions_DORect_mB8CE84B918D661843A2C175D715BC10D3F59453D(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_249, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_250, L_251, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_252);
	}

IL_0957:
	{
		// if (tween == null) return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_253 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (L_253)
		{
			goto IL_0960;
		}
	}
	{
		// if (tween == null) return;
		return;
	}

IL_0960:
	{
		// if (isFrom) {
		bool L_254 = __this->___isFrom_27;
		if (!L_254)
		{
			goto IL_0981;
		}
	}
	{
		// ((Tweener)tween).From(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_255 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_256 = __this->___isRelative_26;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_257;
		L_257 = TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_255, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_256, TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var);
		goto IL_0993;
	}

IL_0981:
	{
		// tween.SetRelative(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_258 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_259 = __this->___isRelative_26;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_260;
		L_260 = TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917(L_258, L_259, TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var);
	}

IL_0993:
	{
		// tween.SetTarget(this.gameObject).SetDelay(delay).SetLoops(loops, loopType).SetAutoKill(autoKill)
		//     .OnKill(()=> tween = null);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_261 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_262;
		L_262 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_263;
		L_263 = TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5(L_261, L_262, TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var);
		float L_264 = __this->___delay_19;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_265;
		L_265 = TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43(L_263, L_264, TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var);
		int32_t L_266 = __this->___loops_24;
		int32_t L_267 = __this->___loopType_23;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_268;
		L_268 = TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C(L_265, L_266, L_267, TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var);
		bool L_269 = __this->___autoKill_29;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_270;
		L_270 = TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B(L_268, L_269, TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_271 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_271);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_271, __this, (intptr_t)((void*)DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_272;
		L_272 = TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F(L_270, L_271, TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var);
		// if (isSpeedBased) tween.SetSpeedBased();
		bool L_273 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___isSpeedBased_5;
		if (!L_273)
		{
			goto IL_09f1;
		}
	}
	{
		// if (isSpeedBased) tween.SetSpeedBased();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_274 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_275;
		L_275 = TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188(L_274, TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var);
	}

IL_09f1:
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		int32_t L_276 = __this->___easeType_21;
		if ((!(((uint32_t)L_276) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0a0f;
		}
	}
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_277 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_278 = __this->___easeCurve_22;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_279;
		L_279 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102(L_277, L_278, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var);
		goto IL_0a21;
	}

IL_0a0f:
	{
		// else tween.SetEase(easeType);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_280 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		int32_t L_281 = __this->___easeType_21;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_282;
		L_282 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F(L_280, L_281, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var);
	}

IL_0a21:
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		String_t* L_283 = __this->___id_25;
		bool L_284;
		L_284 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_283, NULL);
		if (L_284)
		{
			goto IL_0a40;
		}
	}
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_285 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		String_t* L_286 = __this->___id_25;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_287;
		L_287 = TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m29DE8BDBFA580F00E9FAE7DDC47937BCFCC30085(L_285, L_286, TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m29DE8BDBFA580F00E9FAE7DDC47937BCFCC30085_RuntimeMethod_var);
	}

IL_0a40:
	{
		// tween.SetUpdate(isIndependentUpdate);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_288 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_289 = __this->___isIndependentUpdate_28;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_290;
		L_290 = TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8(L_288, L_289, TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var);
		// if (hasOnStart) {
		bool L_291 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStart_6;
		if (!L_291)
		{
			goto IL_0a81;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_292 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12;
		if (!L_292)
		{
			goto IL_0a88;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_293 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_294 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_295 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_295);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_295, L_294, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_296;
		L_296 = TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85(L_293, L_295, TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var);
		goto IL_0a88;
	}

IL_0a81:
	{
		// } else onStart = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0a88:
	{
		// if (hasOnPlay) {
		bool L_297 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnPlay_7;
		if (!L_297)
		{
			goto IL_0ab7;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_298 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13;
		if (!L_298)
		{
			goto IL_0abe;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_299 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_300 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_301 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_301);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_301, L_300, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_302;
		L_302 = TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B(L_299, L_301, TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var);
		goto IL_0abe;
	}

IL_0ab7:
	{
		// } else onPlay = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0abe:
	{
		// if (hasOnUpdate) {
		bool L_303 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnUpdate_8;
		if (!L_303)
		{
			goto IL_0aed;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_304 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14;
		if (!L_304)
		{
			goto IL_0af4;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_305 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_306 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_307 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_307);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_307, L_306, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_308;
		L_308 = TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379(L_305, L_307, TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var);
		goto IL_0af4;
	}

IL_0aed:
	{
		// } else onUpdate = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0af4:
	{
		// if (hasOnStepComplete) {
		bool L_309 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStepComplete_9;
		if (!L_309)
		{
			goto IL_0b23;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_310 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15;
		if (!L_310)
		{
			goto IL_0b2a;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_311 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_312 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_313 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_313);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_313, L_312, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_314;
		L_314 = TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C(L_311, L_313, TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var);
		goto IL_0b2a;
	}

IL_0b23:
	{
		// } else onStepComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b2a:
	{
		// if (hasOnComplete) {
		bool L_315 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnComplete_10;
		if (!L_315)
		{
			goto IL_0b59;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_316 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16;
		if (!L_316)
		{
			goto IL_0b60;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_317 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_318 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_319 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_319);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_319, L_318, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_320;
		L_320 = TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F(L_317, L_319, TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		goto IL_0b60;
	}

IL_0b59:
	{
		// } else onComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b60:
	{
		// if (autoPlay) tween.Play();
		bool L_321 = __this->___autoPlay_36;
		if (!L_321)
		{
			goto IL_0b76;
		}
	}
	{
		// if (autoPlay) tween.Play();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_322 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_323;
		L_323 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79(L_322, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		goto IL_0b82;
	}

IL_0b76:
	{
		// else tween.Pause();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_324 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_325;
		L_325 = TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685(L_324, TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var);
	}

IL_0b82:
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		bool L_326 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnTweenCreated_11;
		if (!L_326)
		{
			goto IL_0b9d;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_327 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_17;
		if (!L_327)
		{
			goto IL_0b9d;
		}
	}
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_328 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_17;
		NullCheck(L_328);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_328, NULL);
	}

IL_0b9d:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlay_m13FCD1B90C270CC6A4CDC37D45B9C7906759EB65 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwards_m7DAD71BF7390EE5BB26CEE5E002A9F61BBD790BB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForward_m1C460584821358C681FFB2A3824D8F532B94A3D6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPause_m579FECCC254EDE65F38B0BB132FA796876409547 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m498BECFBBC8FBD76425B8AE1F38E2ECC9AE296D4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOTogglePause_m3976C710434A81CEF46C8202D6D43A4F09FAE91E (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.TogglePause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_TogglePause_m8CE7CA00FE30F3C926F34362E2DE67A161536598(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewind_m0ACC3EE9A69E368F08360B45500AF6417853AACF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	int32_t V_1 = 0;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_2 = NULL;
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTweenAnimation[] anims = this.gameObject.GetComponents<DOTweenAnimation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_1;
		L_1 = GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B(L_0, GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = anims.Length - 1; i > -1; --i) {
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0041;
	}

IL_001b:
	{
		// Tween t = anims[i].tween;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_6)->___tween_18;
		V_2 = L_7;
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = V_2;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = V_2;
		bool L_10;
		L_10 = TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B(L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_14)->___tween_18;
		TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1(L_15, (bool)1, NULL);
	}

IL_003d:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0041:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_m3991D3973BAB757263F5B7DF49236854F7CFFDD6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, bool ___0_fromHere, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// if (tween == null) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		int32_t L_1 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740(L_2, NULL);
	}

IL_0022:
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		return;
	}

IL_0023:
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		bool L_3 = ___0_fromHere;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->___isRelative_26;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884(__this, NULL);
	}

IL_0034:
	{
		// DOTween.Restart(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = DOTween_Restart_mC5BA3049922D5EA43F9E7A0B05735A21CADDBB64(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOComplete_mA22769F47C0477E80CEFD1278B2400F6944B6111 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Complete(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Complete_m12E2987F7D42218DCCE051E2FDB803E75FD8BA91(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKill_m58766FE1B51A4ACB4AADF618088B24CA8BB558BE (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_mAB4C96CE1F1BCF25E5347AE0FC295D064EA53FB2(L_0, (bool)0, NULL);
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayById_mB1AD544F5E83C3E5EE30EC09F55E3034625DD1FB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Play_mEFD3A1E3CC218D3916032325F2E119C2004D9473(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayAllById_m17BFE4D2AC992F441DA7DE57B06E1D8226F3422F (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(id);
		String_t* L_0 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsById_mF9C09452E4B6A01789AECFE65FEDE8FBE0BC99AA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayBackwards_mC4FB110A49C220C2B5FE768989D133F0F8721FA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsAllById_m699DBBE571B55E8D2F46EFE7795132AEBFBAABF3 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(id);
		String_t* L_0 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardById_mDE37334AB66BCB98A6CEF089E126F03308F7A3AB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayForward_mC1FF85BCF9DC773A3E4FA3DC12377D1F9E1BADD4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardAllById_m52998F61B2172E61AA7834823E68C8F3436BD20D (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(id);
		String_t* L_0 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* V_1 = NULL;
	{
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_0;
		L_0 = Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204(__this, Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0058;
	}

IL_0009:
	{
		// _playCount++;
		int32_t L_1 = __this->____playCount_52;
		__this->____playCount_52 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// DOTweenAnimation anim = anims[_playCount];
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		int32_t L_3 = __this->____playCount_52;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (anim != null && anim.tween != null && !anim.tween.IsPlaying() && !anim.tween.IsComplete()) {
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_8 = V_1;
		NullCheck(L_8);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_8)->___tween_18;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_10 = V_1;
		NullCheck(L_10);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_11 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_10)->___tween_18;
		bool L_12;
		L_12 = TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843(L_11, NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_13 = V_1;
		NullCheck(L_13);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_14 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_13)->___tween_18;
		bool L_15;
		L_15 = TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C(L_14, NULL);
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		// anim.tween.Play();
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_16 = V_1;
		NullCheck(L_16);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_16)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18;
		L_18 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79(L_17, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		// break;
		return;
	}

IL_0058:
	{
		// while (_playCount < anims.Length - 1) {
		int32_t L_19 = __this->____playCount_52;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAndPlayNext_m72276B3E5704C60C1F3662786656A0CAA4A63756 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Rewind(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_m5C4020E9007FAAF719C1BE01CE440EBB39193619(L_0, (bool)1, NULL);
		// DOPlayNext();
		DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartById_m79A437D8087A41B5B1DB998B2D95ACBC06C92F34 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Restart(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Restart_m777E54A0343B1EC43975D4DEBBE7B1958B52A63F(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartAllById_mB4956E8A288B61CE7BFD1E091BE0F0E75B360E20 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Restart(id);
		String_t* L_0 = ___0_id;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Restart_mC5BA3049922D5EA43F9E7A0B05735A21CADDBB64(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* DOTweenAnimation_GetTweens_mFA2D6C6863BE615A2D33B8D0E97C5FA40DF9B4EF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* V_0 = NULL;
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_1 = NULL;
	int32_t V_2 = 0;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* V_3 = NULL;
	{
		// List<Tween> result = new List<Tween>();
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_0 = (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*)il2cpp_codegen_object_new(List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8(L_0, List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		V_0 = L_0;
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_1;
		L_1 = Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204(__this, Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_6 = V_0;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_7 = V_3;
		NullCheck(L_7);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_7)->___tween_18;
		NullCheck(L_6);
		List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline(L_6, L_8, List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		int32_t L_10 = V_2;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_12 = V_0;
		return L_12;
	}
}
// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_m9CAECBFF29991B69FF32089585F88A78CC580B7E (Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = t.ToString();
		Type_t* L_0 = ___0_t;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// int dotIndex = str.LastIndexOf(".");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_3;
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_8, _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C, NULL);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87, NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		V_0 = _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
	}

IL_0042:
	{
		// return (TargetType)Enum.Parse(typeof(TargetType), str);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		String_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_13, L_14, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var))));
	}
}
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (animationType == DOTweenAnimationType.Move) {
		int32_t L_0 = __this->___animationType_33;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(transform.position + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___endValueV3_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_6);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_1, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_8;
		L_8 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_1, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_7, (bool)1);
		return;
	}

IL_0037:
	{
		// } else if (animationType == DOTweenAnimationType.LocalMove) {
		int32_t L_9 = __this->___animationType_33;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_006d;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(transform.localPosition + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_10 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___endValueV3_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14;
		RuntimeObject* L_16 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_15);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_10, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_17;
		L_17 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_10, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_16, (bool)1);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation__ctor_m250D5B591D9CDF8F9F165FF1F355597D2E615715 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float duration = 1;
		__this->___duration_20 = (1.0f);
		// public Ease easeType = Ease.OutQuad;
		__this->___easeType_21 = 6;
		// public AnimationCurve easeCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___easeCurve_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easeCurve_22), (void*)L_5);
		// public int loops = 1;
		__this->___loops_24 = 1;
		// public string id = "";
		__this->___id_25 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_25), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool autoKill = true;
		__this->___autoKill_29 = (bool)1;
		// public bool isActive = true;
		__this->___isActive_30 = (bool)1;
		// public bool autoPlay = true;
		__this->___autoPlay_36 = (bool)1;
		// public Color endValueColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___endValueColor_41 = L_6;
		// public string endValueString = "";
		__this->___endValueString_42 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endValueString_42), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Rect endValueRect = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___endValueRect_43 = L_7;
		// int _playCount = -1; // Used when calling DOPlayNext
		__this->____playCount_52 = (-1);
		ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328(__this, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// .OnKill(()=> tween = null);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Pixel_get_coordinates_m9A35ADE3B1602963672827EBAE7ADE7B5D80A040_inline (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int coordinates { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CcoordinatesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PixelGrid_set_pixels_mB9822BBD7F7976C3C902618B48832742A20C0DB3_inline (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pixel[] pixels { get; private set; }
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_0 = ___0_value;
		__this->___U3CpixelsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpixelsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* PixelGrid_get_pixels_mFB35670169D3EDE9F814D748CFD2A473181F2DA8_inline (PixelGrid_tC2BDECAF3201C8FCC3AA3CE420FB1AD0754CA370* __this, const RuntimeMethod* method) 
{
	{
		// public Pixel[] pixels { get; private set; }
		PixelU5BU5D_t3445F727C64E4CCD033585C5843286FCDA08AB7B* L_0 = __this->___U3CpixelsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pixel_set_coordinates_mFA8E0B1B03012B99D1D2D89AF065E606F92D440C_inline (Pixel_t53F0A08B5B7F15C99E0FF6392A0DA228575927E2* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int coordinates { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CcoordinatesU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_m7CB8E490D86B9E14B6B4B4004F1D199790397743_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___0_t, const RuntimeMethod* method) 
{
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1 = L_0->___active_35;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
