﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t8E7D506555C39BDC847A5B62DB9413C0E19F9C8A;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t8EDD018BF26DB64590A9401CA14BBAB7BC5D2F37;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t826186B59A32B687978751BFE46041623BCF4BA4;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.OpenXR.GestureRecognizer
struct GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader
struct ICameraFader_t5A340FB234F3C91DE810CFB0542DC48F56506F0A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t168F62A5236518B8EDAD06AFD6E258EF8B5C0457;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68AB7D55F0DA754D6C02996CE17A595FF5B6A34F;
// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator
struct IProgressIndicator_t9C6F896C9D44D4078E294EF6E62471A3B5E1F3F9;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t3B05FA1782C2EFEE5A2A5251BB4CE24F61272463;
// System.Resources.IResourceReader
struct IResourceReader_tB5A7F9D51AB1F5FEC29628E2E541338D44A88379;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t0AAAFF82FCC0D7279D0B9803FBE37374FE39016E;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseController
struct MouseController_t7931500D5CE8360FC0E56487FC30FCBF1A735593;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater
struct OpenXRReprojectionUpdater_t04E6BFC47B184071CD5D06D104BF646326CAA998;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Resources.ResourceReader
struct ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile
struct SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t92DE5B85B5808D6481CA96234A466033A02D9DAE;
// System.Type
struct Type_t;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_t2A0D8AA856685F76177F6B8D6488054DBCCC2990;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t4D0B6896BEB93B28A830AA47872D8B31B57589F2;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::m_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___m_list_0;

public:
	inline static int32_t get_offset_of_m_list_0() { return static_cast<int32_t>(offsetof(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902, ___m_list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_m_list_0() const { return ___m_list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_m_list_0() { return &___m_list_0; }
	inline void set_m_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___m_list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_list_0), (void*)value);
	}
};


// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_6), (void*)value);
	}
};


// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
{
public:

public:
};


// System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652  : public RuntimeObject
{
public:
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager::m_startingCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_startingCulture_0;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager::m_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_neutralResourcesCulture_1;
	// System.Boolean System.Resources.ResourceFallbackManager::m_useParents
	bool ___m_useParents_2;

public:
	inline static int32_t get_offset_of_m_startingCulture_0() { return static_cast<int32_t>(offsetof(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652, ___m_startingCulture_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_startingCulture_0() const { return ___m_startingCulture_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_startingCulture_0() { return &___m_startingCulture_0; }
	inline void set_m_startingCulture_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_startingCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_startingCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_neutralResourcesCulture_1() { return static_cast<int32_t>(offsetof(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652, ___m_neutralResourcesCulture_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_neutralResourcesCulture_1() const { return ___m_neutralResourcesCulture_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_neutralResourcesCulture_1() { return &___m_neutralResourcesCulture_1; }
	inline void set_m_neutralResourcesCulture_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_neutralResourcesCulture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_neutralResourcesCulture_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_useParents_2() { return static_cast<int32_t>(offsetof(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652, ___m_useParents_2)); }
	inline bool get_m_useParents_2() const { return ___m_useParents_2; }
	inline bool* get_address_of_m_useParents_2() { return &___m_useParents_2; }
	inline void set_m_useParents_2(bool value)
	{
		___m_useParents_2 = value;
	}
};


// System.Resources.ResourceReader
struct ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::_store
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ____store_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.ResourceReader::_resCache
	Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * ____resCache_1;
	// System.Int64 System.Resources.ResourceReader::_nameSectionOffset
	int64_t ____nameSectionOffset_2;
	// System.Int64 System.Resources.ResourceReader::_dataSectionOffset
	int64_t ____dataSectionOffset_3;
	// System.Int32[] System.Resources.ResourceReader::_nameHashes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____nameHashes_4;
	// System.Int32* System.Resources.ResourceReader::_nameHashesPtr
	int32_t* ____nameHashesPtr_5;
	// System.Int32[] System.Resources.ResourceReader::_namePositions
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____namePositions_6;
	// System.Int32* System.Resources.ResourceReader::_namePositionsPtr
	int32_t* ____namePositionsPtr_7;
	// System.RuntimeType[] System.Resources.ResourceReader::_typeTable
	RuntimeTypeU5BU5D_t826186B59A32B687978751BFE46041623BCF4BA4* ____typeTable_8;
	// System.Int32[] System.Resources.ResourceReader::_typeNamePositions
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____typeNamePositions_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Resources.ResourceReader::_objFormatter
	BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * ____objFormatter_10;
	// System.Int32 System.Resources.ResourceReader::_numResources
	int32_t ____numResources_11;
	// System.IO.UnmanagedMemoryStream System.Resources.ResourceReader::_ums
	UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * ____ums_12;
	// System.Int32 System.Resources.ResourceReader::_version
	int32_t ____version_13;

public:
	inline static int32_t get_offset_of__store_0() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____store_0)); }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * get__store_0() const { return ____store_0; }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 ** get_address_of__store_0() { return &____store_0; }
	inline void set__store_0(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * value)
	{
		____store_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_0), (void*)value);
	}

	inline static int32_t get_offset_of__resCache_1() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____resCache_1)); }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * get__resCache_1() const { return ____resCache_1; }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA ** get_address_of__resCache_1() { return &____resCache_1; }
	inline void set__resCache_1(Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * value)
	{
		____resCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resCache_1), (void*)value);
	}

	inline static int32_t get_offset_of__nameSectionOffset_2() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____nameSectionOffset_2)); }
	inline int64_t get__nameSectionOffset_2() const { return ____nameSectionOffset_2; }
	inline int64_t* get_address_of__nameSectionOffset_2() { return &____nameSectionOffset_2; }
	inline void set__nameSectionOffset_2(int64_t value)
	{
		____nameSectionOffset_2 = value;
	}

	inline static int32_t get_offset_of__dataSectionOffset_3() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____dataSectionOffset_3)); }
	inline int64_t get__dataSectionOffset_3() const { return ____dataSectionOffset_3; }
	inline int64_t* get_address_of__dataSectionOffset_3() { return &____dataSectionOffset_3; }
	inline void set__dataSectionOffset_3(int64_t value)
	{
		____dataSectionOffset_3 = value;
	}

	inline static int32_t get_offset_of__nameHashes_4() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____nameHashes_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__nameHashes_4() const { return ____nameHashes_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__nameHashes_4() { return &____nameHashes_4; }
	inline void set__nameHashes_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____nameHashes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nameHashes_4), (void*)value);
	}

	inline static int32_t get_offset_of__nameHashesPtr_5() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____nameHashesPtr_5)); }
	inline int32_t* get__nameHashesPtr_5() const { return ____nameHashesPtr_5; }
	inline int32_t** get_address_of__nameHashesPtr_5() { return &____nameHashesPtr_5; }
	inline void set__nameHashesPtr_5(int32_t* value)
	{
		____nameHashesPtr_5 = value;
	}

	inline static int32_t get_offset_of__namePositions_6() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____namePositions_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__namePositions_6() const { return ____namePositions_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__namePositions_6() { return &____namePositions_6; }
	inline void set__namePositions_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____namePositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namePositions_6), (void*)value);
	}

	inline static int32_t get_offset_of__namePositionsPtr_7() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____namePositionsPtr_7)); }
	inline int32_t* get__namePositionsPtr_7() const { return ____namePositionsPtr_7; }
	inline int32_t** get_address_of__namePositionsPtr_7() { return &____namePositionsPtr_7; }
	inline void set__namePositionsPtr_7(int32_t* value)
	{
		____namePositionsPtr_7 = value;
	}

	inline static int32_t get_offset_of__typeTable_8() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____typeTable_8)); }
	inline RuntimeTypeU5BU5D_t826186B59A32B687978751BFE46041623BCF4BA4* get__typeTable_8() const { return ____typeTable_8; }
	inline RuntimeTypeU5BU5D_t826186B59A32B687978751BFE46041623BCF4BA4** get_address_of__typeTable_8() { return &____typeTable_8; }
	inline void set__typeTable_8(RuntimeTypeU5BU5D_t826186B59A32B687978751BFE46041623BCF4BA4* value)
	{
		____typeTable_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeTable_8), (void*)value);
	}

	inline static int32_t get_offset_of__typeNamePositions_9() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____typeNamePositions_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__typeNamePositions_9() const { return ____typeNamePositions_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__typeNamePositions_9() { return &____typeNamePositions_9; }
	inline void set__typeNamePositions_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____typeNamePositions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeNamePositions_9), (void*)value);
	}

	inline static int32_t get_offset_of__objFormatter_10() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____objFormatter_10)); }
	inline BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * get__objFormatter_10() const { return ____objFormatter_10; }
	inline BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 ** get_address_of__objFormatter_10() { return &____objFormatter_10; }
	inline void set__objFormatter_10(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * value)
	{
		____objFormatter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objFormatter_10), (void*)value);
	}

	inline static int32_t get_offset_of__numResources_11() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____numResources_11)); }
	inline int32_t get__numResources_11() const { return ____numResources_11; }
	inline int32_t* get_address_of__numResources_11() { return &____numResources_11; }
	inline void set__numResources_11(int32_t value)
	{
		____numResources_11 = value;
	}

	inline static int32_t get_offset_of__ums_12() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____ums_12)); }
	inline UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * get__ums_12() const { return ____ums_12; }
	inline UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 ** get_address_of__ums_12() { return &____ums_12; }
	inline void set__ums_12(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * value)
	{
		____ums_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ums_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}
};


// System.Resources.ResourceSet
struct ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____caseInsensitiveTable_2;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ___Table_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_1), (void*)value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_2() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ____caseInsensitiveTable_2)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__caseInsensitiveTable_2() const { return ____caseInsensitiveTable_2; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__caseInsensitiveTable_2() { return &____caseInsensitiveTable_2; }
	inline void set__caseInsensitiveTable_2(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____caseInsensitiveTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caseInsensitiveTable_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// System.Numerics.Quaternion
struct Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Windows.Foundation.Numerics.Quaternion
struct Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 
{
public:
	// System.Single Windows.Foundation.Numerics.Quaternion::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single Windows.Foundation.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};


// Microsoft.Win32.RegistryKey
struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// Microsoft.Win32.SafeHandles.SafeRegistryHandle Microsoft.Win32.RegistryKey::safe_handle
	SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * ___safe_handle_2;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_3;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_5;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_6;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_1), (void*)value);
	}

	inline static int32_t get_offset_of_safe_handle_2() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___safe_handle_2)); }
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * get_safe_handle_2() const { return ___safe_handle_2; }
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 ** get_address_of_safe_handle_2() { return &___safe_handle_2; }
	inline void set_safe_handle_2(SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * value)
	{
		___safe_handle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safe_handle_2), (void*)value);
	}

	inline static int32_t get_offset_of_hive_3() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___hive_3)); }
	inline RuntimeObject * get_hive_3() const { return ___hive_3; }
	inline RuntimeObject ** get_address_of_hive_3() { return &___hive_3; }
	inline void set_hive_3(RuntimeObject * value)
	{
		___hive_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hive_3), (void*)value);
	}

	inline static int32_t get_offset_of_qname_4() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___qname_4)); }
	inline String_t* get_qname_4() const { return ___qname_4; }
	inline String_t** get_address_of_qname_4() { return &___qname_4; }
	inline void set_qname_4(String_t* value)
	{
		___qname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qname_4), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_5() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___isRemoteRoot_5)); }
	inline bool get_isRemoteRoot_5() const { return ___isRemoteRoot_5; }
	inline bool* get_address_of_isRemoteRoot_5() { return &___isRemoteRoot_5; }
	inline void set_isRemoteRoot_5(bool value)
	{
		___isRemoteRoot_5 = value;
	}

	inline static int32_t get_offset_of_isWritable_6() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___isWritable_6)); }
	inline bool get_isWritable_6() const { return ___isWritable_6; }
	inline bool* get_address_of_isWritable_6() { return &___isWritable_6; }
	inline void set_isWritable_6(bool value)
	{
		___isWritable_6 = value;
	}
};

struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_7;

public:
	inline static int32_t get_offset_of_RegistryApi_7() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_StaticFields, ___RegistryApi_7)); }
	inline RuntimeObject* get_RegistryApi_7() const { return ___RegistryApi_7; }
	inline RuntimeObject** get_address_of_RegistryApi_7() { return &___RegistryApi_7; }
	inline void set_RegistryApi_7(RuntimeObject* value)
	{
		___RegistryApi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegistryApi_7), (void*)value);
	}
};


// Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7 
{
public:
	// Mono.RuntimeStructs/GPtrArray* Mono.RuntimeGPtrArrayHandle::value
	GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7, ___value_0)); }
	inline GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * get_value_0() const { return ___value_0; }
	inline GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * value)
	{
		___value_0 = value;
	}
};


// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A  : public ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;

public:
	inline static int32_t get_offset_of__resCache_4() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____resCache_4)); }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * get__resCache_4() const { return ____resCache_4; }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA ** get_address_of__resCache_4() { return &____resCache_4; }
	inline void set__resCache_4(Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * value)
	{
		____resCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resCache_4), (void*)value);
	}

	inline static int32_t get_offset_of__defaultReader_5() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____defaultReader_5)); }
	inline ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * get__defaultReader_5() const { return ____defaultReader_5; }
	inline ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 ** get_address_of__defaultReader_5() { return &____defaultReader_5; }
	inline void set__defaultReader_5(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * value)
	{
		____defaultReader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultReader_5), (void*)value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_6() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____caseInsensitiveTable_6)); }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * get__caseInsensitiveTable_6() const { return ____caseInsensitiveTable_6; }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA ** get_address_of__caseInsensitiveTable_6() { return &____caseInsensitiveTable_6; }
	inline void set__caseInsensitiveTable_6(Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * value)
	{
		____caseInsensitiveTable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caseInsensitiveTable_6), (void*)value);
	}

	inline static int32_t get_offset_of__haveReadFromReader_7() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____haveReadFromReader_7)); }
	inline bool get__haveReadFromReader_7() const { return ____haveReadFromReader_7; }
	inline bool* get_address_of__haveReadFromReader_7() { return &____haveReadFromReader_7; }
	inline void set__haveReadFromReader_7(bool value)
	{
		____haveReadFromReader_7 = value;
	}
};


// System.Security.Cryptography.SHA1
struct SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.TappedEventData
#pragma pack(push, tp, 8)
struct TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A 
{
public:
	// System.UInt32 Microsoft.MixedReality.OpenXR.TappedEventData::TapCount
	uint32_t ___TapCount_0;

public:
	inline static int32_t get_offset_of_TapCount_0() { return static_cast<int32_t>(offsetof(TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A, ___TapCount_0)); }
	inline uint32_t get_TapCount_0() const { return ___TapCount_0; }
	inline uint32_t* get_address_of_TapCount_0() { return &___TapCount_0; }
	inline void set_TapCount_0(uint32_t value)
	{
		___TapCount_0 = value;
	}
};
#pragma pack(pop, tp)


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6BBE84644D81C739672BB5FE7BD65AD8AD6C044B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0FC3B384D7E37F93935DFB33EA2D44E3FC3E8F49(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Quaternion>
struct NOVTABLE IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B0A6358249758D52E8655254FFC53AB4E48D2F(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>
struct NOVTABLE IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m223D1D22BBB08115FECD12012F70419914365276(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m64387D2D55E86DABEC832FDADDA12CBF1C7C1D5E(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m96AACCD499BB14F3DBACD6CA120C283ABCE73263(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets
struct CameraFaderTargets_tE48BB4CBFBF51E8983C0BB45CCA3CD47152F9170 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFaderTargets_tE48BB4CBFBF51E8983C0BB45CCA3CD47152F9170, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.CapturePixelFormat
struct CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureEventType
struct GestureEventType_tA26C26414A266CE6AF813E65D724F6892293970C 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureEventType_tA26C26414A266CE6AF813E65D724F6892293970C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureHandedness
struct GestureHandedness_tEEE44F94DEE0F15930DADABCC016DA5AAA950E73 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureHandedness_tEEE44F94DEE0F15930DADABCC016DA5AAA950E73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.ManipulationEventData
#pragma pack(push, tp, 8)
struct ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.ManipulationEventData::CumulativeTranslation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CumulativeTranslation_0;

public:
	inline static int32_t get_offset_of_CumulativeTranslation_0() { return static_cast<int32_t>(offsetof(ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73, ___CumulativeTranslation_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CumulativeTranslation_0() const { return ___CumulativeTranslation_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CumulativeTranslation_0() { return &___CumulativeTranslation_0; }
	inline void set_CumulativeTranslation_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CumulativeTranslation_0 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.OpenXR.NativeDirectionFlags
struct NativeDirectionFlags_t2DEB41390F2E774AF80935281A5D3C6D23CCC066 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.NativeDirectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeDirectionFlags_t2DEB41390F2E774AF80935281A5D3C6D23CCC066, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags
struct NativeSpaceLocationFlags_t8EFCC4E62548D8D415FEC9F97EB22C6FC032C0DB 
{
public:
	// System.UInt32 Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeSpaceLocationFlags_t8EFCC4E62548D8D415FEC9F97EB22C6FC032C0DB, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.OpenXR.OpenXRRuntimeRestartHandler
struct OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.OpenXR.OpenXRRuntimeRestartHandler::m_featureName
	String_t* ___m_featureName_0;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.OpenXR.OpenXRRuntimeRestartHandler::m_skipRestart
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_skipRestart_1;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.OpenXR.OpenXRRuntimeRestartHandler::m_skipQuitApp
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_skipQuitApp_2;

public:
	inline static int32_t get_offset_of_m_featureName_0() { return static_cast<int32_t>(offsetof(OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC, ___m_featureName_0)); }
	inline String_t* get_m_featureName_0() const { return ___m_featureName_0; }
	inline String_t** get_address_of_m_featureName_0() { return &___m_featureName_0; }
	inline void set_m_featureName_0(String_t* value)
	{
		___m_featureName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_featureName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_skipRestart_1() { return static_cast<int32_t>(offsetof(OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC, ___m_skipRestart_1)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_skipRestart_1() const { return ___m_skipRestart_1; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_skipRestart_1() { return &___m_skipRestart_1; }
	inline void set_m_skipRestart_1(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_skipRestart_1 = value;
	}

	inline static int32_t get_offset_of_m_skipQuitApp_2() { return static_cast<int32_t>(offsetof(OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC, ___m_skipQuitApp_2)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_skipQuitApp_2() const { return ___m_skipQuitApp_2; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_skipQuitApp_2() { return &___m_skipQuitApp_2; }
	inline void set_m_skipQuitApp_2(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_skipQuitApp_2 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1  : public RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}
};


// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7  : public SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7, ___sha_4)); }
	inline SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sha_4), (void*)value);
	}
};


// Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A 
{
public:
	// Mono.RuntimeGPtrArrayHandle Mono.SafeGPtrArrayHandle::handle
	RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A, ___handle_0)); }
	inline RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  get_handle_0() const { return ___handle_0; }
	inline RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  value)
	{
		___handle_0 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E 
{
public:
	// System.String Mono.SafeStringMarshal::str
	String_t* ___str_0;
	// System.IntPtr Mono.SafeStringMarshal::marshaled_string
	intptr_t ___marshaled_string_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_0), (void*)value);
	}

	inline static int32_t get_offset_of_marshaled_string_1() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E, ___marshaled_string_1)); }
	inline intptr_t get_marshaled_string_1() const { return ___marshaled_string_1; }
	inline intptr_t* get_address_of_marshaled_string_1() { return &___marshaled_string_1; }
	inline void set_marshaled_string_1(intptr_t value)
	{
		___marshaled_string_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshaled_pinvoke
{
	char* ___str_0;
	intptr_t ___marshaled_string_1;
};
// Native definition for COM marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshaled_com
{
	Il2CppChar* ___str_0;
	intptr_t ___marshaled_string_1;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct WindowsGestureSettings_t03E2C76EFFF7CCF4CFAB2C424422BAA90ABF21F9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_t03E2C76EFFF7CCF4CFAB2C424422BAA90ABF21F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAFDC3A521A2D5078E107CAAA4F124AFC2D25F526(int32_t* comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventExecutionDepth_13)); }
	inline int32_t get_eventExecutionDepth_13() const { return ___eventExecutionDepth_13; }
	inline int32_t* get_address_of_eventExecutionDepth_13() { return &___eventExecutionDepth_13; }
	inline void set_eventExecutionDepth_13(int32_t value)
	{
		___eventExecutionDepth_13 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___eventSystemHandlerType_14)); }
	inline Type_t * get_eventSystemHandlerType_14() const { return ___eventSystemHandlerType_14; }
	inline Type_t ** get_address_of_eventSystemHandlerType_14() { return &___eventSystemHandlerType_14; }
	inline void set_eventSystemHandlerType_14(Type_t * value)
	{
		___eventSystemHandlerType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_14), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedActions_15)); }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * get_postponedActions_15() const { return ___postponedActions_15; }
	inline List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 ** get_address_of_postponedActions_15() { return &___postponedActions_15; }
	inline void set_postponedActions_15(List_1_tA13D401EC270D24A0D7662CA0E55BD0EF020D215 * value)
	{
		___postponedActions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_15), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_16() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___postponedObjectActions_16)); }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * get_postponedObjectActions_16() const { return ___postponedObjectActions_16; }
	inline List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 ** get_address_of_postponedObjectActions_16() { return &___postponedObjectActions_16; }
	inline void set_postponedObjectActions_16(List_1_t8473DB386AC0B94DD5FF2E16A7570939FC4C15F9 * value)
	{
		___postponedObjectActions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventHandlersByTypeU3Ek__BackingField_17)); }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * get_U3CEventHandlersByTypeU3Ek__BackingField_17() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_17() { return &___U3CEventHandlersByTypeU3Ek__BackingField_17; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_17(Dictionary_2_tEB7DD469D67D40F77F686DD4BC38E8ED993B35A9 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4, ___U3CEventListenersU3Ek__BackingField_18)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_18() const { return ___U3CEventListenersU3Ek__BackingField_18; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_18() { return &___U3CEventListenersU3Ek__BackingField_18; }
	inline void set_U3CEventListenersU3Ek__BackingField_18(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_18), (void*)value);
	}
};

struct BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_19;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___enableDanglingHandlerDiagnostics_12)); }
	inline bool get_enableDanglingHandlerDiagnostics_12() const { return ___enableDanglingHandlerDiagnostics_12; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_12() { return &___enableDanglingHandlerDiagnostics_12; }
	inline void set_enableDanglingHandlerDiagnostics_12(bool value)
	{
		___enableDanglingHandlerDiagnostics_12 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_19() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_19() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_19; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.NativeGesturePoseData
#pragma pack(push, tp, 8)
struct NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.NativeGesturePoseData::gestureTime
	uint64_t ___gestureTime_0;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::headPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose_1;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::headPoseFlags
	uint32_t ___headPoseFlags_2;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::eyeGazePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___eyeGazePose_3;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::eyeGazePoseFlags
	uint32_t ___eyeGazePoseFlags_4;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handAimPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___handAimPose_5;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handAimPoseFlags
	uint32_t ___handAimPoseFlags_6;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handGripPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___handGripPose_7;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handGripPoseFlags
	uint32_t ___handGripPoseFlags_8;

public:
	inline static int32_t get_offset_of_gestureTime_0() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___gestureTime_0)); }
	inline uint64_t get_gestureTime_0() const { return ___gestureTime_0; }
	inline uint64_t* get_address_of_gestureTime_0() { return &___gestureTime_0; }
	inline void set_gestureTime_0(uint64_t value)
	{
		___gestureTime_0 = value;
	}

	inline static int32_t get_offset_of_headPose_1() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___headPose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_headPose_1() const { return ___headPose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_headPose_1() { return &___headPose_1; }
	inline void set_headPose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___headPose_1 = value;
	}

	inline static int32_t get_offset_of_headPoseFlags_2() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___headPoseFlags_2)); }
	inline uint32_t get_headPoseFlags_2() const { return ___headPoseFlags_2; }
	inline uint32_t* get_address_of_headPoseFlags_2() { return &___headPoseFlags_2; }
	inline void set_headPoseFlags_2(uint32_t value)
	{
		___headPoseFlags_2 = value;
	}

	inline static int32_t get_offset_of_eyeGazePose_3() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___eyeGazePose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_eyeGazePose_3() const { return ___eyeGazePose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_eyeGazePose_3() { return &___eyeGazePose_3; }
	inline void set_eyeGazePose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___eyeGazePose_3 = value;
	}

	inline static int32_t get_offset_of_eyeGazePoseFlags_4() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___eyeGazePoseFlags_4)); }
	inline uint32_t get_eyeGazePoseFlags_4() const { return ___eyeGazePoseFlags_4; }
	inline uint32_t* get_address_of_eyeGazePoseFlags_4() { return &___eyeGazePoseFlags_4; }
	inline void set_eyeGazePoseFlags_4(uint32_t value)
	{
		___eyeGazePoseFlags_4 = value;
	}

	inline static int32_t get_offset_of_handAimPose_5() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___handAimPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_handAimPose_5() const { return ___handAimPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_handAimPose_5() { return &___handAimPose_5; }
	inline void set_handAimPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___handAimPose_5 = value;
	}

	inline static int32_t get_offset_of_handAimPoseFlags_6() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___handAimPoseFlags_6)); }
	inline uint32_t get_handAimPoseFlags_6() const { return ___handAimPoseFlags_6; }
	inline uint32_t* get_address_of_handAimPoseFlags_6() { return &___handAimPoseFlags_6; }
	inline void set_handAimPoseFlags_6(uint32_t value)
	{
		___handAimPoseFlags_6 = value;
	}

	inline static int32_t get_offset_of_handGripPose_7() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___handGripPose_7)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_handGripPose_7() const { return ___handGripPose_7; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_handGripPose_7() { return &___handGripPose_7; }
	inline void set_handGripPose_7(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___handGripPose_7 = value;
	}

	inline static int32_t get_offset_of_handGripPoseFlags_8() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE, ___handGripPoseFlags_8)); }
	inline uint32_t get_handGripPoseFlags_8() const { return ___handGripPoseFlags_8; }
	inline uint32_t* get_address_of_handGripPoseFlags_8() { return &___handGripPoseFlags_8; }
	inline void set_handGripPoseFlags_8(uint32_t value)
	{
		___handGripPoseFlags_8 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.OpenXR.NavigationEventData
#pragma pack(push, tp, 8)
struct NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.NavigationEventData::NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___NormalizedOffset_0;
	// Microsoft.MixedReality.OpenXR.NativeDirectionFlags Microsoft.MixedReality.OpenXR.NavigationEventData::m_directionFlags
	int32_t ___m_directionFlags_1;

public:
	inline static int32_t get_offset_of_NormalizedOffset_0() { return static_cast<int32_t>(offsetof(NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A, ___NormalizedOffset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_NormalizedOffset_0() const { return ___NormalizedOffset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_NormalizedOffset_0() { return &___NormalizedOffset_0; }
	inline void set_NormalizedOffset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___NormalizedOffset_0 = value;
	}

	inline static int32_t get_offset_of_m_directionFlags_1() { return static_cast<int32_t>(offsetof(NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A, ___m_directionFlags_1)); }
	inline int32_t get_m_directionFlags_1() const { return ___m_directionFlags_1; }
	inline int32_t* get_address_of_m_directionFlags_1() { return &___m_directionFlags_1; }
	inline void set_m_directionFlags_1(int32_t value)
	{
		___m_directionFlags_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Threading.Tasks.ParallelForReplicaTask
struct ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// System.Object System.Threading.Tasks.ParallelForReplicaTask::m_stateForNextReplica
	RuntimeObject * ___m_stateForNextReplica_22;
	// System.Object System.Threading.Tasks.ParallelForReplicaTask::m_stateFromPreviousReplica
	RuntimeObject * ___m_stateFromPreviousReplica_23;
	// System.Threading.Tasks.Task System.Threading.Tasks.ParallelForReplicaTask::m_handedOverChildReplica
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_handedOverChildReplica_24;

public:
	inline static int32_t get_offset_of_m_stateForNextReplica_22() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_stateForNextReplica_22)); }
	inline RuntimeObject * get_m_stateForNextReplica_22() const { return ___m_stateForNextReplica_22; }
	inline RuntimeObject ** get_address_of_m_stateForNextReplica_22() { return &___m_stateForNextReplica_22; }
	inline void set_m_stateForNextReplica_22(RuntimeObject * value)
	{
		___m_stateForNextReplica_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateForNextReplica_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFromPreviousReplica_23() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_stateFromPreviousReplica_23)); }
	inline RuntimeObject * get_m_stateFromPreviousReplica_23() const { return ___m_stateFromPreviousReplica_23; }
	inline RuntimeObject ** get_address_of_m_stateFromPreviousReplica_23() { return &___m_stateFromPreviousReplica_23; }
	inline void set_m_stateFromPreviousReplica_23(RuntimeObject * value)
	{
		___m_stateFromPreviousReplica_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateFromPreviousReplica_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_handedOverChildReplica_24() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_handedOverChildReplica_24)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_handedOverChildReplica_24() const { return ___m_handedOverChildReplica_24; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_handedOverChildReplica_24() { return &___m_handedOverChildReplica_24; }
	inline void set_m_handedOverChildReplica_24(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_handedOverChildReplica_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_handedOverChildReplica_24), (void*)value);
	}
};


// System.Threading.Tasks.ParallelForReplicatingTask
struct ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// System.Int32 System.Threading.Tasks.ParallelForReplicatingTask::m_replicationDownCount
	int32_t ___m_replicationDownCount_22;

public:
	inline static int32_t get_offset_of_m_replicationDownCount_22() { return static_cast<int32_t>(offsetof(ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9, ___m_replicationDownCount_22)); }
	inline int32_t get_m_replicationDownCount_22() const { return ___m_replicationDownCount_22; }
	inline int32_t* get_address_of_m_replicationDownCount_22() { return &___m_replicationDownCount_22; }
	inline void set_m_replicationDownCount_22(int32_t value)
	{
		___m_replicationDownCount_22 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979  : public BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652  : public BaseEventSystem_tE752AD816D052C473C14C507B45CF3568DD18FE4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652, ___U3CRegistrarU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_20() const { return ___U3CRegistrarU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_20() { return &___U3CRegistrarU3Ek__BackingField_20; }
	inline void set_U3CRegistrarU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_20), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6  : public BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___activePointersToConfig_17)); }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94  : public BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceIdU3Ek__BackingField_15)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_15() const { return ___U3CSourceIdU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_15() { return &___U3CSourceIdU3Ek__BackingField_15; }
	inline void set_U3CSourceIdU3Ek__BackingField_15(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_16() const { return ___U3CSourceNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_16() { return &___U3CSourceNameU3Ek__BackingField_16; }
	inline void set_U3CSourceNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CStartupBehaviorU3Ek__BackingField_17)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_17() const { return ___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_17() { return &___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_17(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CDefaultPhysicsLayerU3Ek__BackingField_18)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_18() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_18(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsRunningU3Ek__BackingField_19)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_19() const { return ___U3CIsRunningU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_19() { return &___U3CIsRunningU3Ek__BackingField_19; }
	inline void set_U3CIsRunningU3Ek__BackingField_19(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsStationaryObserverU3Ek__BackingField_20)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_20() const { return ___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return &___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_20(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverRotationU3Ek__BackingField_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_21() const { return ___U3CObserverRotationU3Ek__BackingField_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_21() { return &___U3CObserverRotationU3Ek__BackingField_21; }
	inline void set_U3CObserverRotationU3Ek__BackingField_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverOriginU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_22() const { return ___U3CObserverOriginU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_22() { return &___U3CObserverOriginU3Ek__BackingField_22; }
	inline void set_U3CObserverOriginU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverVolumeTypeU3Ek__BackingField_23)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_23() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return &___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_23(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObservationExtentsU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_24() const { return ___U3CObservationExtentsU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_24() { return &___U3CObservationExtentsU3Ek__BackingField_24; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CUpdateIntervalU3Ek__BackingField_25)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_25() const { return ___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_25() { return &___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_25(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_25 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativeGestureEventData
#pragma pack(push, tp, 8)
struct NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4 
{
public:
	// Microsoft.MixedReality.OpenXR.GestureEventType Microsoft.MixedReality.OpenXR.NativeGestureEventData::eventType
	int32_t ___eventType_0;
	// Microsoft.MixedReality.OpenXR.GestureHandedness Microsoft.MixedReality.OpenXR.NativeGestureEventData::handedness
	int32_t ___handedness_1;
	// Microsoft.MixedReality.OpenXR.NativeGesturePoseData Microsoft.MixedReality.OpenXR.NativeGestureEventData::poseData
	NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE  ___poseData_2;
	// Microsoft.MixedReality.OpenXR.TappedEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::tappedData
	TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A  ___tappedData_3;
	// Microsoft.MixedReality.OpenXR.ManipulationEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::manipulationData
	ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73  ___manipulationData_4;
	// Microsoft.MixedReality.OpenXR.NavigationEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::navigationData
	NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A  ___navigationData_5;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___eventType_0)); }
	inline int32_t get_eventType_0() const { return ___eventType_0; }
	inline int32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(int32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___handedness_1)); }
	inline int32_t get_handedness_1() const { return ___handedness_1; }
	inline int32_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(int32_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_poseData_2() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___poseData_2)); }
	inline NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE  get_poseData_2() const { return ___poseData_2; }
	inline NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE * get_address_of_poseData_2() { return &___poseData_2; }
	inline void set_poseData_2(NativeGesturePoseData_t7335967146800439C33CB77B5AC04887CE0166AE  value)
	{
		___poseData_2 = value;
	}

	inline static int32_t get_offset_of_tappedData_3() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___tappedData_3)); }
	inline TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A  get_tappedData_3() const { return ___tappedData_3; }
	inline TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A * get_address_of_tappedData_3() { return &___tappedData_3; }
	inline void set_tappedData_3(TappedEventData_tBD32497594AEA512338BFF4848D6FB4851BBBC2A  value)
	{
		___tappedData_3 = value;
	}

	inline static int32_t get_offset_of_manipulationData_4() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___manipulationData_4)); }
	inline ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73  get_manipulationData_4() const { return ___manipulationData_4; }
	inline ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73 * get_address_of_manipulationData_4() { return &___manipulationData_4; }
	inline void set_manipulationData_4(ManipulationEventData_tE7719E394CE32825CA4EE223F9700D314E293C73  value)
	{
		___manipulationData_4 = value;
	}

	inline static int32_t get_offset_of_navigationData_5() { return static_cast<int32_t>(offsetof(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4, ___navigationData_5)); }
	inline NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A  get_navigationData_5() const { return ___navigationData_5; }
	inline NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A * get_address_of_navigationData_5() { return &___navigationData_5; }
	inline void set_navigationData_5(NavigationEventData_t94463A8594DC617EA4508CE3C8976F3BE03AB73A  value)
	{
		___navigationData_5 = value;
	}
};
#pragma pack(pop, tp)


// System.IO.PinnedBufferMemoryStream
struct PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Byte[] System.IO.PinnedBufferMemoryStream::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_13;
	// System.Runtime.InteropServices.GCHandle System.IO.PinnedBufferMemoryStream::_pinningHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinningHandle_14;

public:
	inline static int32_t get_offset_of__array_13() { return static_cast<int32_t>(offsetof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78, ____array_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_13() const { return ____array_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_13() { return &____array_13; }
	inline void set__array_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_13), (void*)value);
	}

	inline static int32_t get_offset_of__pinningHandle_14() { return static_cast<int32_t>(offsetof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78, ____pinningHandle_14)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinningHandle_14() const { return ____pinningHandle_14; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinningHandle_14() { return &____pinningHandle_14; }
	inline void set__pinningHandle_14(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinningHandle_14 = value;
	}
};


// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeFindHandle
struct SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312  : public BaseExtensionService_t4B2A1112509F645C2FA38479075967B1918EAC97
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<UseFadeColor>k__BackingField
	bool ___U3CUseFadeColorU3Ek__BackingField_15;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CFadeColorU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeInTime>k__BackingField
	float ___U3CFadeInTimeU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeOutTime>k__BackingField
	float ___U3CFadeOutTimeU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeTargets>k__BackingField
	int32_t ___U3CFadeTargetsU3Ek__BackingField_19;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionStarted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionStartedU3Ek__BackingField_20;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionCompleted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionCompletedU3Ek__BackingField_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionInProgress>k__BackingField
	bool ___U3CTransitionInProgressU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionProgress>k__BackingField
	float ___U3CTransitionProgressU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::sceneTransitionServiceProfile
	SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * ___sceneTransitionServiceProfile_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::progressIndicatorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorObject_25;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::defaultProgressIndicator
	RuntimeObject* ___defaultProgressIndicator_26;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::cameraFader
	RuntimeObject* ___cameraFader_27;
	// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::customFadeTargetCameras
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * ___customFadeTargetCameras_28;

public:
	inline static int32_t get_offset_of_U3CUseFadeColorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CUseFadeColorU3Ek__BackingField_15)); }
	inline bool get_U3CUseFadeColorU3Ek__BackingField_15() const { return ___U3CUseFadeColorU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CUseFadeColorU3Ek__BackingField_15() { return &___U3CUseFadeColorU3Ek__BackingField_15; }
	inline void set_U3CUseFadeColorU3Ek__BackingField_15(bool value)
	{
		___U3CUseFadeColorU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CFadeColorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeColorU3Ek__BackingField_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CFadeColorU3Ek__BackingField_16() const { return ___U3CFadeColorU3Ek__BackingField_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CFadeColorU3Ek__BackingField_16() { return &___U3CFadeColorU3Ek__BackingField_16; }
	inline void set_U3CFadeColorU3Ek__BackingField_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CFadeColorU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CFadeInTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeInTimeU3Ek__BackingField_17)); }
	inline float get_U3CFadeInTimeU3Ek__BackingField_17() const { return ___U3CFadeInTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CFadeInTimeU3Ek__BackingField_17() { return &___U3CFadeInTimeU3Ek__BackingField_17; }
	inline void set_U3CFadeInTimeU3Ek__BackingField_17(float value)
	{
		___U3CFadeInTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CFadeOutTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeOutTimeU3Ek__BackingField_18)); }
	inline float get_U3CFadeOutTimeU3Ek__BackingField_18() const { return ___U3CFadeOutTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CFadeOutTimeU3Ek__BackingField_18() { return &___U3CFadeOutTimeU3Ek__BackingField_18; }
	inline void set_U3CFadeOutTimeU3Ek__BackingField_18(float value)
	{
		___U3CFadeOutTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CFadeTargetsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CFadeTargetsU3Ek__BackingField_19)); }
	inline int32_t get_U3CFadeTargetsU3Ek__BackingField_19() const { return ___U3CFadeTargetsU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CFadeTargetsU3Ek__BackingField_19() { return &___U3CFadeTargetsU3Ek__BackingField_19; }
	inline void set_U3CFadeTargetsU3Ek__BackingField_19(int32_t value)
	{
		___U3CFadeTargetsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COnTransitionStartedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3COnTransitionStartedU3Ek__BackingField_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionStartedU3Ek__BackingField_20() const { return ___U3COnTransitionStartedU3Ek__BackingField_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionStartedU3Ek__BackingField_20() { return &___U3COnTransitionStartedU3Ek__BackingField_20; }
	inline void set_U3COnTransitionStartedU3Ek__BackingField_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionStartedU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionStartedU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTransitionCompletedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3COnTransitionCompletedU3Ek__BackingField_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionCompletedU3Ek__BackingField_21() const { return ___U3COnTransitionCompletedU3Ek__BackingField_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionCompletedU3Ek__BackingField_21() { return &___U3COnTransitionCompletedU3Ek__BackingField_21; }
	inline void set_U3COnTransitionCompletedU3Ek__BackingField_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionCompletedU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionCompletedU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransitionInProgressU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CTransitionInProgressU3Ek__BackingField_22)); }
	inline bool get_U3CTransitionInProgressU3Ek__BackingField_22() const { return ___U3CTransitionInProgressU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CTransitionInProgressU3Ek__BackingField_22() { return &___U3CTransitionInProgressU3Ek__BackingField_22; }
	inline void set_U3CTransitionInProgressU3Ek__BackingField_22(bool value)
	{
		___U3CTransitionInProgressU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTransitionProgressU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___U3CTransitionProgressU3Ek__BackingField_23)); }
	inline float get_U3CTransitionProgressU3Ek__BackingField_23() const { return ___U3CTransitionProgressU3Ek__BackingField_23; }
	inline float* get_address_of_U3CTransitionProgressU3Ek__BackingField_23() { return &___U3CTransitionProgressU3Ek__BackingField_23; }
	inline void set_U3CTransitionProgressU3Ek__BackingField_23(float value)
	{
		___U3CTransitionProgressU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_sceneTransitionServiceProfile_24() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___sceneTransitionServiceProfile_24)); }
	inline SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * get_sceneTransitionServiceProfile_24() const { return ___sceneTransitionServiceProfile_24; }
	inline SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 ** get_address_of_sceneTransitionServiceProfile_24() { return &___sceneTransitionServiceProfile_24; }
	inline void set_sceneTransitionServiceProfile_24(SceneTransitionServiceProfile_tA5A1153FCE68DD1146CA7EC41F850DB894A50B49 * value)
	{
		___sceneTransitionServiceProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneTransitionServiceProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorObject_25() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___progressIndicatorObject_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorObject_25() const { return ___progressIndicatorObject_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorObject_25() { return &___progressIndicatorObject_25; }
	inline void set_progressIndicatorObject_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorObject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorObject_25), (void*)value);
	}

	inline static int32_t get_offset_of_defaultProgressIndicator_26() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___defaultProgressIndicator_26)); }
	inline RuntimeObject* get_defaultProgressIndicator_26() const { return ___defaultProgressIndicator_26; }
	inline RuntimeObject** get_address_of_defaultProgressIndicator_26() { return &___defaultProgressIndicator_26; }
	inline void set_defaultProgressIndicator_26(RuntimeObject* value)
	{
		___defaultProgressIndicator_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultProgressIndicator_26), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFader_27() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___cameraFader_27)); }
	inline RuntimeObject* get_cameraFader_27() const { return ___cameraFader_27; }
	inline RuntimeObject** get_address_of_cameraFader_27() { return &___cameraFader_27; }
	inline void set_cameraFader_27(RuntimeObject* value)
	{
		___cameraFader_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFader_27), (void*)value);
	}

	inline static int32_t get_offset_of_customFadeTargetCameras_28() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312, ___customFadeTargetCameras_28)); }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 * get_customFadeTargetCameras_28() const { return ___customFadeTargetCameras_28; }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 ** get_address_of_customFadeTargetCameras_28() { return &___customFadeTargetCameras_28; }
	inline void set_customFadeTargetCameras_28(List_1_t653022B4EDCE73F282430E1A396635798D309409 * value)
	{
		___customFadeTargetCameras_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customFadeTargetCameras_28), (void*)value);
	}
};

struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransitionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DoSceneTransitionPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOutPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeOutPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeInPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeInPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::ShowDefaultProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ShowDefaultProgressIndicatorPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::HideProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HideProgressIndicatorPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCamerasPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GatherFadeTargetCamerasPerfMarker_34;

public:
	inline static int32_t get_offset_of_DoSceneTransitionPerfMarker_29() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___DoSceneTransitionPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DoSceneTransitionPerfMarker_29() const { return ___DoSceneTransitionPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DoSceneTransitionPerfMarker_29() { return &___DoSceneTransitionPerfMarker_29; }
	inline void set_DoSceneTransitionPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DoSceneTransitionPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_FadeOutPerfMarker_30() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___FadeOutPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeOutPerfMarker_30() const { return ___FadeOutPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeOutPerfMarker_30() { return &___FadeOutPerfMarker_30; }
	inline void set_FadeOutPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeOutPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_FadeInPerfMarker_31() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___FadeInPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeInPerfMarker_31() const { return ___FadeInPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeInPerfMarker_31() { return &___FadeInPerfMarker_31; }
	inline void set_FadeInPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeInPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ShowDefaultProgressIndicatorPerfMarker_32() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___ShowDefaultProgressIndicatorPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ShowDefaultProgressIndicatorPerfMarker_32() const { return ___ShowDefaultProgressIndicatorPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ShowDefaultProgressIndicatorPerfMarker_32() { return &___ShowDefaultProgressIndicatorPerfMarker_32; }
	inline void set_ShowDefaultProgressIndicatorPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ShowDefaultProgressIndicatorPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_HideProgressIndicatorPerfMarker_33() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___HideProgressIndicatorPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HideProgressIndicatorPerfMarker_33() const { return ___HideProgressIndicatorPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HideProgressIndicatorPerfMarker_33() { return &___HideProgressIndicatorPerfMarker_33; }
	inline void set_HideProgressIndicatorPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HideProgressIndicatorPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_GatherFadeTargetCamerasPerfMarker_34() { return static_cast<int32_t>(offsetof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_StaticFields, ___GatherFadeTargetCamerasPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GatherFadeTargetCamerasPerfMarker_34() const { return ___GatherFadeTargetCamerasPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GatherFadeTargetCamerasPerfMarker_34() { return &___GatherFadeTargetCamerasPerfMarker_34; }
	inline void set_GatherFadeTargetCamerasPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GatherFadeTargetCamerasPerfMarker_34 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D  : public BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t8EDD018BF26DB64590A9401CA14BBAB7BC5D2F37 * ___dataProviders_21;

public:
	inline static int32_t get_offset_of_dataProviders_21() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D, ___dataProviders_21)); }
	inline List_1_t8EDD018BF26DB64590A9401CA14BBAB7BC5D2F37 * get_dataProviders_21() const { return ___dataProviders_21; }
	inline List_1_t8EDD018BF26DB64590A9401CA14BBAB7BC5D2F37 ** get_address_of_dataProviders_21() { return &___dataProviders_21; }
	inline void set_dataProviders_21(List_1_t8EDD018BF26DB64590A9401CA14BBAB7BC5D2F37 * value)
	{
		___dataProviders_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_21), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D_StaticFields, ___LateUpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_23() const { return ___LateUpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_23() { return &___LateUpdatePerfMarker_23; }
	inline void set_LateUpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740  : public BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * ___meshEventData_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshEventData_26)); }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * get_meshEventData_26() const { return ___meshEventData_26; }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E ** get_address_of_meshEventData_26() { return &___meshEventData_26; }
	inline void set_meshEventData_26(MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * value)
	{
		___meshEventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___observedObjectParent_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_27() const { return ___observedObjectParent_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_27() { return &___observedObjectParent_27; }
	inline void set_observedObjectParent_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshes_39)); }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.GestureEventData
#pragma pack(push, tp, 8)
struct GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E 
{
public:
	// Microsoft.MixedReality.OpenXR.NativeGestureEventData Microsoft.MixedReality.OpenXR.GestureEventData::nativeData
	NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4  ___nativeData_0;

public:
	inline static int32_t get_offset_of_nativeData_0() { return static_cast<int32_t>(offsetof(GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E, ___nativeData_0)); }
	inline NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4  get_nativeData_0() const { return ___nativeData_0; }
	inline NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4 * get_address_of_nativeData_0() { return &___nativeData_0; }
	inline void set_nativeData_0(NativeGestureEventData_t0A8ADDCAD4D97A4E39BF2FC43D0BE8C0969DBEF4  value)
	{
		___nativeData_0 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B  : public BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_22;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_23;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_t2A0D8AA856685F76177F6B8D6488054DBCCC2990 * ___contentTracker_24;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t4D0B6896BEB93B28A830AA47872D8B31B57589F2 * ___lightingExecutor_25;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_26;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_27;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_28;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_29;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_31;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_32;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_33;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_34;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_35;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_36;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_37;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_39;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_41;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_42;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_43;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_44;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_45;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___managerSceneOpInProgress_22)); }
	inline bool get_managerSceneOpInProgress_22() const { return ___managerSceneOpInProgress_22; }
	inline bool* get_address_of_managerSceneOpInProgress_22() { return &___managerSceneOpInProgress_22; }
	inline void set_managerSceneOpInProgress_22(bool value)
	{
		___managerSceneOpInProgress_22 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___managerSceneOpProgress_23)); }
	inline float get_managerSceneOpProgress_23() const { return ___managerSceneOpProgress_23; }
	inline float* get_address_of_managerSceneOpProgress_23() { return &___managerSceneOpProgress_23; }
	inline void set_managerSceneOpProgress_23(float value)
	{
		___managerSceneOpProgress_23 = value;
	}

	inline static int32_t get_offset_of_contentTracker_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___contentTracker_24)); }
	inline SceneContentTracker_t2A0D8AA856685F76177F6B8D6488054DBCCC2990 * get_contentTracker_24() const { return ___contentTracker_24; }
	inline SceneContentTracker_t2A0D8AA856685F76177F6B8D6488054DBCCC2990 ** get_address_of_contentTracker_24() { return &___contentTracker_24; }
	inline void set_contentTracker_24(SceneContentTracker_t2A0D8AA856685F76177F6B8D6488054DBCCC2990 * value)
	{
		___contentTracker_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_24), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___lightingExecutor_25)); }
	inline SceneLightingExecutor_t4D0B6896BEB93B28A830AA47872D8B31B57589F2 * get_lightingExecutor_25() const { return ___lightingExecutor_25; }
	inline SceneLightingExecutor_t4D0B6896BEB93B28A830AA47872D8B31B57589F2 ** get_address_of_lightingExecutor_25() { return &___lightingExecutor_25; }
	inline void set_lightingExecutor_25(SceneLightingExecutor_t4D0B6896BEB93B28A830AA47872D8B31B57589F2 * value)
	{
		___lightingExecutor_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CNameU3Ek__BackingField_26)); }
	inline String_t* get_U3CNameU3Ek__BackingField_26() const { return ___U3CNameU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_26() { return &___U3CNameU3Ek__BackingField_26; }
	inline void set_U3CNameU3Ek__BackingField_26(String_t* value)
	{
		___U3CNameU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillLoadContentU3Ek__BackingField_27)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_27() const { return ___U3COnWillLoadContentU3Ek__BackingField_27; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_27() { return &___U3COnWillLoadContentU3Ek__BackingField_27; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_27(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnContentLoadedU3Ek__BackingField_28)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_28() const { return ___U3COnContentLoadedU3Ek__BackingField_28; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_28() { return &___U3COnContentLoadedU3Ek__BackingField_28; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_28(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillUnloadContentU3Ek__BackingField_29)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_29() const { return ___U3COnWillUnloadContentU3Ek__BackingField_29; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_29() { return &___U3COnWillUnloadContentU3Ek__BackingField_29; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_29(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnContentUnloadedU3Ek__BackingField_30)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_30() const { return ___U3COnContentUnloadedU3Ek__BackingField_30; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_30() { return &___U3COnContentUnloadedU3Ek__BackingField_30; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_30(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillLoadLightingU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_31() const { return ___U3COnWillLoadLightingU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_31() { return &___U3COnWillLoadLightingU3Ek__BackingField_31; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnLightingLoadedU3Ek__BackingField_32)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_32() const { return ___U3COnLightingLoadedU3Ek__BackingField_32; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_32() { return &___U3COnLightingLoadedU3Ek__BackingField_32; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_32(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillUnloadLightingU3Ek__BackingField_33)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_33() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_33; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_33() { return &___U3COnWillUnloadLightingU3Ek__BackingField_33; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_33(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnLightingUnloadedU3Ek__BackingField_34)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_34() const { return ___U3COnLightingUnloadedU3Ek__BackingField_34; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_34() { return &___U3COnLightingUnloadedU3Ek__BackingField_34; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_34(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillLoadSceneU3Ek__BackingField_35)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_35() const { return ___U3COnWillLoadSceneU3Ek__BackingField_35; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_35() { return &___U3COnWillLoadSceneU3Ek__BackingField_35; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_35(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnSceneLoadedU3Ek__BackingField_36)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_36() const { return ___U3COnSceneLoadedU3Ek__BackingField_36; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_36() { return &___U3COnSceneLoadedU3Ek__BackingField_36; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_36(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnWillUnloadSceneU3Ek__BackingField_37)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_37() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_37; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_37() { return &___U3COnWillUnloadSceneU3Ek__BackingField_37; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_37(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3COnSceneUnloadedU3Ek__BackingField_38)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_38() const { return ___U3COnSceneUnloadedU3Ek__BackingField_38; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_38() { return &___U3COnSceneUnloadedU3Ek__BackingField_38; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_38(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CSceneOperationInProgressU3Ek__BackingField_39)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_39() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_39() { return &___U3CSceneOperationInProgressU3Ek__BackingField_39; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_39(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CSceneOperationProgressU3Ek__BackingField_40)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_40() const { return ___U3CSceneOperationProgressU3Ek__BackingField_40; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_40() { return &___U3CSceneOperationProgressU3Ek__BackingField_40; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_40(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CLightingOperationInProgressU3Ek__BackingField_41)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_41() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_41() { return &___U3CLightingOperationInProgressU3Ek__BackingField_41; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_41(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CLightingOperationProgressU3Ek__BackingField_42)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_42() const { return ___U3CLightingOperationProgressU3Ek__BackingField_42; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_42() { return &___U3CLightingOperationProgressU3Ek__BackingField_42; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_42(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CActiveLightingSceneU3Ek__BackingField_43)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_43() const { return ___U3CActiveLightingSceneU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_43() { return &___U3CActiveLightingSceneU3Ek__BackingField_43; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_43(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CWaitingToProceedU3Ek__BackingField_44)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_44() const { return ___U3CWaitingToProceedU3Ek__BackingField_44; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_44() { return &___U3CWaitingToProceedU3Ek__BackingField_44; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_44(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CSourceIdU3Ek__BackingField_45)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_45() const { return ___U3CSourceIdU3Ek__BackingField_45; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_45() { return &___U3CSourceIdU3Ek__BackingField_45; }
	inline void set_U3CSourceIdU3Ek__BackingField_45(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B, ___U3CSourceNameU3Ek__BackingField_46)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_46() const { return ___U3CSourceNameU3Ek__BackingField_46; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_46() { return &___U3CSourceNameU3Ek__BackingField_46; }
	inline void set_U3CSourceNameU3Ek__BackingField_46(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_46), (void*)value);
	}
};

struct MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_64;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___UpdatePerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_47() const { return ___UpdatePerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_47() { return &___UpdatePerfMarker_47; }
	inline void set_UpdatePerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___LoadNextContentPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_48() const { return ___LoadNextContentPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_48() { return &___LoadNextContentPerfMarker_48; }
	inline void set_LoadNextContentPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___LoadPrevContentPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_49() const { return ___LoadPrevContentPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_49() { return &___LoadPrevContentPerfMarker_49; }
	inline void set_LoadPrevContentPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___LoadContentByTagPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_50() const { return ___LoadContentByTagPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_50() { return &___LoadContentByTagPerfMarker_50; }
	inline void set_LoadContentByTagPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___UnloadContentByTagPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_51() const { return ___UnloadContentByTagPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_51() { return &___UnloadContentByTagPerfMarker_51; }
	inline void set_UnloadContentByTagPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___LoadContentPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_52() const { return ___LoadContentPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_52() { return &___LoadContentPerfMarker_52; }
	inline void set_LoadContentPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___UnloadContentPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_53() const { return ___UnloadContentPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_53() { return &___UnloadContentPerfMarker_53; }
	inline void set_UnloadContentPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___IsContentLoadedPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_54() const { return ___IsContentLoadedPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_54() { return &___IsContentLoadedPerfMarker_54; }
	inline void set_IsContentLoadedPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___SetLightingScenePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_55() const { return ___SetLightingScenePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_55() { return &___SetLightingScenePerfMarker_55; }
	inline void set_SetLightingScenePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___SetManagerScenePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_56() const { return ___SetManagerScenePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_56() { return &___SetManagerScenePerfMarker_56; }
	inline void set_SetManagerScenePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___LoadScenesInternalPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_57() const { return ___LoadScenesInternalPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_57() { return &___LoadScenesInternalPerfMarker_57; }
	inline void set_LoadScenesInternalPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___UnloadScenesInternalPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_58() const { return ___UnloadScenesInternalPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_58() { return &___UnloadScenesInternalPerfMarker_58; }
	inline void set_UnloadScenesInternalPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___InvokeLoadedActionsPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_59() const { return ___InvokeLoadedActionsPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_59() { return &___InvokeLoadedActionsPerfMarker_59; }
	inline void set_InvokeLoadedActionsPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___InvokeWillLoadActionsPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_60() const { return ___InvokeWillLoadActionsPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_60() { return &___InvokeWillLoadActionsPerfMarker_60; }
	inline void set_InvokeWillLoadActionsPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___InvokeWillUnloadActionsPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_61() const { return ___InvokeWillUnloadActionsPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_61() { return &___InvokeWillUnloadActionsPerfMarker_61; }
	inline void set_InvokeWillUnloadActionsPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___InvokeUnloadedActionsPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_62() const { return ___InvokeUnloadedActionsPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_62() { return &___InvokeUnloadedActionsPerfMarker_62; }
	inline void set_InvokeUnloadedActionsPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___GetScenePerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_63() const { return ___GetScenePerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_63() { return &___GetScenePerfMarker_63; }
	inline void set_GetScenePerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_64() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_StaticFields, ___GetLoadedContentScenesPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_64() const { return ___GetLoadedContentScenesPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_64() { return &___GetLoadedContentScenesPerfMarker_64; }
	inline void set_GetLoadedContentScenesPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_64 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A  : public BaseCoreSystem_tD92EF2BE9E8955487A46277A7C1C792EEAC43652
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_t92DE5B85B5808D6481CA96234A466033A02D9DAE * ___teleportEventData_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetRotation_25;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___eventSystemReference_26;
	// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_27;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_29;

public:
	inline static int32_t get_offset_of_teleportEventData_21() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___teleportEventData_21)); }
	inline TeleportEventData_t92DE5B85B5808D6481CA96234A466033A02D9DAE * get_teleportEventData_21() const { return ___teleportEventData_21; }
	inline TeleportEventData_t92DE5B85B5808D6481CA96234A466033A02D9DAE ** get_address_of_teleportEventData_21() { return &___teleportEventData_21; }
	inline void set_teleportEventData_21(TeleportEventData_t92DE5B85B5808D6481CA96234A466033A02D9DAE * value)
	{
		___teleportEventData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportEventData_21), (void*)value);
	}

	inline static int32_t get_offset_of_isTeleporting_22() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___isTeleporting_22)); }
	inline bool get_isTeleporting_22() const { return ___isTeleporting_22; }
	inline bool* get_address_of_isTeleporting_22() { return &___isTeleporting_22; }
	inline void set_isTeleporting_22(bool value)
	{
		___isTeleporting_22 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_23() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___isProcessingTeleportRequest_23)); }
	inline bool get_isProcessingTeleportRequest_23() const { return ___isProcessingTeleportRequest_23; }
	inline bool* get_address_of_isProcessingTeleportRequest_23() { return &___isProcessingTeleportRequest_23; }
	inline void set_isProcessingTeleportRequest_23(bool value)
	{
		___isProcessingTeleportRequest_23 = value;
	}

	inline static int32_t get_offset_of_targetPosition_24() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___targetPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_24() const { return ___targetPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_24() { return &___targetPosition_24; }
	inline void set_targetPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_24 = value;
	}

	inline static int32_t get_offset_of_targetRotation_25() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___targetRotation_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetRotation_25() const { return ___targetRotation_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetRotation_25() { return &___targetRotation_25; }
	inline void set_targetRotation_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetRotation_25 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_26() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___eventSystemReference_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_eventSystemReference_26() const { return ___eventSystemReference_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_eventSystemReference_26() { return &___eventSystemReference_26; }
	inline void set_eventSystemReference_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___eventSystemReference_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemReference_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___U3CNameU3Ek__BackingField_27)); }
	inline String_t* get_U3CNameU3Ek__BackingField_27() const { return ___U3CNameU3Ek__BackingField_27; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_27() { return &___U3CNameU3Ek__BackingField_27; }
	inline void set_U3CNameU3Ek__BackingField_27(String_t* value)
	{
		___U3CNameU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_teleportDuration_29() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A, ___teleportDuration_29)); }
	inline float get_teleportDuration_29() const { return ___teleportDuration_29; }
	inline float* get_address_of_teleportDuration_29() { return &___teleportDuration_29; }
	inline void set_teleportDuration_29(float value)
	{
		___teleportDuration_29 = value;
	}
};

struct MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * ___OnTeleportRequestHandler_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportRequestPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * ___OnTeleportStartedHandler_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportStartedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * ___OnTeleportCompletedHandler_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCompletePerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * ___OnTeleportCanceledHandler_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCanceledPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessTeleportationRequestPerfMarker_38;

public:
	inline static int32_t get_offset_of_HandleEventPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___HandleEventPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_28() const { return ___HandleEventPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_28() { return &___HandleEventPerfMarker_28; }
	inline void set_HandleEventPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnTeleportRequestHandler_30() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___OnTeleportRequestHandler_30)); }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * get_OnTeleportRequestHandler_30() const { return ___OnTeleportRequestHandler_30; }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F ** get_address_of_OnTeleportRequestHandler_30() { return &___OnTeleportRequestHandler_30; }
	inline void set_OnTeleportRequestHandler_30(EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * value)
	{
		___OnTeleportRequestHandler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportRequestHandler_30), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportRequestPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___RaiseTeleportRequestPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportRequestPerfMarker_31() const { return ___RaiseTeleportRequestPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportRequestPerfMarker_31() { return &___RaiseTeleportRequestPerfMarker_31; }
	inline void set_RaiseTeleportRequestPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportRequestPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_32() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___OnTeleportStartedHandler_32)); }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * get_OnTeleportStartedHandler_32() const { return ___OnTeleportStartedHandler_32; }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F ** get_address_of_OnTeleportStartedHandler_32() { return &___OnTeleportStartedHandler_32; }
	inline void set_OnTeleportStartedHandler_32(EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * value)
	{
		___OnTeleportStartedHandler_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportStartedHandler_32), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportStartedPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___RaiseTeleportStartedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportStartedPerfMarker_33() const { return ___RaiseTeleportStartedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportStartedPerfMarker_33() { return &___RaiseTeleportStartedPerfMarker_33; }
	inline void set_RaiseTeleportStartedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportStartedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_34() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___OnTeleportCompletedHandler_34)); }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * get_OnTeleportCompletedHandler_34() const { return ___OnTeleportCompletedHandler_34; }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F ** get_address_of_OnTeleportCompletedHandler_34() { return &___OnTeleportCompletedHandler_34; }
	inline void set_OnTeleportCompletedHandler_34(EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * value)
	{
		___OnTeleportCompletedHandler_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCompletedHandler_34), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCompletePerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___RaiseTeleportCompletePerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCompletePerfMarker_35() const { return ___RaiseTeleportCompletePerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCompletePerfMarker_35() { return &___RaiseTeleportCompletePerfMarker_35; }
	inline void set_RaiseTeleportCompletePerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCompletePerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_36() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___OnTeleportCanceledHandler_36)); }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * get_OnTeleportCanceledHandler_36() const { return ___OnTeleportCanceledHandler_36; }
	inline EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F ** get_address_of_OnTeleportCanceledHandler_36() { return &___OnTeleportCanceledHandler_36; }
	inline void set_OnTeleportCanceledHandler_36(EventFunction_1_t9E13B89D579F027D0869E42900806644C40F0F4F * value)
	{
		___OnTeleportCanceledHandler_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCanceledHandler_36), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCanceledPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___RaiseTeleportCanceledPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCanceledPerfMarker_37() const { return ___RaiseTeleportCanceledPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCanceledPerfMarker_37() { return &___RaiseTeleportCanceledPerfMarker_37; }
	inline void set_RaiseTeleportCanceledPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCanceledPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_ProcessTeleportationRequestPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_StaticFields, ___ProcessTeleportationRequestPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessTeleportationRequestPerfMarker_38() const { return ___ProcessTeleportationRequestPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessTeleportationRequestPerfMarker_38() { return &___ProcessTeleportationRequestPerfMarker_38; }
	inline void set_ProcessTeleportationRequestPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessTeleportationRequestPerfMarker_38 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager
struct MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::cursorSpeed
	float ___cursorSpeed_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::wheelSpeed
	float ___wheelSpeed_24;
	// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseController Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::<Controller>k__BackingField
	MouseController_t7931500D5CE8360FC0E56487FC30FCBF1A735593 * ___U3CControllerU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_cursorSpeed_23() { return static_cast<int32_t>(offsetof(MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E, ___cursorSpeed_23)); }
	inline float get_cursorSpeed_23() const { return ___cursorSpeed_23; }
	inline float* get_address_of_cursorSpeed_23() { return &___cursorSpeed_23; }
	inline void set_cursorSpeed_23(float value)
	{
		___cursorSpeed_23 = value;
	}

	inline static int32_t get_offset_of_wheelSpeed_24() { return static_cast<int32_t>(offsetof(MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E, ___wheelSpeed_24)); }
	inline float get_wheelSpeed_24() const { return ___wheelSpeed_24; }
	inline float* get_address_of_wheelSpeed_24() { return &___wheelSpeed_24; }
	inline void set_wheelSpeed_24(float value)
	{
		___wheelSpeed_24 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E, ___U3CControllerU3Ek__BackingField_25)); }
	inline MouseController_t7931500D5CE8360FC0E56487FC30FCBF1A735593 * get_U3CControllerU3Ek__BackingField_25() const { return ___U3CControllerU3Ek__BackingField_25; }
	inline MouseController_t7931500D5CE8360FC0E56487FC30FCBF1A735593 ** get_address_of_U3CControllerU3Ek__BackingField_25() { return &___U3CControllerU3Ek__BackingField_25; }
	inline void set_U3CControllerU3Ek__BackingField_25(MouseController_t7931500D5CE8360FC0E56487FC30FCBF1A735593 * value)
	{
		___U3CControllerU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_25), (void*)value);
	}
};

struct MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD  : public BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979
{
public:
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::reprojectionUpdater
	OpenXRReprojectionUpdater_t04E6BFC47B184071CD5D06D104BF646326CAA998 * ___reprojectionUpdater_15;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_15() { return static_cast<int32_t>(offsetof(OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD, ___reprojectionUpdater_15)); }
	inline OpenXRReprojectionUpdater_t04E6BFC47B184071CD5D06D104BF646326CAA998 * get_reprojectionUpdater_15() const { return ___reprojectionUpdater_15; }
	inline OpenXRReprojectionUpdater_t04E6BFC47B184071CD5D06D104BF646326CAA998 ** get_address_of_reprojectionUpdater_15() { return &___reprojectionUpdater_15; }
	inline void set_reprojectionUpdater_15(OpenXRReprojectionUpdater_t04E6BFC47B184071CD5D06D104BF646326CAA998 * value)
	{
		___reprojectionUpdater_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_15), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::eyeTrackingDevice
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___eyeTrackingDevice_27;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}

	inline static int32_t get_offset_of_eyeTrackingDevice_27() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703, ___eyeTrackingDevice_27)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_eyeTrackingDevice_27() const { return ___eyeTrackingDevice_27; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_eyeTrackingDevice_27() { return &___eyeTrackingDevice_27; }
	inline void set_eyeTrackingDevice_27(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___eyeTrackingDevice_27 = value;
	}
};

struct OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::InputDeviceList
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___InputDeviceList_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_28;

public:
	inline static int32_t get_offset_of_InputDeviceList_26() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_StaticFields, ___InputDeviceList_26)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_InputDeviceList_26() const { return ___InputDeviceList_26; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_InputDeviceList_26() { return &___InputDeviceList_26; }
	inline void set_InputDeviceList_26(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___InputDeviceList_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDeviceList_26), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_28() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_StaticFields, ___UpdatePerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_28() const { return ___UpdatePerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_28() { return &___UpdatePerfMarker_28; }
	inline void set_UpdatePerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_28 = value;
	}
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6  : public BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F  : public BaseDataProviderAccessCoreSystem_tB0ABA3F9246E088178E8C93D1847E5656C82511D
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spatialAwarenessObjectParent_25;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_26;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t0AAAFF82FCC0D7279D0B9803FBE37374FE39016E * ___spatialAwarenessSystemProfile_27;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F, ___U3CNameU3Ek__BackingField_24)); }
	inline String_t* get_U3CNameU3Ek__BackingField_24() const { return ___U3CNameU3Ek__BackingField_24; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_24() { return &___U3CNameU3Ek__BackingField_24; }
	inline void set_U3CNameU3Ek__BackingField_24(String_t* value)
	{
		___U3CNameU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F, ___spatialAwarenessObjectParent_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spatialAwarenessObjectParent_25() const { return ___spatialAwarenessObjectParent_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spatialAwarenessObjectParent_25() { return &___spatialAwarenessObjectParent_25; }
	inline void set_spatialAwarenessObjectParent_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spatialAwarenessObjectParent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_25), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F, ___nextSourceId_26)); }
	inline uint32_t get_nextSourceId_26() const { return ___nextSourceId_26; }
	inline uint32_t* get_address_of_nextSourceId_26() { return &___nextSourceId_26; }
	inline void set_nextSourceId_26(uint32_t value)
	{
		___nextSourceId_26 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F, ___spatialAwarenessSystemProfile_27)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t0AAAFF82FCC0D7279D0B9803FBE37374FE39016E * get_spatialAwarenessSystemProfile_27() const { return ___spatialAwarenessSystemProfile_27; }
	inline MixedRealitySpatialAwarenessSystemProfile_t0AAAFF82FCC0D7279D0B9803FBE37374FE39016E ** get_address_of_spatialAwarenessSystemProfile_27() { return &___spatialAwarenessSystemProfile_27; }
	inline void set_spatialAwarenessSystemProfile_27(MixedRealitySpatialAwarenessSystemProfile_t0AAAFF82FCC0D7279D0B9803FBE37374FE39016E * value)
	{
		___spatialAwarenessSystemProfile_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_27), (void*)value);
	}
};

struct MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversTPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverTPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProvidersPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProviderPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversTPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserverPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversTPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserverPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsTPerfMarker_41;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetObserversPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversPerfMarker_28() const { return ___GetObserversPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversPerfMarker_28() { return &___GetObserversPerfMarker_28; }
	inline void set_GetObserversPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetObserversTPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversTPerfMarker_29() const { return ___GetObserversTPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversTPerfMarker_29() { return &___GetObserversTPerfMarker_29; }
	inline void set_GetObserversTPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversTPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetObserverPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverPerfMarker_30() const { return ___GetObserverPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverPerfMarker_30() { return &___GetObserverPerfMarker_30; }
	inline void set_GetObserverPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetObserverTPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverTPerfMarker_31() const { return ___GetObserverTPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverTPerfMarker_31() { return &___GetObserverTPerfMarker_31; }
	inline void set_GetObserverTPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverTPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetDataProvidersPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProvidersPerfMarker_32() const { return ___GetDataProvidersPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProvidersPerfMarker_32() { return &___GetDataProvidersPerfMarker_32; }
	inline void set_GetDataProvidersPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProvidersPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___GetDataProviderPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProviderPerfMarker_33() const { return ___GetDataProviderPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProviderPerfMarker_33() { return &___GetDataProviderPerfMarker_33; }
	inline void set_GetDataProviderPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProviderPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___ResumeObserversPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversPerfMarker_34() const { return ___ResumeObserversPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversPerfMarker_34() { return &___ResumeObserversPerfMarker_34; }
	inline void set_ResumeObserversPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___ResumeObserversTPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversTPerfMarker_35() const { return ___ResumeObserversTPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversTPerfMarker_35() { return &___ResumeObserversTPerfMarker_35; }
	inline void set_ResumeObserversTPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversTPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___ResumeObserverPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserverPerfMarker_36() const { return ___ResumeObserverPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserverPerfMarker_36() { return &___ResumeObserverPerfMarker_36; }
	inline void set_ResumeObserverPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserverPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___SuspendObserversPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversPerfMarker_37() const { return ___SuspendObserversPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversPerfMarker_37() { return &___SuspendObserversPerfMarker_37; }
	inline void set_SuspendObserversPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___SuspendObserversTPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversTPerfMarker_38() const { return ___SuspendObserversTPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversTPerfMarker_38() { return &___SuspendObserversTPerfMarker_38; }
	inline void set_SuspendObserversTPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversTPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___SuspendObserverPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserverPerfMarker_39() const { return ___SuspendObserverPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserverPerfMarker_39() { return &___SuspendObserverPerfMarker_39; }
	inline void set_SuspendObserverPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserverPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___ClearObservationsPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_40() const { return ___ClearObservationsPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_40() { return &___ClearObservationsPerfMarker_40; }
	inline void set_ClearObservationsPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_StaticFields, ___ClearObservationsTPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsTPerfMarker_41() const { return ___ClearObservationsTPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsTPerfMarker_41() { return &___ClearObservationsTPerfMarker_41; }
	inline void set_ClearObservationsTPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsTPerfMarker_41 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600  : public XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD
{
public:
	// Microsoft.MixedReality.OpenXR.GestureRecognizer Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::gestureRecognizer
	GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * ___gestureRecognizer_29;
	// Microsoft.MixedReality.OpenXR.GestureRecognizer Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationGestureRecognizer
	GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * ___navigationGestureRecognizer_30;
	// Microsoft.MixedReality.OpenXR.GestureEventData Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::eventData
	GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E  ___eventData_31;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::autoStartBehavior
	int32_t ___autoStartBehavior_32;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::gestureSettings
	int32_t ___gestureSettings_33;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationSettings
	int32_t ___navigationSettings_34;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::railsNavigationSettings
	int32_t ___railsNavigationSettings_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::useRailsNavigation
	bool ___useRailsNavigation_36;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::holdAction
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___holdAction_37;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationAction
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___navigationAction_38;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::manipulationAction
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___manipulationAction_39;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::selectAction
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___selectAction_40;

public:
	inline static int32_t get_offset_of_gestureRecognizer_29() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___gestureRecognizer_29)); }
	inline GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * get_gestureRecognizer_29() const { return ___gestureRecognizer_29; }
	inline GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 ** get_address_of_gestureRecognizer_29() { return &___gestureRecognizer_29; }
	inline void set_gestureRecognizer_29(GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * value)
	{
		___gestureRecognizer_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestureRecognizer_29), (void*)value);
	}

	inline static int32_t get_offset_of_navigationGestureRecognizer_30() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___navigationGestureRecognizer_30)); }
	inline GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * get_navigationGestureRecognizer_30() const { return ___navigationGestureRecognizer_30; }
	inline GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 ** get_address_of_navigationGestureRecognizer_30() { return &___navigationGestureRecognizer_30; }
	inline void set_navigationGestureRecognizer_30(GestureRecognizer_tFCBAE65F5B0C27026F53E91F3C634FCF5F4836A5 * value)
	{
		___navigationGestureRecognizer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationGestureRecognizer_30), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_31() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___eventData_31)); }
	inline GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E  get_eventData_31() const { return ___eventData_31; }
	inline GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E * get_address_of_eventData_31() { return &___eventData_31; }
	inline void set_eventData_31(GestureEventData_tAD931BAAF6AAEA72CE23581C43683E8D6624D03E  value)
	{
		___eventData_31 = value;
	}

	inline static int32_t get_offset_of_autoStartBehavior_32() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___autoStartBehavior_32)); }
	inline int32_t get_autoStartBehavior_32() const { return ___autoStartBehavior_32; }
	inline int32_t* get_address_of_autoStartBehavior_32() { return &___autoStartBehavior_32; }
	inline void set_autoStartBehavior_32(int32_t value)
	{
		___autoStartBehavior_32 = value;
	}

	inline static int32_t get_offset_of_gestureSettings_33() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___gestureSettings_33)); }
	inline int32_t get_gestureSettings_33() const { return ___gestureSettings_33; }
	inline int32_t* get_address_of_gestureSettings_33() { return &___gestureSettings_33; }
	inline void set_gestureSettings_33(int32_t value)
	{
		___gestureSettings_33 = value;
	}

	inline static int32_t get_offset_of_navigationSettings_34() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___navigationSettings_34)); }
	inline int32_t get_navigationSettings_34() const { return ___navigationSettings_34; }
	inline int32_t* get_address_of_navigationSettings_34() { return &___navigationSettings_34; }
	inline void set_navigationSettings_34(int32_t value)
	{
		___navigationSettings_34 = value;
	}

	inline static int32_t get_offset_of_railsNavigationSettings_35() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___railsNavigationSettings_35)); }
	inline int32_t get_railsNavigationSettings_35() const { return ___railsNavigationSettings_35; }
	inline int32_t* get_address_of_railsNavigationSettings_35() { return &___railsNavigationSettings_35; }
	inline void set_railsNavigationSettings_35(int32_t value)
	{
		___railsNavigationSettings_35 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_36() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___useRailsNavigation_36)); }
	inline bool get_useRailsNavigation_36() const { return ___useRailsNavigation_36; }
	inline bool* get_address_of_useRailsNavigation_36() { return &___useRailsNavigation_36; }
	inline void set_useRailsNavigation_36(bool value)
	{
		___useRailsNavigation_36 = value;
	}

	inline static int32_t get_offset_of_holdAction_37() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___holdAction_37)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_holdAction_37() const { return ___holdAction_37; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_holdAction_37() { return &___holdAction_37; }
	inline void set_holdAction_37(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___holdAction_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___holdAction_37))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_navigationAction_38() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___navigationAction_38)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_navigationAction_38() const { return ___navigationAction_38; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_navigationAction_38() { return &___navigationAction_38; }
	inline void set_navigationAction_38(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___navigationAction_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___navigationAction_38))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_manipulationAction_39() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___manipulationAction_39)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_manipulationAction_39() const { return ___manipulationAction_39; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_manipulationAction_39() { return &___manipulationAction_39; }
	inline void set_manipulationAction_39(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___manipulationAction_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___manipulationAction_39))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_selectAction_40() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600, ___selectAction_40)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_selectAction_40() const { return ___selectAction_40; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_selectAction_40() { return &___selectAction_40; }
	inline void set_selectAction_40(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___selectAction_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___selectAction_40))->___description_2), (void*)NULL);
	}
};

struct OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_42;

public:
	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_41() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_StaticFields, ___GetOrAddControllerPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_41() const { return ___GetOrAddControllerPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_41() { return &___GetOrAddControllerPerfMarker_41; }
	inline void set_GetOrAddControllerPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_42() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_StaticFields, ___RemoveControllerPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_42() const { return ___RemoveControllerPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_42() { return &___RemoveControllerPerfMarker_42; }
	inline void set_RemoveControllerPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_42 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9  : public GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6
{
public:

public:
};

struct OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::LookupTriangleDensityPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LookupTriangleDensityPerfMarker_69;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_68() { return static_cast<int32_t>(offsetof(OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_68() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_68() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_68; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_68 = value;
	}

	inline static int32_t get_offset_of_LookupTriangleDensityPerfMarker_69() { return static_cast<int32_t>(offsetof(OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_StaticFields, ___LookupTriangleDensityPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LookupTriangleDensityPerfMarker_69() const { return ___LookupTriangleDensityPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LookupTriangleDensityPerfMarker_69() { return &___LookupTriangleDensityPerfMarker_69; }
	inline void set_LookupTriangleDensityPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LookupTriangleDensityPerfMarker_69 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySceneSystem_t1C08271DF909B2E91A40D260F4D154C724F5899B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySpatialAwarenessSystem_t96560024A8995D3817504CA668DBF00750E1263F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityTeleportSystem_t9767D267275F6ED0ACA8118EC2483066FA2A9F1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager
struct MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MouseDeviceManager_t395B369BBAFAFC1BAD91CA95D69376145BCD446E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRCameraSettings_t16D82F4BC9155F86B7E32BBD3F79B84BC880C8FD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRDeviceManager_tDC1CC9C38D8A54DDD4C64C074114CBC2408C0600_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXREyeGazeDataProvider_tC8488C99EF396EDF75E26CF1CB63053102E43703_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.OpenXRRuntimeRestartHandler
struct OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRRuntimeRestartHandler_tB1372A557F64C35C5EDCC29A09737B634A5B2ADC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRSpatialAwarenessMeshObserver_t4B0D50E224EFFC8C6CD8FB1D5EED3B04A54E99A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.ParallelForReplicaTask
struct ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.ParallelForReplicatingTask
struct ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.PinnedBufferMemoryStream
struct PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper>, IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6BBE84644D81C739672BB5FE7BD65AD8AD6C044B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  returnValue;
		try
		{
			returnValue = *static_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(UnBox(GetManagedObjectInline(), Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 17;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  returnValue;
		try
		{
			returnValue = *static_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(UnBox(GetManagedObjectInline(), Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Point
struct Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper>, IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0FC3B384D7E37F93935DFB33EA2D44E3FC3E8F49(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB  returnValue;
		try
		{
			returnValue = *static_cast<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB *>(UnBox(GetManagedObjectInline(), Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 17;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper>, IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAFDC3A521A2D5078E107CAAA4F124AFC2D25F526(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Quaternion
struct Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper>, IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B0A6358249758D52E8655254FFC53AB4E48D2F(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  returnValue;
		try
		{
			returnValue = *static_cast<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *>(UnBox(GetManagedObjectInline(), Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Quaternion
struct Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper>, IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m223D1D22BBB08115FECD12012F70419914365276(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22  returnValue;
		try
		{
			returnValue = *static_cast<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 *>(UnBox(GetManagedObjectInline(), Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Queue_t66723C58C7422102C36F8570BE048BD0CC489E52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper>, IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m64387D2D55E86DABEC832FDADDA12CBF1C7C1D5E(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  returnValue;
		try
		{
			returnValue = *static_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(UnBox(GetManagedObjectInline(), Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  returnValue;
		try
		{
			returnValue = *static_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(UnBox(GetManagedObjectInline(), Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_tC45F1DDF39812623644DE296D8057A4958176627(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper>, IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m96AACCD499BB14F3DBACD6CA120C283ABCE73263(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891  returnValue;
		try
		{
			returnValue = *static_cast<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 *>(UnBox(GetManagedObjectInline(), Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.RegistryKey
struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceReader
struct ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceSet
struct ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeFindHandle
struct SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SceneTransitionService_t6769D66D8F3DE7E5E41041B978EAFEAFD707F312_ComCallableWrapper(obj));
}
