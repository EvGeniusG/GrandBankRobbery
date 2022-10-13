﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Animation[]
struct AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ToonyColorsPro.TCP2_Demo_Interactive_Content[]
struct TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment[]
struct TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty[]
struct AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[]
struct AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[]
struct ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings[]
struct LightSettingsU5BU5D_tBF27FEC2E8F2DEFF1859BACFB6294DC055166754;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings[]
struct MaterialSettingsU5BU5D_t3C69E5F445C76F73E404386280553C2E3DA8BA79;
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[]
struct SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[]
struct CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_tC40AED5F772F1F140F69E0F1BB7D4AE31D64A87B;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// ToonyColorsPro.Demo.TCP2_Demo
struct TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84;
// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial
struct TCP2_Demo_AnimateMaterial_t52E1C4DBF1CBB11C4310D5F2C333D240E48AA041;
// TCP2_Demo_AutoRotate
struct TCP2_Demo_AutoRotate_t098592AD2049F738A2BF189D78EA7A421DF6ADDF;
// ToonyColorsPro.Demo.TCP2_Demo_Camera
struct TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68;
// ToonyColorsPro.Demo.TCP2_Demo_Cat
struct TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear
struct TCP2_Demo_GammaLinear_t851FD6592E4C8B31AA8B814178B8FE424C591339;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive
struct TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06;
// ToonyColorsPro.TCP2_Demo_Interactive_Content
struct TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment
struct TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C;
// TCP2_Demo_InvertedMaskImage
struct TCP2_Demo_InvertedMaskImage_t733DF4E89E2C6E547DC4A3B5196928061034010E;
// ToonyColorsPro.Demo.TCP2_Demo_PBS
struct TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE;
// ToonyColorsPro.Demo.TCP2_Demo_PBS_View
struct TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA;
// ToonyColorsPro.Demo.TCP2_Demo_View
struct TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty
struct AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience
struct Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle
struct ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings
struct LightSettings_t2979EDF48BE5BB56D9C58C70779AD7A2BA72D21B;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings
struct MaterialSettings_tB03332CCD246CE5D99BB983806BEA2E96B53D22C;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35
struct U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6;
// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33
struct U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE;
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting
struct SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings
struct CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE;

IL2CPP_EXTERN_C RuntimeClass* AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP2_RuntimeUtils_t5E9598A60187D562FEDFC57BE19768E002F7129C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00591519A649DB10EE10C734428876B5B61C2590;
IL2CPP_EXTERN_C String_t* _stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56;
IL2CPP_EXTERN_C String_t* _stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4;
IL2CPP_EXTERN_C String_t* _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E;
IL2CPP_EXTERN_C String_t* _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D;
IL2CPP_EXTERN_C String_t* _stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7;
IL2CPP_EXTERN_C String_t* _stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4;
IL2CPP_EXTERN_C String_t* _stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433;
IL2CPP_EXTERN_C String_t* _stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564;
IL2CPP_EXTERN_C String_t* _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8;
IL2CPP_EXTERN_C String_t* _stringLiteral392A6984A677064B849A1004944E4A648C7301C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
IL2CPP_EXTERN_C String_t* _stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6;
IL2CPP_EXTERN_C String_t* _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
IL2CPP_EXTERN_C String_t* _stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7;
IL2CPP_EXTERN_C String_t* _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B;
IL2CPP_EXTERN_C String_t* _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
IL2CPP_EXTERN_C String_t* _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
IL2CPP_EXTERN_C String_t* _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B;
IL2CPP_EXTERN_C String_t* _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral97CD35D533ED84D4C320180197C62F59090E17DB;
IL2CPP_EXTERN_C String_t* _stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC1BD2D2846995B2539A796563845CF33838719;
IL2CPP_EXTERN_C String_t* _stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782;
IL2CPP_EXTERN_C String_t* _stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B;
IL2CPP_EXTERN_C String_t* _stringLiteralB491229C21663462214F90086EA80637221C891D;
IL2CPP_EXTERN_C String_t* _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68;
IL2CPP_EXTERN_C String_t* _stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22;
IL2CPP_EXTERN_C String_t* _stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889_m2A6C3A4C6BE57EAA1A9D3CF4DA38BE1ED3DD43F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m2FE3113150DFC873296E954F0EBB0E18E096AFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4_m0115856B274E21068EF2ED4716CC877052F07CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_m6968347F8776206E7FB4B6A6FB692471ABC012D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_mD4D087D7584A19E9ABD939B89C0496B778808A7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCR_MoveToContentU3Ed__35_System_Collections_IEnumerator_Reset_m73046DDC2212AA340B99D7E6858AFF1F8546D46C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCR_ResetCamPosU3Ed__33_System_Collections_IEnumerator_Reset_m2EBC8F50A8E4F83637CC47BE0BF9C544A6FF6DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CAwakeU3Eb__0_m6278DEF27CF0FB9CC95E295C10FB722AB6CEA0D2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01;
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194;
struct TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360;
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
struct AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE;
struct AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976;
struct ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2;
struct SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F;
struct CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF029220F22375E54DE2D4AA7FC4BF89DDB0B7F10 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience
struct Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846  : public RuntimeObject
{
	// System.String ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::name
	String_t* ___name_0;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::activate
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___activate_1;
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::skybox
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skybox_2;
};

// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle
struct ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2  : public RuntimeObject
{
	// System.String ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::name
	String_t* ___name_0;
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[] ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::settings
	CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04* ___settings_1;
};

// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings
struct LightSettings_t2979EDF48BE5BB56D9C58C70779AD7A2BA72D21B  : public RuntimeObject
{
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_0;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::gammaIntensity
	float ___gammaIntensity_1;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::linearIntensity
	float ___linearIntensity_2;
};

// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A  : public RuntimeObject
{
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0::ci
	int32_t ___ci_0;
	// ToonyColorsPro.Demo.TCP2_Demo_Interactive ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0::<>4__this
	TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* ___U3CU3E4__this_1;
};

// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings
struct CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE  : public RuntimeObject
{
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	// UnityEngine.Renderer[] ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::renderers
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty
struct AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4  : public RuntimeObject
{
	// System.String ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Name
	String_t* ___Name_0;
	// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty/MaterialPropertyType ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Type
	int32_t ___Type_1;
	// UnityEngine.AnimationCurve ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___Curve_2;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Duration
	float ___Duration_3;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::FloatFrom
	float ___FloatFrom_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::FloatTo
	float ___FloatTo_5;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::ColorFrom
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorFrom_6;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::ColorTo
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorTo_7;
	// UnityEngine.Vector4 ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::VectorFrom
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VectorFrom_8;
	// UnityEngine.Vector4 ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::VectorTo
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VectorTo_9;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::propertyId
	int32_t ___propertyId_10;
};

// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings
struct MaterialSettings_tB03332CCD246CE5D99BB983806BEA2E96B53D22C  : public RuntimeObject
{
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::gammaColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gammaColor_1;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::linearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___linearColor_2;
};

// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35
struct U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6  : public RuntimeObject
{
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ToonyColorsPro.TCP2_Demo_Interactive_Content ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::content
	TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* ___content_2;
	// ToonyColorsPro.Demo.TCP2_Demo_Interactive ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<>4__this
	TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<startPos>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__1_4;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<endPos>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPosU3E5__2_5;
	// UnityEngine.Quaternion ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<startQuat>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CstartQuatU3E5__3_6;
	// UnityEngine.Quaternion ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<endQuat>5__4
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CendQuatU3E5__4_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<duration>5__5
	float ___U3CdurationU3E5__5_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<time>5__6
	float ___U3CtimeU3E5__6_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<delta>5__7
	float ___U3CdeltaU3E5__7_10;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::<delta>5__8
	float ___U3CdeltaU3E5__8_11;
};

// ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33
struct U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE  : public RuntimeObject
{
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ToonyColorsPro.Demo.TCP2_Demo_Interactive ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<>4__this
	TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<startPos>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__1_3;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<endPos>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CendPosU3E5__2_4;
	// UnityEngine.Quaternion ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<startQuat>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CstartQuatU3E5__3_5;
	// UnityEngine.Quaternion ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<endQuat>5__4
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CendQuatU3E5__4_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<duration>5__5
	float ___U3CdurationU3E5__5_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<time>5__6
	float ___U3CtimeU3E5__6_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::<delta>5__7
	float ___U3CdeltaU3E5__7_9;
};

// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting
struct SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D  : public RuntimeObject
{
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::SkyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___SkyMaterial_0;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::lightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lightColor_1;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::DirLightEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DirLightEuler_2;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Cubemap
struct Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// ToonyColorsPro.Demo.TCP2_Demo
struct TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] ToonyColorsPro.Demo.TCP2_Demo::AffectedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___AffectedMaterials_4;
	// UnityEngine.Texture2D[] ToonyColorsPro.Demo.TCP2_Demo::RampTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___RampTextures_5;
	// UnityEngine.GUISkin ToonyColorsPro.Demo.TCP2_Demo::GuiSkin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___GuiSkin_6;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo::DirLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___DirLight_7;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo::Robot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Robot_8;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo::Ethan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ethan_9;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mUnityShader
	bool ___mUnityShader_10;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderSpecular
	bool ___mShaderSpecular_11;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderBump
	bool ___mShaderBump_12;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderReflection
	bool ___mShaderReflection_13;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderRim
	bool ___mShaderRim_14;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderRimOutline
	bool ___mShaderRimOutline_15;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderOutline
	bool ___mShaderOutline_16;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRimMin
	float ___mRimMin_17;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRimMax
	float ___mRimMax_18;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mRampTextureFlag
	bool ___mRampTextureFlag_19;
	// UnityEngine.Texture2D ToonyColorsPro.Demo.TCP2_Demo::mRampTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mRampTexture_20;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRampSmoothing
	float ___mRampSmoothing_21;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mLightRotationX
	float ___mLightRotationX_22;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mLightRotationY
	float ___mLightRotationY_23;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mViewRobot
	bool ___mViewRobot_24;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mRobotOutlineNormals
	bool ___mRobotOutlineNormals_25;
	// ToonyColorsPro.Demo.TCP2_Demo_View ToonyColorsPro.Demo.TCP2_Demo::DemoView
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* ___DemoView_26;
};

// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial
struct TCP2_Demo_AnimateMaterial_t52E1C4DBF1CBB11C4310D5F2C333D240E48AA041  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty[] ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial::animatedProperties
	AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* ___animatedProperties_5;
};

// TCP2_Demo_AutoRotate
struct TCP2_Demo_AutoRotate_t098592AD2049F738A2BF189D78EA7A421DF6ADDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 TCP2_Demo_AutoRotate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_4;
	// System.Single TCP2_Demo_AutoRotate::Speed
	float ___Speed_5;
};

// ToonyColorsPro.Demo.TCP2_Demo_Camera
struct TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_Camera::Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Pivot_4;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::pivotOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pivotOffset_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::OrbitStrg
	float ___OrbitStrg_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::OrbitClamp
	float ___OrbitClamp_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::PanStrgMin
	float ___PanStrgMin_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::PanStrgMax
	float ___PanStrgMax_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomStrg
	float ___ZoomStrg_10;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomClamp
	float ___ZoomClamp_11;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomDistMin
	float ___ZoomDistMin_12;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomDistMax
	float ___ZoomDistMax_13;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::Decceleration
	float ___Decceleration_14;
	// UnityEngine.RectTransform ToonyColorsPro.Demo.TCP2_Demo_Camera::ignoreMouseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ignoreMouseRect_15;
	// UnityEngine.Rect ToonyColorsPro.Demo.TCP2_Demo_Camera::ignoreMouseActualRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___ignoreMouseActualRect_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mouseDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mouseDelta_17;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::orbitAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___orbitAcceleration_18;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::panAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panAcceleration_19;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::moveAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveAcceleration_20;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::zoomAcceleration
	float ___zoomAcceleration_21;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::zoomDistance
	float ___zoomDistance_22;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetCamPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamPos_25;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetPivotPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetPivotPos_26;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetCamRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamRot_27;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetPivotRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetPivotRot_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::leftMouseHeld
	bool ___leftMouseHeld_29;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::rightMouseHeld
	bool ___rightMouseHeld_30;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::middleMouseHeld
	bool ___middleMouseHeld_31;
};

// ToonyColorsPro.Demo.TCP2_Demo_Cat
struct TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[] ToonyColorsPro.Demo.TCP2_Demo_Cat::ambiences
	AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* ___ambiences_4;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::amb
	int32_t ___amb_5;
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[] ToonyColorsPro.Demo.TCP2_Demo_Cat::styles
	ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2* ___styles_6;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::style
	int32_t ___style_7;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::shadedGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadedGroup_8;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::flatGroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flatGroup_9;
	// UnityEngine.Animation[] ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnimation
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* ___catAnimation_10;
	// UnityEngine.Animation[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanAnimation
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* ___unityChanAnimation_11;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat::cats
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___cats_12;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChans
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___unityChans_13;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanCopyright
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___unityChanCopyright_14;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_Cat::catDirLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___catDirLight_15;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanDirLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___unityChanDirLight_16;
	// UnityEngine.AnimationClip[] ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnimations
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* ___catAnimations_17;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnim
	int32_t ___catAnim_18;
	// UnityEngine.AnimationClip[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanAnimations
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* ___unityChanAnimations_19;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::uchanAnim
	int32_t ___uchanAnim_20;
	// UnityEngine.Light[] ToonyColorsPro.Demo.TCP2_Demo_Cat::dirLights
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___dirLights_21;
	// UnityEngine.Light[] ToonyColorsPro.Demo.TCP2_Demo_Cat::otherLights
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___otherLights_22;
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_Cat::rotatingPointLights
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotatingPointLights_23;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::<rotateLights>k__BackingField
	bool ___U3CrotateLightsU3Ek__BackingField_24;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::<rotatePointLights>k__BackingField
	bool ___U3CrotatePointLightsU3Ek__BackingField_25;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::ambiencesButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___ambiencesButtons_26;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::stylesButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___stylesButtons_27;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::characterButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___characterButtons_28;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::textureButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___textureButtons_29;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::animationButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___animationButtons_30;
	// UnityEngine.Canvas ToonyColorsPro.Demo.TCP2_Demo_Cat::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_31;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::animationPaused
	bool ___animationPaused_32;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Cat::playingSpeed
	float ___playingSpeed_33;
};

// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear
struct TCP2_Demo_GammaLinear_t851FD6592E4C8B31AA8B814178B8FE424C591339  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings[] ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::lights
	LightSettingsU5BU5D_tBF27FEC2E8F2DEFF1859BACFB6294DC055166754* ___lights_4;
	// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings[] ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::materials
	MaterialSettingsU5BU5D_t3C69E5F445C76F73E404386280553C2E3DA8BA79* ___materials_5;
	// UnityEngine.ColorSpace ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::lastColorSpace
	int32_t ___lastColorSpace_6;
};

// ToonyColorsPro.Demo.TCP2_Demo_Interactive
struct TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ToonyColorsPro.Demo.TCP2_Demo_Camera ToonyColorsPro.Demo.TCP2_Demo_Interactive::demoCamera
	TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* ___demoCamera_4;
	// UnityEngine.Camera ToonyColorsPro.Demo.TCP2_Demo_Interactive::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_5;
	// UnityEngine.Canvas ToonyColorsPro.Demo.TCP2_Demo_Interactive::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_6;
	// UnityEngine.UI.CanvasScaler ToonyColorsPro.Demo.TCP2_Demo_Interactive::canvasScaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___canvasScaler_7;
	// UnityEngine.UI.HorizontalLayoutGroup ToonyColorsPro.Demo.TCP2_Demo_Interactive::layoutGroup
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* ___layoutGroup_8;
	// UnityEngine.UI.ContentSizeFitter ToonyColorsPro.Demo.TCP2_Demo_Interactive::sizeFitter
	ContentSizeFitter_tC40AED5F772F1F140F69E0F1BB7D4AE31D64A87B* ___sizeFitter_9;
	// UnityEngine.RectTransform ToonyColorsPro.Demo.TCP2_Demo_Interactive::textBox
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___textBox_10;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_Interactive::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_11;
	// UnityEngine.UI.Image ToonyColorsPro.Demo.TCP2_Demo_Interactive::line
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___line_12;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive::camAnimDuration
	float ___camAnimDuration_13;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive::maxCamAnimDuration
	float ___maxCamAnimDuration_14;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Interactive::camAnimBasedOnDistance
	bool ___camAnimBasedOnDistance_15;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Interactive::uiAnimDuration
	float ___uiAnimDuration_16;
	// UnityEngine.UI.Button ToonyColorsPro.Demo.TCP2_Demo_Interactive::envButtonTemplate
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___envButtonTemplate_17;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Interactive::envButtons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___envButtons_18;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_Interactive::highlightLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___highlightLabel_19;
	// ToonyColorsPro.TCP2_Demo_Interactive_Content[] ToonyColorsPro.Demo.TCP2_Demo_Interactive::contents
	TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* ___contents_20;
	// ToonyColorsPro.TCP2_Demo_Interactive_Content ToonyColorsPro.Demo.TCP2_Demo_Interactive::currentContent
	TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* ___currentContent_21;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Interactive::index
	int32_t ___index_22;
	// ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment[] ToonyColorsPro.Demo.TCP2_Demo_Interactive::lightings
	TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* ___lightings_23;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Interactive::lightingIndex
	int32_t ___lightingIndex_24;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_Interactive::envButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___envButtonColor_25;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Interactive::cameraResetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraResetPos_26;
	// UnityEngine.Quaternion ToonyColorsPro.Demo.TCP2_Demo_Interactive::cameraResetQuat
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___cameraResetQuat_27;
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_Interactive::resetPivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___resetPivot_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Interactive::coroutineActive
	bool ___coroutineActive_29;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Interactive::infoBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___infoBox_30;
};

// ToonyColorsPro.TCP2_Demo_Interactive_Content
struct TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ToonyColorsPro.TCP2_Demo_Interactive_Content::pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pivot_4;
	// UnityEngine.Transform ToonyColorsPro.TCP2_Demo_Interactive_Content::textBox
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___textBox_5;
	// System.String ToonyColorsPro.TCP2_Demo_Interactive_Content::Text
	String_t* ___Text_6;
};

// ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment
struct TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment::skybox
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skybox_4;
};

// ToonyColorsPro.Demo.TCP2_Demo_PBS
struct TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_PBS::DirLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___DirLight_4;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_PBS::PointLights
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PointLights_5;
	// UnityEngine.MeshRenderer ToonyColorsPro.Demo.TCP2_Demo_PBS::Robot
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___Robot_6;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_PBS::Canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Canvas_7;
	// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[] ToonyColorsPro.Demo.TCP2_Demo_PBS::SkySettings
	SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F* ___SkySettings_8;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::FlipLight
	bool ___FlipLight_9;
	// UnityEngine.Texture2D[] ToonyColorsPro.Demo.TCP2_Demo_PBS::RampTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___RampTextures_10;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::SmoothnessSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___SmoothnessSlider_11;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::SmoothnessValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SmoothnessValue_12;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::MetallicSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___MetallicSlider_13;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::MetallicValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MetallicValue_14;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::BumpScaleValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BumpScaleValue_15;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::ShaderText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ShaderText_16;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::SkyboxValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SkyboxValue_17;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RampValue_18;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampThresholdSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___RampThresholdSlider_19;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampThresholdValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RampThresholdValue_20;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___RampSmoothSlider_21;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RampSmoothValue_22;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothAddSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___RampSmoothAddSlider_23;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothAddValue
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RampSmoothAddValue_24;
	// UnityEngine.UI.RawImage ToonyColorsPro.Demo.TCP2_Demo_PBS::RampImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___RampImage_25;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_PBS::currentSky
	int32_t ___currentSky_26;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_PBS::currentRamp
	int32_t ___currentRamp_27;
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_PBS::robotMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___robotMaterial_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::mUseOutline
	bool ___mUseOutline_29;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::mRotatePointLights
	bool ___mRotatePointLights_30;
};

// ToonyColorsPro.Demo.TCP2_Demo_PBS_View
struct TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Pivot_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OrbitStrg
	float ___OrbitStrg_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OrbitClamp
	float ___OrbitClamp_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::PanStrg
	float ___PanStrg_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::PanClamp
	float ___PanClamp_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::yMin
	float ___yMin_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::yMax
	float ___yMax_10;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomStrg
	float ___ZoomStrg_11;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomClamp
	float ___ZoomClamp_12;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomDistMin
	float ___ZoomDistMin_13;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomDistMax
	float ___ZoomDistMax_14;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Decceleration
	float ___Decceleration_15;
	// UnityEngine.Rect ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ignoreMouseRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___ignoreMouseRect_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mouseDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mouseDelta_17;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::orbitAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___orbitAcceleration_18;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::panAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panAcceleration_19;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::moveAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveAcceleration_20;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::zoomAcceleration
	float ___zoomAcceleration_21;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetCamPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamPos_24;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetPivotPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetPivotPos_25;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetCamRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamRot_26;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetPivotRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetPivotRot_27;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::leftMouseHeld
	bool ___leftMouseHeld_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::rightMouseHeld
	bool ___rightMouseHeld_29;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::middleMouseHeld
	bool ___middleMouseHeld_30;
};

// ToonyColorsPro.Demo.TCP2_Demo_View
struct TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::OrbitStrg
	float ___OrbitStrg_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::OrbitClamp
	float ___OrbitClamp_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::PanStrg
	float ___PanStrg_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::PanClamp
	float ___PanClamp_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::ZoomStrg
	float ___ZoomStrg_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::ZoomClamp
	float ___ZoomClamp_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::Decceleration
	float ___Decceleration_10;
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_View::CharacterTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CharacterTransform_11;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mouseDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mouseDelta_12;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::orbitAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___orbitAcceleration_13;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::panAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panAcceleration_14;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::moveAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveAcceleration_15;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::zoomAcceleration
	float ___zoomAcceleration_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mResetCamPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamPos_19;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mResetCamRot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mResetCamRot_20;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_View::mMouseDown
	bool ___mMouseDown_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.UI.ContentSizeFitter
struct ContentSizeFitter_tC40AED5F772F1F140F69E0F1BB7D4AE31D64A87B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_4;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_5;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TCP2_Demo_InvertedMaskImage
struct TCP2_Demo_InvertedMaskImage_t733DF4E89E2C6E547DC4A3B5196928061034010E  : public Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[]
struct AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976  : public RuntimeArray
{
	ALIGN_FIELD (8) Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* m_Items[1];

	inline Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* value)
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
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[]
struct CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04  : public RuntimeArray
{
	ALIGN_FIELD (8) CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* m_Items[1];

	inline CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[]
struct ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2  : public RuntimeArray
{
	ALIGN_FIELD (8) ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* m_Items[1];

	inline ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Animation[]
struct AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01  : public RuntimeArray
{
	ALIGN_FIELD (8) Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* m_Items[1];

	inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animation_t6593B06C39E3B139808B19F2C719C860F3F61040** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty[]
struct AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* m_Items[1];

	inline AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment[]
struct TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360  : public RuntimeArray
{
	ALIGN_FIELD (8) TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* m_Items[1];

	inline TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.TCP2_Demo_Interactive_Content[]
struct TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194  : public RuntimeArray
{
	ALIGN_FIELD (8) TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* m_Items[1];

	inline TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[]
struct SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F  : public RuntimeArray
{
	ALIGN_FIELD (8) SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* m_Items[1];

	inline SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_ResetView_mC8F7614A51119FFA3DA106C260B5F228FAFFBEC4 (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m282D807F4F1D1EEE51A8B91AC1DE5EB4F5296CED (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotatePointLights(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_m8CAB1BDBC35823CD2865B0DC31D31AA19DC4E1EB_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotateLights(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4B2F94CFC770E4CAF8A59FDCC8424254648B7050_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAmbience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAmbience_m397FAFA3DFB308432E9DBA3D8BDEB775BE0A3E75 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetCat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetCat_mEEF87FCB5B591B11542C0F761BB6C55ECE64F3EA (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___cat0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetFlat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetFlat_mE5C6D1579A1B929713DBEED2E6FE482F9F90885C (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___flat0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimation_mB10EF283487405C5CF920562B7AF074B932BCC71 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotateLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m3A32B1CC6DE916DB9BD1716B3FAF44D0DAA1DF43_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotatePointLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_mAE55D513CB5B0105AC0384264BD2427DA98EB75F_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.DynamicGI::UpdateEnvironment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicGI_UpdateEnvironment_m70AC224196548AC7A7FD7E6182591F692E98CF06 (const RuntimeMethod* method) ;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102 (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationState::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PlayCurrentAnimation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PlayCurrentAnimation_mC37138636FD93A65612133FCEB0F04C587209BA3 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::UpdateAnimSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_UpdateAnimSpeed_m29E412E2CFC17CBD9B84B5C8C59587EA82FA2578 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::set_normalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedProperty_Init_mF9E052E9520363DDFE2799CC180A5C02E9AC8F48 (AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Update(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedProperty_Update_mEE0EC4A2D2F47211D74ECBA00487BCCCF3437668 (AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<ToonyColorsPro.TCP2_Demo_Interactive_Content>()
inline TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4_m0115856B274E21068EF2ED4716CC877052F07CF6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment>(System.Boolean)
inline TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_mD4D087D7584A19E9ABD939B89C0496B778808A7C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Light>()
inline LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* Component_GetComponentsInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m2FE3113150DFC873296E954F0EBB0E18E096AFB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_reflectionIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_reflectionIntensity_m70A9545EBFEE2100AEB017149034592AF23D224E (float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m4C6D5957E4AC4E2561D2241FFBFAC517E2E4B825 (U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::OnSelectLightingSettings(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_OnSelectLightingSettings_m5FC680CE96EF10C879ADE1EAFDE68D9B70729B24 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::HandleKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_HandleKeyboard_m8A1EFA7533315A83902C0BBFCCDB2AB84348E309 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::UpdateViewToCurrentContent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, float ___lengthPercent0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_ResetView_mDA99336859AA2946D2D90ECFD805CB4C1FE13AEA (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::NextHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_NextHighlight_m7E479C0F3BCE3E038CE39ABC6E6CF17514F48B6F (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::PrevHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_PrevHighlight_m21348200BDBD1B4E01B8957FB4792AD4A6E0BB93 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ToonyColorsPro.Demo.TCP2_Demo_Interactive::CR_MoveToContent(ToonyColorsPro.TCP2_Demo_Interactive_Content)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TCP2_Demo_Interactive_CR_MoveToContent_mC42E377253ADE0188F20C2AE122FCEAA3E396790 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* ___content0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::PlaceLine(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_PlaceLine_mDA643C21BA431A12B31099C50538E6A05E04B7E3 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, float ___lengthPercentage2, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5 (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ToonyColorsPro.Demo.TCP2_Demo_Interactive::CR_ResetCamPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TCP2_Demo_Interactive_CR_ResetCamPos_m1072A96E99DB6E7CA74784E16E80DFCD7C8C73D9 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_ResetCamPosU3Ed__33__ctor_m4E348FAA43126971717AEF9E1EA1EC9FA7022FEA (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_MoveToContentU3Ed__35__ctor_mE2F7FECAE8FF56B25342F9C3651895198C9B8CE8 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment::ApplyEnvironment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_Environment_ApplyEnvironment_mFD147601DE9207A3B87DC5F46831570B014FFBDA (TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment>()
inline TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_m6968347F8776206E7FB4B6A6FB692471ABC012D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_customReflection(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_customReflection_m4DF4A279AAB17D1E398C3DE83852B5140D0BF6DA (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ToonyColorsPro.Demo.TCP2_Demo_View>()
inline TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* Component_GetComponent_TisTCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889_m2A6C3A4C6BE57EAA1A9D3CF4DA38BE1ED3DD43F5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UpdateShader_m6107CAFF5694DFD7EE72B7510F2845F163040447 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RestoreRimColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RestoreRimColors_mD17485C1C6B9F80EA2994CF5833D11AB83327368 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m9EB3F017DB33B30FF9DF2A9DD86901FE37513882 (String_t* ___text0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7 (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7 (String_t* ___text0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetLastRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_GetLastRect_m09C228A4DB31B3F0BF854871BB466FC06E3C8CB2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3 (float ___width0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::DecreaseLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_DecreaseLevel_mD1504A9A4F4304720965E9A9940C6F11A8495B00 (bool ___applyExpensiveChanges0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.QualitySettings::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* QualitySettings_get_names_m61A6181CC5752EE5405DB3A22F676C9F6861B02D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::GetQualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_GetQualityLevel_m01019D879AF250BE95341490BF704E4A69B0497B (const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::IncreaseLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_IncreaseLevel_m3F830AF4AAC3F3B8DA09E62344343E307C7EE4DB (bool ___applyExpensiveChanges0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597 (float ___pixels0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9 (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D (const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RimOutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RimOutlineColor_mB9073DEFAFBA780557D809A23CDE4DBDD972784E (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41 (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GUILayout_ExpandWidth_m79E06605EA8F34C76E6F93F53326E488CAFB0275 (bool ___expand0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUILayoutUtility_GetRect_m638D359B38D742F3F7D5769CF3C614A7E6BC349F (float ___width0, float ___height1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PrevRamp_m2B41EACFEDCACDA2AC2DCE7F027C94D2C557ABE7 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_NextRamp_m407C9F468599A8CA1074295F3C629B1828CDE08F (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448 (const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UnityDiffuseShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UnityDiffuseShader_m492FFDFBD098665C2CB6FD68E37FDBC30A2CBA41 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Shader ToonyColorsPro.Runtime.TCP2_RuntimeUtils::GetShaderWithKeywords(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* TCP2_RuntimeUtils_GetShaderWithKeywords_mE11554E03F5B2A42F0233E7128B06AF30D30D69A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Material::get_shaderKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___trimChar0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.Texture2D>(T[],T)
inline int32_t Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___array0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared)(___array0, ___value1, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowTCP2Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowTCP2Shader_mA8739E0DB5AD7199E158A17E069CC1882EAB163A (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateSky_mAD73EAC90CAE1D6FE1711E3A8D57E4827075CD35 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateRamp_mC6AE87D30B3D0D71B5EAC5B343B62D514532D808 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextSky_m39A3219BE60CEFF3BB0081F15157ABBDDF2D279A (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevSky_m150E67BF9EF37E599E664D7D4E554292C4BD3501 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowUnityStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowUnityStandardShader_mC3F7B50DF880F795A2C86A6B5D9BFFDD6E259A0B (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_ResetView_m795A13C2B8C62A8D2C2E7637D878C1E12C708268 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_ResetView_m14BB208732E55F37B2B6070EFB16CBD117751C11 (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
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
// UnityEngine.Material TCP2_Demo_InvertedMaskImage::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* TCP2_Demo_InvertedMaskImage_get_materialForRendering_mE6D20D0BF359E6A29A4463D80DDDE635A3A64676 (TCP2_Demo_InvertedMaskImage_t733DF4E89E2C6E547DC4A3B5196928061034010E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// Material mat = new Material(base.materialForRendering);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_1, L_0, NULL);
		V_0 = L_1;
		// mat.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E, 6, NULL);
		// return mat;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_0;
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_1;
		return L_4;
	}
}
// System.Void TCP2_Demo_InvertedMaskImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_InvertedMaskImage__ctor_mBF9F07418B0A1488CB00805F84295B20BBBA8F43 (TCP2_Demo_InvertedMaskImage_t733DF4E89E2C6E547DC4A3B5196928061034010E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37(__this, NULL);
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
// System.Void TCP2_Demo_AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AutoRotate_Update_m983B3CDA6BC4C2C2A12AC0AA959E165E7F63A14A (TCP2_Demo_AutoRotate_t098592AD2049F738A2BF189D78EA7A421DF6ADDF* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Rotate(axis, Time.deltaTime * Speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___axis_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___Speed_5;
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void TCP2_Demo_AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AutoRotate__ctor_m9D9B08BA53910C031D365C2D4F5F1459E49C07F7 (TCP2_Demo_AutoRotate_t098592AD2049F738A2BF189D78EA7A421DF6ADDF* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___axis_4 = L_0;
		// public float Speed = -50f;
		__this->___Speed_5 = (-50.0f);
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
// System.Void ToonyColorsPro.TCP2_Demo_Interactive_Content::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_Content__ctor_mCF833CA38BB27622809CDEDFF284848797ADC474 (TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97CD35D533ED84D4C320180197C62F59090E17DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [TextArea] public string Text = "This is the text inside the text box.";
		__this->___Text_6 = _stringLiteral97CD35D533ED84D4C320180197C62F59090E17DB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Text_6), (void*)_stringLiteral97CD35D533ED84D4C320180197C62F59090E17DB);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_Awake_m857DAA5D39F5EA96A0F960E8AC34C808A0EACDA2 (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) 
{
	{
		// mResetCamPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___mResetCamPos_25 = L_1;
		// mResetCamRot = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		__this->___mResetCamRot_27 = L_3;
		// mResetPivotPos = Pivot.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___Pivot_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___mResetPivotPos_26 = L_5;
		// mResetPivotRot = Pivot.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___Pivot_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		__this->___mResetPivotRot_28 = L_7;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_OnEnable_m0887A044219D30A034E5161177AFE14F208E79D3 (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_17 = L_0;
		// Vector2 size = Vector2.Scale(ignoreMouseRect.rect.size, ignoreMouseRect.lossyScale);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___ignoreMouseRect_15;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_2 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___ignoreMouseRect_15;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_3, L_6, NULL);
		V_0 = L_7;
		// Rect rect = new Rect(ignoreMouseRect.position.x, ignoreMouseRect.position.y, size.x, size.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___ignoreMouseRect_15;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___ignoreMouseRect_15;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_10, L_13, L_15, L_17, NULL);
		// rect.x -= (ignoreMouseRect.pivot.x * size.x);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_1);
		float L_19;
		L_19 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_18, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___ignoreMouseRect_15;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_20, NULL);
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24 = L_23.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_18, ((float)il2cpp_codegen_subtract(L_19, ((float)il2cpp_codegen_multiply(L_22, L_24)))), NULL);
		// rect.y -= ((-ignoreMouseRect.pivot.y) * size.y);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&V_1);
		float L_26;
		L_26 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_25, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___ignoreMouseRect_15;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_27, NULL);
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_25, ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(((-L_29)), L_31)))), NULL);
		// ignoreMouseActualRect = rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32 = V_1;
		__this->___ignoreMouseActualRect_16 = L_32;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_Update_mB8ECA5C4116C1205E93147D5450F4D4E3BA1027D (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	float V_12 = 0.0f;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B52_0 = 0;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___mouseDelta_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		__this->___mouseDelta_17 = L_2;
		// mouseDelta.x = Mathf.Clamp(mouseDelta.x, -150f, 150f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___mouseDelta_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___mouseDelta_17);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (-150.0f), (150.0f), NULL);
		L_3->___x_2 = L_6;
		// mouseDelta.y = Mathf.Clamp(mouseDelta.y, -150f, 150f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___mouseDelta_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___mouseDelta_17);
		float L_9 = L_8->___y_3;
		float L_10;
		L_10 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, (-150.0f), (150.0f), NULL);
		L_7->___y_3 = L_10;
		// var ignoreMouse = ignoreMouseRect != null ? ignoreMouseActualRect.Contains(Input.mousePosition) : false;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___ignoreMouseRect_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_12)
		{
			goto IL_0072;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0082;
	}

IL_0072:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_13 = (&__this->___ignoreMouseActualRect_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		bool L_15;
		L_15 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B(L_13, L_14, NULL);
		G_B3_0 = ((int32_t)(L_15));
	}

IL_0082:
	{
		V_0 = (bool)G_B3_0;
		// if (Input.GetMouseButtonDown(0))
		bool L_16;
		L_16 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_009b;
		}
	}
	{
		// leftMouseHeld = !ignoreMouse;
		bool L_18 = V_0;
		__this->___leftMouseHeld_29 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_00bc;
	}

IL_009b:
	{
		// else if (Input.GetMouseButtonUp(0) || !Input.GetMouseButton(0))
		bool L_19;
		L_19 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		bool L_20;
		L_20 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		G_B8_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B8_0 = 1;
	}

IL_00af:
	{
		V_5 = (bool)G_B8_0;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_00bc;
		}
	}
	{
		// leftMouseHeld = false;
		__this->___leftMouseHeld_29 = (bool)0;
	}

IL_00bc:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_22;
		L_22 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		// rightMouseHeld = !ignoreMouse;
		bool L_24 = V_0;
		__this->___rightMouseHeld_30 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_00f5;
	}

IL_00d4:
	{
		// else if (Input.GetMouseButtonUp(1) || !Input.GetMouseButton(1))
		bool L_25;
		L_25 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		if (L_25)
		{
			goto IL_00e7;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		G_B15_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00e8;
	}

IL_00e7:
	{
		G_B15_0 = 1;
	}

IL_00e8:
	{
		V_7 = (bool)G_B15_0;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00f5;
		}
	}
	{
		// rightMouseHeld = false;
		__this->___rightMouseHeld_30 = (bool)0;
	}

IL_00f5:
	{
		// if (Input.GetMouseButtonDown(2))
		bool L_28;
		L_28 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_010d;
		}
	}
	{
		// middleMouseHeld = !ignoreMouse;
		bool L_30 = V_0;
		__this->___middleMouseHeld_31 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_012e;
	}

IL_010d:
	{
		// else if (Input.GetMouseButtonUp(2) || !Input.GetMouseButton(2))
		bool L_31;
		L_31 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(2, NULL);
		if (L_31)
		{
			goto IL_0120;
		}
	}
	{
		bool L_32;
		L_32 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		G_B22_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_0121;
	}

IL_0120:
	{
		G_B22_0 = 1;
	}

IL_0121:
	{
		V_9 = (bool)G_B22_0;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_012e;
		}
	}
	{
		// middleMouseHeld = false;
		__this->___middleMouseHeld_31 = (bool)0;
	}

IL_012e:
	{
		// if (leftMouseHeld)
		bool L_34 = __this->___leftMouseHeld_29;
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_01a8;
		}
	}
	{
		// orbitAcceleration.x += Mathf.Clamp(mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___orbitAcceleration_18);
		float* L_37 = (&L_36->___x_2);
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___mouseDelta_17);
		float L_41 = L_40->___x_2;
		float L_42 = __this->___OrbitStrg_6;
		float L_43 = __this->___OrbitClamp_7;
		float L_44 = __this->___OrbitClamp_7;
		float L_45;
		L_45 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_41, L_42)), ((-L_43)), L_44, NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_39, L_45));
		// orbitAcceleration.y += Mathf.Clamp(-mouseDelta.y * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->___orbitAcceleration_18);
		float* L_47 = (&L_46->___y_3);
		float* L_48 = L_47;
		float L_49 = *((float*)L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&__this->___mouseDelta_17);
		float L_51 = L_50->___y_3;
		float L_52 = __this->___OrbitStrg_6;
		float L_53 = __this->___OrbitClamp_7;
		float L_54 = __this->___OrbitClamp_7;
		float L_55;
		L_55 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((-L_51)), L_52)), ((-L_53)), L_54, NULL);
		*((float*)L_48) = (float)((float)il2cpp_codegen_add(L_49, L_55));
		goto IL_0228;
	}

IL_01a8:
	{
		// else if (middleMouseHeld || rightMouseHeld)
		bool L_56 = __this->___middleMouseHeld_31;
		if (L_56)
		{
			goto IL_01b8;
		}
	}
	{
		bool L_57 = __this->___rightMouseHeld_30;
		G_B29_0 = ((int32_t)(L_57));
		goto IL_01b9;
	}

IL_01b8:
	{
		G_B29_0 = 1;
	}

IL_01b9:
	{
		V_11 = (bool)G_B29_0;
		bool L_58 = V_11;
		if (!L_58)
		{
			goto IL_0228;
		}
	}
	{
		// var str = Mathf.Lerp(PanStrgMin, PanStrgMax, Mathf.Clamp01((zoomDistance-ZoomDistMin)/(ZoomDistMax-ZoomDistMin)));
		float L_59 = __this->___PanStrgMin_8;
		float L_60 = __this->___PanStrgMax_9;
		float L_61 = __this->___zoomDistance_22;
		float L_62 = __this->___ZoomDistMin_12;
		float L_63 = __this->___ZoomDistMax_13;
		float L_64 = __this->___ZoomDistMin_12;
		float L_65;
		L_65 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_61, L_62))/((float)il2cpp_codegen_subtract(L_63, L_64)))), NULL);
		float L_66;
		L_66 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_59, L_60, L_65, NULL);
		V_12 = L_66;
		// panAcceleration.x = -mouseDelta.x * str;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&__this->___panAcceleration_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = (&__this->___mouseDelta_17);
		float L_69 = L_68->___x_2;
		float L_70 = V_12;
		L_67->___x_2 = ((float)il2cpp_codegen_multiply(((-L_69)), L_70));
		// panAcceleration.y = -mouseDelta.y * str;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_71 = (&__this->___panAcceleration_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = (&__this->___mouseDelta_17);
		float L_73 = L_72->___y_3;
		float L_74 = V_12;
		L_71->___y_3 = ((float)il2cpp_codegen_multiply(((-L_73)), L_74));
	}

IL_0228:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_75;
		L_75 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		V_13 = L_75;
		bool L_76 = V_13;
		if (!L_76)
		{
			goto IL_023e;
		}
	}
	{
		// ResetView();
		TCP2_Demo_Camera_ResetView_mC8F7614A51119FFA3DA106C260B5F228FAFFBEC4(__this, NULL);
	}

IL_023e:
	{
		// var angle = transform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_77, NULL);
		V_1 = L_78;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_1;
		float L_80 = L_79.___x_2;
		if ((!(((float)L_80) < ((float)(180.0f)))))
		{
			goto IL_0278;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_1;
		float L_82 = L_81.___x_2;
		if ((!(((float)L_82) >= ((float)(60.0f)))))
		{
			goto IL_0278;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&__this->___orbitAcceleration_18);
		float L_84 = L_83->___y_3;
		G_B37_0 = ((((float)L_84) > ((float)(0.0f)))? 1 : 0);
		goto IL_0279;
	}

IL_0278:
	{
		G_B37_0 = 0;
	}

IL_0279:
	{
		V_14 = (bool)G_B37_0;
		bool L_85 = V_14;
		if (!L_85)
		{
			goto IL_028f;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_86 = (&__this->___orbitAcceleration_18);
		L_86->___y_3 = (0.0f);
	}

IL_028f:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_1;
		float L_88 = L_87.___x_2;
		if ((!(((float)L_88) > ((float)(180.0f)))))
		{
			goto IL_02bd;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_1;
		float L_90 = L_89.___x_2;
		if ((!(((float)L_90) <= ((float)(300.0f)))))
		{
			goto IL_02bd;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = (&__this->___orbitAcceleration_18);
		float L_92 = L_91->___y_3;
		G_B43_0 = ((((float)L_92) < ((float)(0.0f)))? 1 : 0);
		goto IL_02be;
	}

IL_02bd:
	{
		G_B43_0 = 0;
	}

IL_02be:
	{
		V_15 = (bool)G_B43_0;
		bool L_93 = V_15;
		if (!L_93)
		{
			goto IL_02d4;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&__this->___orbitAcceleration_18);
		L_94->___y_3 = (0.0f);
	}

IL_02d4:
	{
		// Vector3 pivotPlusOffset = Pivot.position + pivotOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95 = __this->___Pivot_4;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = __this->___pivotOffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_96, L_97, NULL);
		V_2 = L_98;
		// transform.RotateAround(pivotPlusOffset, transform.right, orbitAcceleration.y * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = (&__this->___orbitAcceleration_18);
		float L_104 = L_103->___y_3;
		float L_105;
		L_105 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_99);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_99, L_100, L_102, ((float)il2cpp_codegen_multiply(L_104, L_105)), NULL);
		// transform.RotateAround(pivotPlusOffset, Vector3.up, orbitAcceleration.x * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106;
		L_106 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_109 = (&__this->___orbitAcceleration_18);
		float L_110 = L_109->___x_2;
		float L_111;
		L_111 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_106);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_106, L_107, L_108, ((float)il2cpp_codegen_multiply(L_110, L_111)), NULL);
		// pivotOffset += transform.TransformDirection(panAcceleration) * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = __this->___pivotOffset_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = __this->___panAcceleration_19;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_113, L_114, NULL);
		float L_116;
		L_116 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_115, L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_112, L_117, NULL);
		__this->___pivotOffset_5 = L_118;
		// transform.Translate(panAcceleration * Time.deltaTime, transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119;
		L_119 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = __this->___panAcceleration_19;
		float L_121;
		L_121 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_120, L_121, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_119);
		Transform_Translate_m282D807F4F1D1EEE51A8B91AC1DE5EB4F5296CED(L_119, L_122, L_123, NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_124;
		L_124 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_3 = L_124;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_125 = __this->___zoomAcceleration_21;
		float L_126 = V_3;
		float L_127 = __this->___ZoomStrg_10;
		__this->___zoomAcceleration_21 = ((float)il2cpp_codegen_add(L_125, ((float)il2cpp_codegen_multiply(L_126, L_127))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_128 = __this->___zoomAcceleration_21;
		float L_129 = __this->___ZoomClamp_11;
		float L_130 = __this->___ZoomClamp_11;
		float L_131;
		L_131 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_128, ((-L_129)), L_130, NULL);
		__this->___zoomAcceleration_21 = L_131;
		// zoomDistance = Vector3.Distance(transform.position, pivotPlusOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_132);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_132, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = V_2;
		float L_135;
		L_135 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_133, L_134, NULL);
		__this->___zoomDistance_22 = L_135;
		// if ((zoomDistance >= ZoomDistMin && zoomAcceleration > 0) || (zoomDistance <= ZoomDistMax && zoomAcceleration < 0))
		float L_136 = __this->___zoomDistance_22;
		float L_137 = __this->___ZoomDistMin_12;
		if ((!(((float)L_136) >= ((float)L_137))))
		{
			goto IL_03f5;
		}
	}
	{
		float L_138 = __this->___zoomAcceleration_21;
		if ((((float)L_138) > ((float)(0.0f))))
		{
			goto IL_0415;
		}
	}

IL_03f5:
	{
		float L_139 = __this->___zoomDistance_22;
		float L_140 = __this->___ZoomDistMax_13;
		if ((!(((float)L_139) <= ((float)L_140))))
		{
			goto IL_0412;
		}
	}
	{
		float L_141 = __this->___zoomAcceleration_21;
		G_B50_0 = ((((float)L_141) < ((float)(0.0f)))? 1 : 0);
		goto IL_0413;
	}

IL_0412:
	{
		G_B50_0 = 0;
	}

IL_0413:
	{
		G_B52_0 = G_B50_0;
		goto IL_0416;
	}

IL_0415:
	{
		G_B52_0 = 1;
	}

IL_0416:
	{
		V_16 = (bool)G_B52_0;
		bool L_142 = V_16;
		if (!L_142)
		{
			goto IL_0445;
		}
	}
	{
		// transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144;
		L_144 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_145 = __this->___zoomAcceleration_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_144, L_145, NULL);
		float L_147;
		L_147 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_146, L_147, NULL);
		NullCheck(L_143);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_143, L_148, 1, NULL);
	}

IL_0445:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = __this->___orbitAcceleration_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_151 = __this->___Decceleration_14;
		float L_152;
		L_152 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_149, L_150, ((float)il2cpp_codegen_multiply(L_151, L_152)), NULL);
		__this->___orbitAcceleration_18 = L_153;
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = __this->___panAcceleration_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_156 = __this->___Decceleration_14;
		float L_157;
		L_157 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_154, L_155, ((float)il2cpp_codegen_multiply(L_156, L_157)), NULL);
		__this->___panAcceleration_19 = L_158;
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_159 = __this->___zoomAcceleration_21;
		float L_160 = __this->___Decceleration_14;
		float L_161;
		L_161 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_162;
		L_162 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_159, (0.0f), ((float)il2cpp_codegen_multiply(L_160, L_161)), NULL);
		__this->___zoomAcceleration_21 = L_162;
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = __this->___moveAcceleration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_165 = __this->___Decceleration_14;
		float L_166;
		L_166 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_163, L_164, ((float)il2cpp_codegen_multiply(L_165, L_166)), NULL);
		__this->___moveAcceleration_20 = L_167;
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_17 = L_168;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_ResetView_mC8F7614A51119FFA3DA106C260B5F228FAFFBEC4 (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) 
{
	{
		// moveAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___moveAcceleration_20 = L_0;
		// orbitAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___orbitAcceleration_18 = L_1;
		// panAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___panAcceleration_19 = L_2;
		// pivotOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___pivotOffset_5 = L_3;
		// zoomAcceleration = 0f;
		__this->___zoomAcceleration_21 = (0.0f);
		// transform.position = mResetCamPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___mResetCamPos_25;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// transform.eulerAngles = mResetCamRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___mResetCamRot_27;
		NullCheck(L_6);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_6, L_7, NULL);
		// Pivot.position = mResetPivotPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___Pivot_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___mResetPivotPos_26;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// Pivot.eulerAngles = mResetPivotRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___Pivot_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___mResetPivotRot_28;
		NullCheck(L_10);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera__ctor_mD04CF39BBB59E4BE650E48041DFF845C539CBFAD (TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* __this, const RuntimeMethod* method) 
{
	{
		// public float OrbitStrg = 3f;
		__this->___OrbitStrg_6 = (3.0f);
		// public float OrbitClamp = 50f;
		__this->___OrbitClamp_7 = (50.0f);
		// public float PanStrgMin = 0.1f;
		__this->___PanStrgMin_8 = (0.100000001f);
		// public float PanStrgMax = 0.5f;
		__this->___PanStrgMax_9 = (0.5f);
		// public float ZoomStrg = 40f;
		__this->___ZoomStrg_10 = (40.0f);
		// public float ZoomClamp = 30f;
		__this->___ZoomClamp_11 = (30.0f);
		// public float ZoomDistMin = 1f;
		__this->___ZoomDistMin_12 = (1.0f);
		// public float ZoomDistMax = 2f;
		__this->___ZoomDistMax_13 = (2.0f);
		// public float Decceleration = 8f;
		__this->___Decceleration_14 = (8.0f);
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
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotateLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m3A32B1CC6DE916DB9BD1716B3FAF44D0DAA1DF43 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = __this->___U3CrotateLightsU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotateLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4B2F94CFC770E4CAF8A59FDCC8424254648B7050 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CrotateLightsU3Ek__BackingField_24 = L_0;
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotatePointLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_mAE55D513CB5B0105AC0384264BD2427DA98EB75F (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = __this->___U3CrotatePointLightsU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotatePointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_m8CAB1BDBC35823CD2865B0DC31D31AA19DC4E1EB (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CrotatePointLightsU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_Awake_m05ABDCEE2044551D64C786468002A5CF545023C0 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// rotatePointLights = true;
		TCP2_Demo_Cat_set_rotatePointLights_m8CAB1BDBC35823CD2865B0DC31D31AA19DC4E1EB_inline(__this, (bool)1, NULL);
		// rotateLights = false;
		TCP2_Demo_Cat_set_rotateLights_m4B2F94CFC770E4CAF8A59FDCC8424254648B7050_inline(__this, (bool)0, NULL);
		// SetAmbience(0);
		TCP2_Demo_Cat_SetAmbience_m397FAFA3DFB308432E9DBA3D8BDEB775BE0A3E75(__this, 0, NULL);
		// SetStyle(0);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 0, NULL);
		// SetCat(true);
		TCP2_Demo_Cat_SetCat_mEEF87FCB5B591B11542C0F761BB6C55ECE64F3EA(__this, (bool)1, NULL);
		// SetFlat(false);
		TCP2_Demo_Cat_SetFlat_mE5C6D1579A1B929713DBEED2E6FE482F9F90885C(__this, (bool)0, NULL);
		// SetAnimation(0);
		TCP2_Demo_Cat_SetAnimation_mB10EF283487405C5CF920562B7AF074B932BCC71(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_Update_mF8B01AC1CD595A65A70EF5E400179F86CE29EB2E (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_1 = NULL;
	int32_t V_2 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B42_0 = 0;
	{
		// if (rotateLights)
		bool L_0;
		L_0 = TCP2_Demo_Cat_get_rotateLights_m3A32B1CC6DE916DB9BD1716B3FAF44D0DAA1DF43_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// foreach (var l in dirLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_2 = __this->___dirLights_21;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		// foreach (var l in dirLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// l.transform.Rotate(Vector3.up * Time.deltaTime * -30f, Space.World);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = V_3;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (-30.0f), NULL);
		NullCheck(L_8);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_8, L_12, 0, NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0045:
	{
		// foreach (var l in dirLights)
		int32_t L_14 = V_2;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0017;
		}
	}

IL_004b:
	{
		// if (rotatePointLights)
		bool L_16;
		L_16 = TCP2_Demo_Cat_get_rotatePointLights_mAE55D513CB5B0105AC0384264BD2427DA98EB75F_inline(__this, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// rotatingPointLights.transform.Rotate(Vector3.up * 50f * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___rotatingPointLights_23;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (50.0f), NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		NullCheck(L_19);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_19, L_23, 0, NULL);
	}

IL_0082:
	{
		// if (Input.GetKeyDown(KeyCode.Tab))
		bool L_24;
		L_24 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)9), NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00e8;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
		bool L_26;
		L_26 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_26)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_27;
		L_27 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		G_B10_0 = ((int32_t)(L_27));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B10_0 = 1;
	}

IL_00a9:
	{
		V_6 = (bool)G_B10_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00cc;
		}
	}
	{
		// SetStyle(--style);
		int32_t L_29 = __this->___style_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		int32_t L_30 = V_7;
		__this->___style_7 = L_30;
		int32_t L_31 = V_7;
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, L_31, NULL);
		goto IL_00e7;
	}

IL_00cc:
	{
		// SetStyle(++style);
		int32_t L_32 = __this->___style_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_7;
		__this->___style_7 = L_33;
		int32_t L_34 = V_7;
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, L_34, NULL);
	}

IL_00e7:
	{
	}

IL_00e8:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1))
		bool L_35;
		L_35 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (L_35)
		{
			goto IL_00fd;
		}
	}
	{
		bool L_36;
		L_36 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)257), NULL);
		G_B17_0 = ((int32_t)(L_36));
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B17_0 = 1;
	}

IL_00fe:
	{
		V_8 = (bool)G_B17_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_010e;
		}
	}
	{
		// SetStyle(0);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 0, NULL);
	}

IL_010e:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Keypad2))
		bool L_38;
		L_38 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (L_38)
		{
			goto IL_0123;
		}
	}
	{
		bool L_39;
		L_39 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)258), NULL);
		G_B22_0 = ((int32_t)(L_39));
		goto IL_0124;
	}

IL_0123:
	{
		G_B22_0 = 1;
	}

IL_0124:
	{
		V_9 = (bool)G_B22_0;
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_0134;
		}
	}
	{
		// SetStyle(1);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 1, NULL);
	}

IL_0134:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3) || Input.GetKeyDown(KeyCode.Keypad3))
		bool L_41;
		L_41 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (L_41)
		{
			goto IL_0149;
		}
	}
	{
		bool L_42;
		L_42 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)259), NULL);
		G_B27_0 = ((int32_t)(L_42));
		goto IL_014a;
	}

IL_0149:
	{
		G_B27_0 = 1;
	}

IL_014a:
	{
		V_10 = (bool)G_B27_0;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_015a;
		}
	}
	{
		// SetStyle(2);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 2, NULL);
	}

IL_015a:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4) || Input.GetKeyDown(KeyCode.Keypad4))
		bool L_44;
		L_44 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (L_44)
		{
			goto IL_016f;
		}
	}
	{
		bool L_45;
		L_45 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)260), NULL);
		G_B32_0 = ((int32_t)(L_45));
		goto IL_0170;
	}

IL_016f:
	{
		G_B32_0 = 1;
	}

IL_0170:
	{
		V_11 = (bool)G_B32_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0180;
		}
	}
	{
		// SetStyle(3);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 3, NULL);
	}

IL_0180:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5) || Input.GetKeyDown(KeyCode.Keypad5))
		bool L_47;
		L_47 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)53), NULL);
		if (L_47)
		{
			goto IL_0195;
		}
	}
	{
		bool L_48;
		L_48 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)261), NULL);
		G_B37_0 = ((int32_t)(L_48));
		goto IL_0196;
	}

IL_0195:
	{
		G_B37_0 = 1;
	}

IL_0196:
	{
		V_12 = (bool)G_B37_0;
		bool L_49 = V_12;
		if (!L_49)
		{
			goto IL_01a6;
		}
	}
	{
		// SetStyle(4);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 4, NULL);
	}

IL_01a6:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha6) || Input.GetKeyDown(KeyCode.Keypad6))
		bool L_50;
		L_50 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)54), NULL);
		if (L_50)
		{
			goto IL_01bb;
		}
	}
	{
		bool L_51;
		L_51 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)262), NULL);
		G_B42_0 = ((int32_t)(L_51));
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B42_0 = 1;
	}

IL_01bc:
	{
		V_13 = (bool)G_B42_0;
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_01cc;
		}
	}
	{
		// SetStyle(5);
		TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184(__this, 5, NULL);
	}

IL_01cc:
	{
		// if (Input.GetKeyDown(KeyCode.H))
		bool L_53;
		L_53 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)104), NULL);
		V_14 = L_53;
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01f5;
		}
	}
	{
		// canvas.enabled = !canvas.enabled;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_55 = __this->___canvas_31;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_56 = __this->___canvas_31;
		NullCheck(L_56);
		bool L_57;
		L_57 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_56, NULL);
		NullCheck(L_55);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_55, (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_01f5:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAmbience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAmbience_m397FAFA3DFB308432E9DBA3D8BDEB775BE0A3E75 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* V_0 = NULL;
	AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* V_1 = NULL;
	int32_t V_2 = 0;
	Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* V_3 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_7 = NULL;
	int32_t V_8 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	int32_t V_10 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B12_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B13_1 = NULL;
	{
		// foreach (var a in ambiences)
		AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* L_0 = __this->___ambiences_4;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0041;
	}

IL_000d:
	{
		// foreach (var a in ambiences)
		AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// foreach (var g in a.activate)
		Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* L_5 = V_3;
		NullCheck(L_5);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = L_5->___activate_1;
		V_4 = L_6;
		V_5 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		// foreach (var g in a.activate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		// g.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_6;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0035:
	{
		// foreach (var g in a.activate)
		int32_t L_13 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0041:
	{
		// foreach (var a in ambiences)
		int32_t L_16 = V_2;
		AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// amb = index % ambiences.Length;
		int32_t L_18 = ___index0;
		AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* L_19 = __this->___ambiences_4;
		NullCheck(L_19);
		__this->___amb_5 = ((int32_t)(L_18%((int32_t)(((RuntimeArray*)L_19)->max_length))));
		// var current = ambiences[amb];
		AmbienceU5BU5D_t98DA0D1568A2E5EEE477C2E4EBF9812CBEB37976* L_20 = __this->___ambiences_4;
		int32_t L_21 = __this->___amb_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_0 = L_23;
		// foreach (var g in current.activate)
		Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* L_24 = V_0;
		NullCheck(L_24);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = L_24->___activate_1;
		V_7 = L_25;
		V_8 = 0;
		goto IL_0089;
	}

IL_0073:
	{
		// foreach (var g in current.activate)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		// g.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_9;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		int32_t L_31 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0089:
	{
		// foreach (var g in current.activate)
		int32_t L_32 = V_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = V_7;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0073;
		}
	}
	{
		// RenderSettings.skybox = current.skybox;
		Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* L_34 = V_0;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = L_34->___skybox_2;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_35, NULL);
		// DynamicGI.UpdateEnvironment();
		DynamicGI_UpdateEnvironment_m70AC224196548AC7A7FD7E6182591F692E98CF06(NULL);
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		V_10 = 0;
		goto IL_00ea;
	}

IL_00a8:
	{
		// var colors = ambiencesButtons[i].colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_36 = __this->___ambiencesButtons_26;
		int32_t L_37 = V_10;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_40;
		L_40 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750(L_39, NULL);
		V_11 = L_40;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_41 = V_10;
		int32_t L_42 = ___index0;
		G_B11_0 = (&V_11);
		if ((((int32_t)L_41) == ((int32_t)L_42)))
		{
			G_B12_0 = (&V_11);
			goto IL_00c7;
		}
	}
	{
		G_B13_0 = (0.600000024f);
		G_B13_1 = G_B11_0;
		goto IL_00cc;
	}

IL_00c7:
	{
		G_B13_0 = (0.959999979f);
		G_B13_1 = G_B12_0;
	}

IL_00cc:
	{
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102(G_B13_1, G_B13_0, NULL);
		// ambiencesButtons[i].colors = colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_43 = __this->___ambiencesButtons_26;
		int32_t L_44 = V_10;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_47 = V_11;
		NullCheck(L_46);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_46, L_47, NULL);
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		int32_t L_48 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00ea:
	{
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		int32_t L_49 = V_10;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_50 = __this->___ambiencesButtons_26;
		NullCheck(L_50);
		V_12 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))? 1 : 0);
		bool L_51 = V_12;
		if (L_51)
		{
			goto IL_00a8;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetStyle_m16AB7E5F7AE90AF427A7505E8A7EC16CE4AC8184 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04* V_3 = NULL;
	int32_t V_4 = 0;
	CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* V_5 = NULL;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_6 = NULL;
	int32_t V_7 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_8 = NULL;
	int32_t V_9 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B13_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B12_0 = NULL;
	float G_B14_0 = 0.0f;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B14_1 = NULL;
	{
		// if (index < 0)
		int32_t L_0 = ___index0;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// index = styles.Length-1;
		ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2* L_2 = __this->___styles_6;
		NullCheck(L_2);
		___index0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0015:
	{
		// if (index >= styles.Length)
		int32_t L_3 = ___index0;
		ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2* L_4 = __this->___styles_6;
		NullCheck(L_4);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// index = 0;
		___index0 = 0;
	}

IL_002a:
	{
		// style = index;
		int32_t L_6 = ___index0;
		__this->___style_7 = L_6;
		// var s = styles[style];
		ShaderStyleU5BU5D_t5DFD75D6D7265655A2F249E1EFE988E0BF169BC2* L_7 = __this->___styles_6;
		int32_t L_8 = __this->___style_7;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		// foreach (var setting in s.settings)
		ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* L_11 = V_0;
		NullCheck(L_11);
		CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04* L_12 = L_11->___settings_1;
		V_3 = L_12;
		V_4 = 0;
		goto IL_008b;
	}

IL_004c:
	{
		// foreach (var setting in s.settings)
		CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// foreach (var r in setting.renderers)
		CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* L_17 = V_5;
		NullCheck(L_17);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_18 = L_17->___renderers_1;
		V_6 = L_18;
		V_7 = 0;
		goto IL_007d;
	}

IL_0061:
	{
		// foreach (var r in setting.renderers)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// r.sharedMaterial = setting.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23 = V_8;
		CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* L_24 = V_5;
		NullCheck(L_24);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = L_24->___material_0;
		NullCheck(L_23);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_23, L_25, NULL);
		int32_t L_26 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007d:
	{
		// foreach (var r in setting.renderers)
		int32_t L_27 = V_7;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_28 = V_6;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008b:
	{
		// foreach (var setting in s.settings)
		int32_t L_30 = V_4;
		CharacterSettingsU5BU5D_t6C657421F1F0A87FE7B8370928ADFF1B45D69B04* L_31 = V_3;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// for (var i = 0; i < stylesButtons.Length; i++)
		V_9 = 0;
		goto IL_00d9;
	}

IL_0097:
	{
		// var colors = stylesButtons[i].colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_32 = __this->___stylesButtons_27;
		int32_t L_33 = V_9;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_36;
		L_36 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750(L_35, NULL);
		V_10 = L_36;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_37 = V_9;
		int32_t L_38 = ___index0;
		G_B12_0 = (&V_10);
		if ((((int32_t)L_37) == ((int32_t)L_38)))
		{
			G_B13_0 = (&V_10);
			goto IL_00b6;
		}
	}
	{
		G_B14_0 = (0.600000024f);
		G_B14_1 = G_B12_0;
		goto IL_00bb;
	}

IL_00b6:
	{
		G_B14_0 = (0.959999979f);
		G_B14_1 = G_B13_0;
	}

IL_00bb:
	{
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102(G_B14_1, G_B14_0, NULL);
		// stylesButtons[i].colors = colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_39 = __this->___stylesButtons_27;
		int32_t L_40 = V_9;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_43 = V_10;
		NullCheck(L_42);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_42, L_43, NULL);
		// for (var i = 0; i < stylesButtons.Length; i++)
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00d9:
	{
		// for (var i = 0; i < stylesButtons.Length; i++)
		int32_t L_45 = V_9;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_46 = __this->___stylesButtons_27;
		NullCheck(L_46);
		V_11 = (bool)((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_0097;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetFlat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetFlat_mE5C6D1579A1B929713DBEED2E6FE482F9F90885C (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___flat0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_3 = NULL;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_4 = NULL;
	int32_t V_5 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B3_0 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B4_1 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B7_0 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B8_1 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B14_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B11_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B13_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B12_0 = NULL;
	float G_B15_0 = 0.0f;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B15_1 = NULL;
	{
		// bool isCat = !unityChanCopyright.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___unityChanCopyright_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if (isCat)
		bool L_2 = V_0;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// var anim = catAnimation[flat ? 0 : 1];
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_4 = __this->___catAnimation_10;
		bool L_5 = ___flat0;
		G_B2_0 = L_4;
		if (L_5)
		{
			G_B3_0 = L_4;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		int32_t L_6 = G_B4_0;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_7 = (G_B4_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// currentTime = anim[anim.clip.name].normalizedTime;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_8 = V_3;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_9 = V_3;
		NullCheck(L_9);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10;
		L_10 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_8);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_12;
		L_12 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_8, L_11, NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3(L_12, NULL);
		V_1 = L_13;
		goto IL_006a;
	}

IL_003f:
	{
		// var anim = unityChanAnimation[flat ? 0 : 1];
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_14 = __this->___unityChanAnimation_11;
		bool L_15 = ___flat0;
		G_B6_0 = L_14;
		if (L_15)
		{
			G_B7_0 = L_14;
			goto IL_004c;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004d:
	{
		NullCheck(G_B8_1);
		int32_t L_16 = G_B8_0;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_17 = (G_B8_1)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		// currentTime = anim[anim.clip.name].normalizedTime;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_18 = V_4;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_19 = V_4;
		NullCheck(L_19);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_20;
		L_20 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		NullCheck(L_18);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_22;
		L_22 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_18, L_21, NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = AnimationState_get_normalizedTime_m98D373BA809DD9486D7042CE236198C0C69007E3(L_22, NULL);
		V_1 = L_23;
	}

IL_006a:
	{
		// shadedGroup.SetActive(!flat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___shadedGroup_8;
		bool L_25 = ___flat0;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0), NULL);
		// flatGroup.SetActive(flat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___flatGroup_9;
		bool L_27 = ___flat0;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, L_27, NULL);
		// PlayCurrentAnimation(currentTime);
		float L_28 = V_1;
		TCP2_Demo_Cat_PlayCurrentAnimation_mC37138636FD93A65612133FCEB0F04C587209BA3(__this, L_28, NULL);
		// for (var i = 0; i < textureButtons.Length; i++)
		V_5 = 0;
		goto IL_00e1;
	}

IL_0094:
	{
		// var colors = textureButtons[i].colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_29 = __this->___textureButtons_29;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_33;
		L_33 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750(L_32, NULL);
		V_6 = L_33;
		// colors.colorMultiplier = (i == 1 && flat) || (i == 0 && !flat) ? 0.96f : 0.6f;
		int32_t L_34 = V_5;
		bool L_35 = ___flat0;
		G_B11_0 = (&V_6);
		if (((int32_t)(((((int32_t)L_34) == ((int32_t)1))? 1 : 0)&(int32_t)L_35)))
		{
			G_B14_0 = (&V_6);
			goto IL_00be;
		}
	}
	{
		int32_t L_36 = V_5;
		G_B12_0 = G_B11_0;
		if (L_36)
		{
			G_B13_0 = G_B11_0;
			goto IL_00b7;
		}
	}
	{
		bool L_37 = ___flat0;
		G_B13_0 = G_B12_0;
		if (!L_37)
		{
			G_B14_0 = G_B12_0;
			goto IL_00be;
		}
	}

IL_00b7:
	{
		G_B15_0 = (0.600000024f);
		G_B15_1 = G_B13_0;
		goto IL_00c3;
	}

IL_00be:
	{
		G_B15_0 = (0.959999979f);
		G_B15_1 = G_B14_0;
	}

IL_00c3:
	{
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102(G_B15_1, G_B15_0, NULL);
		// textureButtons[i].colors = colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_38 = __this->___textureButtons_29;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_42 = V_6;
		NullCheck(L_41);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_41, L_42, NULL);
		// for (var i = 0; i < textureButtons.Length; i++)
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e1:
	{
		// for (var i = 0; i < textureButtons.Length; i++)
		int32_t L_44 = V_5;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_45 = __this->___textureButtons_29;
		NullCheck(L_45);
		V_7 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))? 1 : 0);
		bool L_46 = V_7;
		if (L_46)
		{
			goto IL_0094;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetCat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetCat_mEEF87FCB5B591B11542C0F761BB6C55ECE64F3EA (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___cat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B15_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B12_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B14_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B13_0 = NULL;
	float G_B16_0 = 0.0f;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B16_1 = NULL;
	{
		// foreach (var c in cats)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___cats_12;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		// foreach (var c in cats)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// c.SetActive(cat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		bool L_6 = ___cat0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		// foreach (var c in cats)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// foreach (var u in unityChans)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___unityChans_13;
		V_3 = L_10;
		V_4 = 0;
		goto IL_0048;
	}

IL_0030:
	{
		// foreach (var u in unityChans)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// u.SetActive(!cat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_5;
		bool L_16 = ___cat0;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		// foreach (var u in unityChans)
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (unityChanDirLight != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_20 = __this->___unityChanDirLight_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// unityChanDirLight.gameObject.SetActive(!cat);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = __this->___unityChanDirLight_16;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		bool L_25 = ___cat0;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0078:
	{
		// if (catDirLight != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = __this->___catDirLight_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		// catDirLight.gameObject.SetActive(cat);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_29 = __this->___catDirLight_15;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		bool L_31 = ___cat0;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, L_31, NULL);
	}

IL_009e:
	{
		// unityChanCopyright.SetActive(!cat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___unityChanCopyright_14;
		bool L_33 = ___cat0;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0), NULL);
		// PlayCurrentAnimation();
		TCP2_Demo_Cat_PlayCurrentAnimation_mC37138636FD93A65612133FCEB0F04C587209BA3(__this, (-1.0f), NULL);
		// for (var i = 0; i < characterButtons.Length; i++)
		V_8 = 0;
		goto IL_010d;
	}

IL_00bf:
	{
		// var colors = characterButtons[i].colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_34 = __this->___characterButtons_28;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_38;
		L_38 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750(L_37, NULL);
		V_9 = L_38;
		// colors.colorMultiplier = (i == 0 && cat) || (i == 1 && !cat) ? 0.96f : 0.6f;
		int32_t L_39 = V_8;
		bool L_40 = ___cat0;
		G_B12_0 = (&V_9);
		if (((int32_t)(((((int32_t)L_39) == ((int32_t)0))? 1 : 0)&(int32_t)L_40)))
		{
			G_B15_0 = (&V_9);
			goto IL_00ea;
		}
	}
	{
		int32_t L_41 = V_8;
		G_B13_0 = G_B12_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			G_B14_0 = G_B12_0;
			goto IL_00e3;
		}
	}
	{
		bool L_42 = ___cat0;
		G_B14_0 = G_B13_0;
		if (!L_42)
		{
			G_B15_0 = G_B13_0;
			goto IL_00ea;
		}
	}

IL_00e3:
	{
		G_B16_0 = (0.600000024f);
		G_B16_1 = G_B14_0;
		goto IL_00ef;
	}

IL_00ea:
	{
		G_B16_0 = (0.959999979f);
		G_B16_1 = G_B15_0;
	}

IL_00ef:
	{
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102(G_B16_1, G_B16_0, NULL);
		// characterButtons[i].colors = colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_43 = __this->___characterButtons_28;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_47 = V_9;
		NullCheck(L_46);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_46, L_47, NULL);
		// for (var i = 0; i < characterButtons.Length; i++)
		int32_t L_48 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_010d:
	{
		// for (var i = 0; i < characterButtons.Length; i++)
		int32_t L_49 = V_8;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_50 = __this->___characterButtons_28;
		NullCheck(L_50);
		V_10 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))? 1 : 0);
		bool L_51 = V_10;
		if (L_51)
		{
			goto IL_00bf;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetLightShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetLightShadows_m5E18AE338416D93893C3A5A33B8C03DD1E4A9DBA (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___on0, const RuntimeMethod* method) 
{
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_0 = NULL;
	int32_t V_1 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_2 = NULL;
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_3 = NULL;
	int32_t V_4 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_5 = NULL;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B3_0 = NULL;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B4_1 = NULL;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B9_0 = NULL;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* G_B10_1 = NULL;
	{
		// foreach (var l in dirLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = __this->___dirLights_21;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000d:
	{
		// foreach (var l in dirLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// l.shadows = on ? LightShadows.Soft : LightShadows.None;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5 = V_2;
		bool L_6 = ___on0;
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_0018;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 2;
		G_B4_1 = G_B3_0;
	}

IL_0019:
	{
		NullCheck(G_B4_1);
		Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB(G_B4_1, G_B4_0, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		// foreach (var l in dirLights)
		int32_t L_8 = V_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// foreach (var l in otherLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_10 = __this->___otherLights_22;
		V_3 = L_10;
		V_4 = 0;
		goto IL_0051;
	}

IL_0036:
	{
		// foreach (var l in otherLights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// l.shadows = on ? LightShadows.Soft : LightShadows.None;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_5;
		bool L_16 = ___on0;
		G_B8_0 = L_15;
		if (L_16)
		{
			G_B9_0 = L_15;
			goto IL_0044;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B10_0 = 2;
		G_B10_1 = G_B9_0;
	}

IL_0045:
	{
		NullCheck(G_B10_1);
		Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB(G_B10_1, G_B10_0, NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0051:
	{
		// foreach (var l in otherLights)
		int32_t L_18 = V_4;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimation_mB10EF283487405C5CF920562B7AF074B932BCC71 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* V_2 = NULL;
	int32_t V_3 = 0;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* V_7 = NULL;
	int32_t V_8 = 0;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_9 = NULL;
	int32_t V_10 = 0;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B17_0 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B16_0 = NULL;
	float G_B18_0 = 0.0f;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* G_B18_1 = NULL;
	{
		// catAnim = index;
		int32_t L_0 = ___index0;
		__this->___catAnim_18 = L_0;
		// if (catAnim >= catAnimations.Length)
		int32_t L_1 = __this->___catAnim_18;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_2 = __this->___catAnimations_17;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// catAnim = 0;
		__this->___catAnim_18 = 0;
	}

IL_0026:
	{
		// if (catAnim < 0)
		int32_t L_4 = __this->___catAnim_18;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// catAnim = catAnimations.Length-1;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_6 = __this->___catAnimations_17;
		NullCheck(L_6);
		__this->___catAnim_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
	}

IL_0043:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_7 = __this->___catAnimation_10;
		V_2 = L_7;
		V_3 = 0;
		goto IL_006a;
	}

IL_004f:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// anim.clip = catAnimations[index];
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_12 = V_4;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_13 = __this->___catAnimations_17;
		int32_t L_14 = ___index0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_12, L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006a:
	{
		// foreach (var anim in catAnimation)
		int32_t L_18 = V_3;
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_19 = V_2;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		// uchanAnim = index;
		int32_t L_20 = ___index0;
		__this->___uchanAnim_20 = L_20;
		// if (uchanAnim >= unityChanAnimations.Length)
		int32_t L_21 = __this->___uchanAnim_20;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_22 = __this->___unityChanAnimations_19;
		NullCheck(L_22);
		V_5 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// uchanAnim = 0;
		__this->___uchanAnim_20 = 0;
	}

IL_0097:
	{
		// if (uchanAnim < 0)
		int32_t L_24 = __this->___uchanAnim_20;
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		// uchanAnim = unityChanAnimations.Length-1;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_26 = __this->___unityChanAnimations_19;
		NullCheck(L_26);
		__this->___uchanAnim_20 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1));
	}

IL_00b6:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_27 = __this->___unityChanAnimation_11;
		V_7 = L_27;
		V_8 = 0;
		goto IL_00e3;
	}

IL_00c4:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_28 = V_7;
		int32_t L_29 = V_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_9 = L_31;
		// anim.clip = unityChanAnimations[index];
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_32 = V_9;
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_33 = __this->___unityChanAnimations_19;
		int32_t L_34 = ___index0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		Animation_set_clip_m631E1DE3F46E47782725C52E444CBB747EB83119(L_32, L_36, NULL);
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e3:
	{
		// foreach (var anim in unityChanAnimation)
		int32_t L_38 = V_8;
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_00c4;
		}
	}
	{
		// PlayCurrentAnimation();
		TCP2_Demo_Cat_PlayCurrentAnimation_mC37138636FD93A65612133FCEB0F04C587209BA3(__this, (-1.0f), NULL);
		// for (var i = 0; i < animationButtons.Length; i++)
		V_10 = 0;
		goto IL_013e;
	}

IL_00fc:
	{
		// var colors = animationButtons[i].colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_40 = __this->___animationButtons_30;
		int32_t L_41 = V_10;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_44;
		L_44 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750(L_43, NULL);
		V_11 = L_44;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_45 = V_10;
		int32_t L_46 = ___index0;
		G_B16_0 = (&V_11);
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			G_B17_0 = (&V_11);
			goto IL_011b;
		}
	}
	{
		G_B18_0 = (0.600000024f);
		G_B18_1 = G_B16_0;
		goto IL_0120;
	}

IL_011b:
	{
		G_B18_0 = (0.959999979f);
		G_B18_1 = G_B17_0;
	}

IL_0120:
	{
		ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102(G_B18_1, G_B18_0, NULL);
		// animationButtons[i].colors = colors;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_47 = __this->___animationButtons_30;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_51 = V_11;
		NullCheck(L_50);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_50, L_51, NULL);
		// for (var i = 0; i < animationButtons.Length; i++)
		int32_t L_52 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013e:
	{
		// for (var i = 0; i < animationButtons.Length; i++)
		int32_t L_53 = V_10;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_54 = __this->___animationButtons_30;
		NullCheck(L_54);
		V_12 = (bool)((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))? 1 : 0);
		bool L_55 = V_12;
		if (L_55)
		{
			goto IL_00fc;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimationSpeed_mE6D2A9050BD9821B19FE265FEBFC7E0EDC693BCD (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// playingSpeed = speed;
		float L_0 = ___speed0;
		__this->___playingSpeed_33 = L_0;
		// UpdateAnimSpeed();
		TCP2_Demo_Cat_UpdateAnimSpeed_m29E412E2CFC17CBD9B84B5C8C59587EA82FA2578(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PauseUnpauseAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PauseUnpauseAnimation_m925FF5D515C6E3CC83442DDC0A653B21C1F9258A (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___play0, const RuntimeMethod* method) 
{
	{
		// animationPaused = !play;
		bool L_0 = ___play0;
		__this->___animationPaused_32 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// UpdateAnimSpeed();
		TCP2_Demo_Cat_UpdateAnimSpeed_m29E412E2CFC17CBD9B84B5C8C59587EA82FA2578(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::UpdateAnimSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_UpdateAnimSpeed_m29E412E2CFC17CBD9B84B5C8C59587EA82FA2578 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* V_0 = NULL;
	int32_t V_1 = 0;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* V_6 = NULL;
	int32_t V_7 = 0;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_10 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B5_0 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B6_1 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B19_0 = NULL;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B18_0 = NULL;
	float G_B20_0 = 0.0f;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* G_B20_1 = NULL;
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_0 = __this->___catAnimation_10;
		V_0 = L_0;
		V_1 = 0;
		goto IL_006c;
	}

IL_000d:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// foreach (AnimationState state in anim)
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_5 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6(L_5, NULL);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_3;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_5;
					if (!L_8)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_9 = V_5;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_001c_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_10 = V_3;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				V_4 = ((AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)CastclassSealed((RuntimeObject*)L_11, AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var));
				// state.speed = animationPaused ? 0 : playingSpeed;
				AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_12 = V_4;
				bool L_13 = __this->___animationPaused_32;
				G_B4_0 = L_12;
				if (L_13)
				{
					G_B5_0 = L_12;
					goto IL_003c_1;
				}
			}
			{
				float L_14 = __this->___playingSpeed_33;
				G_B6_0 = L_14;
				G_B6_1 = G_B4_0;
				goto IL_0041_1;
			}

IL_003c_1:
			{
				G_B6_0 = (0.0f);
				G_B6_1 = G_B5_0;
			}

IL_0041_1:
			{
				NullCheck(G_B6_1);
				AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(G_B6_1, G_B6_0, NULL);
			}

IL_0048_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_15 = V_3;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006c:
	{
		// foreach (var anim in catAnimation)
		int32_t L_18 = V_1;
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_20 = __this->___unityChanAnimation_11;
		V_6 = L_20;
		V_7 = 0;
		goto IL_00e9;
	}

IL_0080:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_21 = V_6;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		// foreach (AnimationState state in anim)
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_25 = V_8;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6(L_25, NULL);
		V_9 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cc:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_27 = V_9;
					V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_28 = V_5;
					if (!L_28)
					{
						goto IL_00e1;
					}
				}
				{
					RuntimeObject* L_29 = V_5;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c1_1;
			}

IL_0094_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_30 = V_9;
				NullCheck(L_30);
				RuntimeObject* L_31;
				L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				V_10 = ((AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)CastclassSealed((RuntimeObject*)L_31, AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE_il2cpp_TypeInfo_var));
				// state.speed = animationPaused ? 0 : playingSpeed;
				AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_32 = V_10;
				bool L_33 = __this->___animationPaused_32;
				G_B18_0 = L_32;
				if (L_33)
				{
					G_B19_0 = L_32;
					goto IL_00b5_1;
				}
			}
			{
				float L_34 = __this->___playingSpeed_33;
				G_B20_0 = L_34;
				G_B20_1 = G_B18_0;
				goto IL_00ba_1;
			}

IL_00b5_1:
			{
				G_B20_0 = (0.0f);
				G_B20_1 = G_B19_0;
			}

IL_00ba_1:
			{
				NullCheck(G_B20_1);
				AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D(G_B20_1, G_B20_0, NULL);
			}

IL_00c1_1:
			{
				// foreach (AnimationState state in anim)
				RuntimeObject* L_35 = V_9;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		int32_t L_37 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e9:
	{
		// foreach (var anim in unityChanAnimation)
		int32_t L_38 = V_7;
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_39 = V_6;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0080;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PlayCurrentAnimation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PlayCurrentAnimation_mC37138636FD93A65612133FCEB0F04C587209BA3 (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, float ___time0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_3 = NULL;
	bool V_4 = false;
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B3_0 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B4_1 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B9_0 = NULL;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* G_B10_1 = NULL;
	{
		// bool isCat = !unityChanCopyright.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___unityChanCopyright_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// bool isFlat = flatGroup.activeSelf;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___flatGroup_9;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		V_1 = L_3;
		// if (isCat)
		bool L_4 = V_0;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		// var anim = catAnimation[isFlat ? 1 : 0];
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_6 = __this->___catAnimation_10;
		bool L_7 = V_1;
		G_B2_0 = L_6;
		if (L_7)
		{
			G_B3_0 = L_6;
			goto IL_002e;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		int32_t L_8 = G_B4_0;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_9 = (G_B4_1)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// anim.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_10 = V_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_10, NULL);
		// if (time >= 0)
		float L_12 = ___time0;
		V_4 = (bool)((((int32_t)((!(((float)L_12) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_14 = V_3;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_15 = V_3;
		NullCheck(L_15);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_16;
		L_16 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		NullCheck(L_14);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_18;
		L_18 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_14, L_17, NULL);
		float L_19 = ___time0;
		NullCheck(L_18);
		AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085(L_18, L_19, NULL);
	}

IL_0063:
	{
		goto IL_00ef;
	}

IL_0069:
	{
		// var anim = unityChanAnimation[isFlat ? 1 : 0];
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_20 = __this->___unityChanAnimation_11;
		bool L_21 = V_1;
		G_B8_0 = L_20;
		if (L_21)
		{
			G_B9_0 = L_20;
			goto IL_0076;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0077;
	}

IL_0076:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0077:
	{
		NullCheck(G_B10_1);
		int32_t L_22 = G_B10_0;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_23 = (G_B10_1)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		// anim.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_24 = V_5;
		NullCheck(L_24);
		bool L_25;
		L_25 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_24, NULL);
		// if (time >= 0)
		float L_26 = ___time0;
		V_6 = (bool)((((int32_t)((!(((float)L_26) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00af;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_28 = V_5;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_29 = V_5;
		NullCheck(L_29);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_30;
		L_30 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_30, NULL);
		NullCheck(L_28);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_32;
		L_32 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_28, L_31, NULL);
		float L_33 = ___time0;
		NullCheck(L_32);
		AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085(L_32, L_33, NULL);
	}

IL_00af:
	{
		// anim = unityChanAnimation[2];
		AnimationU5BU5D_t6382B1877DAB154389024137A9A5A070F61C3F01* L_34 = __this->___unityChanAnimation_11;
		NullCheck(L_34);
		int32_t L_35 = 2;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_5 = L_36;
		// anim.Play();
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_37 = V_5;
		NullCheck(L_37);
		bool L_38;
		L_38 = Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E(L_37, NULL);
		// if (time >= 0)
		float L_39 = ___time0;
		V_7 = (bool)((((int32_t)((!(((float)L_39) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00ee;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_41 = V_5;
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_42 = V_5;
		NullCheck(L_42);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_43;
		L_43 = Animation_get_clip_m6041709D3BC8EA54D2D65B9560D2B4E51F78BD51(L_42, NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_43, NULL);
		NullCheck(L_41);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_45;
		L_45 = Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8(L_41, L_44, NULL);
		float L_46 = ___time0;
		NullCheck(L_45);
		AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085(L_45, L_46, NULL);
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat__ctor_m99BF76C49D02A71537FF4709BB795FAAE01CD63F (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// float playingSpeed = 1;
		__this->___playingSpeed_33 = (1.0f);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ambience__ctor_m5601C23B50F4280C794D44D7ED78AE71E7DE2F1B (Ambience_t3B2948CDBE7A0C227F580AE8D50F57658A5C5846* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderStyle__ctor_mBEFF2326F14897001F92CEE9909CEB837058E79A (ShaderStyle_t7403ABE192F1F70DB9BD1C1AB6F4157A784F7DC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSettings__ctor_mE4058A189A3E15DB0FA8FFF3152435316F8A2D6F (CharacterSettings_t3443D313E8D607E87857D27EA0FF6FF2B879FBAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_GammaLinear__ctor_m4E65CE4583DE6CBEE0A9F26C7C8AE1601E514E34 (TCP2_Demo_GammaLinear_t851FD6592E4C8B31AA8B814178B8FE424C591339* __this, const RuntimeMethod* method) 
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings__ctor_m8D3F5D85F351467D26C45EA94F3120FFC51A09AD (LightSettings_t2979EDF48BE5BB56D9C58C70779AD7A2BA72D21B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialSettings__ctor_m52F4DB8DA37A9F9A4D19A9EA764A8510AB05606B (MaterialSettings_tB03332CCD246CE5D99BB983806BEA2E96B53D22C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AnimateMaterial_Awake_m42FE1D1A0566C0CF7B12EA402860F251CB9AD00F (TCP2_Demo_AnimateMaterial_t52E1C4DBF1CBB11C4310D5F2C333D240E48AA041* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* V_1 = NULL;
	int32_t V_2 = 0;
	AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* V_3 = NULL;
	{
		// if (animatedProperties != null)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_0 = __this->___animatedProperties_5;
		V_0 = (bool)((!(((RuntimeObject*)(AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// foreach (var animatedProp in animatedProperties)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_2 = __this->___animatedProperties_5;
		V_1 = L_2;
		V_2 = 0;
		goto IL_002c;
	}

IL_001b:
	{
		// foreach (var animatedProp in animatedProperties)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// animatedProp.Init();
		AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* L_7 = V_3;
		NullCheck(L_7);
		AnimatedProperty_Init_mF9E052E9520363DDFE2799CC180A5C02E9AC8F48(L_7, NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		// foreach (var animatedProp in animatedProperties)
		int32_t L_9 = V_2;
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AnimateMaterial_Update_mB1520538DA9AD39A8077F97383B739BEEE94E9C4 (TCP2_Demo_AnimateMaterial_t52E1C4DBF1CBB11C4310D5F2C333D240E48AA041* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* V_1 = NULL;
	int32_t V_2 = 0;
	AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* V_3 = NULL;
	{
		// if (animatedProperties != null)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_0 = __this->___animatedProperties_5;
		V_0 = (bool)((!(((RuntimeObject*)(AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// foreach (var animatedProp in animatedProperties)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_2 = __this->___animatedProperties_5;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0032;
	}

IL_001b:
	{
		// foreach (var animatedProp in animatedProperties)
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// animatedProp.Update(material);
		AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* L_7 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_4;
		NullCheck(L_7);
		AnimatedProperty_Update_mEE0EC4A2D2F47211D74ECBA00487BCCCF3437668(L_7, L_8, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0032:
	{
		// foreach (var animatedProp in animatedProperties)
		int32_t L_10 = V_2;
		AnimatedPropertyU5BU5D_t62A4E770F9DDA2800712D931AEDD04C0DE6FB7BE* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AnimateMaterial__ctor_m316A06AED413AFBB4E9BF8E9DB06D565ACBA8529 (TCP2_Demo_AnimateMaterial_t52E1C4DBF1CBB11C4310D5F2C333D240E48AA041* __this, const RuntimeMethod* method) 
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedProperty_Init_mF9E052E9520363DDFE2799CC180A5C02E9AC8F48 (AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* __this, const RuntimeMethod* method) 
{
	{
		// this.propertyId = Shader.PropertyToID(this.Name);
		String_t* L_0 = __this->___Name_0;
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_0, NULL);
		__this->___propertyId_10 = L_1;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::Update(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedProperty_Update_mEE0EC4A2D2F47211D74ECBA00487BCCCF3437668 (AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float time = Curve.Evaluate((Time.time % Duration) / Duration);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___Curve_2;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___Duration_3;
		float L_3 = __this->___Duration_3;
		NullCheck(L_0);
		float L_4;
		L_4 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, ((float)((fmodf(L_1, L_2))/L_3)), NULL);
		V_0 = L_4;
		// switch (Type)
		int32_t L_5 = __this->___Type_1;
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_003d:
	{
		// material.SetFloat(propertyId, Mathf.Lerp(FloatFrom, FloatTo, time));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material0;
		int32_t L_9 = __this->___propertyId_10;
		float L_10 = __this->___FloatFrom_4;
		float L_11 = __this->___FloatTo_5;
		float L_12 = V_0;
		float L_13;
		L_13 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_10, L_11, L_12, NULL);
		NullCheck(L_8);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_8, L_9, L_13, NULL);
		// break;
		goto IL_00a0;
	}

IL_005e:
	{
		// material.SetColor(propertyId, Color.Lerp(ColorFrom, ColorTo, time));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___material0;
		int32_t L_15 = __this->___propertyId_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___ColorFrom_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___ColorTo_7;
		float L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_16, L_17, L_18, NULL);
		NullCheck(L_14);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_14, L_15, L_19, NULL);
		// break;
		goto IL_00a0;
	}

IL_007f:
	{
		// material.SetVector(propertyId, Vector4.Lerp(VectorFrom, VectorTo, time));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___material0;
		int32_t L_21 = __this->___propertyId_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22 = __this->___VectorFrom_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = __this->___VectorTo_9;
		float L_24 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline(L_22, L_23, L_24, NULL);
		NullCheck(L_20);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_20, L_21, L_25, NULL);
		// break;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_AnimateMaterial/AnimatedProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedProperty__ctor_m4CCD97DFFE803EC8559AF20811287A5FC5B0844C (AnimatedProperty_t31C29CBFB2284472B89A4C75644E5578B75E45B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "_Color";
		__this->___Name_0 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		// public MaterialPropertyType Type = MaterialPropertyType.Float;
		__this->___Type_1 = 0;
		// public AnimationCurve Curve = AnimationCurve.EaseInOut(0, 0, 1, 1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___Curve_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Curve_2), (void*)L_0);
		// public float Duration = 1;
		__this->___Duration_3 = (1.0f);
		// public float FloatFrom = 0;
		__this->___FloatFrom_4 = (0.0f);
		// public float FloatTo = 1;
		__this->___FloatTo_5 = (1.0f);
		// public Color ColorFrom = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___ColorFrom_6 = L_1;
		// public Color ColorTo = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___ColorTo_7 = L_2;
		// public Vector4 VectorFrom = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		__this->___VectorFrom_8 = L_3;
		// public Vector4 VectorTo = Vector4.one;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline(NULL);
		__this->___VectorTo_9 = L_4;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_Awake_m0114F7A0BC3A752F157A807E5F70D93757318C33 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m2FE3113150DFC873296E954F0EBB0E18E096AFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4_m0115856B274E21068EF2ED4716CC877052F07CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_mD4D087D7584A19E9ABD939B89C0496B778808A7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CAwakeU3Eb__0_m6278DEF27CF0FB9CC95E295C10FB722AB6CEA0D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* V_1 = NULL;
	int32_t V_2 = 0;
	TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* V_3 = NULL;
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_4 = NULL;
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_5 = NULL;
	int32_t V_6 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_7 = NULL;
	int32_t V_8 = 0;
	U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* V_9 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_11 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_12 = NULL;
	bool V_13 = false;
	{
		// contents = this.GetComponentsInChildren<TCP2_Demo_Interactive_Content>();
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_0;
		L_0 = Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4_m0115856B274E21068EF2ED4716CC877052F07CF6(__this, Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4_m0115856B274E21068EF2ED4716CC877052F07CF6_RuntimeMethod_var);
		__this->___contents_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents_20), (void*)L_0);
		// lightings = this.GetComponentsInChildren<TCP2_Demo_Interactive_Environment>(true);
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_1;
		L_1 = Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_mD4D087D7584A19E9ABD939B89C0496B778808A7C(__this, (bool)1, Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_mD4D087D7584A19E9ABD939B89C0496B778808A7C_RuntimeMethod_var);
		__this->___lightings_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightings_23), (void*)L_1);
		// if (QualitySettings.activeColorSpace == ColorSpace.Gamma)
		int32_t L_2;
		L_2 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0098;
		}
	}
	{
		// foreach (var lighting in lightings)
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_4 = __this->___lightings_23;
		V_1 = L_4;
		V_2 = 0;
		goto IL_007b;
	}

IL_0033:
	{
		// foreach (var lighting in lightings)
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// var lights = lighting.GetComponentsInChildren<Light>();
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_9 = V_3;
		NullCheck(L_9);
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_10;
		L_10 = Component_GetComponentsInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m2FE3113150DFC873296E954F0EBB0E18E096AFB5(L_9, Component_GetComponentsInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m2FE3113150DFC873296E954F0EBB0E18E096AFB5_RuntimeMethod_var);
		V_4 = L_10;
		// foreach (var light in lights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_11 = V_4;
		V_5 = L_11;
		V_6 = 0;
		goto IL_006e;
	}

IL_004a:
	{
		// foreach (var light in lights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = L_15;
		// light.intensity = light.intensity * 0.6f;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_7;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_7;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_17, NULL);
		NullCheck(L_16);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_16, ((float)il2cpp_codegen_multiply(L_18, (0.600000024f))), NULL);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006e:
	{
		// foreach (var light in lights)
		int32_t L_20 = V_6;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007b:
	{
		// foreach (var lighting in lightings)
		int32_t L_23 = V_2;
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		// RenderSettings.ambientIntensity = 0.6f;
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844((0.600000024f), NULL);
		// RenderSettings.reflectionIntensity = 0.6f;
		RenderSettings_set_reflectionIntensity_m70A9545EBFEE2100AEB017149034592AF23D224E((0.600000024f), NULL);
	}

IL_0098:
	{
		// envButtonColor = envButtonTemplate.GetComponent<Image>().color;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___envButtonTemplate_17;
		NullCheck(L_25);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26;
		L_26 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_25, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		NullCheck(L_26);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		__this->___envButtonColor_25 = L_27;
		// envButtons = new Button[lightings.Length];
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_28 = __this->___lightings_23;
		NullCheck(L_28);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_29 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)));
		__this->___envButtons_18 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___envButtons_18), (void*)L_29);
		// for (int i = 0; i < lightings.Length; i++)
		V_8 = 0;
		goto IL_01a6;
	}

IL_00c9:
	{
		U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* L_30 = (U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		U3CU3Ec__DisplayClass25_0__ctor_m4C6D5957E4AC4E2561D2241FFBFAC517E2E4B825(L_30, NULL);
		V_9 = L_30;
		U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* L_31 = V_9;
		NullCheck(L_31);
		L_31->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___U3CU3E4__this_1), (void*)__this);
		// var btnGo = GameObject.Instantiate(envButtonTemplate.gameObject);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = __this->___envButtonTemplate_17;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_10 = L_34;
		// btnGo.name = envButtonTemplate.name + "_" + i;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_10;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_36 = __this->___envButtonTemplate_17;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_36, NULL);
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_8), NULL);
		String_t* L_39;
		L_39 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_37, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_38, NULL);
		NullCheck(L_35);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_35, L_39, NULL);
		// btnGo.transform.SetParent(envButtonTemplate.transform.parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_10;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___envButtonTemplate_17;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_43, NULL);
		NullCheck(L_41);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_41, L_44, NULL);
		// btnGo.transform.SetSiblingIndex(envButtonTemplate.transform.GetSiblingIndex());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_10;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_47 = __this->___envButtonTemplate_17;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		int32_t L_49;
		L_49 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_48, NULL);
		NullCheck(L_46);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_46, L_49, NULL);
		// var text = btnGo.GetComponentInChildren<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_10;
		NullCheck(L_50);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51;
		L_51 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_50, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		V_11 = L_51;
		// text.text = lightings[i].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_52 = V_11;
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_53 = __this->___lightings_23;
		int32_t L_54 = V_8;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		String_t* L_57;
		L_57 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_56, NULL);
		NullCheck(L_52);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_57);
		// var btn = btnGo.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_10;
		NullCheck(L_58);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_59;
		L_59 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_58, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		V_12 = L_59;
		// int ci = i;
		U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* L_60 = V_9;
		int32_t L_61 = V_8;
		NullCheck(L_60);
		L_60->___ci_0 = L_61;
		// btn.onClick.AddListener(new UnityEngine.Events.UnityAction(() => { this.OnSelectLightingSettings(ci); }));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_62 = V_12;
		NullCheck(L_62);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_63;
		L_63 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_62, NULL);
		U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* L_64 = V_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_65 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_65, L_64, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CAwakeU3Eb__0_m6278DEF27CF0FB9CC95E295C10FB722AB6CEA0D2_RuntimeMethod_var), NULL);
		NullCheck(L_63);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_63, L_65, NULL);
		// envButtons[i] = btn;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_66 = __this->___envButtons_18;
		int32_t L_67 = V_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_68 = V_12;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_68);
		// for (int i = 0; i < lightings.Length; i++)
		int32_t L_69 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01a6:
	{
		// for (int i = 0; i < lightings.Length; i++)
		int32_t L_70 = V_8;
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_71 = __this->___lightings_23;
		NullCheck(L_71);
		V_13 = (bool)((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))? 1 : 0);
		bool L_72 = V_13;
		if (L_72)
		{
			goto IL_00c9;
		}
	}
	{
		// envButtonTemplate.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_73 = __this->___envButtonTemplate_17;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_73, NULL);
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)0, NULL);
		// OnSelectLightingSettings(0);
		TCP2_Demo_Interactive_OnSelectLightingSettings_m5FC680CE96EF10C879ADE1EAFDE68D9B70729B24(__this, 0, NULL);
		// cameraResetPos = camera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_75 = __this->___camera_5;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		__this->___cameraResetPos_26 = L_77;
		// cameraResetQuat = camera.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = __this->___camera_5;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_78, NULL);
		NullCheck(L_79);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80;
		L_80 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_79, NULL);
		__this->___cameraResetQuat_27 = L_80;
		// resetPivot = demoCamera.Pivot;
		TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* L_81 = __this->___demoCamera_4;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = L_81->___Pivot_4;
		__this->___resetPivot_28 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resetPivot_28), (void*)L_82);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_LateUpdate_m79A81E79CDC4A1D51D7F141586D39F75F97CFF85 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// HandleKeyboard();
		TCP2_Demo_Interactive_HandleKeyboard_m8A1EFA7533315A83902C0BBFCCDB2AB84348E309(__this, NULL);
		// if (index >= 0 && !coroutineActive)
		int32_t L_0 = __this->___index_22;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = __this->___coroutineActive_29;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// UpdateViewToCurrentContent();
		TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0(__this, (1.0f), NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::HandleKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_HandleKeyboard_m8A1EFA7533315A83902C0BBFCCDB2AB84348E309 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.Delete) || Input.GetKeyDown(KeyCode.H))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)127), NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)104), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// canvas.enabled = !canvas.enabled;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_6;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0034:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// ResetView();
		TCP2_Demo_Interactive_ResetView_mDA99336859AA2946D2D90ECFD805CB4C1FE13AEA(__this, NULL);
	}

IL_0048:
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// NextHighlight();
		TCP2_Demo_Interactive_NextHighlight_m7E479C0F3BCE3E038CE39ABC6E6CF17514F48B6F(__this, NULL);
	}

IL_005f:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_10;
		L_10 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		// PrevHighlight();
		TCP2_Demo_Interactive_PrevHighlight_m21348200BDBD1B4E01B8957FB4792AD4A6E0BB93(__this, NULL);
	}

IL_0076:
	{
		// if(Input.GetKeyDown(KeyCode.Tab))
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)9), NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0115;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
		bool L_14;
		L_14 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_14)
		{
			goto IL_009f;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		G_B15_0 = ((int32_t)(L_15));
		goto IL_00a0;
	}

IL_009f:
	{
		G_B15_0 = 1;
	}

IL_00a0:
	{
		V_5 = (bool)G_B15_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00d7;
		}
	}
	{
		// lightingIndex--;
		int32_t L_17 = __this->___lightingIndex_24;
		__this->___lightingIndex_24 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		// if (lightingIndex < 0) lightingIndex = envButtons.Length - 1;
		int32_t L_18 = __this->___lightingIndex_24;
		V_6 = (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// if (lightingIndex < 0) lightingIndex = envButtons.Length - 1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_20 = __this->___envButtons_18;
		NullCheck(L_20);
		__this->___lightingIndex_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1));
	}

IL_00d4:
	{
		goto IL_0107;
	}

IL_00d7:
	{
		// lightingIndex++;
		int32_t L_21 = __this->___lightingIndex_24;
		__this->___lightingIndex_24 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// if (lightingIndex >= envButtons.Length) lightingIndex = 0;
		int32_t L_22 = __this->___lightingIndex_24;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_23 = __this->___envButtons_18;
		NullCheck(L_23);
		V_7 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		// if (lightingIndex >= envButtons.Length) lightingIndex = 0;
		__this->___lightingIndex_24 = 0;
	}

IL_0106:
	{
	}

IL_0107:
	{
		// OnSelectLightingSettings(lightingIndex);
		int32_t L_25 = __this->___lightingIndex_24;
		TCP2_Demo_Interactive_OnSelectLightingSettings_m5FC680CE96EF10C879ADE1EAFDE68D9B70729B24(__this, L_25, NULL);
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::PrevHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_PrevHighlight_m21348200BDBD1B4E01B8957FB4792AD4A6E0BB93 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// index--;
		int32_t L_0 = __this->___index_22;
		__this->___index_22 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (index < 0) index = contents.Length - 1;
		int32_t L_1 = __this->___index_22;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (index < 0) index = contents.Length - 1;
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_3 = __this->___contents_20;
		NullCheck(L_3);
		__this->___index_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_002c:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(CR_MoveToContent(contents[index]));
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_4 = __this->___contents_20;
		int32_t L_5 = __this->___index_22;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = TCP2_Demo_Interactive_CR_MoveToContent_mC42E377253ADE0188F20C2AE122FCEAA3E396790(__this, L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// highlightLabel.text = contents[index].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___highlightLabel_19;
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_11 = __this->___contents_20;
		int32_t L_12 = __this->___index_22;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::NextHighlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_NextHighlight_m7E479C0F3BCE3E038CE39ABC6E6CF17514F48B6F (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// index++;
		int32_t L_0 = __this->___index_22;
		__this->___index_22 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (index >= contents.Length) index = 0;
		int32_t L_1 = __this->___index_22;
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_2 = __this->___contents_20;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (index >= contents.Length) index = 0;
		__this->___index_22 = 0;
	}

IL_002d:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(CR_MoveToContent(contents[index]));
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_4 = __this->___contents_20;
		int32_t L_5 = __this->___index_22;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = TCP2_Demo_Interactive_CR_MoveToContent_mC42E377253ADE0188F20C2AE122FCEAA3E396790(__this, L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// highlightLabel.text = contents[index].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___highlightLabel_19;
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_11 = __this->___contents_20;
		int32_t L_12 = __this->___index_22;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::UpdateViewToCurrentContent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, float ___lengthPercent0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// var screenPos = camera.WorldToScreenPoint(currentContent.pivot.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___camera_5;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_1 = __this->___currentContent_21;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1->___pivot_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_3, NULL);
		V_0 = L_4;
		// var endPos = camera.WorldToScreenPoint(currentContent.textBox.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___camera_5;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_6 = __this->___currentContent_21;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___textBox_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_5, L_8, NULL);
		V_1 = L_9;
		// textBox.position = endPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___textBox_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// var w2 = textBox.rect.width / 2.0f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___textBox_10;
		NullCheck(L_12);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_12, NULL);
		V_4 = L_13;
		float L_14;
		L_14 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		V_2 = ((float)(L_14/(2.0f)));
		// var h2 = textBox.rect.height / 2.0f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___textBox_10;
		NullCheck(L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_15, NULL);
		V_4 = L_16;
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		V_3 = ((float)(L_17/(2.0f)));
		// if (endPos.x - w2 < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = L_18.___x_2;
		float L_20 = V_2;
		V_5 = (bool)((((float)((float)il2cpp_codegen_subtract(L_19, L_20))) < ((float)(0.0f)))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// endPos.x = w2;
		float L_22 = V_2;
		(&V_1)->___x_2 = L_22;
	}

IL_009b:
	{
		// if (endPos.x + w2 > Screen.width)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24 = L_23.___x_2;
		float L_25 = V_2;
		int32_t L_26;
		L_26 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_6 = (bool)((((float)((float)il2cpp_codegen_add(L_24, L_25))) > ((float)((float)L_26)))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c2;
		}
	}
	{
		// endPos.x = Screen.width - w2;
		int32_t L_28;
		L_28 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_29 = V_2;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_subtract(((float)L_28), L_29));
	}

IL_00c2:
	{
		// if (endPos.y - h2 < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		float L_31 = L_30.___y_3;
		float L_32 = V_3;
		V_7 = (bool)((((float)((float)il2cpp_codegen_subtract(L_31, L_32))) < ((float)(0.0f)))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00e1;
		}
	}
	{
		// endPos.y = h2;
		float L_34 = V_3;
		(&V_1)->___y_3 = L_34;
	}

IL_00e1:
	{
		// if (endPos.y + h2 > Screen.height)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___y_3;
		float L_37 = V_3;
		int32_t L_38;
		L_38 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_8 = (bool)((((float)((float)il2cpp_codegen_add(L_36, L_37))) > ((float)((float)L_38)))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0108;
		}
	}
	{
		// endPos.y = Screen.height - h2;
		int32_t L_40;
		L_40 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_41 = V_3;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_subtract(((float)L_40), L_41));
	}

IL_0108:
	{
		// textBox.position = endPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->___textBox_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		// PlaceLine(endPos, screenPos, lengthPercent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_46, NULL);
		float L_48 = ___lengthPercent0;
		TCP2_Demo_Interactive_PlaceLine_mDA643C21BA431A12B31099C50538E6A05E04B7E3(__this, L_45, L_47, L_48, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::PlaceLine(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_PlaceLine_mDA643C21BA431A12B31099C50538E6A05E04B7E3 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, float ___lengthPercentage2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// line.rectTransform.position = start;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___line_12;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___start0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// start.y = -start.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___start0;
		float L_5 = L_4.___y_1;
		(&___start0)->___y_1 = ((-L_5));
		// end.y = -end.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___end1;
		float L_7 = L_6.___y_1;
		(&___end1)->___y_1 = ((-L_7));
		// float angle = Vector2.SignedAngle((start - end).normalized, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___start0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___end1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		V_5 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_13;
		L_13 = Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline(L_11, L_12, NULL);
		V_0 = L_13;
		// var r = line.rectTransform.localEulerAngles;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___line_12;
		NullCheck(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_15, NULL);
		V_1 = L_16;
		// r.z = angle;
		float L_17 = V_0;
		(&V_1)->___z_4 = L_17;
		// line.rectTransform.localEulerAngles = r;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___line_12;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		NullCheck(L_19);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_19, L_20, NULL);
		// float ratio = canvasScaler.referenceResolution.x / Screen.width;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_21 = __this->___canvasScaler_7;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5(L_21, NULL);
		float L_23 = L_22.___x_0;
		int32_t L_24;
		L_24 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_2 = ((float)(L_23/((float)L_24)));
		// float dist = Vector2.Distance(start, end) * lengthPercentage;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___start0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___end1;
		float L_27;
		L_27 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_25, L_26, NULL);
		float L_28 = ___lengthPercentage2;
		V_3 = ((float)il2cpp_codegen_multiply(L_27, L_28));
		// dist *= ratio;
		float L_29 = V_3;
		float L_30 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// var sd = line.rectTransform.sizeDelta;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___line_12;
		NullCheck(L_31);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32;
		L_32 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_31, NULL);
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_32, NULL);
		V_4 = L_33;
		// sd.y = dist;
		float L_34 = V_3;
		(&V_4)->___y_1 = L_34;
		// line.rectTransform.sizeDelta = sd;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___line_12;
		NullCheck(L_35);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36;
		L_36 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_4;
		NullCheck(L_36);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_36, L_37, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_ResetView_mDA99336859AA2946D2D90ECFD805CB4C1FE13AEA (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_6;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(CR_ResetCamPos());
		RuntimeObject* L_1;
		L_1 = TCP2_Demo_Interactive_CR_ResetCamPos_m1072A96E99DB6E7CA74784E16E80DFCD7C8C73D9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// highlightLabel.text = "...";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___highlightLabel_19;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		// }
		return;
	}
}
// System.Collections.IEnumerator ToonyColorsPro.Demo.TCP2_Demo_Interactive::CR_ResetCamPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TCP2_Demo_Interactive_CR_ResetCamPos_m1072A96E99DB6E7CA74784E16E80DFCD7C8C73D9 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* L_0 = (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE*)il2cpp_codegen_object_new(U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCR_ResetCamPosU3Ed__33__ctor_m4E348FAA43126971717AEF9E1EA1EC9FA7022FEA(L_0, 0, NULL);
		U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ToonyColorsPro.Demo.TCP2_Demo_Interactive::CR_MoveToContent(ToonyColorsPro.TCP2_Demo_Interactive_Content)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TCP2_Demo_Interactive_CR_MoveToContent_mC42E377253ADE0188F20C2AE122FCEAA3E396790 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* L_0 = (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6*)il2cpp_codegen_object_new(U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCR_MoveToContentU3Ed__35__ctor_mE2F7FECAE8FF56B25342F9C3651895198C9B8CE8(L_0, 0, NULL);
		U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* L_2 = L_1;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_3 = ___content0;
		NullCheck(L_2);
		L_2->___content_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___content_2), (void*)L_3);
		return L_2;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::OnSelectLightingSettings(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_OnSelectLightingSettings_m5FC680CE96EF10C879ADE1EAFDE68D9B70729B24 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	{
		// lightingIndex = index;
		int32_t L_0 = ___index0;
		__this->___lightingIndex_24 = L_0;
		// lightings[index].ApplyEnvironment();
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_1 = __this->___lightings_23;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		TCP2_Demo_Interactive_Environment_ApplyEnvironment_mFD147601DE9207A3B87DC5F46831570B014FFBDA(L_4, NULL);
		// for (int i = 0; i < envButtons.Length; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_001a:
	{
		// envButtons[i].GetComponent<Image>().color = (i == index) ? new Color(0.6f, 0.2f, 0.0f) : envButtonColor;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_5 = __this->___envButtons_18;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_8, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		int32_t L_10 = V_0;
		int32_t L_11 = ___index0;
		G_B2_0 = L_9;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			G_B3_0 = L_9;
			goto IL_0034;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___envButtonColor_25;
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		goto IL_0048;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_13), (0.600000024f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_0;
	}

IL_0048:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
		// for (int i = 0; i < envButtons.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < envButtons.Length; i++)
		int32_t L_15 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_16 = __this->___envButtons_18;
		NullCheck(L_16);
		V_1 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::HideInfoBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_HideInfoBox_mB1E2031D5C31BDBEEC3837B9377A4F789D5B3502 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	{
		// infoBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___infoBox_30;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive__ctor_m07AA50DA27BC12C2A03BF410FC0CB7E589B53FD6 (TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* __this, const RuntimeMethod* method) 
{
	{
		// public float camAnimDuration = 0.5f;
		__this->___camAnimDuration_13 = (0.5f);
		// public float maxCamAnimDuration = 1.0f;
		__this->___maxCamAnimDuration_14 = (1.0f);
		// public bool camAnimBasedOnDistance = false;
		__this->___camAnimBasedOnDistance_15 = (bool)0;
		// public float uiAnimDuration = 0.5f;
		__this->___uiAnimDuration_16 = (0.5f);
		// int index = -1;
		__this->___index_22 = (-1);
		// int lightingIndex = 0;
		__this->___lightingIndex_24 = 0;
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m4C6D5957E4AC4E2561D2241FFBFAC517E2E4B825 (U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<>c__DisplayClass25_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CAwakeU3Eb__0_m6278DEF27CF0FB9CC95E295C10FB722AB6CEA0D2 (U3CU3Ec__DisplayClass25_0_t96646AD8D220C0FE7538DC1A209152C6ADC9F59A* __this, const RuntimeMethod* method) 
{
	{
		// btn.onClick.AddListener(new UnityEngine.Events.UnityAction(() => { this.OnSelectLightingSettings(ci); }));
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_0 = __this->___U3CU3E4__this_1;
		int32_t L_1 = __this->___ci_0;
		NullCheck(L_0);
		TCP2_Demo_Interactive_OnSelectLightingSettings_m5FC680CE96EF10C879ADE1EAFDE68D9B70729B24(L_0, L_1, NULL);
		// btn.onClick.AddListener(new UnityEngine.Events.UnityAction(() => { this.OnSelectLightingSettings(ci); }));
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_ResetCamPosU3Ed__33__ctor_m4E348FAA43126971717AEF9E1EA1EC9FA7022FEA (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_ResetCamPosU3Ed__33_System_IDisposable_Dispose_mA34BBC37E7CF77DE2274E4E3B870DD1CF9CB03C6 (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCR_ResetCamPosU3Ed__33_MoveNext_m76DBA9415DE3CFF9BE3165960CF42B19BDB46845 (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* G_B9_0 = NULL;
	U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* G_B10_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0138;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// demoCamera.Pivot = resetPivot;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* L_4 = L_3->___demoCamera_4;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___resetPivot_28;
		NullCheck(L_4);
		L_4->___Pivot_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Pivot_4), (void*)L_6);
		// demoCamera.pivotOffset = Vector3.zero;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* L_8 = L_7->___demoCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_8);
		L_8->___pivotOffset_5 = L_9;
		// Vector3 startPos = camera.transform.position;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = L_10->___camera_5;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		__this->___U3CstartPosU3E5__1_3 = L_13;
		// Vector3 endPos = cameraResetPos;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___cameraResetPos_26;
		__this->___U3CendPosU3E5__2_4 = L_15;
		// Quaternion startQuat = camera.transform.rotation;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = L_16->___camera_5;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		__this->___U3CstartQuatU3E5__3_5 = L_19;
		// Quaternion endQuat = cameraResetQuat;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20->___cameraResetQuat_27;
		__this->___U3CendQuatU3E5__4_6 = L_21;
		// float duration = camAnimBasedOnDistance ? Vector3.Distance(startPos, endPos) * camAnimDuration : camAnimDuration;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		bool L_23 = L_22->___camAnimBasedOnDistance_15;
		G_B8_0 = __this;
		if (L_23)
		{
			G_B9_0 = __this;
			goto IL_00c6;
		}
	}
	{
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		float L_25 = L_24->___camAnimDuration_13;
		G_B10_0 = L_25;
		G_B10_1 = G_B8_0;
		goto IL_00e3;
	}

IL_00c6:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___U3CstartPosU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___U3CendPosU3E5__2_4;
		float L_28;
		L_28 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_26, L_27, NULL);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_29 = __this->___U3CU3E4__this_2;
		NullCheck(L_29);
		float L_30 = L_29->___camAnimDuration_13;
		G_B10_0 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		G_B10_1 = G_B9_0;
	}

IL_00e3:
	{
		NullCheck(G_B10_1);
		G_B10_1->___U3CdurationU3E5__5_7 = G_B10_0;
		// duration = Mathf.Min(duration, maxCamAnimDuration);
		float L_31 = __this->___U3CdurationU3E5__5_7;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		float L_33 = L_32->___maxCamAnimDuration_14;
		float L_34;
		L_34 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_31, L_33, NULL);
		__this->___U3CdurationU3E5__5_7 = L_34;
		// float time = duration;
		float L_35 = __this->___U3CdurationU3E5__5_7;
		__this->___U3CtimeU3E5__6_8 = L_35;
		goto IL_01c7;
	}

IL_0115:
	{
		// time -= Time.deltaTime;
		float L_36 = __this->___U3CtimeU3E5__6_8;
		float L_37;
		L_37 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__6_8 = ((float)il2cpp_codegen_subtract(L_36, L_37));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0138:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delta = Mathf.SmoothStep(0, 1, 1 - Mathf.Clamp01(time/duration));
		float L_38 = __this->___U3CtimeU3E5__6_8;
		float L_39 = __this->___U3CdurationU3E5__5_7;
		float L_40;
		L_40 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_38/L_39)), NULL);
		float L_41;
		L_41 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), ((float)il2cpp_codegen_subtract((1.0f), L_40)), NULL);
		__this->___U3CdeltaU3E5__7_9 = L_41;
		// camera.transform.position = Vector3.Lerp(startPos, endPos, delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = L_42->___camera_5;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___U3CstartPosU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___U3CendPosU3E5__2_4;
		float L_47 = __this->___U3CdeltaU3E5__7_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_45, L_46, L_47, NULL);
		NullCheck(L_44);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_44, L_48, NULL);
		// camera.transform.rotation = Quaternion.Slerp(startQuat, endQuat, delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_49 = __this->___U3CU3E4__this_2;
		NullCheck(L_49);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = L_49->___camera_5;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = __this->___U3CstartQuatU3E5__3_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = __this->___U3CendQuatU3E5__4_6;
		float L_54 = __this->___U3CdeltaU3E5__7_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_52, L_53, L_54, NULL);
		NullCheck(L_51);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_51, L_55, NULL);
	}

IL_01c7:
	{
		// while (time > 0)
		float L_56 = __this->___U3CtimeU3E5__6_8;
		V_1 = (bool)((((float)L_56) > ((float)(0.0f)))? 1 : 0);
		bool L_57 = V_1;
		if (L_57)
		{
			goto IL_0115;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCR_ResetCamPosU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BA64DBE87F8C31F4908BDC9EB61306F51BA8293 (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_ResetCamPosU3Ed__33_System_Collections_IEnumerator_Reset_m2EBC8F50A8E4F83637CC47BE0BF9C544A6FF6DC4 (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCR_ResetCamPosU3Ed__33_System_Collections_IEnumerator_Reset_m2EBC8F50A8E4F83637CC47BE0BF9C544A6FF6DC4_RuntimeMethod_var)));
	}
}
// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_ResetCamPos>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCR_ResetCamPosU3Ed__33_System_Collections_IEnumerator_get_Current_m3037B2710B6A1DD694AA325F7EDF36B8247904ED (U3CCR_ResetCamPosU3Ed__33_tE8294FA068A29CD7E6B87DBFFDB551AB64260BEE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_MoveToContentU3Ed__35__ctor_mE2F7FECAE8FF56B25342F9C3651895198C9B8CE8 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_MoveToContentU3Ed__35_System_IDisposable_Dispose_mAFB0146BC13CD2BCCEA173A299C859E10D997B21 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCR_MoveToContentU3Ed__35_MoveNext_m626E54FCCAF61D6B791797D1EDF6D3A6DAF52B85 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* G_B11_0 = NULL;
	U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* G_B12_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_0038;
			}
			case 5:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_0042;
	}

IL_0027:
	{
		goto IL_0044;
	}

IL_0029:
	{
		goto IL_0159;
	}

IL_002e:
	{
		goto IL_02eb;
	}

IL_0033:
	{
		goto IL_0313;
	}

IL_0038:
	{
		goto IL_035f;
	}

IL_003d:
	{
		goto IL_03f7;
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// coroutineActive = true;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_2 = __this->___U3CU3E4__this_3;
		NullCheck(L_2);
		L_2->___coroutineActive_29 = (bool)1;
		// canvas.enabled = false;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = L_3->___canvas_6;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// Vector3 startPos = camera.transform.position;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___camera_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->___U3CstartPosU3E5__1_4 = L_8;
		// Vector3 endPos = content.transform.position;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_9 = __this->___content_2;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		__this->___U3CendPosU3E5__2_5 = L_11;
		// Quaternion startQuat = camera.transform.rotation;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12->___camera_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		__this->___U3CstartQuatU3E5__3_6 = L_15;
		// Quaternion endQuat = content.transform.rotation;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_16 = __this->___content_2;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		__this->___U3CendQuatU3E5__4_7 = L_18;
		// float duration = camAnimBasedOnDistance ? Vector3.Distance(startPos, endPos) * camAnimDuration : camAnimDuration;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_19 = __this->___U3CU3E4__this_3;
		NullCheck(L_19);
		bool L_20 = L_19->___camAnimBasedOnDistance_15;
		G_B10_0 = __this;
		if (L_20)
		{
			G_B11_0 = __this;
			goto IL_00e7;
		}
	}
	{
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		float L_22 = L_21->___camAnimDuration_13;
		G_B12_0 = L_22;
		G_B12_1 = G_B10_0;
		goto IL_0104;
	}

IL_00e7:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___U3CstartPosU3E5__1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___U3CendPosU3E5__2_5;
		float L_25;
		L_25 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_23, L_24, NULL);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_26 = __this->___U3CU3E4__this_3;
		NullCheck(L_26);
		float L_27 = L_26->___camAnimDuration_13;
		G_B12_0 = ((float)il2cpp_codegen_multiply(L_25, L_27));
		G_B12_1 = G_B11_0;
	}

IL_0104:
	{
		NullCheck(G_B12_1);
		G_B12_1->___U3CdurationU3E5__5_8 = G_B12_0;
		// duration = Mathf.Min(duration, maxCamAnimDuration);
		float L_28 = __this->___U3CdurationU3E5__5_8;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_29 = __this->___U3CU3E4__this_3;
		NullCheck(L_29);
		float L_30 = L_29->___maxCamAnimDuration_14;
		float L_31;
		L_31 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_28, L_30, NULL);
		__this->___U3CdurationU3E5__5_8 = L_31;
		// float time = duration;
		float L_32 = __this->___U3CdurationU3E5__5_8;
		__this->___U3CtimeU3E5__6_9 = L_32;
		goto IL_01e8;
	}

IL_0136:
	{
		// time -= Time.deltaTime;
		float L_33 = __this->___U3CtimeU3E5__6_9;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__6_9 = ((float)il2cpp_codegen_subtract(L_33, L_34));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0159:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delta = Mathf.SmoothStep(0, 1, 1 - Mathf.Clamp01(time/duration));
		float L_35 = __this->___U3CtimeU3E5__6_9;
		float L_36 = __this->___U3CdurationU3E5__5_8;
		float L_37;
		L_37 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_35/L_36)), NULL);
		float L_38;
		L_38 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), ((float)il2cpp_codegen_subtract((1.0f), L_37)), NULL);
		__this->___U3CdeltaU3E5__7_10 = L_38;
		// camera.transform.position = Vector3.Lerp(startPos, endPos, delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_39 = __this->___U3CU3E4__this_3;
		NullCheck(L_39);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = L_39->___camera_5;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___U3CstartPosU3E5__1_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___U3CendPosU3E5__2_5;
		float L_44 = __this->___U3CdeltaU3E5__7_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_42, L_43, L_44, NULL);
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_45, NULL);
		// camera.transform.rotation = Quaternion.Slerp(startQuat, endQuat, delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_46 = __this->___U3CU3E4__this_3;
		NullCheck(L_46);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_47 = L_46->___camera_5;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = __this->___U3CstartQuatU3E5__3_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = __this->___U3CendQuatU3E5__4_7;
		float L_51 = __this->___U3CdeltaU3E5__7_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_49, L_50, L_51, NULL);
		NullCheck(L_48);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_48, L_52, NULL);
	}

IL_01e8:
	{
		// while (time > 0)
		float L_53 = __this->___U3CtimeU3E5__6_9;
		V_1 = (bool)((((float)L_53) > ((float)(0.0f)))? 1 : 0);
		bool L_54 = V_1;
		if (L_54)
		{
			goto IL_0136;
		}
	}
	{
		// currentContent = contents[index];
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_55 = __this->___U3CU3E4__this_3;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_56 = __this->___U3CU3E4__this_3;
		NullCheck(L_56);
		TCP2_Demo_Interactive_ContentU5BU5D_tB79AA6CDA4494B6C8747A1728F83BC2310EB9194* L_57 = L_56->___contents_20;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_58 = __this->___U3CU3E4__this_3;
		NullCheck(L_58);
		int32_t L_59 = L_58->___index_22;
		NullCheck(L_57);
		int32_t L_60 = L_59;
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_61 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_55);
		L_55->___currentContent_21 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&L_55->___currentContent_21), (void*)L_61);
		// camera.transform.position = currentContent.transform.position;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_62 = __this->___U3CU3E4__this_3;
		NullCheck(L_62);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = L_62->___camera_5;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_65 = __this->___U3CU3E4__this_3;
		NullCheck(L_65);
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_66 = L_65->___currentContent_21;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_68, NULL);
		// camera.transform.rotation = currentContent.transform.rotation;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_69 = __this->___U3CU3E4__this_3;
		NullCheck(L_69);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_70 = L_69->___camera_5;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_72 = __this->___U3CU3E4__this_3;
		NullCheck(L_72);
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_73 = L_72->___currentContent_21;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_74, NULL);
		NullCheck(L_71);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_71, L_75, NULL);
		// demoCamera.Pivot = currentContent.pivot;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_76 = __this->___U3CU3E4__this_3;
		NullCheck(L_76);
		TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* L_77 = L_76->___demoCamera_4;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_78 = __this->___U3CU3E4__this_3;
		NullCheck(L_78);
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_79 = L_78->___currentContent_21;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = L_79->___pivot_4;
		NullCheck(L_77);
		L_77->___Pivot_4 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&L_77->___Pivot_4), (void*)L_80);
		// demoCamera.pivotOffset = Vector3.zero;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_81 = __this->___U3CU3E4__this_3;
		NullCheck(L_81);
		TCP2_Demo_Camera_t345524DB7C1DBEBBAAA2835D524355C0B47FCA68* L_82 = L_81->___demoCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_82);
		L_82->___pivotOffset_5 = L_83;
		// text.text = currentContent.Text;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_84 = __this->___U3CU3E4__this_3;
		NullCheck(L_84);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_85 = L_84->___text_11;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_86 = __this->___U3CU3E4__this_3;
		NullCheck(L_86);
		TCP2_Demo_Interactive_Content_t2E4F12558B8DF88979CBDEC5231CD89C2DF54AE4* L_87 = L_86->___currentContent_21;
		NullCheck(L_87);
		String_t* L_88 = L_87->___Text_6;
		NullCheck(L_85);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_85, L_88);
		// UpdateViewToCurrentContent(0f);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_89 = __this->___U3CU3E4__this_3;
		NullCheck(L_89);
		TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0(L_89, (0.0f), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_02eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UpdateViewToCurrentContent(0f);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_90 = __this->___U3CU3E4__this_3;
		NullCheck(L_90);
		TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0(L_90, (0.0f), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0313:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UpdateViewToCurrentContent(0f);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_91 = __this->___U3CU3E4__this_3;
		NullCheck(L_91);
		TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0(L_91, (0.0f), NULL);
		// layoutGroup.enabled = true;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_92 = __this->___U3CU3E4__this_3;
		NullCheck(L_92);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_93 = L_92->___layoutGroup_8;
		NullCheck(L_93);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_93, (bool)1, NULL);
		// sizeFitter.enabled = true;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_94 = __this->___U3CU3E4__this_3;
		NullCheck(L_94);
		ContentSizeFitter_tC40AED5F772F1F140F69E0F1BB7D4AE31D64A87B* L_95 = L_94->___sizeFitter_9;
		NullCheck(L_95);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_95, (bool)1, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_035f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// layoutGroup.enabled = false;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_96 = __this->___U3CU3E4__this_3;
		NullCheck(L_96);
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_97 = L_96->___layoutGroup_8;
		NullCheck(L_97);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_97, (bool)0, NULL);
		// sizeFitter.enabled = false;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_98 = __this->___U3CU3E4__this_3;
		NullCheck(L_98);
		ContentSizeFitter_tC40AED5F772F1F140F69E0F1BB7D4AE31D64A87B* L_99 = L_98->___sizeFitter_9;
		NullCheck(L_99);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_99, (bool)0, NULL);
		// canvas.enabled = true;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_100 = __this->___U3CU3E4__this_3;
		NullCheck(L_100);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_101 = L_100->___canvas_6;
		NullCheck(L_101);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_101, (bool)1, NULL);
		// textBox.localScale = Vector3.zero;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_102 = __this->___U3CU3E4__this_3;
		NullCheck(L_102);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_103 = L_102->___textBox_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_103);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_103, L_104, NULL);
		// duration = uiAnimDuration;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_105 = __this->___U3CU3E4__this_3;
		NullCheck(L_105);
		float L_106 = L_105->___uiAnimDuration_16;
		__this->___U3CdurationU3E5__5_8 = L_106;
		// time = duration;
		float L_107 = __this->___U3CdurationU3E5__5_8;
		__this->___U3CtimeU3E5__6_9 = L_107;
		goto IL_04ba;
	}

IL_03d4:
	{
		// time -= Time.deltaTime;
		float L_108 = __this->___U3CtimeU3E5__6_9;
		float L_109;
		L_109 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__6_9 = ((float)il2cpp_codegen_subtract(L_108, L_109));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_03f7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delta = Mathf.SmoothStep(0, 1, 1 - Mathf.Clamp01(time/duration));
		float L_110 = __this->___U3CtimeU3E5__6_9;
		float L_111 = __this->___U3CdurationU3E5__5_8;
		float L_112;
		L_112 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_110/L_111)), NULL);
		float L_113;
		L_113 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), ((float)il2cpp_codegen_subtract((1.0f), L_112)), NULL);
		__this->___U3CdeltaU3E5__8_11 = L_113;
		// textBox.localScale = Vector3.Lerp(Vector3.zero, Vector3.one, delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_114 = __this->___U3CU3E4__this_3;
		NullCheck(L_114);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_115 = L_114->___textBox_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_118 = __this->___U3CdeltaU3E5__8_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_116, L_117, L_118, NULL);
		NullCheck(L_115);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_115, L_119, NULL);
		// line.rectTransform.localScale = new Vector3(1 / textBox.localScale.x, 1 / textBox.localScale.y, 1);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_120 = __this->___U3CU3E4__this_3;
		NullCheck(L_120);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_121 = L_120->___line_12;
		NullCheck(L_121);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_122;
		L_122 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_121, NULL);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_123 = __this->___U3CU3E4__this_3;
		NullCheck(L_123);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_124 = L_123->___textBox_10;
		NullCheck(L_124);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_124, NULL);
		float L_126 = L_125.___x_2;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_127 = __this->___U3CU3E4__this_3;
		NullCheck(L_127);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_128 = L_127->___textBox_10;
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_128, NULL);
		float L_130 = L_129.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_131), ((float)((1.0f)/L_126)), ((float)((1.0f)/L_130)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_122);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_122, L_131, NULL);
		// UpdateViewToCurrentContent(delta);
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_132 = __this->___U3CU3E4__this_3;
		float L_133 = __this->___U3CdeltaU3E5__8_11;
		NullCheck(L_132);
		TCP2_Demo_Interactive_UpdateViewToCurrentContent_m522349C9F6D20CDDC63EA3E3C68F8C9E4A9474B0(L_132, L_133, NULL);
	}

IL_04ba:
	{
		// while (time > 0)
		float L_134 = __this->___U3CtimeU3E5__6_9;
		V_2 = (bool)((((float)L_134) > ((float)(0.0f)))? 1 : 0);
		bool L_135 = V_2;
		if (L_135)
		{
			goto IL_03d4;
		}
	}
	{
		// coroutineActive = false;
		TCP2_Demo_Interactive_tC61436914EAA6C0565B259DD504E24DD23DD4A06* L_136 = __this->___U3CU3E4__this_3;
		NullCheck(L_136);
		L_136->___coroutineActive_29 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCR_MoveToContentU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37F75E4132672F55F267C3E8E82637B1AD5F15D3 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCR_MoveToContentU3Ed__35_System_Collections_IEnumerator_Reset_m73046DDC2212AA340B99D7E6858AFF1F8546D46C (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCR_MoveToContentU3Ed__35_System_Collections_IEnumerator_Reset_m73046DDC2212AA340B99D7E6858AFF1F8546D46C_RuntimeMethod_var)));
	}
}
// System.Object ToonyColorsPro.Demo.TCP2_Demo_Interactive/<CR_MoveToContent>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCR_MoveToContentU3Ed__35_System_Collections_IEnumerator_get_Current_m0D15BD881C81694302E1B7676B24979DEA8DE762 (U3CCR_MoveToContentU3Ed__35_t0C1DF0349A093B8C852D10F371DAAF0A96D5DAE6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment::ApplyEnvironment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_Environment_ApplyEnvironment_mFD147601DE9207A3B87DC5F46831570B014FFBDA (TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_m6968347F8776206E7FB4B6A6FB692471ABC012D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* V_1 = NULL;
	TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* V_2 = NULL;
	int32_t V_3 = 0;
	TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* V_4 = NULL;
	bool V_5 = false;
	{
		// var root = this.transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		V_0 = L_1;
		// var envs = root.GetComponentsInChildren<TCP2_Demo_Interactive_Environment>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_3;
		L_3 = Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_m6968347F8776206E7FB4B6A6FB692471ABC012D4(L_2, Component_GetComponentsInChildren_TisTCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C_m6968347F8776206E7FB4B6A6FB692471ABC012D4_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (var env in envs)
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_4 = V_1;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		// foreach (var env in envs)
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// env.gameObject.SetActive(false);
		TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* L_9 = V_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		// foreach (var env in envs)
		int32_t L_12 = V_3;
		TCP2_Demo_Interactive_EnvironmentU5BU5D_t9236CCE32B8023DB6CE89DE9F606FBD1ADC6B360* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// RenderSettings.skybox = this.skybox;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___skybox_4;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_15, NULL);
		// RenderSettings.customReflection = (Cubemap)this.skybox.GetTexture("_Tex");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___skybox_4;
		NullCheck(L_16);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17;
		L_17 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_16, _stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56, NULL);
		RenderSettings_set_customReflection_m4DF4A279AAB17D1E398C3DE83852B5140D0BF6DA(((Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C*)CastclassSealed((RuntimeObject*)L_17, Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var)), NULL);
		// if (Application.isPlaying)
		bool L_18;
		L_18 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		// DynamicGI.UpdateEnvironment();
		DynamicGI_UpdateEnvironment_m70AC224196548AC7A7FD7E6182591F692E98CF06(NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Interactive_Environment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Interactive_Environment__ctor_mE1E4C2002A9B22C3D7432D867C4709F6497837C3 (TCP2_Demo_Interactive_Environment_t97A2599842EF43C410AE96FFE78E368137B8DF6C* __this, const RuntimeMethod* method) 
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Awake_m3294ABAC139F50F30BDEECF45C06649AF53DA843 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889_m2A6C3A4C6BE57EAA1A9D3CF4DA38BE1ED3DD43F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DemoView = GetComponent<TCP2_Demo_View>();
		TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* L_0;
		L_0 = Component_GetComponent_TisTCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889_m2A6C3A4C6BE57EAA1A9D3CF4DA38BE1ED3DD43F5(__this, Component_GetComponent_TisTCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889_m2A6C3A4C6BE57EAA1A9D3CF4DA38BE1ED3DD43F5_RuntimeMethod_var);
		__this->___DemoView_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DemoView_26), (void*)L_0);
		// mRampTexture = RampTextures[0];
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_1 = __this->___RampTextures_5;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___mRampTexture_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRampTexture_20), (void*)L_3);
		// UpdateShader();
		TCP2_Demo_UpdateShader_m6107CAFF5694DFD7EE72B7510F2845F163040447(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_OnDestroy_mB298D4E04DF785BB2DB66A419CFD161B5CD0B477 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	{
		// RestoreRimColors();
		TCP2_Demo_RestoreRimColors_mD17485C1C6B9F80EA2994CF5833D11AB83327368(__this, NULL);
		// UpdateShader();
		TCP2_Demo_UpdateShader_m6107CAFF5694DFD7EE72B7510F2845F163040447(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_OnGUI_m2479623D671CE00FECE654672FC6D01FD55E1F43 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00591519A649DB10EE10C734428876B5B61C2590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC1BD2D2846995B2539A796563845CF33838719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B18_0 = NULL;
	bool G_B18_1 = false;
	TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* G_B18_2 = NULL;
	String_t* G_B17_0 = NULL;
	bool G_B17_1 = false;
	TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* G_B17_2 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	bool G_B19_2 = false;
	TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* G_B19_3 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B42_0 = 0;
	bool G_B46_0 = false;
	bool G_B45_0 = false;
	int32_t G_B47_0 = 0;
	bool G_B47_1 = false;
	{
		// GUI.skin = GuiSkin;
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_0 = __this->___GuiSkin_6;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_skin_mD51BAED314B39004AE3FDE74F9895CA19F3E40E5(L_0, NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 310, 20, 310 - 20, 30)));
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), ((float)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)310)))), (20.0f), (290.0f), (30.0f), /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&L_3), L_2, /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_3, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_4, NULL);
		// GUILayout.Label("Demo Character:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8, L_5, NULL);
		// if (GUILayout.Button("Ethan", mViewRobot ? "Button" : "ButtonOn"))
		bool L_6 = __this->___mViewRobot_24;
		G_B1_0 = _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
		if (L_6)
		{
			G_B2_0 = _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
			goto IL_0067;
		}
	}
	{
		G_B3_0 = _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
		G_B3_1 = G_B1_0;
		goto IL_006c;
	}

IL_0067:
	{
		G_B3_0 = _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
		G_B3_1 = G_B2_0;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7;
		L_7 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(G_B3_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_8;
		L_8 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_9;
		L_9 = GUILayout_Button_m9EB3F017DB33B30FF9DF2A9DD86901FE37513882(G_B3_1, L_7, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00b8;
		}
	}
	{
		// mViewRobot = false;
		__this->___mViewRobot_24 = (bool)0;
		// Robot.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Robot_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Ethan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Ethan_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// DemoView.CharacterTransform = Ethan.transform;
		TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* L_13 = __this->___DemoView_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___Ethan_9;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_13);
		L_13->___CharacterTransform_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___CharacterTransform_11), (void*)L_15);
	}

IL_00b8:
	{
		// if (GUILayout.Button("Robot Kyle", !mViewRobot ? "Button" : "ButtonOn"))
		bool L_16 = __this->___mViewRobot_24;
		G_B6_0 = _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
		if (!L_16)
		{
			G_B7_0 = _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
			goto IL_00cc;
		}
	}
	{
		G_B8_0 = _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
		G_B8_1 = G_B6_0;
		goto IL_00d1;
	}

IL_00cc:
	{
		G_B8_0 = _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
		G_B8_1 = G_B7_0;
	}

IL_00d1:
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17;
		L_17 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(G_B8_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_18;
		L_18 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_19;
		L_19 = GUILayout_Button_m9EB3F017DB33B30FF9DF2A9DD86901FE37513882(G_B8_1, L_17, L_18, NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_011d;
		}
	}
	{
		// mViewRobot = true;
		__this->___mViewRobot_24 = (bool)1;
		// Robot.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___Robot_8;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// Ethan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___Ethan_9;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// DemoView.CharacterTransform = Robot.transform;
		TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* L_23 = __this->___DemoView_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___Robot_8;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_23);
		L_23->___CharacterTransform_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___CharacterTransform_11), (void*)L_25);
	}

IL_011d:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 310, 55, 310 - 20, Screen.height - 40 - 90)));
		int32_t L_26;
		L_26 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_27;
		L_27 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_28), ((float)((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)310)))), (55.0f), (290.0f), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)40))), ((int32_t)90)))), /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29;
		memset((&L_29), 0, sizeof(L_29));
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&L_29), L_28, /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_29, NULL);
		// if (mViewRobot)
		bool L_30 = __this->___mViewRobot_24;
		V_4 = L_30;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_01f0;
		}
	}
	{
		// GUILayout.Label("Outline Normals");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_32;
		L_32 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4, L_32, NULL);
		// mRobotOutlineNormals = !GUILayout.Toggle(!mRobotOutlineNormals, "Regular Normals");
		bool L_33 = __this->___mRobotOutlineNormals_25;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_34;
		L_34 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_35;
		L_35 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7((bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0), _stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A, L_34, NULL);
		__this->___mRobotOutlineNormals_25 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		// mRobotOutlineNormals = GUILayout.Toggle(mRobotOutlineNormals, "TCP2's Encoded Smoothed Normals");
		bool L_36 = __this->___mRobotOutlineNormals_25;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_37;
		L_37 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_38;
		L_38 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_36, _stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF, L_37, NULL);
		__this->___mRobotOutlineNormals_25 = L_38;
		// GUILayout.Label("Toony Colors Pro 2 introduces an innovative way to fix broken outline caused by hard-edge shading.\nRead the documentation to learn more!", "SmallLabelShadow");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_39;
		L_39 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_40;
		L_40 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7(_stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE, L_39, L_40, NULL);
		// var r2 = GUILayoutUtility.GetLastRect();
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41;
		L_41 = GUILayoutUtility_GetLastRect_m09C228A4DB31B3F0BF854871BB466FC06E3C8CB2(NULL);
		V_5 = L_41;
		// GUI.Label(r2, "Toony Colors Pro 2 introduces an innovative way to fix broken outline caused by hard-edge shading.\nRead the documentation to learn more!", "SmallLabel");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42 = V_5;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_43;
		L_43 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_42, _stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE, L_43, NULL);
	}

IL_01f0:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 210, Screen.height - 60, 210 - 20, 50)));
		int32_t L_44;
		L_44 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_45;
		L_45 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_46;
		memset((&L_46), 0, sizeof(L_46));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_46), ((float)((int32_t)il2cpp_codegen_subtract(L_44, ((int32_t)210)))), ((float)((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)60)))), (190.0f), (50.0f), /*hidden argument*/NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_47;
		memset((&L_47), 0, sizeof(L_47));
		Rect__ctor_m5665723DD0443E990EA203A54451B2BB324D8224((&L_47), L_46, /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_47, NULL);
		// GUILayout.Label("Quality Settings:");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_48;
		L_48 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D, L_48, NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_49;
		L_49 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_49, NULL);
		// if (GUILayout.Button("<", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_50 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_51 = L_50;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_52;
		L_52 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((26.0f), NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_52);
		bool L_53;
		L_53 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_51, NULL);
		V_6 = L_53;
		bool L_54 = V_6;
		if (!L_54)
		{
			goto IL_026a;
		}
	}
	{
		// QualitySettings.DecreaseLevel(true);
		QualitySettings_DecreaseLevel_mD1504A9A4F4304720965E9A9940C6F11A8495B00((bool)1, NULL);
	}

IL_026a:
	{
		// GUILayout.Label(QualitySettings.names[QualitySettings.GetQualityLevel()], "LabelCenter");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55;
		L_55 = QualitySettings_get_names_m61A6181CC5752EE5405DB3A22F676C9F6861B02D(NULL);
		int32_t L_56;
		L_56 = QualitySettings_GetQualityLevel_m01019D879AF250BE95341490BF704E4A69B0497B(NULL);
		NullCheck(L_55);
		int32_t L_57 = L_56;
		String_t* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_59;
		L_59 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_60;
		L_60 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7(L_58, L_59, L_60, NULL);
		// if (GUILayout.Button(">", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_61 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_62 = L_61;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_63;
		L_63 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((26.0f), NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_63);
		bool L_64;
		L_64 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_62, NULL);
		V_7 = L_64;
		bool L_65 = V_7;
		if (!L_65)
		{
			goto IL_02b4;
		}
	}
	{
		// QualitySettings.IncreaseLevel(true);
		QualitySettings_IncreaseLevel_m3F830AF4AAC3F3B8DA09E62344343E307C7EE4DB((bool)1, NULL);
	}

IL_02b4:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// GUILayout.BeginArea(new Rect(20, 20 + 90, Screen.width - 40, Screen.height - 40));
		int32_t L_66;
		L_66 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_67;
		L_67 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_68;
		memset((&L_68), 0, sizeof(L_68));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_68), (20.0f), (110.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_66, ((int32_t)40)))), ((float)((int32_t)il2cpp_codegen_subtract(L_67, ((int32_t)40)))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m4D894562C97A0F6793450A0DF379B63F60121F64(L_68, NULL);
		// mUnityShader = GUILayout.Toggle(mUnityShader, "View with Unity " + (mViewRobot ? "\"Diffuse Specular\"" : "\"Bumped Specular\""));
		bool L_69 = __this->___mUnityShader_10;
		bool L_70 = __this->___mViewRobot_24;
		G_B17_0 = _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
		G_B17_1 = L_69;
		G_B17_2 = __this;
		if (L_70)
		{
			G_B18_0 = _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
			G_B18_1 = L_69;
			G_B18_2 = __this;
			goto IL_0302;
		}
	}
	{
		G_B19_0 = _stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_0307;
	}

IL_0302:
	{
		G_B19_0 = _stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_0307:
	{
		String_t* L_71;
		L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B19_1, G_B19_0, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_72;
		L_72 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_73;
		L_73 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(G_B19_2, L_71, L_72, NULL);
		NullCheck(G_B19_3);
		G_B19_3->___mUnityShader_10 = L_73;
		// GUILayout.Space(10);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((10.0f), NULL);
		// GUI.enabled = !mUnityShader;
		bool L_74 = __this->___mUnityShader_10;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((((int32_t)L_74) == ((int32_t)0))? 1 : 0), NULL);
		// GUILayout.Label("Toony Colors Pro 2 Settings");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_75;
		L_75 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564, L_75, NULL);
		// mShaderSpecular = GUILayout.Toggle(mShaderSpecular, "Specular");
		bool L_76 = __this->___mShaderSpecular_11;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_77;
		L_77 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_78;
		L_78 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_76, _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433, L_77, NULL);
		__this->___mShaderSpecular_11 = L_78;
		// GUI.enabled = !mViewRobot;
		bool L_79 = __this->___mViewRobot_24;
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((((int32_t)L_79) == ((int32_t)0))? 1 : 0), NULL);
		// if (GUI.enabled)
		bool L_80;
		L_80 = GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D(NULL);
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_0397;
		}
	}
	{
		// mShaderBump = GUILayout.Toggle(mShaderBump, "Bump");
		bool L_82 = __this->___mShaderBump_12;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_83;
		L_83 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_84;
		L_84 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_82, _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B, L_83, NULL);
		__this->___mShaderBump_12 = L_84;
		goto IL_03a8;
	}

IL_0397:
	{
		// GUILayout.Toggle(false, "Bump");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_85;
		L_85 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_86;
		L_86 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7((bool)0, _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B, L_85, NULL);
	}

IL_03a8:
	{
		// GUI.enabled = !mUnityShader;
		bool L_87 = __this->___mUnityShader_10;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0), NULL);
		// mShaderReflection = GUILayout.Toggle(mShaderReflection, "Reflection");
		bool L_88 = __this->___mShaderReflection_13;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_89;
		L_89 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_90;
		L_90 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_88, _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD, L_89, NULL);
		__this->___mShaderReflection_13 = L_90;
		// var changed = mShaderRim;
		bool L_91 = __this->___mShaderRim_14;
		V_0 = L_91;
		// mShaderRim = GUILayout.Toggle(mShaderRim, "Rim Lighting");
		bool L_92 = __this->___mShaderRim_14;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_93;
		L_93 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_94;
		L_94 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_92, _stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6, L_93, NULL);
		__this->___mShaderRim_14 = L_94;
		// changed = changed != mShaderRim;
		bool L_95 = V_0;
		bool L_96 = __this->___mShaderRim_14;
		V_0 = (bool)((((int32_t)((((int32_t)L_95) == ((int32_t)L_96))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (changed && mShaderRim && mShaderRimOutline)
		bool L_97 = V_0;
		if (!L_97)
		{
			goto IL_0414;
		}
	}
	{
		bool L_98 = __this->___mShaderRim_14;
		if (!L_98)
		{
			goto IL_0414;
		}
	}
	{
		bool L_99 = __this->___mShaderRimOutline_15;
		G_B26_0 = ((int32_t)(L_99));
		goto IL_0415;
	}

IL_0414:
	{
		G_B26_0 = 0;
	}

IL_0415:
	{
		V_9 = (bool)G_B26_0;
		bool L_100 = V_9;
		if (!L_100)
		{
			goto IL_0422;
		}
	}
	{
		// mShaderRimOutline = false;
		__this->___mShaderRimOutline_15 = (bool)0;
	}

IL_0422:
	{
		// if (changed && mShaderRim)
		bool L_101 = V_0;
		if (!L_101)
		{
			goto IL_042d;
		}
	}
	{
		bool L_102 = __this->___mShaderRim_14;
		G_B31_0 = ((int32_t)(L_102));
		goto IL_042e;
	}

IL_042d:
	{
		G_B31_0 = 0;
	}

IL_042e:
	{
		V_10 = (bool)G_B31_0;
		bool L_103 = V_10;
		if (!L_103)
		{
			goto IL_043b;
		}
	}
	{
		// RestoreRimColors();
		TCP2_Demo_RestoreRimColors_mD17485C1C6B9F80EA2994CF5833D11AB83327368(__this, NULL);
	}

IL_043b:
	{
		// changed = mShaderRimOutline;
		bool L_104 = __this->___mShaderRimOutline_15;
		V_0 = L_104;
		// mShaderRimOutline = GUILayout.Toggle(mShaderRimOutline, "Rim Outline");
		bool L_105 = __this->___mShaderRimOutline_15;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_106;
		L_106 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_107;
		L_107 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_105, _stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1, L_106, NULL);
		__this->___mShaderRimOutline_15 = L_107;
		// changed = changed != mShaderRimOutline;
		bool L_108 = V_0;
		bool L_109 = __this->___mShaderRimOutline_15;
		V_0 = (bool)((((int32_t)((((int32_t)L_108) == ((int32_t)L_109))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (changed && mShaderRimOutline && mShaderRim)
		bool L_110 = V_0;
		if (!L_110)
		{
			goto IL_047d;
		}
	}
	{
		bool L_111 = __this->___mShaderRimOutline_15;
		if (!L_111)
		{
			goto IL_047d;
		}
	}
	{
		bool L_112 = __this->___mShaderRim_14;
		G_B37_0 = ((int32_t)(L_112));
		goto IL_047e;
	}

IL_047d:
	{
		G_B37_0 = 0;
	}

IL_047e:
	{
		V_11 = (bool)G_B37_0;
		bool L_113 = V_11;
		if (!L_113)
		{
			goto IL_048b;
		}
	}
	{
		// mShaderRim = false;
		__this->___mShaderRim_14 = (bool)0;
	}

IL_048b:
	{
		// if (changed && mShaderRimOutline)
		bool L_114 = V_0;
		if (!L_114)
		{
			goto IL_0496;
		}
	}
	{
		bool L_115 = __this->___mShaderRimOutline_15;
		G_B42_0 = ((int32_t)(L_115));
		goto IL_0497;
	}

IL_0496:
	{
		G_B42_0 = 0;
	}

IL_0497:
	{
		V_12 = (bool)G_B42_0;
		bool L_116 = V_12;
		if (!L_116)
		{
			goto IL_04a4;
		}
	}
	{
		// RimOutlineColor();
		TCP2_Demo_RimOutlineColor_mB9073DEFAFBA780557D809A23CDE4DBDD972784E(__this, NULL);
	}

IL_04a4:
	{
		// GUI.enabled &= mShaderRim || mShaderRimOutline;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_117;
		L_117 = GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D(NULL);
		bool L_118 = __this->___mShaderRim_14;
		G_B45_0 = L_117;
		if (L_118)
		{
			G_B46_0 = L_117;
			goto IL_04b9;
		}
	}
	{
		bool L_119 = __this->___mShaderRimOutline_15;
		G_B47_0 = ((int32_t)(L_119));
		G_B47_1 = G_B45_0;
		goto IL_04ba;
	}

IL_04b9:
	{
		G_B47_0 = 1;
		G_B47_1 = G_B46_0;
	}

IL_04ba:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((int32_t)((int32_t)G_B47_1&G_B47_0)), NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_120;
		L_120 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_120, NULL);
		// GUILayout.Label("Rim Min", GUILayout.Width(70));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_121 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_122 = L_121;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_123;
		L_123 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((70.0f), NULL);
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, L_123);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_123);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B, L_122, NULL);
		// mRimMin = GUILayout.HorizontalSlider(mRimMin, 0f, 1f, GUILayout.Width(130f));
		float L_124 = __this->___mRimMin_17;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_125 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_126 = L_125;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_127;
		L_127 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((130.0f), NULL);
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, L_127);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_127);
		float L_128;
		L_128 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_124, (0.0f), (1.0f), L_126, NULL);
		__this->___mRimMin_17 = L_128;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_129;
		L_129 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_129, NULL);
		// GUILayout.Label("Rim Max", GUILayout.Width(70));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_130 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_131 = L_130;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_132;
		L_132 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((70.0f), NULL);
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, L_132);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_132);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralAEC1BD2D2846995B2539A796563845CF33838719, L_131, NULL);
		// mRimMax = GUILayout.HorizontalSlider(mRimMax, 0f, 1f, GUILayout.Width(130f));
		float L_133 = __this->___mRimMax_18;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_134 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_135 = L_134;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_136;
		L_136 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((130.0f), NULL);
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, L_136);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_136);
		float L_137;
		L_137 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_133, (0.0f), (1.0f), L_135, NULL);
		__this->___mRimMax_18 = L_137;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUI.enabled = !mUnityShader;
		bool L_138 = __this->___mUnityShader_10;
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((((int32_t)L_138) == ((int32_t)0))? 1 : 0), NULL);
		// mShaderOutline = GUILayout.Toggle(mShaderOutline, "Outline");
		bool L_139 = __this->___mShaderOutline_16;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_140;
		L_140 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_141;
		L_141 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_139, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, L_140, NULL);
		__this->___mShaderOutline_16 = L_141;
		// GUILayout.Space(6);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((6.0f), NULL);
		// GUILayout.Label("Ramp Settings");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_142;
		L_142 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4, L_142, NULL);
		// mRampTextureFlag = GUILayout.Toggle(mRampTextureFlag, "Textured Ramp");
		bool L_143 = __this->___mRampTextureFlag_19;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_144;
		L_144 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_145;
		L_145 = GUILayout_Toggle_m59FC4209A021B0E6FBB880941B791487D359DBF7(L_143, _stringLiteral00591519A649DB10EE10C734428876B5B61C2590, L_144, NULL);
		__this->___mRampTextureFlag_19 = L_145;
		// GUI.enabled &= mRampTextureFlag;
		bool L_146;
		L_146 = GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D(NULL);
		bool L_147 = __this->___mRampTextureFlag_19;
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((int32_t)((int32_t)L_146&(int32_t)L_147)), NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_148;
		L_148 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_148, NULL);
		// var r = GUILayoutUtility.GetRect(200, 20, GUILayout.ExpandWidth(false));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_149 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_150 = L_149;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_151;
		L_151 = GUILayout_ExpandWidth_m79E06605EA8F34C76E6F93F53326E488CAFB0275((bool)0, NULL);
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, L_151);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_151);
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_152;
		L_152 = GUILayoutUtility_GetRect_m638D359B38D742F3F7D5769CF3C614A7E6BC349F((200.0f), (20.0f), L_150, NULL);
		V_1 = L_152;
		// r.y += 4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_153 = (&V_1);
		float L_154;
		L_154 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_153, NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_153, ((float)il2cpp_codegen_add(L_154, (4.0f))), NULL);
		// GUI.DrawTexture(r, mRampTexture);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_155 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_156 = __this->___mRampTexture_20;
		GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6(L_155, L_156, NULL);
		// if (GUILayout.Button("<", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_157 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_158 = L_157;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_159;
		L_159 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((26.0f), NULL);
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_159);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_159);
		bool L_160;
		L_160 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_158, NULL);
		V_13 = L_160;
		bool L_161 = V_13;
		if (!L_161)
		{
			goto IL_0662;
		}
	}
	{
		// PrevRamp();
		TCP2_Demo_PrevRamp_m2B41EACFEDCACDA2AC2DCE7F027C94D2C557ABE7(__this, NULL);
	}

IL_0662:
	{
		// if (GUILayout.Button(">", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_162 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_163 = L_162;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_164;
		L_164 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((26.0f), NULL);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_164);
		bool L_165;
		L_165 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_163, NULL);
		V_14 = L_165;
		bool L_166 = V_14;
		if (!L_166)
		{
			goto IL_068c;
		}
	}
	{
		// NextRamp();
		TCP2_Demo_NextRamp_m407C9F468599A8CA1074295F3C629B1828CDE08F(__this, NULL);
	}

IL_068c:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// GUI.enabled = !mUnityShader;
		bool L_167 = __this->___mUnityShader_10;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((((int32_t)L_167) == ((int32_t)0))? 1 : 0), NULL);
		// GUI.enabled &= !mRampTextureFlag;
		bool L_168;
		L_168 = GUI_get_enabled_m336E115A84DBD8D18A925D0755B51746B98B516D(NULL);
		bool L_169 = __this->___mRampTextureFlag_19;
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)((int32_t)((int32_t)L_168&((((int32_t)L_169) == ((int32_t)0))? 1 : 0))), NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_170;
		L_170 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m1BBD7EE29640BF48BED72DE582702809E6B22219(L_170, NULL);
		// GUILayout.Label("Smoothing", GUILayout.Width(85));
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_171 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_172 = L_171;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_173;
		L_173 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((85.0f), NULL);
		NullCheck(L_172);
		ArrayElementTypeCheck (L_172, L_173);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_173);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691, L_172, NULL);
		// mRampSmoothing = GUILayout.HorizontalSlider(mRampSmoothing, 0.01f, 1f, GUILayout.Width(115f));
		float L_174 = __this->___mRampSmoothing_21;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_175 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_176 = L_175;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_177;
		L_177 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((115.0f), NULL);
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, L_177);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_177);
		float L_178;
		L_178 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_174, (0.00999999978f), (1.0f), L_176, NULL);
		__this->___mRampSmoothing_21 = L_178;
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_m694C622FEE40FFF0DD77EFFD026F899C193507C0(NULL);
		// if (GUI.changed)
		bool L_179;
		L_179 = GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448(NULL);
		V_15 = L_179;
		bool L_180 = V_15;
		if (!L_180)
		{
			goto IL_073c;
		}
	}
	{
		// if (mUnityShader)
		bool L_181 = __this->___mUnityShader_10;
		V_16 = L_181;
		bool L_182 = V_16;
		if (!L_182)
		{
			goto IL_0734;
		}
	}
	{
		// UnityDiffuseShader();
		TCP2_Demo_UnityDiffuseShader_m492FFDFBD098665C2CB6FD68E37FDBC30A2CBA41(__this, NULL);
		goto IL_073b;
	}

IL_0734:
	{
		// UpdateShader();
		TCP2_Demo_UpdateShader_m6107CAFF5694DFD7EE72B7510F2845F163040447(__this, NULL);
	}

IL_073b:
	{
	}

IL_073c:
	{
		// GUI.enabled = true;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_enabled_mF2F99A6870ACAFAEFB5E8FF1B69C684951D390C9((bool)1, NULL);
		// GUILayout.Space(10);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((10.0f), NULL);
		// GUILayout.Label("Light Rotation");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_183;
		L_183 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58, L_183, NULL);
		// mLightRotationX = GUILayout.HorizontalSlider(mLightRotationX, 0f, 360f, GUILayout.Width(200f));
		float L_184 = __this->___mLightRotationX_22;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_185 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_186 = L_185;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_187;
		L_187 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((200.0f), NULL);
		NullCheck(L_186);
		ArrayElementTypeCheck (L_186, L_187);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_187);
		float L_188;
		L_188 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_184, (0.0f), (360.0f), L_186, NULL);
		__this->___mLightRotationX_22 = L_188;
		// mLightRotationY = GUILayout.HorizontalSlider(mLightRotationY, 0f, 360f, GUILayout.Width(200f));
		float L_189 = __this->___mLightRotationY_23;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_190 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_191 = L_190;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_192;
		L_192 = GUILayout_Width_m3FADF145F37481F9FEFF0E89E8A466CF5532DCE3((200.0f), NULL);
		NullCheck(L_191);
		ArrayElementTypeCheck (L_191, L_192);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14*)L_192);
		float L_193;
		L_193 = GUILayout_HorizontalSlider_mBEA9D057700379B0A570BD573DC0C42BEF523E41(L_189, (0.0f), (360.0f), L_191, NULL);
		__this->___mLightRotationY_23 = L_193;
		// GUILayout.Space(4);
		GUILayout_Space_m9254FBF173F9260DDB6C83C0066447FC9D9CA597((4.0f), NULL);
		// GUILayout.Label("Hold Left mouse button to rotate character", "SmallLabelShadow");
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_194;
		L_194 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_195;
		L_195 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7(_stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782, L_194, L_195, NULL);
		// r = GUILayoutUtility.GetLastRect();
		il2cpp_codegen_runtime_class_init_inline(GUILayoutUtility_t48D00CD11CFC1E09E8EC2E51D59E735F5D24836F_il2cpp_TypeInfo_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_196;
		L_196 = GUILayoutUtility_GetLastRect_m09C228A4DB31B3F0BF854871BB466FC06E3C8CB2(NULL);
		V_1 = L_196;
		// GUI.Label(r, "Hold Left mouse button to rotate character", "SmallLabel");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_197 = V_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_198;
		L_198 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_197, _stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782, L_198, NULL);
		// GUILayout.Label("Hold Right/Middle mouse button to scroll", "SmallLabelShadow");
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_199;
		L_199 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_200;
		L_200 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7(_stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7, L_199, L_200, NULL);
		// r = GUILayoutUtility.GetLastRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_201;
		L_201 = GUILayoutUtility_GetLastRect_m09C228A4DB31B3F0BF854871BB466FC06E3C8CB2(NULL);
		V_1 = L_201;
		// GUI.Label(r, "Hold Right/Middle mouse button to scroll", "SmallLabel");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_202 = V_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_203;
		L_203 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_202, _stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7, L_203, NULL);
		// GUILayout.Label("Use mouse scroll wheel or up/down keys to zoom", "SmallLabelShadow");
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_204;
		L_204 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_205;
		L_205 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_mE33EEB92B7A630E684A6A6D815908DD908C64EF7(_stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7, L_204, L_205, NULL);
		// r = GUILayoutUtility.GetLastRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_206;
		L_206 = GUILayoutUtility_GetLastRect_m09C228A4DB31B3F0BF854871BB466FC06E3C8CB2(NULL);
		V_1 = L_206;
		// GUI.Label(r, "Use mouse scroll wheel or up/down keys to zoom", "SmallLabel");
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_207 = V_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_208;
		L_208 = GUIStyle_op_Implicit_m18FEE416A9FA577B09D98D80408008F34A5D9FE5(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, NULL);
		GUI_Label_m0D7BA53414421D71010DFF628EAA6CCCB3DE737E(L_207, _stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7, L_208, NULL);
		// if (GUI.changed)
		bool L_209;
		L_209 = GUI_get_changed_m3473B2964DCE8C2ADE081517093168C171BBE448(NULL);
		V_17 = L_209;
		bool L_210 = V_17;
		if (!L_210)
		{
			goto IL_08b3;
		}
	}
	{
		// var angle = DirLight.transform.eulerAngles;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_211 = __this->___DirLight_7;
		NullCheck(L_211);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_211, NULL);
		NullCheck(L_212);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_212, NULL);
		V_18 = L_213;
		// angle.y = mLightRotationX;
		float L_214 = __this->___mLightRotationX_22;
		(&V_18)->___y_3 = L_214;
		// angle.x = mLightRotationY;
		float L_215 = __this->___mLightRotationY_23;
		(&V_18)->___x_2 = L_215;
		// DirLight.transform.eulerAngles = angle;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_216 = __this->___DirLight_7;
		NullCheck(L_216);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_217;
		L_217 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_216, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218 = V_18;
		NullCheck(L_217);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_217, L_218, NULL);
	}

IL_08b3:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_m3A9C6B4D373E8A871A71E0D8D2D9249D9F62F079(NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UnityDiffuseShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UnityDiffuseShader_m492FFDFBD098665C2CB6FD68E37FDBC30A2CBA41 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_2 = NULL;
	int32_t V_3 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	bool V_5 = false;
	{
		// var bumpedSpecular = Shader.Find("Bumped Specular");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0;
		L_0 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B, NULL);
		V_0 = L_0;
		// var specular = Shader.Find("Specular");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433, NULL);
		V_1 = L_1;
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2 = __this->___AffectedMaterials_4;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0059;
	}

IL_0023:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// if (m.name.Contains("Robot"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, NULL);
		V_5 = L_9;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// m.shader = specular;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_4;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_12 = V_1;
		NullCheck(L_11);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_11, L_12, NULL);
		goto IL_0054;
	}

IL_004b:
	{
		// m.shader = bumpedSpecular;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_4;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_14 = V_0;
		NullCheck(L_13);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_13, L_14, NULL);
	}

IL_0054:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_16 = V_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UpdateShader_m6107CAFF5694DFD7EE72B7510F2845F163040447 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP2_RuntimeUtils_t5E9598A60187D562FEDFC57BE19768E002F7129C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB491229C21663462214F90086EA80637221C891D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_5 = NULL;
	int32_t V_6 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_7 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_8 = NULL;
	bool V_9 = false;
	String_t* V_10 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_11 = NULL;
	int32_t V_12 = 0;
	String_t* V_13 = NULL;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___AffectedMaterials_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0129;
	}

IL_0010:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// ToggleKeyword(m, mShaderSpecular, "TCP2_SPEC");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_2;
		bool L_6 = __this->___mShaderSpecular_11;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_5, L_6, _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E, NULL);
		// if (!m.name.Contains("Robot"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// ToggleKeyword(m, mShaderBump, "TCP2_BUMP");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_2;
		bool L_12 = __this->___mShaderBump_12;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_11, L_12, _stringLiteralB491229C21663462214F90086EA80637221C891D, NULL);
	}

IL_0052:
	{
		// ToggleKeyword(m, mShaderReflection, "TCP2_REFLECTION_MASKED");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_2;
		bool L_14 = __this->___mShaderReflection_13;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_13, L_14, _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE, NULL);
		// ToggleKeyword(m, mShaderRim, "TCP2_RIM");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = V_2;
		bool L_16 = __this->___mShaderRim_14;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_15, L_16, _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68, NULL);
		// ToggleKeyword(m, mShaderRimOutline, "TCP2_RIMO");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_2;
		bool L_18 = __this->___mShaderRimOutline_15;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_17, L_18, _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B, NULL);
		// ToggleKeyword(m, mShaderOutline, "OUTLINES");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = V_2;
		bool L_20 = __this->___mShaderOutline_16;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_19, L_20, _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F, NULL);
		// ToggleKeyword(m, mRampTextureFlag, "TCP2_RAMPTEXT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_2;
		bool L_22 = __this->___mRampTextureFlag_19;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_21, L_22, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, NULL);
		// m.SetFloat("_RampSmooth", mRampSmoothing);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_2;
		float L_24 = __this->___mRampSmoothing_21;
		NullCheck(L_23);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_23, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, L_24, NULL);
		// m.SetTexture("_Ramp", mRampTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = __this->___mRampTexture_20;
		NullCheck(L_25);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_25, _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4, L_26, NULL);
		// m.SetFloat("_RimMin", mRimMin);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_2;
		float L_28 = __this->___mRimMin_17;
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3, L_28, NULL);
		// m.SetFloat("_RimMax", mRimMax);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = V_2;
		float L_30 = __this->___mRimMax_18;
		NullCheck(L_29);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_29, _stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044, L_30, NULL);
		// if (m.name.Contains("Robot"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_32, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, NULL);
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0124;
		}
	}
	{
		// ToggleKeyword(m, mRobotOutlineNormals, "TCP2_TANGENT_AS_NORMALS");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = V_2;
		bool L_36 = __this->___mRobotOutlineNormals_25;
		TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2(__this, L_35, L_36, _stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB, NULL);
	}

IL_0124:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0129:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_38 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_39 = V_0;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_40 = __this->___AffectedMaterials_4;
		V_5 = L_40;
		V_6 = 0;
		goto IL_01fa;
	}

IL_0143:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_41 = V_5;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		// var s = TCP2_RuntimeUtils.GetShaderWithKeywords(m);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = V_7;
		il2cpp_codegen_runtime_class_init_inline(TCP2_RuntimeUtils_t5E9598A60187D562FEDFC57BE19768E002F7129C_il2cpp_TypeInfo_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_46;
		L_46 = TCP2_RuntimeUtils_GetShaderWithKeywords_mE11554E03F5B2A42F0233E7128B06AF30D30D69A(L_45, NULL);
		V_8 = L_46;
		// if (s == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_47 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_48;
		bool L_49 = V_9;
		if (!L_49)
		{
			goto IL_01e7;
		}
	}
	{
		// var keywords = "";
		V_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var kw in m.shaderKeywords)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = V_7;
		NullCheck(L_50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = Material_get_shaderKeywords_m11982F09EED6BB0A892342E1A72AEA470C44B105(L_50, NULL);
		V_11 = L_51;
		V_12 = 0;
		goto IL_0199;
	}

IL_017c:
	{
		// foreach (var kw in m.shaderKeywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_11;
		int32_t L_53 = V_12;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_13 = L_55;
		// keywords += kw + ",";
		String_t* L_56 = V_10;
		String_t* L_57 = V_13;
		String_t* L_58;
		L_58 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_56, L_57, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		V_10 = L_58;
		int32_t L_59 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0199:
	{
		// foreach (var kw in m.shaderKeywords)
		int32_t L_60 = V_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_11;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
		{
			goto IL_017c;
		}
	}
	{
		// keywords = keywords.TrimEnd(',');
		String_t* L_62 = V_10;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_62, ((int32_t)44), NULL);
		V_10 = L_63;
		// Debug.LogError("[TCP2 Demo] Can't find shader for keywords: \"" + keywords + "\" in material \"" + m.name + "\"\nThe missing shaders probably need to be unpacked. See TCP2 Documentation!");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		String_t* L_67 = V_10;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_67);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_66;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_68;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = V_7;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_70, NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_69;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		String_t* L_73;
		L_73 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_72, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_73, NULL);
		goto IL_01f3;
	}

IL_01e7:
	{
		// m.shader = s;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = V_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_75 = V_8;
		NullCheck(L_74);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_74, L_75, NULL);
	}

IL_01f3:
	{
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01fa:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_77 = V_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_78 = V_5;
		NullCheck(L_78);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
		{
			goto IL_0143;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RimOutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RimOutlineColor_mB9073DEFAFBA780557D809A23CDE4DBDD972784E (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___AffectedMaterials_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_000d:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m.SetColor("_RimColor", Color.black);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_5);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_5, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_8 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RestoreRimColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RestoreRimColors_mD17485C1C6B9F80EA2994CF5833D11AB83327368 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___AffectedMaterials_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0077;
	}

IL_000d:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (m.name.Contains("Robot"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_6, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// m.SetColor("_RimColor", new Color(0.2f, 0.6f, 1f, 0.5f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (0.200000003f), (0.600000024f), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_9, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_10, NULL);
		goto IL_0072;
	}

IL_004d:
	{
		// m.SetColor("_RimColor", new Color(1f, 1f, 1f, 0.25f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_11, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_12, NULL);
	}

IL_0072:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0077:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_14 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_ToggleKeyword_m6729BD38B5A46D7D9EBE59A4025CF580B7A681C2 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// m.EnableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___m0;
		String_t* L_3 = ___keyword2;
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, L_3, NULL);
		goto IL_0018;
	}

IL_0010:
	{
		// m.DisableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___m0;
		String_t* L_5 = ___keyword2;
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PrevRamp_m2B41EACFEDCACDA2AC2DCE7F027C94D2C557ABE7 (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// var i = Array.IndexOf(RampTextures, mRampTexture);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_0 = __this->___RampTextures_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___mRampTexture_20;
		int32_t L_2;
		L_2 = Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC(L_0, L_1, Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC_RuntimeMethod_var);
		V_0 = L_2;
		// i = Mathf.Clamp(i, 0, RampTextures.Length-1);
		int32_t L_3 = V_0;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_4 = __this->___RampTextures_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), NULL);
		V_0 = L_5;
		// i--;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// if (i < 0)
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// i = RampTextures.Length-1;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_9 = __this->___RampTextures_5;
		NullCheck(L_9);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
	}

IL_003c:
	{
		// mRampTexture = RampTextures[i];
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_10 = __this->___RampTextures_5;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___mRampTexture_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRampTexture_20), (void*)L_13);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_NextRamp_m407C9F468599A8CA1074295F3C629B1828CDE08F (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// var i = Array.IndexOf(RampTextures, mRampTexture);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_0 = __this->___RampTextures_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___mRampTexture_20;
		int32_t L_2;
		L_2 = Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC(L_0, L_1, Array_IndexOf_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m2C7CFB6C11AA3838786ED270AFCC31E05A9B6FBC_RuntimeMethod_var);
		V_0 = L_2;
		// i = Mathf.Clamp(i, 0, RampTextures.Length-1);
		int32_t L_3 = V_0;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_4 = __this->___RampTextures_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)), NULL);
		V_0 = L_5;
		// i++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (i >= RampTextures.Length)
		int32_t L_7 = V_0;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_8 = __this->___RampTextures_5;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		// i = 0;
		V_0 = 0;
	}

IL_003d:
	{
		// mRampTexture = RampTextures[i];
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_10 = __this->___RampTextures_5;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___mRampTexture_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRampTexture_20), (void*)L_13);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo__ctor_mF61E268BFBB5C0D9912849784F9502B676FB999C (TCP2_Demo_t3A93D8E8D1DA53A66ED38E9DC21EBD6270FFAD84* __this, const RuntimeMethod* method) 
{
	{
		// private bool mShaderSpecular = true;
		__this->___mShaderSpecular_11 = (bool)1;
		// private bool mShaderBump = true;
		__this->___mShaderBump_12 = (bool)1;
		// private bool mShaderRim = true;
		__this->___mShaderRim_14 = (bool)1;
		// private bool mShaderOutline = true;
		__this->___mShaderOutline_16 = (bool)1;
		// private float mRimMin = 0.5f;
		__this->___mRimMin_17 = (0.5f);
		// private float mRimMax = 1.0f;
		__this->___mRimMax_18 = (1.0f);
		// private float mRampSmoothing = 0.15f;
		__this->___mRampSmoothing_21 = (0.150000006f);
		// private float mLightRotationX = 80f;
		__this->___mLightRotationX_22 = (80.0f);
		// private float mLightRotationY = 25f;
		__this->___mLightRotationY_23 = (25.0f);
		// private bool mRobotOutlineNormals = true;
		__this->___mRobotOutlineNormals_25 = (bool)1;
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_ShowPointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_ShowPointLights_m24769D241AD8F04C601AF9F8A129750879114FD9 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { PointLights.SetActive(value); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PointLights_5;
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// set { PointLights.SetActive(value); }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_ShowDirLight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_ShowDirLight_mBF1ECD3FCA37C4E8CCB74A142B2C6E1C8D288361 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { DirLight.enabled = value; }
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___DirLight_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// set { DirLight.enabled = value; }
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::get_RotatePointLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_PBS_get_RotatePointLights_mAD419152B7082B0AA6A692D04CAA65289A4FA016 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRotatePointLights; }
		bool L_0 = __this->___mRotatePointLights_30;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRotatePointLights; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_RotatePointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_RotatePointLights_m4A9CD8A884F44611B83B1B48A3AF714F5871EF34 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mRotatePointLights = value; }
		bool L_0 = ___value0;
		__this->___mRotatePointLights_30 = L_0;
		// set { mRotatePointLights = value; }
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::get_UseOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_PBS_get_UseOutline_m42513C1C500DC8C199DA6180D7FB61D8FE6BA5DA (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mUseOutline; }
		bool L_0 = __this->___mUseOutline_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mUseOutline; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseOutline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseOutline_m922838EFD87394E33892516B08DEB02535F3BE95 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// mUseOutline = value;
		bool L_0 = ___value0;
		__this->___mUseOutline_29 = L_0;
		// if (robotMaterial.shader.name.Contains("Toony"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___robotMaterial_28;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// ShowTCP2Shader();
		TCP2_Demo_PBS_ShowTCP2Shader_mA8739E0DB5AD7199E158A17E069CC1882EAB163A(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseRampTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseRampTexture_mF3DAF18452E81786D57D78F4392C2D41E0C898E9 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_RAMPTEXT", value ? 1f : 0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B3_2, G_B3_1, G_B3_0, NULL);
		// if (value)
		bool L_2 = ___value0;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_RAMPTEXT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___robotMaterial_28;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, NULL);
		goto IL_004a;
	}

IL_0039:
	{
		// robotMaterial.DisableKeyword("TCP2_RAMPTEXT");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___robotMaterial_28;
		NullCheck(L_5);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_5, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseStylizedFresnel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseStylizedFresnel_mCF9F9FF04E3F3BD15D70202255317618BA9E30EF (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_STYLIZED_FRESNEL", value ? 1f : 0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B3_2, G_B3_1, G_B3_0, NULL);
		// if (value)
		bool L_2 = ___value0;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_STYLIZED_FRESNEL");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___robotMaterial_28;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8, NULL);
		goto IL_004a;
	}

IL_0039:
	{
		// robotMaterial.DisableKeyword("TCP2_STYLIZED_FRESNEL");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___robotMaterial_28;
		NullCheck(L_5);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_5, _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseStylizedSpecular(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseStylizedSpecular_m29A48B7517A061F186569994727BBD0921BACF95 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_SPEC_TOON", value ? 1f : 0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B3_2, G_B3_1, G_B3_0, NULL);
		// if (value)
		bool L_2 = ___value0;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_SPEC_TOON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___robotMaterial_28;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D, NULL);
		goto IL_004a;
	}

IL_0039:
	{
		// robotMaterial.DisableKeyword("TCP2_SPEC_TOON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___robotMaterial_28;
		NullCheck(L_5);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_5, _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_Awake_m1FEB07A01A8CE4B62C9F2E908FCB09F252701E06 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial = Robot.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___Robot_6;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->___robotMaterial_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robotMaterial_28), (void*)L_1);
		// mUseOutline = robotMaterial.shader.name.Contains("Outline");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___robotMaterial_28;
		NullCheck(L_2);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3;
		L_3 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		__this->___mUseOutline_29 = L_5;
		// MetallicSlider.value = robotMaterial.GetFloat("_Metallic");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___MetallicSlider_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___robotMaterial_28;
		NullCheck(L_7);
		float L_8;
		L_8 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_7, _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// SmoothnessSlider.value = robotMaterial.GetFloat("_Glossiness");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___SmoothnessSlider_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___robotMaterial_28;
		NullCheck(L_10);
		float L_11;
		L_11 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_10, _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_11);
		// RampThresholdSlider.value = robotMaterial.GetFloat("_RampThreshold");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___RampThresholdSlider_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___robotMaterial_28;
		NullCheck(L_13);
		float L_14;
		L_14 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_13, _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		// RampSmoothSlider.value = robotMaterial.GetFloat("_RampSmooth");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___RampSmoothSlider_21;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___robotMaterial_28;
		NullCheck(L_16);
		float L_17;
		L_17 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_16, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_15, L_17);
		// RampSmoothAddSlider.value = robotMaterial.GetFloat("_RampSmoothAdd");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_18 = __this->___RampSmoothAddSlider_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___robotMaterial_28;
		NullCheck(L_19);
		float L_20;
		L_20 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_19, _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_20);
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_mAD73EAC90CAE1D6FE1711E3A8D57E4827075CD35(__this, NULL);
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_mC6AE87D30B3D0D71B5EAC5B343B62D514532D808(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_Update_m2CB1BDD7225E5AC803A2C9CA0B9F27FB806DBA8C (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (mRotatePointLights)
		bool L_0 = __this->___mRotatePointLights_30;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// PointLights.transform.Rotate(Vector3.up * 20f * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PointLights_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (20.0f), NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_3);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_3, L_7, NULL);
	}

IL_0035:
	{
		// if (Input.GetKeyDown(KeyCode.H))
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)104), NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// Canvas.SetActive(!Canvas.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Canvas_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Canvas_7;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_11, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_005a:
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		// NextSky();
		TCP2_Demo_PBS_NextSky_m39A3219BE60CEFF3BB0081F15157ABBDDF2D279A(__this, NULL);
	}

IL_006f:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_15;
		L_15 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		// PrevSky();
		TCP2_Demo_PBS_PrevSky_m150E67BF9EF37E599E664D7D4E554292C4BD3501(__this, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ToggleShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ToggleShader_m2188612EBF385176C4D5EEBC9B9B1ECDD8625CEA (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (robotMaterial.shader.name.Contains("Toony"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		NullCheck(L_0);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// ShowUnityStandardShader();
		TCP2_Demo_PBS_ShowUnityStandardShader_mC3F7B50DF880F795A2C86A6B5D9BFFDD6E259A0B(__this, NULL);
		// ShaderText.text = "View with TCP2 PBS shader";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ShaderText_16;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19);
		goto IL_0055;
	}

IL_003b:
	{
		// ShowTCP2Shader();
		TCP2_Demo_PBS_ShowTCP2Shader_mA8739E0DB5AD7199E158A17E069CC1882EAB163A(__this, NULL);
		// ShaderText.text = "View with Unity Standard shader";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___ShaderText_16;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextSky_m39A3219BE60CEFF3BB0081F15157ABBDDF2D279A (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// currentSky++;
		int32_t L_0 = __this->___currentSky_26;
		__this->___currentSky_26 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (currentSky >= SkySettings.Length) currentSky = 0;
		int32_t L_1 = __this->___currentSky_26;
		SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F* L_2 = __this->___SkySettings_8;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (currentSky >= SkySettings.Length) currentSky = 0;
		__this->___currentSky_26 = 0;
	}

IL_002d:
	{
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_mAD73EAC90CAE1D6FE1711E3A8D57E4827075CD35(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevSky_m150E67BF9EF37E599E664D7D4E554292C4BD3501 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// currentSky--;
		int32_t L_0 = __this->___currentSky_26;
		__this->___currentSky_26 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (currentSky < 0) currentSky = SkySettings.Length-1;
		int32_t L_1 = __this->___currentSky_26;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (currentSky < 0) currentSky = SkySettings.Length-1;
		SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F* L_3 = __this->___SkySettings_8;
		NullCheck(L_3);
		__this->___currentSky_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_002c:
	{
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_mAD73EAC90CAE1D6FE1711E3A8D57E4827075CD35(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextRamp_mD8D4CA91CC11CF3A540965794E6E2BFD853101E3 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// currentRamp++;
		int32_t L_0 = __this->___currentRamp_27;
		__this->___currentRamp_27 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (currentRamp >= RampTextures.Length) currentRamp = 0;
		int32_t L_1 = __this->___currentRamp_27;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_2 = __this->___RampTextures_10;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (currentRamp >= RampTextures.Length) currentRamp = 0;
		__this->___currentRamp_27 = 0;
	}

IL_002d:
	{
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_mC6AE87D30B3D0D71B5EAC5B343B62D514532D808(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevRamp_m9F1E6B16E6E825C67B66F77329DF1C97D7F17C06 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// currentRamp--;
		int32_t L_0 = __this->___currentRamp_27;
		__this->___currentRamp_27 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (currentRamp < 0) currentRamp = RampTextures.Length - 1;
		int32_t L_1 = __this->___currentRamp_27;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (currentRamp < 0) currentRamp = RampTextures.Length - 1;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_3 = __this->___RampTextures_10;
		NullCheck(L_3);
		__this->___currentRamp_27 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1));
	}

IL_002c:
	{
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_mC6AE87D30B3D0D71B5EAC5B343B62D514532D808(__this, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetMetallic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetMetallic_mF987D3B79EC7FC9A6A2E9E457030AD9AA34E2832 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_Metallic", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, L_1, NULL);
		// MetallicValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___MetallicValue_14;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetSmoothness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetSmoothness_mEFB2C622B1F49902DDFC988F41CF6FEF58911430 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_Glossiness", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, L_1, NULL);
		// SmoothnessValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___SmoothnessValue_12;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetBumpScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetBumpScale_mE8C6C490B5B333CD76D7EA43B8B792F5770B021A (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_BumpScale", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, L_1, NULL);
		// BumpScaleValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___BumpScaleValue_15;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampThreshold_m91E8389CD97EC4249427125B8642000394819A7C (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampThreshold", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166, L_1, NULL);
		// RampThresholdValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___RampThresholdValue_20;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampSmooth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampSmooth_mA177A621D665CE068154F34D6A2F51A9B603F902 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampSmooth", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, L_1, NULL);
		// RampSmoothValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___RampSmoothValue_22;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampSmoothAdd(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampSmoothAdd_mA1361D93117BCEAC8E662A81D7AE06BAE52E297F (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampSmoothAdd", f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_0, _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531, L_1, NULL);
		// RampSmoothAddValue.text = f.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___RampSmoothAddValue_24;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateRamp_mC6AE87D30B3D0D71B5EAC5B343B62D514532D808 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetTexture("_Ramp", RampTextures[currentRamp]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_1 = __this->___RampTextures_10;
		int32_t L_2 = __this->___currentRamp_27;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4, L_4, NULL);
		// RampValue.text = string.Format("{0}/{1}", currentRamp + 1, RampTextures.Length);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___RampValue_18;
		int32_t L_6 = __this->___currentRamp_27;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_9 = __this->___RampTextures_10;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_12);
		// RampImage.texture = RampTextures[currentRamp];
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_13 = __this->___RampImage_25;
		Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* L_14 = __this->___RampTextures_10;
		int32_t L_15 = __this->___currentRamp_27;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_13, L_17, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateSky_mAD73EAC90CAE1D6FE1711E3A8D57E4827075CD35 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* V_0 = NULL;
	bool V_1 = false;
	{
		// var ss = SkySettings[currentSky];
		SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F* L_0 = __this->___SkySettings_8;
		int32_t L_1 = __this->___currentSky_26;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// DirLight.transform.eulerAngles = ss.DirLightEuler;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = __this->___DirLight_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* L_6 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___DirLightEuler_2;
		NullCheck(L_5);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_5, L_7, NULL);
		// if (FlipLight)
		bool L_8 = __this->___FlipLight_9;
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// DirLight.transform.Rotate(Vector3.up, 180f, Space.Self);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___DirLight_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_11);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_11, L_12, (180.0f), 1, NULL);
	}

IL_004c:
	{
		// DirLight.color = ss.lightColor;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = __this->___DirLight_4;
		SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* L_14 = V_0;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = L_14->___lightColor_1;
		NullCheck(L_13);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_13, L_15, NULL);
		// RenderSettings.skybox = ss.SkyMaterial;
		SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* L_16 = V_0;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = L_16->___SkyMaterial_0;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_17, NULL);
		// RenderSettings.customReflection = ss.SkyMaterial.GetTexture("_Tex") as Cubemap;
		SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* L_18 = V_0;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = L_18->___SkyMaterial_0;
		NullCheck(L_19);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = Material_GetTexture_mBA07A377A7DDD29CD53E6F687DE6D49A42C0C719(L_19, _stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56, NULL);
		RenderSettings_set_customReflection_m4DF4A279AAB17D1E398C3DE83852B5140D0BF6DA(((Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C*)IsInstSealed((RuntimeObject*)L_20, Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var)), NULL);
		// DynamicGI.UpdateEnvironment();
		DynamicGI_UpdateEnvironment_m70AC224196548AC7A7FD7E6182591F692E98CF06(NULL);
		// SkyboxValue.text = string.Format("{0}/{1}", currentSky + 1, SkySettings.Length);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___SkyboxValue_17;
		int32_t L_22 = __this->___currentSky_26;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		SkyboxSettingU5BU5D_tC2F672CE5B5591C70293AB0B11B33F43C86E5A3F* L_25 = __this->___SkySettings_8;
		NullCheck(L_25);
		int32_t L_26 = ((int32_t)(((RuntimeArray*)L_25)->max_length));
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_24, L_27, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_28);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowUnityStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowUnityStandardShader_mC3F7B50DF880F795A2C86A6B5D9BFFDD6E259A0B (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.shader = Shader.Find("Standard");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___robotMaterial_28;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, NULL);
		NullCheck(L_0);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowTCP2Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowTCP2Shader_mA8739E0DB5AD7199E158A17E069CC1882EAB163A (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	bool V_2 = false;
	String_t* G_B3_0 = NULL;
	{
		// var shaderName = mUseOutline ? "Hidden/Toony Colors Pro 2/Standard PBS Outline" : "Toony Colors Pro 2/Standard PBS";
		bool L_0 = __this->___mUseOutline_29;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		// var shader = Shader.Find(shaderName);
		String_t* L_1 = V_0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(L_1, NULL);
		V_1 = L_2;
		// if (shader != null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// robotMaterial.shader = shader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___robotMaterial_28;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = V_1;
		NullCheck(L_6);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_6, L_7, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ToggleKeyword_m3D2B850C875DFECD5AB1497C7913AF48AF132CE2 (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// m.EnableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___m0;
		String_t* L_3 = ___keyword2;
		NullCheck(L_2);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_2, L_3, NULL);
		goto IL_0018;
	}

IL_0010:
	{
		// m.DisableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___m0;
		String_t* L_5 = ___keyword2;
		NullCheck(L_4);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS__ctor_m2C540100E5261B87AE4C5C6979EFFF208E5C4B0F (TCP2_Demo_PBS_t00AC37A90568C7FEC2191CC212BB85B119DE81BE* __this, const RuntimeMethod* method) 
{
	{
		// public bool FlipLight = true;
		__this->___FlipLight_9 = (bool)1;
		// bool mRotatePointLights = true;
		__this->___mRotatePointLights_30 = (bool)1;
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSetting__ctor_m73629F7CFC27397153C1CD9120B4CBE00CEEFAA2 (SkyboxSetting_t8A58A78F8C43D8F190BB8B54BFCA9BC3919D339D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_Awake_mEEDB188CE7229F3C10484432BBBF8382303C0E15 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) 
{
	{
		// mResetCamPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___mResetCamPos_24 = L_1;
		// mResetCamRot = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		__this->___mResetCamRot_26 = L_3;
		// mResetPivotPos = Pivot.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___Pivot_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___mResetPivotPos_25 = L_5;
		// mResetPivotRot = Pivot.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___Pivot_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		__this->___mResetPivotRot_27 = L_7;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_OnEnable_m47F79D8CF5AB1D6B2BF30136C6B9CD465D66A334 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) 
{
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_17 = L_0;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_Update_m441B2976ED65CCD053E4ADB3372DE71B016C31E0 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B49_0 = 0;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___mouseDelta_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		__this->___mouseDelta_17 = L_2;
		// var rightAlignedRect = ignoreMouseRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___ignoreMouseRect_16;
		V_0 = L_3;
		// rightAlignedRect.x = Screen.width - ignoreMouseRect.width;
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&__this->___ignoreMouseRect_16);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_5, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406((&V_0), ((float)il2cpp_codegen_subtract(((float)L_4), L_6)), NULL);
		// var ignoreMouse = rightAlignedRect.Contains(Input.mousePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		bool L_8;
		L_8 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B((&V_0), L_7, NULL);
		V_1 = L_8;
		// if (Input.GetMouseButtonDown(0))
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_7 = L_9;
		bool L_10 = V_7;
		if (!L_10)
		{
			goto IL_005d;
		}
	}
	{
		// leftMouseHeld = !ignoreMouse;
		bool L_11 = V_1;
		__this->___leftMouseHeld_28 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_005d:
	{
		// else if (Input.GetMouseButtonUp(0) || !Input.GetMouseButton(0))
		bool L_12;
		L_12 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		bool L_13;
		L_13 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		G_B5_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0071;
	}

IL_0070:
	{
		G_B5_0 = 1;
	}

IL_0071:
	{
		V_8 = (bool)G_B5_0;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// leftMouseHeld = false;
		__this->___leftMouseHeld_28 = (bool)0;
	}

IL_007e:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_15;
		L_15 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		V_9 = L_15;
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		// rightMouseHeld = !ignoreMouse;
		bool L_17 = V_1;
		__this->___rightMouseHeld_29 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_0096:
	{
		// else if (Input.GetMouseButtonUp(1) || !Input.GetMouseButton(1))
		bool L_18;
		L_18 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		if (L_18)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_19;
		L_19 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		G_B12_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B12_0 = 1;
	}

IL_00aa:
	{
		V_10 = (bool)G_B12_0;
		bool L_20 = V_10;
		if (!L_20)
		{
			goto IL_00b7;
		}
	}
	{
		// rightMouseHeld = false;
		__this->___rightMouseHeld_29 = (bool)0;
	}

IL_00b7:
	{
		// if (Input.GetMouseButtonDown(2))
		bool L_21;
		L_21 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		V_11 = L_21;
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00cf;
		}
	}
	{
		// middleMouseHeld = !ignoreMouse;
		bool L_23 = V_1;
		__this->___middleMouseHeld_30 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_00f0;
	}

IL_00cf:
	{
		// else if (Input.GetMouseButtonUp(2) || !Input.GetMouseButton(2))
		bool L_24;
		L_24 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(2, NULL);
		if (L_24)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_25;
		L_25 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		G_B19_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00e3;
	}

IL_00e2:
	{
		G_B19_0 = 1;
	}

IL_00e3:
	{
		V_12 = (bool)G_B19_0;
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00f0;
		}
	}
	{
		// middleMouseHeld = false;
		__this->___middleMouseHeld_30 = (bool)0;
	}

IL_00f0:
	{
		// if (leftMouseHeld)
		bool L_27 = __this->___leftMouseHeld_28;
		V_13 = L_27;
		bool L_28 = V_13;
		if (!L_28)
		{
			goto IL_0167;
		}
	}
	{
		// orbitAcceleration.x += Mathf.Clamp(mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___orbitAcceleration_18);
		float* L_30 = (&L_29->___x_2);
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___mouseDelta_17);
		float L_34 = L_33->___x_2;
		float L_35 = __this->___OrbitStrg_5;
		float L_36 = __this->___OrbitClamp_6;
		float L_37 = __this->___OrbitClamp_6;
		float L_38;
		L_38 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_34, L_35)), ((-L_36)), L_37, NULL);
		*((float*)L_31) = (float)((float)il2cpp_codegen_add(L_32, L_38));
		// orbitAcceleration.y += Mathf.Clamp(-mouseDelta.y * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___orbitAcceleration_18);
		float* L_40 = (&L_39->___y_3);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (&__this->___mouseDelta_17);
		float L_44 = L_43->___y_3;
		float L_45 = __this->___OrbitStrg_5;
		float L_46 = __this->___OrbitClamp_6;
		float L_47 = __this->___OrbitClamp_6;
		float L_48;
		L_48 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((-L_44)), L_45)), ((-L_46)), L_47, NULL);
		*((float*)L_41) = (float)((float)il2cpp_codegen_add(L_42, L_48));
		goto IL_01b4;
	}

IL_0167:
	{
		// else if (middleMouseHeld || rightMouseHeld)
		bool L_49 = __this->___middleMouseHeld_30;
		if (L_49)
		{
			goto IL_0177;
		}
	}
	{
		bool L_50 = __this->___rightMouseHeld_29;
		G_B26_0 = ((int32_t)(L_50));
		goto IL_0178;
	}

IL_0177:
	{
		G_B26_0 = 1;
	}

IL_0178:
	{
		V_14 = (bool)G_B26_0;
		bool L_51 = V_14;
		if (!L_51)
		{
			goto IL_01b4;
		}
	}
	{
		// panAcceleration.y += Mathf.Clamp(-mouseDelta.y * PanStrg, -PanClamp, PanClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_52 = (&__this->___panAcceleration_19);
		float* L_53 = (&L_52->___y_3);
		float* L_54 = L_53;
		float L_55 = *((float*)L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___mouseDelta_17);
		float L_57 = L_56->___y_3;
		float L_58 = __this->___PanStrg_7;
		float L_59 = __this->___PanClamp_8;
		float L_60 = __this->___PanClamp_8;
		float L_61;
		L_61 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((-L_57)), L_58)), ((-L_59)), L_60, NULL);
		*((float*)L_54) = (float)((float)il2cpp_codegen_add(L_55, L_61));
	}

IL_01b4:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_62;
		L_62 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		V_15 = L_62;
		bool L_63 = V_15;
		if (!L_63)
		{
			goto IL_01ca;
		}
	}
	{
		// ResetView();
		TCP2_Demo_PBS_View_ResetView_m795A13C2B8C62A8D2C2E7637D878C1E12C708268(__this, NULL);
	}

IL_01ca:
	{
		// var angle = transform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_64, NULL);
		V_2 = L_65;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_2;
		float L_67 = L_66.___x_2;
		if ((!(((float)L_67) < ((float)(180.0f)))))
		{
			goto IL_0204;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_2;
		float L_69 = L_68.___x_2;
		if ((!(((float)L_69) >= ((float)(60.0f)))))
		{
			goto IL_0204;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&__this->___orbitAcceleration_18);
		float L_71 = L_70->___y_3;
		G_B34_0 = ((((float)L_71) > ((float)(0.0f)))? 1 : 0);
		goto IL_0205;
	}

IL_0204:
	{
		G_B34_0 = 0;
	}

IL_0205:
	{
		V_16 = (bool)G_B34_0;
		bool L_72 = V_16;
		if (!L_72)
		{
			goto IL_021b;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&__this->___orbitAcceleration_18);
		L_73->___y_3 = (0.0f);
	}

IL_021b:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_2;
		float L_75 = L_74.___x_2;
		if ((!(((float)L_75) > ((float)(180.0f)))))
		{
			goto IL_0249;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_2;
		float L_77 = L_76.___x_2;
		if ((!(((float)L_77) <= ((float)(300.0f)))))
		{
			goto IL_0249;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = (&__this->___orbitAcceleration_18);
		float L_79 = L_78->___y_3;
		G_B40_0 = ((((float)L_79) < ((float)(0.0f)))? 1 : 0);
		goto IL_024a;
	}

IL_0249:
	{
		G_B40_0 = 0;
	}

IL_024a:
	{
		V_17 = (bool)G_B40_0;
		bool L_80 = V_17;
		if (!L_80)
		{
			goto IL_0260;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = (&__this->___orbitAcceleration_18);
		L_81->___y_3 = (0.0f);
	}

IL_0260:
	{
		// transform.RotateAround(Pivot.position, transform.right, orbitAcceleration.y * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = __this->___Pivot_4;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_83, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_87 = (&__this->___orbitAcceleration_18);
		float L_88 = L_87->___y_3;
		float L_89;
		L_89 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_82);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_82, L_84, L_86, ((float)il2cpp_codegen_multiply(L_88, L_89)), NULL);
		// transform.RotateAround(Pivot.position, Vector3.up, orbitAcceleration.x * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = __this->___Pivot_4;
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_91, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&__this->___orbitAcceleration_18);
		float L_95 = L_94->___x_2;
		float L_96;
		L_96 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_90);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_90, L_92, L_93, ((float)il2cpp_codegen_multiply(L_95, L_96)), NULL);
		// var pos = Pivot.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = __this->___Pivot_4;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_97, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		V_3 = L_99;
		// var yDiff = pos.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_3;
		float L_101 = L_100.___y_3;
		V_4 = L_101;
		// pos.y += panAcceleration.y * Time.deltaTime;
		float* L_102 = (&(&V_3)->___y_3);
		float* L_103 = L_102;
		float L_104 = *((float*)L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_105 = (&__this->___panAcceleration_19);
		float L_106 = L_105->___y_3;
		float L_107;
		L_107 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_103) = (float)((float)il2cpp_codegen_add(L_104, ((float)il2cpp_codegen_multiply(L_106, L_107))));
		// pos.y = Mathf.Clamp(pos.y, yMin, yMax);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_3;
		float L_109 = L_108.___y_3;
		float L_110 = __this->___yMin_9;
		float L_111 = __this->___yMax_10;
		float L_112;
		L_112 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_109, L_110, L_111, NULL);
		(&V_3)->___y_3 = L_112;
		// yDiff = pos.y - yDiff;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_3;
		float L_114 = L_113.___y_3;
		float L_115 = V_4;
		V_4 = ((float)il2cpp_codegen_subtract(L_114, L_115));
		// Pivot.transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = __this->___Pivot_4;
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_3;
		NullCheck(L_117);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_117, L_118, NULL);
		// pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_119;
		L_119 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_119, NULL);
		V_3 = L_120;
		// pos.y += yDiff;
		float* L_121 = (&(&V_3)->___y_3);
		float* L_122 = L_121;
		float L_123 = *((float*)L_122);
		float L_124 = V_4;
		*((float*)L_122) = (float)((float)il2cpp_codegen_add(L_123, L_124));
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_3;
		NullCheck(L_125);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_125, L_126, NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_127;
		L_127 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_5 = L_127;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_128 = __this->___zoomAcceleration_21;
		float L_129 = V_5;
		float L_130 = __this->___ZoomStrg_11;
		__this->___zoomAcceleration_21 = ((float)il2cpp_codegen_add(L_128, ((float)il2cpp_codegen_multiply(L_129, L_130))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_131 = __this->___zoomAcceleration_21;
		float L_132 = __this->___ZoomClamp_12;
		float L_133 = __this->___ZoomClamp_12;
		float L_134;
		L_134 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_131, ((-L_132)), L_133, NULL);
		__this->___zoomAcceleration_21 = L_134;
		// var dist = Vector3.Distance(transform.position, Pivot.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_135, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_137 = __this->___Pivot_4;
		NullCheck(L_137);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_137, NULL);
		float L_139;
		L_139 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_136, L_138, NULL);
		V_6 = L_139;
		// if ((dist >= ZoomDistMin && zoomAcceleration > 0) || (dist <= ZoomDistMax && zoomAcceleration < 0))
		float L_140 = V_6;
		float L_141 = __this->___ZoomDistMin_13;
		if ((!(((float)L_140) >= ((float)L_141))))
		{
			goto IL_03ca;
		}
	}
	{
		float L_142 = __this->___zoomAcceleration_21;
		if ((((float)L_142) > ((float)(0.0f))))
		{
			goto IL_03e6;
		}
	}

IL_03ca:
	{
		float L_143 = V_6;
		float L_144 = __this->___ZoomDistMax_14;
		if ((!(((float)L_143) <= ((float)L_144))))
		{
			goto IL_03e3;
		}
	}
	{
		float L_145 = __this->___zoomAcceleration_21;
		G_B47_0 = ((((float)L_145) < ((float)(0.0f)))? 1 : 0);
		goto IL_03e4;
	}

IL_03e3:
	{
		G_B47_0 = 0;
	}

IL_03e4:
	{
		G_B49_0 = G_B47_0;
		goto IL_03e7;
	}

IL_03e6:
	{
		G_B49_0 = 1;
	}

IL_03e7:
	{
		V_18 = (bool)G_B49_0;
		bool L_146 = V_18;
		if (!L_146)
		{
			goto IL_0416;
		}
	}
	{
		// transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
		L_147 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_149 = __this->___zoomAcceleration_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_148, L_149, NULL);
		float L_151;
		L_151 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_150, L_151, NULL);
		NullCheck(L_147);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_147, L_152, 1, NULL);
	}

IL_0416:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = __this->___orbitAcceleration_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_155 = __this->___Decceleration_15;
		float L_156;
		L_156 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_153, L_154, ((float)il2cpp_codegen_multiply(L_155, L_156)), NULL);
		__this->___orbitAcceleration_18 = L_157;
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = __this->___panAcceleration_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_160 = __this->___Decceleration_15;
		float L_161;
		L_161 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_158, L_159, ((float)il2cpp_codegen_multiply(L_160, L_161)), NULL);
		__this->___panAcceleration_19 = L_162;
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_163 = __this->___zoomAcceleration_21;
		float L_164 = __this->___Decceleration_15;
		float L_165;
		L_165 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_166;
		L_166 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_163, (0.0f), ((float)il2cpp_codegen_multiply(L_164, L_165)), NULL);
		__this->___zoomAcceleration_21 = L_166;
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = __this->___moveAcceleration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_169 = __this->___Decceleration_15;
		float L_170;
		L_170 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171;
		L_171 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_167, L_168, ((float)il2cpp_codegen_multiply(L_169, L_170)), NULL);
		__this->___moveAcceleration_20 = L_171;
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_17 = L_172;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_ResetView_m795A13C2B8C62A8D2C2E7637D878C1E12C708268 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) 
{
	{
		// moveAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___moveAcceleration_20 = L_0;
		// orbitAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___orbitAcceleration_18 = L_1;
		// panAcceleration = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___panAcceleration_19 = L_2;
		// zoomAcceleration = 0f;
		__this->___zoomAcceleration_21 = (0.0f);
		// transform.position = mResetCamPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___mResetCamPos_24;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		// transform.eulerAngles = mResetCamRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___mResetCamRot_26;
		NullCheck(L_5);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_5, L_6, NULL);
		// Pivot.position = mResetPivotPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___Pivot_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___mResetPivotPos_25;
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// Pivot.eulerAngles = mResetPivotRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___Pivot_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___mResetPivotRot_27;
		NullCheck(L_9);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View__ctor_m1F6B1483468B6B8769250BA6D84DE82F80AD5729 (TCP2_Demo_PBS_View_t5E7789BDF810D56A612A7678F3D2F250F92C50FA* __this, const RuntimeMethod* method) 
{
	{
		// public float OrbitStrg = 3f;
		__this->___OrbitStrg_5 = (3.0f);
		// public float OrbitClamp = 50f;
		__this->___OrbitClamp_6 = (50.0f);
		// public float PanStrg = 0.1f;
		__this->___PanStrg_7 = (0.100000001f);
		// public float PanClamp = 2f;
		__this->___PanClamp_8 = (2.0f);
		// public float ZoomStrg = 40f;
		__this->___ZoomStrg_11 = (40.0f);
		// public float ZoomClamp = 30f;
		__this->___ZoomClamp_12 = (30.0f);
		// public float ZoomDistMin = 1f;
		__this->___ZoomDistMin_13 = (1.0f);
		// public float ZoomDistMax = 2f;
		__this->___ZoomDistMax_14 = (2.0f);
		// public float Decceleration = 8f;
		__this->___Decceleration_15 = (8.0f);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_Awake_mA3E864058BF32F08DE33DA8A6093956458353930 (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) 
{
	{
		// mResetCamPos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___mResetCamPos_19 = L_2;
		// mResetCamRot = Camera.main.transform.eulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		__this->___mResetCamRot_20 = L_5;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_OnEnable_m2597D7959C06F2D95452078133E965C05E14E1DE (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) 
{
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_12 = L_0;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_Update_mE96BC9CF10AB3CDD9B4A91EB3ADFB83FFCDAE1D9 (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B3_0 = NULL;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B2_0 = NULL;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B4_0 = NULL;
	int32_t G_B5_0 = 0;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B5_1 = NULL;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B8_0 = NULL;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B9_1 = NULL;
	int32_t G_B15_0 = 0;
	float G_B22_0 = 0.0f;
	float* G_B22_1 = NULL;
	float G_B18_0 = 0.0f;
	float* G_B18_1 = NULL;
	float G_B20_0 = 0.0f;
	float* G_B20_1 = NULL;
	float G_B19_0 = 0.0f;
	float* G_B19_1 = NULL;
	int32_t G_B21_0 = 0;
	float G_B21_1 = 0.0f;
	float* G_B21_2 = NULL;
	int32_t G_B23_0 = 0;
	float G_B23_1 = 0.0f;
	float* G_B23_2 = NULL;
	float G_B28_0 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B28_1 = NULL;
	float G_B24_0 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B24_1 = NULL;
	float G_B26_0 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B26_1 = NULL;
	float G_B25_0 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	float G_B27_1 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B27_2 = NULL;
	int32_t G_B29_0 = 0;
	float G_B29_1 = 0.0f;
	TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* G_B29_2 = NULL;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___mouseDelta_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		__this->___mouseDelta_12 = L_2;
		// if (!mMouseDown)
		bool L_3 = __this->___mMouseDown_21;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// mMouseDown = (Input.GetMouseButtonDown(0) && !(new Rect(0, 65, 230, 260).Contains(Input.mousePosition))) ? true : false;
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		G_B2_0 = __this;
		if (!L_5)
		{
			G_B3_0 = __this;
			goto IL_0055;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), (0.0f), (65.0f), (230.0f), (260.0f), /*hidden argument*/NULL);
		V_3 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		bool L_8;
		L_8 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B((&V_3), L_7, NULL);
		G_B3_0 = G_B2_0;
		if (!L_8)
		{
			G_B4_0 = G_B2_0;
			goto IL_0058;
		}
	}

IL_0055:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0059;
	}

IL_0058:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0059:
	{
		NullCheck(G_B5_1);
		G_B5_1->___mMouseDown_21 = (bool)G_B5_0;
		goto IL_0072;
	}

IL_0060:
	{
		// mMouseDown = Input.GetMouseButtonUp(0) ? false : true;
		bool L_9;
		L_9 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		G_B7_0 = __this;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_006c;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_006d;
	}

IL_006c:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_006d:
	{
		NullCheck(G_B9_1);
		G_B9_1->___mMouseDown_21 = (bool)G_B9_0;
	}

IL_0072:
	{
		// if (mMouseDown)
		bool L_10 = __this->___mMouseDown_21;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_00b4;
		}
	}
	{
		// orbitAcceleration.y -= Mathf.Clamp(-mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___orbitAcceleration_13);
		float* L_13 = (&L_12->___y_3);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___mouseDelta_12);
		float L_17 = L_16->___x_2;
		float L_18 = __this->___OrbitStrg_4;
		float L_19 = __this->___OrbitClamp_5;
		float L_20 = __this->___OrbitClamp_5;
		float L_21;
		L_21 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((-L_17)), L_18)), ((-L_19)), L_20, NULL);
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract(L_15, L_21));
		goto IL_00ff;
	}

IL_00b4:
	{
		// else if (Input.GetMouseButton(2) || Input.GetMouseButton(1))
		bool L_22;
		L_22 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (L_22)
		{
			goto IL_00c4;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		G_B15_0 = ((int32_t)(L_23));
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B15_0 = 1;
	}

IL_00c5:
	{
		V_5 = (bool)G_B15_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00ff;
		}
	}
	{
		// panAcceleration.y += Mathf.Clamp(-mouseDelta.y * PanStrg, -PanClamp, PanClamp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___panAcceleration_14);
		float* L_26 = (&L_25->___y_3);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___mouseDelta_12);
		float L_30 = L_29->___y_3;
		float L_31 = __this->___PanStrg_6;
		float L_32 = __this->___PanClamp_7;
		float L_33 = __this->___PanClamp_7;
		float L_34;
		L_34 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(((-L_30)), L_31)), ((-L_32)), L_33, NULL);
		*((float*)L_27) = (float)((float)il2cpp_codegen_add(L_28, L_34));
	}

IL_00ff:
	{
		// orbitAcceleration.y += Input.GetKey(KeyCode.LeftArrow) ? 15 : (Input.GetKey(KeyCode.RightArrow) ? -15 : 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&__this->___orbitAcceleration_13);
		float* L_36 = (&L_35->___y_3);
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		bool L_39;
		L_39 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)276), NULL);
		G_B18_0 = L_38;
		G_B18_1 = L_37;
		if (L_39)
		{
			G_B22_0 = L_38;
			G_B22_1 = L_37;
			goto IL_012b;
		}
	}
	{
		bool L_40;
		L_40 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)275), NULL);
		G_B19_0 = G_B18_0;
		G_B19_1 = G_B18_1;
		if (L_40)
		{
			G_B20_0 = G_B18_0;
			G_B20_1 = G_B18_1;
			goto IL_0127;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_0129;
	}

IL_0127:
	{
		G_B21_0 = ((int32_t)-15);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_0129:
	{
		G_B23_0 = G_B21_0;
		G_B23_1 = G_B21_1;
		G_B23_2 = G_B21_2;
		goto IL_012d;
	}

IL_012b:
	{
		G_B23_0 = ((int32_t)15);
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_012d:
	{
		*((float*)G_B23_2) = (float)((float)il2cpp_codegen_add(G_B23_1, ((float)G_B23_0)));
		// zoomAcceleration += Input.GetKey(KeyCode.UpArrow) ? 1 : (Input.GetKey(KeyCode.DownArrow) ? -1 : 0);
		float L_41 = __this->___zoomAcceleration_16;
		bool L_42;
		L_42 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)273), NULL);
		G_B24_0 = L_41;
		G_B24_1 = __this;
		if (L_42)
		{
			G_B28_0 = L_41;
			G_B28_1 = __this;
			goto IL_0155;
		}
	}
	{
		bool L_43;
		L_43 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)274), NULL);
		G_B25_0 = G_B24_0;
		G_B25_1 = G_B24_1;
		if (L_43)
		{
			G_B26_0 = G_B24_0;
			G_B26_1 = G_B24_1;
			goto IL_0152;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_0153;
	}

IL_0152:
	{
		G_B27_0 = (-1);
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_0153:
	{
		G_B29_0 = G_B27_0;
		G_B29_1 = G_B27_1;
		G_B29_2 = G_B27_2;
		goto IL_0156;
	}

IL_0155:
	{
		G_B29_0 = 1;
		G_B29_1 = G_B28_0;
		G_B29_2 = G_B28_1;
	}

IL_0156:
	{
		NullCheck(G_B29_2);
		G_B29_2->___zoomAcceleration_16 = ((float)il2cpp_codegen_add(G_B29_1, ((float)G_B29_0)));
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_44;
		L_44 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		V_6 = L_44;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_0173;
		}
	}
	{
		// ResetView();
		TCP2_Demo_View_ResetView_m14BB208732E55F37B2B6070EFB16CBD117751C11(__this, NULL);
	}

IL_0173:
	{
		// var angle = Camera.main.transform.localEulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46;
		L_46 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_47, NULL);
		V_0 = L_48;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_0;
		float L_50 = L_49.___x_2;
		if ((!(((float)L_50) < ((float)(180.0f)))))
		{
			goto IL_01b1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_0;
		float L_52 = L_51.___x_2;
		if ((!(((float)L_52) >= ((float)(60.0f)))))
		{
			goto IL_01b1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___orbitAcceleration_13);
		float L_54 = L_53->___y_3;
		G_B35_0 = ((((float)L_54) > ((float)(0.0f)))? 1 : 0);
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B35_0 = 0;
	}

IL_01b2:
	{
		V_7 = (bool)G_B35_0;
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_01c8;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___orbitAcceleration_13);
		L_56->___y_3 = (0.0f);
	}

IL_01c8:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_0;
		float L_58 = L_57.___x_2;
		if ((!(((float)L_58) > ((float)(180.0f)))))
		{
			goto IL_01f6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_0;
		float L_60 = L_59.___x_2;
		if ((!(((float)L_60) <= ((float)(300.0f)))))
		{
			goto IL_01f6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&__this->___orbitAcceleration_13);
		float L_62 = L_61->___y_3;
		G_B41_0 = ((((float)L_62) < ((float)(0.0f)))? 1 : 0);
		goto IL_01f7;
	}

IL_01f6:
	{
		G_B41_0 = 0;
	}

IL_01f7:
	{
		V_8 = (bool)G_B41_0;
		bool L_63 = V_8;
		if (!L_63)
		{
			goto IL_020d;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&__this->___orbitAcceleration_13);
		L_64->___y_3 = (0.0f);
	}

IL_020d:
	{
		// CharacterTransform.Rotate(-orbitAcceleration * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = __this->___CharacterTransform_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = __this->___orbitAcceleration_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_66, NULL);
		float L_68;
		L_68 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_68, NULL);
		NullCheck(L_65);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_65, L_69, 0, NULL);
		// Camera.main.transform.Translate(panAcceleration * Time.deltaTime, Space.World);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_70;
		L_70 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___panAcceleration_14;
		float L_73;
		L_73 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_72, L_73, NULL);
		NullCheck(L_71);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_71, L_74, 0, NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_75;
		L_75 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_1 = L_75;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_76 = __this->___zoomAcceleration_16;
		float L_77 = V_1;
		float L_78 = __this->___ZoomStrg_8;
		__this->___zoomAcceleration_16 = ((float)il2cpp_codegen_add(L_76, ((float)il2cpp_codegen_multiply(L_77, L_78))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_79 = __this->___zoomAcceleration_16;
		float L_80 = __this->___ZoomClamp_9;
		float L_81 = __this->___ZoomClamp_9;
		float L_82;
		L_82 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_79, ((-L_80)), L_81, NULL);
		__this->___zoomAcceleration_16 = L_82;
		// Camera.main.transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.World);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_83;
		L_83 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_86 = __this->___zoomAcceleration_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_85, L_86, NULL);
		float L_88;
		L_88 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_87, L_88, NULL);
		NullCheck(L_84);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_84, L_89, 0, NULL);
		// if (Camera.main.transform.position.y > 1.65f)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_90;
		L_90 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_90, NULL);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_91, NULL);
		float L_93 = L_92.___y_3;
		V_9 = (bool)((((float)L_93) > ((float)(1.64999998f)))? 1 : 0);
		bool L_94 = V_9;
		if (!L_94)
		{
			goto IL_030d;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_95;
		L_95 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_96, NULL);
		V_10 = L_97;
		// pos.y = 1.65f;
		(&V_10)->___y_3 = (1.64999998f);
		// Camera.main.transform.position = pos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_98;
		L_98 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_10;
		NullCheck(L_99);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_99, L_100, NULL);
		goto IL_035f;
	}

IL_030d:
	{
		// else if (Camera.main.transform.position.y < 0.3f)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_101;
		L_101 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_101, NULL);
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		float L_104 = L_103.___y_3;
		V_11 = (bool)((((float)L_104) < ((float)(0.300000012f)))? 1 : 0);
		bool L_105 = V_11;
		if (!L_105)
		{
			goto IL_035f;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_106;
		L_106 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_106, NULL);
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		V_12 = L_108;
		// pos.y = 0.3f;
		(&V_12)->___y_3 = (0.300000012f);
		// Camera.main.transform.position = pos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109;
		L_109 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_109);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110;
		L_110 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_12;
		NullCheck(L_110);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_110, L_111, NULL);
	}

IL_035f:
	{
		// if (Camera.main.transform.position.z < -1.8f)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_112;
		L_112 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		float L_115 = L_114.___z_4;
		V_13 = (bool)((((float)L_115) < ((float)(-1.79999995f)))? 1 : 0);
		bool L_116 = V_13;
		if (!L_116)
		{
			goto IL_03b3;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_117;
		L_117 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		V_14 = L_119;
		// pos.z = -1.8f;
		(&V_14)->___z_4 = (-1.79999995f);
		// Camera.main.transform.position = pos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_120;
		L_120 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_120);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121;
		L_121 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_14;
		NullCheck(L_121);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_121, L_122, NULL);
		goto IL_0405;
	}

IL_03b3:
	{
		// else if (Camera.main.transform.position.z > -0.6f)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_123;
		L_123 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_123);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_124;
		L_124 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_123, NULL);
		NullCheck(L_124);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_124, NULL);
		float L_126 = L_125.___z_4;
		V_15 = (bool)((((float)L_126) > ((float)(-0.600000024f)))? 1 : 0);
		bool L_127 = V_15;
		if (!L_127)
		{
			goto IL_0405;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_128;
		L_128 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_128);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_128, NULL);
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_129, NULL);
		V_16 = L_130;
		// pos.z = -0.6f;
		(&V_16)->___z_4 = (-0.600000024f);
		// Camera.main.transform.position = pos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_131;
		L_131 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_131);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_131, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_16;
		NullCheck(L_132);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_132, L_133, NULL);
	}

IL_0405:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = __this->___orbitAcceleration_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_136 = __this->___Decceleration_10;
		float L_137;
		L_137 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_134, L_135, ((float)il2cpp_codegen_multiply(L_136, L_137)), NULL);
		__this->___orbitAcceleration_13 = L_138;
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = __this->___panAcceleration_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_141 = __this->___Decceleration_10;
		float L_142;
		L_142 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_139, L_140, ((float)il2cpp_codegen_multiply(L_141, L_142)), NULL);
		__this->___panAcceleration_14 = L_143;
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_144 = __this->___zoomAcceleration_16;
		float L_145 = __this->___Decceleration_10;
		float L_146;
		L_146 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_147;
		L_147 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_144, (0.0f), ((float)il2cpp_codegen_multiply(L_145, L_146)), NULL);
		__this->___zoomAcceleration_16 = L_147;
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = __this->___moveAcceleration_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_150 = __this->___Decceleration_10;
		float L_151;
		L_151 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_148, L_149, ((float)il2cpp_codegen_multiply(L_150, L_151)), NULL);
		__this->___moveAcceleration_15 = L_152;
		// mouseDelta = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___mouseDelta_12 = L_153;
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_ResetView_m14BB208732E55F37B2B6070EFB16CBD117751C11 (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) 
{
	{
		// Camera.main.transform.position = mResetCamPos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___mResetCamPos_19;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// Camera.main.transform.eulerAngles = mResetCamRot;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___mResetCamRot_20;
		NullCheck(L_4);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View__ctor_m25096E9308B50284FD61A4542948EE724311D773 (TCP2_Demo_View_t5DF7236FD20C2CC780F6ABBBB8EBC0540D08C889* __this, const RuntimeMethod* method) 
{
	{
		// public float OrbitStrg = 3f;
		__this->___OrbitStrg_4 = (3.0f);
		// public float OrbitClamp = 50f;
		__this->___OrbitClamp_5 = (50.0f);
		// public float PanStrg = 0.1f;
		__this->___PanStrg_6 = (0.100000001f);
		// public float PanClamp = 2f;
		__this->___PanClamp_7 = (2.0f);
		// public float ZoomStrg = 40f;
		__this->___ZoomStrg_8 = (40.0f);
		// public float ZoomClamp = 30f;
		__this->___ZoomClamp_9 = (30.0f);
		// public float Decceleration = 8f;
		__this->___Decceleration_10 = (8.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_m8CAB1BDBC35823CD2865B0DC31D31AA19DC4E1EB_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CrotatePointLightsU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4B2F94CFC770E4CAF8A59FDCC8424254648B7050_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CrotateLightsU3Ek__BackingField_24 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m3A32B1CC6DE916DB9BD1716B3FAF44D0DAA1DF43_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = __this->___U3CrotateLightsU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_mAE55D513CB5B0105AC0384264BD2427DA98EB75F_inline (TCP2_Demo_Cat_t545581B900A592005A7DD6939E9A32424CDE3F3B* __this, const RuntimeMethod* method) 
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = __this->___U3CrotatePointLightsU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_mE5FFF3D013F0880F7DF8C613E7CB44EBD7349DAB_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___a0;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___b1;
		float L_5 = L_4.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___x_1;
		float L_8 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___b1;
		float L_12 = L_11.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___a0;
		float L_14 = L_13.___y_2;
		float L_15 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = ___a0;
		float L_17 = L_16.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = ___b1;
		float L_19 = L_18.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = ___a0;
		float L_21 = L_20.___z_3;
		float L_22 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = ___a0;
		float L_24 = L_23.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = ___b1;
		float L_26 = L_25.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = ___a0;
		float L_28 = L_27.___w_4;
		float L_29 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_one_m0AA55064B3C47D9D94E5BC4EE6AEC5B6E4F2D151_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___to1;
		float L_2;
		L_2 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___from0;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___to1;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___from0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___to1;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10)))), NULL);
		V_1 = L_11;
		float L_12 = V_0;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_0030;
	}

IL_0030:
	{
		float L_14 = V_2;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		float L_2 = ___t2;
		float L_3 = ___t2;
		float L_4 = ___t2;
		float L_5 = ___t2;
		float L_6 = ___t2;
		___t2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___to1;
		float L_8 = ___t2;
		float L_9 = ___from0;
		float L_10 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
