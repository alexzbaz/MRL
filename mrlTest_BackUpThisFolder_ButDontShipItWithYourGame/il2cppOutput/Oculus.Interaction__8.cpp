﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Oculus.Interaction.IInteractorView>
struct Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513;
// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent>
struct Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4;
// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67;
// Oculus.Interaction.Input.DataModifier`1<System.Object>
struct DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>
struct Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63;
// System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC;
// Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>
struct EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Locomotion.TeleportInteractor>
struct EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`1<Oculus.Interaction.Locomotion.TeleportInteractable>
struct Func_1_t562FD0C34DB93F8749DF15C26E40E5B8F2331EAE;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<Oculus.Interaction.Locomotion.TeleportInteractable>
struct IComparer_1_t4B47D0840CC78D81CEB22E15B74057DAF555F864;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct IDataSource_1_t63E4660329CACFB22DE9833CC56BC5227752B69E;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct IDataSource_1_t64076376CABC9460F59D2C56BDC13312CE38E57E;
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct IEnumerable_1_t707E12E13C09DEBB279C4EB57A0E44CC8E0D270D;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose>
struct IEnumerator_1_t5CBE96AF6D34AD77B69C46BFC2D221735CFAC144;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEqualityComparer_1_tE953DD2D8AA81AA1147A9C45DA2ADDB9E0CFBD0E;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct IEqualityComparer_1_tFBD47128D24074681A7802544503ECCB0FC21B37;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct IReadOnlyDictionary_2_t974FAB679A90DFBA1287706BF12713BB420FDF19;
// System.Collections.Generic.IReadOnlyList`1<System.Int32>
struct IReadOnlyList_1_t941CE4E7615A3504595F7091E7217D4645DF7633;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>
struct IReadOnlyList_1_tC7DD1BE89315F84F5AC3EEB0F716D812AC1732CB;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct InteractableRegistry_2_tB199C81A401B99479A9CC2A60CA960A449606DA2;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>
struct InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>
struct InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>
struct InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>
struct InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B;
// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>
struct InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyCollection_tAA2D2BA9C9EC519509C84716111088A39079C699;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter>
struct List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4;
// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyColor>
struct List_1_t4B4CED06322067B6A8C906AE5BB606C9B7F7C07A;
// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyFloat>
struct List_1_t50603F4F6C09C9960406FFD144E8CC1E2F5279A6;
// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyVector>
struct List_1_t49583C5E1D90B770ADFCE70683F8291ABF9F60B4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF;
// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>
struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C;
// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve>
struct List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546;
// Oculus.Interaction.MultiAction`1<System.Object>
struct MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.Locomotion.TeleportInteractable>
struct MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.Locomotion.TeleportInteractor>
struct MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3;
// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct ValueCollection_t8245A2F9711C7D7C8657AC5713035AD9E3F24A2D;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>[]
struct EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>[]
struct EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>[]
struct EntryU5BU5D_t9FA84F26AA1A802D386693BEA83D81468D355CE3;
// System.Collections.Generic.HashSet`1/Slot<Oculus.Interaction.Body.Input.BodyJointId>[]
struct SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// Oculus.Interaction.ProgressCurve[]
struct ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Oculus.Interaction.TubePoint[]
struct TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig[]
struct JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData[]
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Oculus.Interaction.Deprecated.AimingStabilizedOrigin
struct AimingStabilizedOrigin_t36A4477F06F712E3E8193FD8E7C692316D8F6B1B;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Oculus.Interaction.Deprecated.ArcRangeModifier
struct ArcRangeModifier_t4B507B64122207F45555CFE042C57C979A6EA212;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Oculus.Interaction.Deprecated.BezierSurface
struct BezierSurface_tCBD298F630129D1C146147850F4E670DC5E200ED;
// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69;
// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456;
// Oculus.Interaction.Body.BodyDebugGizmos
struct BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612;
// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState
struct BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
struct BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData
struct BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9;
// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5;
// Oculus.Interaction.Deprecated.BoxProximityField
struct BoxProximityField_t6049F8D60A08A6DA25F6D26842E898EA25F0EB69;
// Oculus.Interaction.Deprecated.BoxSurface
struct BoxSurface_tAAF1A0103B0506E445926EB97C69C0648361D53D;
// Oculus.Interaction.Deprecated.CanvasMeshPointable
struct CanvasMeshPointable_t92C4339B214CCD9D4096F3BA1AF24A80D198BEE9;
// Oculus.Interaction.Deprecated.CanvasRenderTextureMesh
struct CanvasRenderTextureMesh_t02A4F45338938B3338617EA269FDD869F236157F;
// Oculus.Interaction.Deprecated.CircleProximityField
struct CircleProximityField_t774D98A0B8ECF26B4A51209FDEF73BF36C94BF82;
// Oculus.Interaction.Deprecated.ColliderSurface
struct ColliderSurface_t4831BCC604F8CA661E3F8076486776DC3FC15B2E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
// Oculus.Interaction.Deprecated.CylinderProximityField
struct CylinderProximityField_tA3730664ED55EFDFB8CBB740B2111B33D1467ED6;
// Oculus.Interaction.Deprecated.CylinderSurface
struct CylinderSurface_t4860F7819DFDDFF5CF7889F02572BB0CA482FD51;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
struct DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
struct DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93;
// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual
struct DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487;
// Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual
struct DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3;
// Oculus.Interaction.Deprecated.DropZoneInteractable
struct DropZoneInteractable_t92FD1C2B60E67DB2097732DFE98E8E069E3F9A0D;
// Oculus.Interaction.Deprecated.DropZoneInteractor
struct DropZoneInteractor_t2BD9710EB716126AA66899B10B8080C0B8558B78;
// Oculus.Interaction.Deprecated.DropZoneSequentialSlotsProvider
struct DropZoneSequentialSlotsProvider_t6AFDE2C241DAD92CBF05FFE03D5FB904E66E730D;
// Oculus.Interaction.Deprecated.DummyDataModifier
struct DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B;
// Oculus.Interaction.Deprecated.FingerGrabAPI
struct FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D;
// Oculus.Interaction.Deprecated.FingerPinchAPI
struct FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04;
// Oculus.Interaction.Deprecated.FixedScaleDataModifier
struct FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28;
// Oculus.Interaction.Deprecated.GrabPoint
struct GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985;
// Oculus.Interaction.Deprecated.GrabPointsPoseFinder
struct GrabPointsPoseFinder_t225254CA171C154FF956737F8AEF81B08531B663;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3;
// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787;
// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities
struct HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E;
// Oculus.Interaction.Deprecated.HandGrabInteractorVisual
struct HandGrabInteractorVisual_t75BAEF131EADDBAC1FA18E210E448E2161B4AF5E;
// Oculus.Interaction.Deprecated.HandGrabPoint
struct HandGrabPoint_tB8D7EC4231DB7A46991B4A7B4FB63ACB6B2E0D53;
// Oculus.Interaction.HandGrab.HandGrabResult
struct HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B;
// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2;
// Oculus.Interaction.Input.HandJointCache
struct HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B;
// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733;
// Oculus.Interaction.Deprecated.HandPoseRecordable
struct HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89;
// Oculus.Interaction.Deprecated.HandPoseRecorder
struct HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417;
// Oculus.Interaction.Input.HandSkeleton
struct HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A;
// Oculus.Interaction.IActiveState
struct IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB;
// Oculus.Interaction.Input.IAxis1D
struct IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803;
// Oculus.Interaction.Body.Input.IBody
struct IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01;
// Oculus.Interaction.Body.PoseDetection.IBodyPose
struct IBodyPose_t2BA886A75367D7351AACFE310468790C66930097;
// Oculus.Interaction.Surfaces.IBounds
struct IBounds_t7F88A5A6E8266F0A0D1DDCA39C672622986118CE;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Oculus.Interaction.IDistanceInteractor
struct IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Oculus.Interaction.IFingerAPI
struct IFingerAPI_tBA85AFE7CC89405D79B0FADB2993D326FF08B209;
// Oculus.Interaction.Input.IHand
struct IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5;
// Oculus.Interaction.HandGrab.IHandGrabInteractor
struct IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7;
// Oculus.Interaction.HandGrab.IHandGrabState
struct IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB;
// Oculus.Interaction.IHandVisual
struct IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558;
// Oculus.Interaction.Input.IHmd
struct IHmd_t465201661836D4E88CC4488A09FAEB1A6C6A440D;
// Oculus.Interaction.IInteractorView
struct IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76;
// Oculus.Interaction.IPolyline
struct IPolyline_tD0FEBFB3CC346CCC8CA84D85013D1B73DE1C7999;
// Oculus.Interaction.IRelativeToRef
struct IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE;
// Oculus.Interaction.DistanceReticles.IReticleData
struct IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18;
// Oculus.Interaction.ISelector
struct ISelector_t67FC626DAEE009248843EA2CE7425D5CDFBEE730;
// Oculus.Interaction.Body.Input.ISkeletonMapping
struct ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07;
// Oculus.Interaction.Surfaces.ISurface
struct ISurface_t2252B442B6309192CFC6B5CC5849C4C4859E638E;
// Oculus.Interaction.Input.ITrackingToWorldTransformer
struct ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E;
// Oculus.Interaction.Deprecated.InputDataProviderUpdateTriggerOVR
struct InputDataProviderUpdateTriggerOVR_tE8D61AA195A58A2A96B55C036E2F36275370594B;
// Oculus.Interaction.Deprecated.InteractableTransformableConnection
struct InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E;
// Oculus.Interaction.Deprecated.InteractionOVRCameraRig
struct InteractionOVRCameraRig_t894006BD25A6C50C219E97034AC474D54671558D;
// Oculus.Interaction.Deprecated.InteractorDriver
struct InteractorDriver_tCF2F3AE5B7609992F3B720446004D41630BBD4C5;
// Oculus.Interaction.Deprecated.InteractorDriverGroup
struct InteractorDriverGroup_tCB165B2D74BDEBC387B9EA115373DCBA1DCF5106;
// Oculus.Interaction.Deprecated.InteractorGroup
struct InteractorGroup_t6182B1516054FEC5C050AD1BF90AD545963139C0;
// Oculus.Interaction.Deprecated.InteractorGroupMulti
struct InteractorGroupMulti_tBE62507CB3575781A999CF25FF727E201174ECA6;
// Oculus.Interaction.Deprecated.JointLocking
struct JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038;
// Oculus.Interaction.Deprecated.JointRotationHistoryModifier
struct JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8;
// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier
struct LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// Oculus.Interaction.MaterialPropertyBlockEditor
struct MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Oculus.Interaction.Deprecated.OVRSkeletonDataProviders
struct OVRSkeletonDataProviders_t491B19DD085BF3AEB8AF66239194FD781FC26C8F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier
struct OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC;
// Oculus.Interaction.Deprecated.OneEuroFilterPositionHand
struct OneEuroFilterPositionHand_t1E88DED99F1BEF1043B5EB4431CA3CD0D9C277DC;
// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier
struct OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E;
// Oculus.Interaction.Deprecated.OneEuroFilterRotationHand
struct OneEuroFilterRotationHand_t7DFF718617607C32DDAC6681A1BBB9FB8A295137;
// Oculus.Interaction.Deprecated.OneHandFreeTransformer
struct OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B;
// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer
struct OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3;
// Oculus.Interaction.Deprecated.OneHandRotateTransformer
struct OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988;
// Oculus.Interaction.Deprecated.OneHandTranslateTransformer
struct OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F;
// Oculus.Interaction.Deprecated.PhysicsTransformable
struct PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926;
// Oculus.Interaction.Deprecated.PitchRemap
struct PitchRemap_t9D3F30AF71B221A8CFD73B3392524C65F179CB23;
// Oculus.Interaction.Deprecated.PointProximityField
struct PointProximityField_tA7E0DB43739877B881970616387739F119338DAC;
// Oculus.Interaction.Deprecated.PointableCylinder
struct PointableCylinder_t0C622E2EC0209FE17B5AAEEDAF5E4514B285FE61;
// Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos
struct PointableDebugPolylineGizmos_t2DE45A6E8897D347D67431E94F432F20343FA568;
// Oculus.Interaction.Deprecated.PointableGrabbableConnection
struct PointableGrabbableConnection_tB8AE282D8D737108197C155D0180D63E05AD9EDA;
// Oculus.Interaction.Deprecated.PointableGroup
struct PointableGroup_tEB6216FE5245F1F17C4C196C7C061C0A69660A06;
// Oculus.Interaction.Deprecated.PointablePlane
struct PointablePlane_tD38A2A22EBDDF1077C931746C84013F9AB8E73B8;
// Oculus.Interaction.Deprecated.PolylineGizmos
struct PolylineGizmos_tF07843F74110BB21FAA28205531CA6536815A1C8;
// Oculus.Interaction.PolylineRenderer
struct PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C;
// Oculus.Interaction.ProgressCurve
struct ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401;
// Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos
struct RayInteractorDebugPolylineGizmos_t931C944C882AE1D37E0941BFACFD00BA7133F403;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Oculus.Interaction.DistanceReticles.ReticleDataGhost
struct ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC;
// Oculus.Interaction.DistanceReticles.ReticleDataIcon
struct ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF;
// Oculus.Interaction.DistanceReticles.ReticleDataMesh
struct ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E;
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B;
// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer
struct ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A;
// Oculus.Interaction.DistanceReticles.ReticleIconDrawer
struct ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA;
// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer
struct ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A;
// Oculus.Interaction.Deprecated.SnapAddress
struct SnapAddress_t9D4550D9A0DC7D5E9E69904CA9A503176EC0360B;
// Oculus.Interaction.Deprecated.SnapPoint
struct SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6;
// Oculus.Interaction.Deprecated.SphereSurface
struct SphereSurface_t032CD76396C515685EB3641037F5A819E46D5012;
// System.String
struct String_t;
// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185;
// Oculus.Interaction.Deprecated.SyntheticHandModifier
struct SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F;
// Oculus.Interaction.Deprecated.TagInteractableFilter
struct TagInteractableFilter_tAD802DE1C9042EDFC3CF23C3E417C07E404BAAB7;
// Oculus.Interaction.Locomotion.TeleportInteractable
struct TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470;
// Oculus.Interaction.Locomotion.TeleportInteractor
struct TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC;
// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4;
// Oculus.Interaction.Deprecated.TeleportTurningGate
struct TeleportTurningGate_tD89A6C0565EBCD38C5A05C1734491E55AF275C1F;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Oculus.Interaction.Deprecated.Transformable
struct Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993;
// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper
struct TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2;
// Oculus.Interaction.TubeRenderer
struct TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362;
// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967;
// Oculus.Interaction.Deprecated.TwoHandFreeTransformer
struct TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E;
// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer
struct TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825;
// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig
struct JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C;
// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
struct DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05B52F03BD7F046026ECD90E04FA25E19E846C75;
IL2CPP_EXTERN_C String_t* _stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDFB294F778F59154B0C13DA99829139A499DF0;
IL2CPP_EXTERN_C String_t* _stringLiteral6C4B7BB6F16715687781EE66CF5D32AE3F4DB8AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C9AA532905C162827F4D19C545C6BB49B5358CC;
IL2CPP_EXTERN_C String_t* _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA;
IL2CPP_EXTERN_C String_t* _stringLiteral7C643EBB219C9960D2043A540482240133DB77BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0;
IL2CPP_EXTERN_C String_t* _stringLiteral85BD9EED74CE4E82199736EB874A98184453B294;
IL2CPP_EXTERN_C String_t* _stringLiteralAA6BD9176F469F3986DF0373CDA4DE0B72D7DADB;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B49D1EEA77DA58D410F235BF091E6CF4E9E3CE;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE49DCFADDD2A3FDDB759BF68AA1C4A83171683;
IL2CPP_EXTERN_C String_t* _stringLiteralDA2E47AB1A65A82CB5A7C47C030B016CF800FDEE;
IL2CPP_EXTERN_C String_t* _stringLiteralDB3C10A667FA6AAD697C63CAAE1BDFC4C96C9148;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF409004AEC13091E4CA9359D39D6D2502CBB92;
IL2CPP_EXTERN_C String_t* _stringLiteralF601D7FB14510B9AF9F00A3CE377C095A91361B0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9799E78716E1D032FAF0BDC7C122BE66683FD6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisBodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792_m3AC57501753669BB5785133ABBC5ED5ECE73982E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_m93E27A6B4CDBCCC26F7E5BFCDB40806E08D654C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_m5BF72C457D16CD65FA3A37E6FA07CDF67CD4FE20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m0A0CF5E5718FB058A8B0579B7C05D884DDEE1101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m1F07C2E9CE25619E86E86F609FAF98FFBD2B5CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m39B628B92CCECA4257E6F831ED3754FDC23CB318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisSyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185_mC4003AC21FC15D1EB058C0ECCF71AD364506B998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisTeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC_mA995BDF4AAF96495E27083E136D1FB1213F7F724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m3E4857EDF6B3C380AC4FDC19D0248B359C38A653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisTubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_m5E413DC982FAF3AFDF6EA1FDA92706BB9B530FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleGhostDrawer_U3CStartU3Eb__18_0_m85325D39681E31568CEC8D3924042820103B308E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReticleMeshDrawer_U3CStartU3Eb__20_0_m4DB55D597145D8CEC78EF3168DC560CB31F098C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeleportReticleDrawer_U3CStartU3Eb__16_0_mF148CD3265A7C59109D3D47C8403599CBC6A0BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9FA84F26AA1A802D386693BEA83D81468D355CE3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAA2D2BA9C9EC519509C84716111088A39079C699* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8245A2F9711C7D7C8657AC5713035AD9E3F24A2D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<UnityEngine.Pose>
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>
struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Oculus.Interaction.Deprecated.AimingStabilizedOrigin
struct AimingStabilizedOrigin_t36A4477F06F712E3E8193FD8E7C692316D8F6B1B  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.ArcRangeModifier
struct ArcRangeModifier_t4B507B64122207F45555CFE042C57C979A6EA212  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.BezierSurface
struct BezierSurface_tCBD298F630129D1C146147850F4E670DC5E200ED  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.BoxProximityField
struct BoxProximityField_t6049F8D60A08A6DA25F6D26842E898EA25F0EB69  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.BoxSurface
struct BoxSurface_tAAF1A0103B0506E445926EB97C69C0648361D53D  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.CanvasMeshPointable
struct CanvasMeshPointable_t92C4339B214CCD9D4096F3BA1AF24A80D198BEE9  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.CanvasRenderTextureMesh
struct CanvasRenderTextureMesh_t02A4F45338938B3338617EA269FDD869F236157F  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.CircleProximityField
struct CircleProximityField_t774D98A0B8ECF26B4A51209FDEF73BF36C94BF82  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.ColliderSurface
struct ColliderSurface_t4831BCC604F8CA661E3F8076486776DC3FC15B2E  : public RuntimeObject
{
};

// Oculus.Interaction.Body.Input.Constants
struct Constants_t6B524980617E2621568CC57EDDE006CAC3DF9797  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.CylinderProximityField
struct CylinderProximityField_tA3730664ED55EFDFB8CBB740B2111B33D1467ED6  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.CylinderSurface
struct CylinderSurface_t4860F7819DFDDFF5CF7889F02572BB0CA482FD51  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.DummyDataModifier
struct DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.FingerGrabAPI
struct FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.FingerPinchAPI
struct FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.FixedScaleDataModifier
struct FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.GrabPoint
struct GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.GrabPointsPoseFinder
struct GrabPointsPoseFinder_t225254CA171C154FF956737F8AEF81B08531B663  : public RuntimeObject
{
};

// Oculus.Interaction.Input.HandDataSourceConfig
struct HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.Input.HandDataSourceConfig::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_0;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::<TrackingToWorldTransformer>k__BackingField
	RuntimeObject* ___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
	// Oculus.Interaction.Input.HandSkeleton Oculus.Interaction.Input.HandDataSourceConfig::<HandSkeleton>k__BackingField
	HandSkeleton_t1D460014EB9A79C22A05097791ABEE5855DAF34A* ___U3CHandSkeletonU3Ek__BackingField_2;
};

// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities
struct HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.HandGrabInteractorVisual
struct HandGrabInteractorVisual_t75BAEF131EADDBAC1FA18E210E448E2161B4AF5E  : public RuntimeObject
{
};

// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2  : public RuntimeObject
{
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabTarget::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_0;
	// Oculus.Interaction.HandGrab.HandGrabResult Oculus.Interaction.HandGrab.HandGrabTarget::_handGrabResult
	HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* ____handGrabResult_1;
	// Oculus.Interaction.HandGrab.HandAlignType Oculus.Interaction.HandGrab.HandGrabTarget::<HandAlignment>k__BackingField
	int32_t ___U3CHandAlignmentU3Ek__BackingField_2;
	// Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor Oculus.Interaction.HandGrab.HandGrabTarget::<Anchor>k__BackingField
	int32_t ___U3CAnchorU3Ek__BackingField_3;
};

// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandGrab.HandPose::_handedness
	int32_t ____handedness_0;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::_fingersFreedom
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____fingersFreedom_1;
	// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::_jointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____jointRotations_2;
};

// Oculus.Interaction.Deprecated.HandPoseRecordable
struct HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.HandPoseRecorder
struct HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InputDataProviderUpdateTriggerOVR
struct InputDataProviderUpdateTriggerOVR_tE8D61AA195A58A2A96B55C036E2F36275370594B  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractableTransformableConnection
struct InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractionOVRCameraRig
struct InteractionOVRCameraRig_t894006BD25A6C50C219E97034AC474D54671558D  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractorDriver
struct InteractorDriver_tCF2F3AE5B7609992F3B720446004D41630BBD4C5  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractorDriverGroup
struct InteractorDriverGroup_tCB165B2D74BDEBC387B9EA115373DCBA1DCF5106  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractorGroup
struct InteractorGroup_t6182B1516054FEC5C050AD1BF90AD545963139C0  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.InteractorGroupMulti
struct InteractorGroupMulti_tBE62507CB3575781A999CF25FF727E201174ECA6  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.JointLocking
struct JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.JointRotationHistoryModifier
struct JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier
struct LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OVRSkeletonDataProviders
struct OVRSkeletonDataProviders_t491B19DD085BF3AEB8AF66239194FD781FC26C8F  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier
struct OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterPositionHand
struct OneEuroFilterPositionHand_t1E88DED99F1BEF1043B5EB4431CA3CD0D9C277DC  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier
struct OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneEuroFilterRotationHand
struct OneEuroFilterRotationHand_t7DFF718617607C32DDAC6681A1BBB9FB8A295137  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneHandFreeTransformer
struct OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer
struct OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneHandRotateTransformer
struct OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.OneHandTranslateTransformer
struct OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PhysicsTransformable
struct PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PitchRemap
struct PitchRemap_t9D3F30AF71B221A8CFD73B3392524C65F179CB23  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointProximityField
struct PointProximityField_tA7E0DB43739877B881970616387739F119338DAC  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointableCylinder
struct PointableCylinder_t0C622E2EC0209FE17B5AAEEDAF5E4514B285FE61  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos
struct PointableDebugPolylineGizmos_t2DE45A6E8897D347D67431E94F432F20343FA568  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointableGrabbableConnection
struct PointableGrabbableConnection_tB8AE282D8D737108197C155D0180D63E05AD9EDA  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointableGroup
struct PointableGroup_tEB6216FE5245F1F17C4C196C7C061C0A69660A06  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PointablePlane
struct PointablePlane_tD38A2A22EBDDF1077C931746C84013F9AB8E73B8  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.PolylineGizmos
struct PolylineGizmos_tF07843F74110BB21FAA28205531CA6536815A1C8  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos
struct RayInteractorDebugPolylineGizmos_t931C944C882AE1D37E0941BFACFD00BA7133F403  : public RuntimeObject
{
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649  : public RuntimeObject
{
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::_poses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____poses_0;
};

// Oculus.Interaction.Deprecated.SnapAddress
struct SnapAddress_t9D4550D9A0DC7D5E9E69904CA9A503176EC0360B  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.SnapPoint
struct SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.SnapSurfaceHelper
struct SnapSurfaceHelper_t7B9FD4EBC3F8009B447600A0F9C3297C39164A43  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.SphereSurface
struct SphereSurface_t032CD76396C515685EB3641037F5A819E46D5012  : public RuntimeObject
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

// Oculus.Interaction.Deprecated.SyntheticHandModifier
struct SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.TagInteractableFilter
struct TagInteractableFilter_tAD802DE1C9042EDFC3CF23C3E417C07E404BAAB7  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.TeleportTurningGate
struct TeleportTurningGate_tD89A6C0565EBCD38C5A05C1734491E55AF275C1F  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.Transformable
struct Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper
struct TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.TwoHandFreeTransformer
struct TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E  : public RuntimeObject
{
};

// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer
struct TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34  : public RuntimeObject
{
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

// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84  : public RuntimeObject
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825  : public RuntimeObject
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig
struct JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373  : public RuntimeObject
{
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::Joint
	int32_t ___Joint_0;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::MaxDelta
	float ___MaxDelta_1;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::Width
	float ___Width_2;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90  : public RuntimeObject
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C  : public RuntimeObject
{
	// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Joints
	EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* ___Joints_0;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::JointToParent
	Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* ___JointToParent_1;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
struct DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761  : public RuntimeObject
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::<Target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTargetU3Ek__BackingField_0;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9  : public RuntimeObject
{
};

// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC  : public HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC
{
};

// System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>
struct Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ____current_3;
};

// Unity.Collections.NativeArray`1<Oculus.Interaction.TubeRenderer/VertexLayout>
struct NativeArray_1_t0A6D8BFE970E56179F0641428AB6482548B2A003 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// Oculus.Interaction.InteractorStateChangeArgs
struct InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78 
{
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_0;
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::<NewState>k__BackingField
	int32_t ___U3CNewStateU3Ek__BackingField_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState
struct BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B 
{
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::Delta
	float ___Delta_0;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::MaxDelta
	float ___MaxDelta_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>
struct KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// Oculus.Interaction.Input.JointFreedom
struct JointFreedom_tF6851AF256BDF4B02750F92160070BDF1F3B14A9 
{
	// System.Int32 Oculus.Interaction.Input.JointFreedom::value__
	int32_t ___value___2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Oculus.Interaction.TubePoint
struct TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B 
{
	// UnityEngine.Vector3 Oculus.Interaction.TubePoint::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion Oculus.Interaction.TubePoint::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// System.Single Oculus.Interaction.TubePoint::relativeLength
	float ___relativeLength_2;
};

// Oculus.Interaction.TubeRenderer/VertexLayout
struct VertexLayout_t654FA82E2F9123343ACEDB8A61C8F180DCE205A5 
{
	// UnityEngine.Vector3 Oculus.Interaction.TubeRenderer/VertexLayout::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_0;
	// UnityEngine.Color32 Oculus.Interaction.TubeRenderer/VertexLayout::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_1;
	// UnityEngine.Vector2 Oculus.Interaction.TubeRenderer/VertexLayout::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
};

// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456  : public RuntimeObject
{
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonMapping>k__BackingField
	RuntimeObject* ___U3CSkeletonMappingU3Ek__BackingField_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::<Root>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CRootU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::<RootScale>k__BackingField
	float ___U3CRootScaleU3Ek__BackingField_2;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_3;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::<JointPoses>k__BackingField
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CJointPosesU3Ek__BackingField_5;
	// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};

// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::<LocalDataVersion>k__BackingField
	int32_t ___U3CLocalDataVersionU3Ek__BackingField_1;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_originalPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____originalPoses_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRoot
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____posesFromRoot_3;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_localPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____localPoses_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_worldPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____worldPoses_5;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRootCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____posesFromRootCollection_6;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_worldPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____worldPosesCollection_7;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_localPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____localPosesCollection_8;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyJointsFromRoot
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyJointsFromRoot_9;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyLocalJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyLocalJoints_10;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyWorldJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyWorldJoints_11;
	// UnityEngine.Matrix4x4 Oculus.Interaction.Body.Input.BodyJointsCache::_scale
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____scale_12;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_rootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____rootPose_13;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_worldRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____worldRoot_14;
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyJointsCache::_mapping
	RuntimeObject* ____mapping_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Input.HandDataAsset
struct HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDataValid
	bool ___IsDataValid_0;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsConnected
	bool ___IsConnected_1;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsTracked
	bool ___IsTracked_2;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::Root
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___Root_3;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::RootPoseOrigin
	int32_t ___RootPoseOrigin_4;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.HandDataAsset::Joints
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Joints_5;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsHighConfidence
	bool ___IsHighConfidence_6;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerPinching
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerPinching_7;
	// System.Boolean[] Oculus.Interaction.Input.HandDataAsset::IsFingerHighConfidence
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___IsFingerHighConfidence_8;
	// System.Single[] Oculus.Interaction.Input.HandDataAsset::FingerPinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___FingerPinchStrength_9;
	// System.Single Oculus.Interaction.Input.HandDataAsset::HandScale
	float ___HandScale_10;
	// UnityEngine.Pose Oculus.Interaction.Input.HandDataAsset::PointerPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PointerPose_11;
	// Oculus.Interaction.Input.PoseOrigin Oculus.Interaction.Input.HandDataAsset::PointerPoseOrigin
	int32_t ___PointerPoseOrigin_12;
	// System.Boolean Oculus.Interaction.Input.HandDataAsset::IsDominantHand
	bool ___IsDominantHand_13;
	// Oculus.Interaction.Input.HandDataSourceConfig Oculus.Interaction.Input.HandDataAsset::Config
	HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* ___Config_14;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Oculus.Interaction.PolylineRenderer
struct PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0  : public RuntimeObject
{
	// UnityEngine.Vector4[] Oculus.Interaction.PolylineRenderer::_positions
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____positions_0;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_positionsNeedUpdate
	bool ____positionsNeedUpdate_1;
	// UnityEngine.Color[] Oculus.Interaction.PolylineRenderer::_colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____colors_2;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_colorsNeedUpdate
	bool ____colorsNeedUpdate_3;
	// UnityEngine.Bounds Oculus.Interaction.PolylineRenderer::_bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ____bounds_4;
	// UnityEngine.Mesh Oculus.Interaction.PolylineRenderer::_baseMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____baseMesh_5;
	// UnityEngine.Material Oculus.Interaction.PolylineRenderer::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_6;
	// System.Boolean Oculus.Interaction.PolylineRenderer::_renderSinglePass
	bool ____renderSinglePass_7;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_positionBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____positionBuffer_8;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_colorBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____colorBuffer_9;
	// UnityEngine.ComputeBuffer Oculus.Interaction.PolylineRenderer::_argsBuffer
	ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ____argsBuffer_10;
	// System.UInt32[] Oculus.Interaction.PolylineRenderer::_argsData
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____argsData_11;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_positionBufferShaderID
	int32_t ____positionBufferShaderID_12;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_colorBufferShaderID
	int32_t ____colorBufferShaderID_13;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_localToWorldShaderID
	int32_t ____localToWorldShaderID_14;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_scaleShaderID
	int32_t ____scaleShaderID_15;
	// System.Int32 Oculus.Interaction.PolylineRenderer::_maxLineCount
	int32_t ____maxLineCount_16;
	// UnityEngine.Matrix4x4 Oculus.Interaction.PolylineRenderer::_matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____matrix_17;
	// System.Single Oculus.Interaction.PolylineRenderer::_lineScaleFactor
	float ____lineScaleFactor_18;
};

// Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 
{
	// System.Single Oculus.Interaction.HandGrab.PoseTravelData::_travelSpeed
	float ____travelSpeed_0;
	// System.Boolean Oculus.Interaction.HandGrab.PoseTravelData::_useFixedTravelTime
	bool ____useFixedTravelTime_1;
	// UnityEngine.AnimationCurve Oculus.Interaction.HandGrab.PoseTravelData::_travelCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____travelCurve_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ____travelCurve_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ____travelCurve_2;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E 
{
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportHit::relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	// System.Single Oculus.Interaction.Locomotion.TeleportHit::<SnapRadius>k__BackingField
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.Locomotion.TeleportHit::_localPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};
// Native definition for COM marshalling of Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo_0;
	float ___U3CSnapRadiusU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_2;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve> Oculus.Interaction.Tween::_tweenCurves
	List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546* ____tweenCurves_0;
	// UnityEngine.Pose Oculus.Interaction.Tween::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_1;
	// UnityEngine.Pose Oculus.Interaction.Tween::_startPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____startPose_2;
	// System.Single Oculus.Interaction.Tween::_maxOverlapTime
	float ____maxOverlapTime_3;
	// System.Single Oculus.Interaction.Tween::_tweenTime
	float ____tweenTime_4;
	// UnityEngine.AnimationCurve Oculus.Interaction.Tween::_animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____animationCurve_5;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
struct JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE 
{
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::JointId
	int32_t ___JointId_0;
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::ParentId
	int32_t ___ParentId_1;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::PoseFromRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PoseFromRoot_2;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::LocalPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___LocalPose_3;
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CU3E2__current_1;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>s__1
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CU3Es__1_3;
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>s__2
	int32_t ___U3CU3Es__2_4;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<pose>5__3
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3E5__3_5;
};

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData
struct BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Action Oculus.Interaction.Body.PoseDetection.BodyPoseData::WhenBodyPoseUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_jointData
	List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* ____jointData_5;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_posesFromRoot
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____posesFromRoot_6;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.BodyPoseData::_localPoses
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____localPoses_7;
	// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping Oculus.Interaction.Body.PoseDetection.BodyPoseData::_mapping
	Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* ____mapping_8;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>
struct DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactable_2_t5D00069D26553652703166DED5F31151F7A8C426  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Object> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_9;
	// System.Boolean Oculus.Interaction.Interactable`2::_started
	bool ____started_10;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F* ____interactors_11;
	// Oculus.Interaction.Collections.EnumerableHashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	EnumerableHashSet_1_t0BC7DC57D412B97195C855CF761E9CF04EB6863F* ____selectingInteractors_12;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_13;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewAdded_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewRemoved_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewAdded_17;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewRemoved_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenInteractorAdded_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenInteractorRemoved_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenSelectingInteractorAdded_21;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tECB011B988105BF7EFBED27DEFFBE5AEC8AB62A3* ____whenSelectingInteractorRemoved_22;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>
struct InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>
struct InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>
struct InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>
struct InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_visibleDuringSelect
	bool ____visibleDuringSelect_4;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_started
	bool ____started_5;
	// TReticleData Oculus.Interaction.DistanceReticles.InteractorReticle`1::_targetData
	ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ____targetData_6;
	// System.Boolean Oculus.Interaction.DistanceReticles.InteractorReticle`1::_drawn
	bool ____drawn_7;
};

// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt64 Oculus.Interaction.Interactor`2::_nativeId
	uint64_t ____nativeId_5;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_activeState
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____activeState_6;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____interactableFilters_8;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_9;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_candidateTiebreaker
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____candidateTiebreaker_10;
	// System.Collections.Generic.IComparer`1<TInteractable> Oculus.Interaction.Interactor`2::CandidateTiebreaker
	RuntimeObject* ___CandidateTiebreaker_11;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ____computeCandidateOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_13;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_15;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_16;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_17;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_18;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_19;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_20;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_21;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_22;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_23;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_24;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_25;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	RuntimeObject* ____candidate_26;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	RuntimeObject* ____interactable_27;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	RuntimeObject* ____selectedInteractable_28;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSet_29;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnset_30;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSelected_31;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnselected_32;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_33;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_34;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_35;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_36;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_37;
};

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>
struct Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt64 Oculus.Interaction.Interactor`2::_nativeId
	uint64_t ____nativeId_5;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_activeState
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____activeState_6;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____interactableFilters_8;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_9;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_candidateTiebreaker
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____candidateTiebreaker_10;
	// System.Collections.Generic.IComparer`1<TInteractable> Oculus.Interaction.Interactor`2::CandidateTiebreaker
	RuntimeObject* ___CandidateTiebreaker_11;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_t562FD0C34DB93F8749DF15C26E40E5B8F2331EAE* ____computeCandidateOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_13;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_14;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_15;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_16;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_17;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_18;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_19;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_20;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_21;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_22;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_23;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_24;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_25;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____candidate_26;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____interactable_27;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* ____selectedInteractable_28;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableSet_29;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableUnset_30;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableSelected_31;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t41C034AE111A9975CB6A395D0F61E203D3D0786B* ____whenInteractableUnselected_32;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_33;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_34;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_35;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_36;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_37;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState
struct BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_poseA
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____poseA_4;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::PoseA
	RuntimeObject* ___PoseA_5;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_poseB
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____poseB_6;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::PoseB
	RuntimeObject* ___PoseB_7;
	// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_configs
	List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* ____configs_8;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_minTimeInState
	float ____minTimeInState_9;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_featureStates
	Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* ____featureStates_10;
	// System.Func`1<System.Single> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_timeProvider
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ____timeProvider_11;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_isActive
	bool ____isActive_12;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_internalActive
	bool ____internalActive_13;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::_lastStateChangeTime
	float ____lastStateChangeTime_14;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual
struct BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_bodyPoseComparer
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ____bodyPoseComparer_4;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_bodyPose
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose_5;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::BodyPose
	RuntimeObject* ___BodyPose_6;
	// UnityEngine.Transform Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____root_7;
	// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::_radius
	float ____radius_8;
};

// Oculus.Interaction.DebugGizmos
struct DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Vector4> Oculus.Interaction.DebugGizmos::_points
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____points_4;
	// System.Collections.Generic.List`1<UnityEngine.Color> Oculus.Interaction.DebugGizmos::_colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ____colors_5;
	// System.Int32 Oculus.Interaction.DebugGizmos::_index
	int32_t ____index_6;
	// System.Boolean Oculus.Interaction.DebugGizmos::_addedSegmentSinceLastUpdate
	bool ____addedSegmentSinceLastUpdate_7;
	// Oculus.Interaction.PolylineRenderer Oculus.Interaction.DebugGizmos::_polylineRenderer
	PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* ____polylineRenderer_9;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
struct DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_distanceInteractor
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____distanceInteractor_4;
	// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::<DistanceInteractor>k__BackingField
	RuntimeObject* ___U3CDistanceInteractorU3Ek__BackingField_5;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_visualOffset
	float ____visualOffset_6;
	// UnityEngine.Vector3[] Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_linePoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____linePoints_7;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_visibleDuringNormal
	bool ____visibleDuringNormal_8;
	// Oculus.Interaction.DistanceReticles.IReticleData Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_target
	RuntimeObject* ____target_9;
	// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_numLinePoints
	int32_t ____numLinePoints_10;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_targetlessLength
	float ____targetlessLength_11;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_started
	bool ____started_12;
	// System.Boolean Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_shouldDrawLine
	bool ____shouldDrawLine_13;
	// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::_dummyTarget
	DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* ____dummyTarget_14;
};

// Oculus.Interaction.Deprecated.DropZoneInteractable
struct DropZoneInteractable_t92FD1C2B60E67DB2097732DFE98E8E069E3F9A0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.DropZoneInteractor
struct DropZoneInteractor_t2BD9710EB716126AA66899B10B8080C0B8558B78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.Deprecated.DropZoneSequentialSlotsProvider
struct DropZoneSequentialSlotsProvider_t6AFDE2C241DAD92CBF05FFE03D5FB904E66E730D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object Oculus.Interaction.GrabAPI.HandGrabAPI::_hand
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____hand_4;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_5;
	// UnityEngine.Object Oculus.Interaction.GrabAPI.HandGrabAPI::_hmd
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____hmd_6;
	// Oculus.Interaction.Input.IHmd Oculus.Interaction.GrabAPI.HandGrabAPI::<Hmd>k__BackingField
	RuntimeObject* ___U3CHmdU3Ek__BackingField_7;
	// Oculus.Interaction.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPinchGrabAPI
	RuntimeObject* ____fingerPinchGrabAPI_8;
	// Oculus.Interaction.IFingerAPI Oculus.Interaction.GrabAPI.HandGrabAPI::_fingerPalmGrabAPI
	RuntimeObject* ____fingerPalmGrabAPI_9;
	// System.Boolean Oculus.Interaction.GrabAPI.HandGrabAPI::_started
	bool ____started_10;
};

// Oculus.Interaction.Deprecated.HandGrabPoint
struct HandGrabPoint_tB8D7EC4231DB7A46991B4A7B4FB63ACB6B2E0D53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.MaterialPropertyBlockEditor
struct MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Oculus.Interaction.MaterialPropertyBlockEditor::_renderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ____renderers_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyVector> Oculus.Interaction.MaterialPropertyBlockEditor::_vectorProperties
	List_1_t49583C5E1D90B770ADFCE70683F8291ABF9F60B4* ____vectorProperties_5;
	// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyColor> Oculus.Interaction.MaterialPropertyBlockEditor::_colorProperties
	List_1_t4B4CED06322067B6A8C906AE5BB606C9B7F7C07A* ____colorProperties_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.MaterialPropertyFloat> Oculus.Interaction.MaterialPropertyBlockEditor::_floatProperties
	List_1_t50603F4F6C09C9960406FFD144E8CC1E2F5279A6* ____floatProperties_7;
	// System.Boolean Oculus.Interaction.MaterialPropertyBlockEditor::_updateEveryFrame
	bool ____updateEveryFrame_8;
	// UnityEngine.MaterialPropertyBlock Oculus.Interaction.MaterialPropertyBlockEditor::_materialPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ____materialPropertyBlock_9;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody::WhenBodyPoseUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated_4;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.PoseFromBody::_body
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body_5;
	// Oculus.Interaction.Body.Input.IBody Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body
	RuntimeObject* ___Body_6;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_autoUpdate
	bool ____autoUpdate_7;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_started
	bool ____started_8;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesLocal
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesLocal_9;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesFromRoot
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesFromRoot_10;
};

// Oculus.Interaction.DistanceReticles.ReticleDataGhost
struct ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataGhost::_targetPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetPoint_4;
};

// Oculus.Interaction.DistanceReticles.ReticleDataIcon
struct ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleDataIcon::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_4;
	// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::_customIcon
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____customIcon_5;
	// System.Single Oculus.Interaction.DistanceReticles.ReticleDataIcon::_snappiness
	float ____snappiness_6;
};

// Oculus.Interaction.DistanceReticles.ReticleDataMesh
struct ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::_filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____filter_4;
};

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_snapPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____snapPoint_4;
	// Oculus.Interaction.MaterialPropertyBlockEditor Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_materialBlock
	MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* ____materialBlock_5;
	// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_reticleMode
	int32_t ____reticleMode_7;
};

// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::_visibility
	int32_t ____visibility_4;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_jointColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____jointColor_5;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_boneColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____boneColor_6;
	// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::_radius
	float ____radius_7;
};

// Oculus.Interaction.TubeRenderer
struct TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshFilter Oculus.Interaction.TubeRenderer::_filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____filter_4;
	// UnityEngine.MeshRenderer Oculus.Interaction.TubeRenderer::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_5;
	// System.Int32 Oculus.Interaction.TubeRenderer::_divisions
	int32_t ____divisions_6;
	// System.Int32 Oculus.Interaction.TubeRenderer::_bevel
	int32_t ____bevel_7;
	// System.Int32 Oculus.Interaction.TubeRenderer::_renderQueue
	int32_t ____renderQueue_8;
	// UnityEngine.Vector2 Oculus.Interaction.TubeRenderer::_renderOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____renderOffset_9;
	// System.Single Oculus.Interaction.TubeRenderer::_radius
	float ____radius_10;
	// UnityEngine.Gradient Oculus.Interaction.TubeRenderer::_gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ____gradient_11;
	// UnityEngine.Color Oculus.Interaction.TubeRenderer::_tint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____tint_12;
	// System.Single Oculus.Interaction.TubeRenderer::_progressFade
	float ____progressFade_13;
	// System.Single Oculus.Interaction.TubeRenderer::_startFadeThresold
	float ____startFadeThresold_14;
	// System.Single Oculus.Interaction.TubeRenderer::_endFadeThresold
	float ____endFadeThresold_15;
	// System.Boolean Oculus.Interaction.TubeRenderer::_invertThreshold
	bool ____invertThreshold_16;
	// System.Single Oculus.Interaction.TubeRenderer::_feather
	float ____feather_17;
	// System.Boolean Oculus.Interaction.TubeRenderer::_mirrorTexture
	bool ____mirrorTexture_18;
	// System.Single Oculus.Interaction.TubeRenderer::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_19;
	// UnityEngine.Rendering.VertexAttributeDescriptor[] Oculus.Interaction.TubeRenderer::_dataLayout
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ____dataLayout_20;
	// Unity.Collections.NativeArray`1<Oculus.Interaction.TubeRenderer/VertexLayout> Oculus.Interaction.TubeRenderer::_vertsData
	NativeArray_1_t0A6D8BFE970E56179F0641428AB6482548B2A003 ____vertsData_21;
	// Oculus.Interaction.TubeRenderer/VertexLayout Oculus.Interaction.TubeRenderer::_layout
	VertexLayout_t654FA82E2F9123343ACEDB8A61C8F180DCE205A5 ____layout_22;
	// UnityEngine.Mesh Oculus.Interaction.TubeRenderer::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_23;
	// System.Int32[] Oculus.Interaction.TubeRenderer::_tris
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____tris_24;
	// System.Int32 Oculus.Interaction.TubeRenderer::_initializedSteps
	int32_t ____initializedSteps_25;
	// System.Single Oculus.Interaction.TubeRenderer::_totalLength
	float ____totalLength_26;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67  : public DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A
{
	// UnityEngine.Object Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____iModifyDataFromSourceMono_11;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_12;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_13;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____thisDataAsset_15;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____currentDataAsset_16;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Input.HandDataAsset>
struct DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5  : public DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E
{
	// UnityEngine.Object Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____iModifyDataFromSourceMono_11;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_12;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_13;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____thisDataAsset_15;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____currentDataAsset_16;
};

// Oculus.Interaction.Body.BodyDebugGizmos
struct BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	// UnityEngine.Object Oculus.Interaction.Body.BodyDebugGizmos::_body
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body_8;
	// Oculus.Interaction.Body.Input.IBody Oculus.Interaction.Body.BodyDebugGizmos::Body
	RuntimeObject* ___Body_9;
	// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::_space
	int32_t ____space_10;
	// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::_started
	bool ____started_11;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::_bodyPose
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose_8;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::BodyPose
	RuntimeObject* ___BodyPose_9;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
struct DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D  : public DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93
{
	// UnityEngine.LineRenderer Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::_lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ____lineRenderer_15;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual
struct DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487  : public DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93
{
	// UnityEngine.Color Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_15;
	// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_lineWidth
	float ____lineWidth_16;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_linePointsVec4
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____linePointsVec4_17;
	// UnityEngine.Material Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_lineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____lineMaterial_18;
	// Oculus.Interaction.PolylineRenderer Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::_polylineRenderer
	PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* ____polylineRenderer_19;
};

// Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual
struct DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3  : public DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93
{
	// Oculus.Interaction.TubeRenderer Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::_tubeRenderer
	TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* ____tubeRenderer_15;
	// Oculus.Interaction.TubePoint[] Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::_tubePoints
	TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* ____tubePoints_16;
};

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer
struct ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A  : public InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303
{
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_handGrabInteractor
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____handGrabInteractor_8;
	// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<HandGrabInteractor>k__BackingField
	RuntimeObject* ___U3CHandGrabInteractorU3Ek__BackingField_9;
	// Oculus.Interaction.Input.SyntheticHand Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_syntheticHand
	SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ____syntheticHand_10;
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_handVisual
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____handVisual_11;
	// Oculus.Interaction.IHandVisual Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::HandVisual
	RuntimeObject* ___HandVisual_12;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_areFingersFree
	bool ____areFingersFree_13;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::_isWristFree
	bool ____isWristFree_14;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_15;
	// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Transformer
	RuntimeObject* ___Transformer_16;
};

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer
struct ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA  : public InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859
{
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_distanceInteractor
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____distanceInteractor_8;
	// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<DistanceInteractor>k__BackingField
	RuntimeObject* ___U3CDistanceInteractorU3Ek__BackingField_9;
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_10;
	// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_centerEye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____centerEye_11;
	// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_defaultIcon
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ____defaultIcon_12;
	// System.Boolean Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_constantScreenSize
	bool ____constantScreenSize_13;
	// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleIconDrawer::_originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____originalScale_14;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_15;
};

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer
struct ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B  : public InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B
{
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_handGrabInteractor
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____handGrabInteractor_8;
	// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<HandGrabInteractor>k__BackingField
	RuntimeObject* ___U3CHandGrabInteractorU3Ek__BackingField_9;
	// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____filter_10;
	// UnityEngine.MeshRenderer Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____renderer_11;
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_travelData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travelData_12;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_13;
	// Oculus.Interaction.Tween Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::_tween
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* ____tween_14;
};

// Oculus.Interaction.Locomotion.TeleportInteractable
struct TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470  : public Interactable_2_t5D00069D26553652703166DED5F31151F7A8C426
{
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_allowTeleport
	bool ____allowTeleport_24;
	// System.Single Oculus.Interaction.Locomotion.TeleportInteractable::_equalDistanceToBlockerOverride
	float ____equalDistanceToBlockerOverride_25;
	// System.Int32 Oculus.Interaction.Locomotion.TeleportInteractable::_tieBreakerScore
	int32_t ____tieBreakerScore_26;
	// UnityEngine.Object Oculus.Interaction.Locomotion.TeleportInteractable::_surface
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____surface_27;
	// Oculus.Interaction.Surfaces.ISurface Oculus.Interaction.Locomotion.TeleportInteractable::<Surface>k__BackingField
	RuntimeObject* ___U3CSurfaceU3Ek__BackingField_28;
	// Oculus.Interaction.Surfaces.IBounds Oculus.Interaction.Locomotion.TeleportInteractable::<SurfaceBounds>k__BackingField
	RuntimeObject* ___U3CSurfaceBoundsU3Ek__BackingField_29;
	// UnityEngine.Transform Oculus.Interaction.Locomotion.TeleportInteractable::_targetPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____targetPoint_30;
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_faceTargetDirection
	bool ____faceTargetDirection_31;
	// System.Boolean Oculus.Interaction.Locomotion.TeleportInteractable::_eyeLevel
	bool ____eyeLevel_32;
};

// Oculus.Interaction.Locomotion.TeleportInteractor
struct TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC  : public Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E
{
	// UnityEngine.Object Oculus.Interaction.Locomotion.TeleportInteractor::_selector
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____selector_38;
	// UnityEngine.Object Oculus.Interaction.Locomotion.TeleportInteractor::_hmd
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____hmd_39;
	// Oculus.Interaction.Input.IHmd Oculus.Interaction.Locomotion.TeleportInteractor::<Hmd>k__BackingField
	RuntimeObject* ___U3CHmdU3Ek__BackingField_40;
	// UnityEngine.Object Oculus.Interaction.Locomotion.TeleportInteractor::_teleportArc
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____teleportArc_41;
	// Oculus.Interaction.IPolyline Oculus.Interaction.Locomotion.TeleportInteractor::<TeleportArc>k__BackingField
	RuntimeObject* ___U3CTeleportArcU3Ek__BackingField_42;
	// System.Single Oculus.Interaction.Locomotion.TeleportInteractor::_equalDistanceThreshold
	float ____equalDistanceThreshold_43;
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportInteractor::_arcEnd
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E ____arcEnd_44;
	// System.Action`1<Oculus.Interaction.Locomotion.LocomotionEvent> Oculus.Interaction.Locomotion.TeleportInteractor::_whenLocomotionPerformed
	Action_1_t4AA2EBB731BE286245E5F0F415AF03512C0045E4* ____whenLocomotionPerformed_45;
};

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4  : public InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8
{
	// Oculus.Interaction.Locomotion.TeleportInteractor Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_interactor
	TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ____interactor_8;
	// UnityEngine.Renderer Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_validTargetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____validTargetRenderer_9;
	// UnityEngine.Renderer Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_invalidTargetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____invalidTargetRenderer_10;
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_progress
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____progress_11;
	// Oculus.Interaction.Input.IAxis1D Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Progress
	RuntimeObject* ___Progress_12;
	// UnityEngine.Object Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_highlightState
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____highlightState_13;
	// Oculus.Interaction.IActiveState Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::HighlightState
	RuntimeObject* ___HighlightState_14;
	// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::<Interactor>k__BackingField
	RuntimeObject* ___U3CInteractorU3Ek__BackingField_15;
};

// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69  : public DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67
{
	// UnityEngine.Transform Oculus.Interaction.Body.Input.Body::_trackingSpace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackingSpace_17;
	// System.Action Oculus.Interaction.Body.Input.Body::WhenBodyUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyUpdated_18;
	// Oculus.Interaction.Body.Input.BodyJointsCache Oculus.Interaction.Body.Input.Body::_jointPosesCache
	BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* ____jointPosesCache_19;
};

// Oculus.Interaction.Input.Hand
struct Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A  : public DataModifier_1_t07168F3D3D5863B9EC34501A83C8C3FD7889C6A5
{
	// Oculus.Interaction.Input.HandJointCache Oculus.Interaction.Input.Hand::_jointPosesCache
	HandJointCache_t8BDBDA97A57F7D39288F80C40A225C050A05116B* ____jointPosesCache_17;
	// System.Action Oculus.Interaction.Input.Hand::WhenHandUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenHandUpdated_18;
};

// Oculus.Interaction.Input.SyntheticHand
struct SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185  : public Hand_tC61A0092374A077C2B2C040DC5CBF6D768A92B9A
{
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionLockCurve_20;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristPositionUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristPositionUnlockCurve_21;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationLockCurve_22;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_wristRotationUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____wristRotationUnlockCurve_23;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointLockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointLockCurve_24;
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Input.SyntheticHand::_jointUnlockCurve
	ProgressCurve_t4240A915DEBE2CD7C1D414683EB5A89A06494401* ____jointUnlockCurve_25;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_spreadAllowance
	float ____spreadAllowance_26;
	// System.Action Oculus.Interaction.Input.SyntheticHand::UpdateRequired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRequired_27;
	// Oculus.Interaction.Input.HandDataAsset Oculus.Interaction.Input.SyntheticHand::_lastStates
	HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* ____lastStates_28;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristPositionOverrideFactor
	float ____wristPositionOverrideFactor_29;
	// System.Single Oculus.Interaction.Input.SyntheticHand::_wristRotationOverrideFactor
	float ____wristRotationOverrideFactor_30;
	// System.Single[] Oculus.Interaction.Input.SyntheticHand::_jointsOverrideFactor
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____jointsOverrideFactor_31;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointLockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointLockProgressCurves_32;
	// Oculus.Interaction.ProgressCurve[] Oculus.Interaction.Input.SyntheticHand::_jointUnlockProgressCurves
	ProgressCurveU5BU5D_tC39B4D277C25EC7E806915D61959688D3B51A76D* ____jointUnlockProgressCurves_33;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_desiredWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____desiredWristPose_34;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristPositionLocked
	bool ____wristPositionLocked_35;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_wristRotationLocked
	bool ____wristRotationLocked_36;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_constrainedWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____constrainedWristPose_37;
	// UnityEngine.Pose Oculus.Interaction.Input.SyntheticHand::_lastWristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____lastWristPose_38;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_desiredJointsRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____desiredJointsRotation_39;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_constrainedJointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____constrainedJointRotations_40;
	// UnityEngine.Quaternion[] Oculus.Interaction.Input.SyntheticHand::_lastSyntheticRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____lastSyntheticRotation_41;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.Input.SyntheticHand::_jointsFreedomLevels
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____jointsFreedomLevels_42;
	// System.Boolean Oculus.Interaction.Input.SyntheticHand::_hasConnectedData
	bool ____hasConnectedData_43;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// System.EmptyArray`1<UnityEngine.Pose>
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields
{
	// T[] System.EmptyArray`1::Value
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___Value_0;
};

// System.EmptyArray`1<UnityEngine.Pose>

// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>
struct List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointComparerConfigU5BU5D_tD81ADC60373CAFA183A7BD0997A210D415F5D9AC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>
struct List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>

// Oculus.Interaction.Deprecated.AimingStabilizedOrigin

// Oculus.Interaction.Deprecated.AimingStabilizedOrigin

// Oculus.Interaction.Deprecated.ArcRangeModifier

// Oculus.Interaction.Deprecated.ArcRangeModifier

// Oculus.Interaction.Deprecated.BezierSurface

// Oculus.Interaction.Deprecated.BezierSurface

// Oculus.Interaction.Deprecated.BoxProximityField

// Oculus.Interaction.Deprecated.BoxProximityField

// Oculus.Interaction.Deprecated.BoxSurface

// Oculus.Interaction.Deprecated.BoxSurface

// Oculus.Interaction.Deprecated.CanvasMeshPointable

// Oculus.Interaction.Deprecated.CanvasMeshPointable

// Oculus.Interaction.Deprecated.CanvasRenderTextureMesh

// Oculus.Interaction.Deprecated.CanvasRenderTextureMesh

// Oculus.Interaction.Deprecated.CircleProximityField

// Oculus.Interaction.Deprecated.CircleProximityField

// Oculus.Interaction.Deprecated.ColliderSurface

// Oculus.Interaction.Deprecated.ColliderSurface

// Oculus.Interaction.Body.Input.Constants

// Oculus.Interaction.Body.Input.Constants

// Oculus.Interaction.Deprecated.CylinderProximityField

// Oculus.Interaction.Deprecated.CylinderProximityField

// Oculus.Interaction.Deprecated.CylinderSurface

// Oculus.Interaction.Deprecated.CylinderSurface

// Oculus.Interaction.Deprecated.DummyDataModifier

// Oculus.Interaction.Deprecated.DummyDataModifier

// Oculus.Interaction.Deprecated.FingerGrabAPI

// Oculus.Interaction.Deprecated.FingerGrabAPI

// Oculus.Interaction.Deprecated.FingerPinchAPI

// Oculus.Interaction.Deprecated.FingerPinchAPI

// Oculus.Interaction.Deprecated.FixedScaleDataModifier

// Oculus.Interaction.Deprecated.FixedScaleDataModifier

// Oculus.Interaction.Deprecated.GrabPoint

// Oculus.Interaction.Deprecated.GrabPoint

// Oculus.Interaction.Deprecated.GrabPointsPoseFinder

// Oculus.Interaction.Deprecated.GrabPointsPoseFinder

// Oculus.Interaction.Input.HandDataSourceConfig

// Oculus.Interaction.Input.HandDataSourceConfig

// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities

// Oculus.Interaction.Deprecated.HandGrabInteractionUtilities

// Oculus.Interaction.Deprecated.HandGrabInteractorVisual

// Oculus.Interaction.Deprecated.HandGrabInteractorVisual

// Oculus.Interaction.HandGrab.HandGrabTarget

// Oculus.Interaction.HandGrab.HandGrabTarget

// Oculus.Interaction.HandGrab.HandPose

// Oculus.Interaction.HandGrab.HandPose

// Oculus.Interaction.Deprecated.HandPoseRecordable

// Oculus.Interaction.Deprecated.HandPoseRecordable

// Oculus.Interaction.Deprecated.HandPoseRecorder

// Oculus.Interaction.Deprecated.HandPoseRecorder

// Oculus.Interaction.Deprecated.InputDataProviderUpdateTriggerOVR

// Oculus.Interaction.Deprecated.InputDataProviderUpdateTriggerOVR

// Oculus.Interaction.Deprecated.InteractableTransformableConnection

// Oculus.Interaction.Deprecated.InteractableTransformableConnection

// Oculus.Interaction.Deprecated.InteractionOVRCameraRig

// Oculus.Interaction.Deprecated.InteractionOVRCameraRig

// Oculus.Interaction.Deprecated.InteractorDriver

// Oculus.Interaction.Deprecated.InteractorDriver

// Oculus.Interaction.Deprecated.InteractorDriverGroup

// Oculus.Interaction.Deprecated.InteractorDriverGroup

// Oculus.Interaction.Deprecated.InteractorGroup

// Oculus.Interaction.Deprecated.InteractorGroup

// Oculus.Interaction.Deprecated.InteractorGroupMulti

// Oculus.Interaction.Deprecated.InteractorGroupMulti

// Oculus.Interaction.Deprecated.JointLocking

// Oculus.Interaction.Deprecated.JointLocking

// Oculus.Interaction.Deprecated.JointRotationHistoryModifier

// Oculus.Interaction.Deprecated.JointRotationHistoryModifier

// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier

// Oculus.Interaction.Deprecated.LastKnownGoodDataModifier

// Oculus.Interaction.Deprecated.OVRSkeletonDataProviders

// Oculus.Interaction.Deprecated.OVRSkeletonDataProviders

// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier

// Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier

// Oculus.Interaction.Deprecated.OneEuroFilterPositionHand

// Oculus.Interaction.Deprecated.OneEuroFilterPositionHand

// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier

// Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier

// Oculus.Interaction.Deprecated.OneEuroFilterRotationHand

// Oculus.Interaction.Deprecated.OneEuroFilterRotationHand

// Oculus.Interaction.Deprecated.OneHandFreeTransformer

// Oculus.Interaction.Deprecated.OneHandFreeTransformer

// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer

// Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer

// Oculus.Interaction.Deprecated.OneHandRotateTransformer

// Oculus.Interaction.Deprecated.OneHandRotateTransformer

// Oculus.Interaction.Deprecated.OneHandTranslateTransformer

// Oculus.Interaction.Deprecated.OneHandTranslateTransformer

// Oculus.Interaction.Deprecated.PhysicsTransformable

// Oculus.Interaction.Deprecated.PhysicsTransformable

// Oculus.Interaction.Deprecated.PitchRemap

// Oculus.Interaction.Deprecated.PitchRemap

// Oculus.Interaction.Deprecated.PointProximityField

// Oculus.Interaction.Deprecated.PointProximityField

// Oculus.Interaction.Deprecated.PointableCylinder

// Oculus.Interaction.Deprecated.PointableCylinder

// Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos

// Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos

// Oculus.Interaction.Deprecated.PointableGrabbableConnection

// Oculus.Interaction.Deprecated.PointableGrabbableConnection

// Oculus.Interaction.Deprecated.PointableGroup

// Oculus.Interaction.Deprecated.PointableGroup

// Oculus.Interaction.Deprecated.PointablePlane

// Oculus.Interaction.Deprecated.PointablePlane

// Oculus.Interaction.Deprecated.PolylineGizmos

// Oculus.Interaction.Deprecated.PolylineGizmos

// Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos

// Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields
{
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::<Empty>k__BackingField
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CEmptyU3Ek__BackingField_1;
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses

// Oculus.Interaction.Deprecated.SnapAddress

// Oculus.Interaction.Deprecated.SnapAddress

// Oculus.Interaction.Deprecated.SnapPoint

// Oculus.Interaction.Deprecated.SnapPoint

// Oculus.Interaction.Deprecated.SnapSurfaceHelper

// Oculus.Interaction.Deprecated.SnapSurfaceHelper

// Oculus.Interaction.Deprecated.SphereSurface

// Oculus.Interaction.Deprecated.SphereSurface

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Oculus.Interaction.Deprecated.SyntheticHandModifier

// Oculus.Interaction.Deprecated.SyntheticHandModifier

// Oculus.Interaction.Deprecated.TagInteractableFilter

// Oculus.Interaction.Deprecated.TagInteractableFilter

// Oculus.Interaction.Deprecated.TeleportTurningGate

// Oculus.Interaction.Deprecated.TeleportTurningGate

// Oculus.Interaction.Deprecated.Transformable

// Oculus.Interaction.Deprecated.Transformable

// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper

// Oculus.Interaction.Deprecated.TransformableUnityEventWrapper

// Oculus.Interaction.Deprecated.TwoHandFreeTransformer

// Oculus.Interaction.Deprecated.TwoHandFreeTransformer

// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer

// Oculus.Interaction.Deprecated.TwoHandPlaneTransformer

// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields
{
	// Oculus.Interaction.Body.Input.Body/<>c Oculus.Interaction.Body.Input.Body/<>c::<>9
	U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.Input.Body/<>c::<>9__23_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__23_0_1;
};

// Oculus.Interaction.Body.Input.Body/<>c

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
struct U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<>9
	U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<>9__18_0
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___U3CU3E9__18_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9
	U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9__17_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__17_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle

// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9
	U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9__24_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__24_0_1;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c

// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>

// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>

// System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>

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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Oculus.Interaction.InteractorStateChangeArgs

// Oculus.Interaction.InteractorStateChangeArgs

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt64

// System.UInt64

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

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___2B1FD722B0C0586F285976A166555FD77C64A00FC76F6CC455BE22FA86E48427_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___66B8ADE862334112630302D3FDA850DE686B805F4B769228FEEE8737D734B051_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
	__StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 ___6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_36;
};

// <PrivateImplementationDetails>

// UnityEngine.Bounds

// UnityEngine.Bounds

// System.Delegate

// System.Delegate

// Oculus.Interaction.Input.JointFreedom

// Oculus.Interaction.Input.JointFreedom

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// Oculus.Interaction.TubePoint

// Oculus.Interaction.TubePoint

// Oculus.Interaction.Body.Input.BodyDataAsset

// Oculus.Interaction.Body.Input.BodyDataAsset

// Oculus.Interaction.Body.Input.BodyJointsCache

// Oculus.Interaction.Body.Input.BodyJointsCache

// UnityEngine.Component

// UnityEngine.Component

// Oculus.Interaction.Input.HandDataAsset

// Oculus.Interaction.Input.HandDataAsset

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// Oculus.Interaction.PolylineRenderer

// Oculus.Interaction.PolylineRenderer

// Oculus.Interaction.HandGrab.PoseTravelData

// Oculus.Interaction.HandGrab.PoseTravelData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// Oculus.Interaction.Locomotion.TeleportHit
struct TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E_StaticFields
{
	// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportHit::DEFAULT
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E ___DEFAULT_3;
};

// Oculus.Interaction.Locomotion.TeleportHit

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// Oculus.Interaction.Tween

// Oculus.Interaction.Tween

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>

// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>

// System.Func`1<System.Single>

// System.Func`1<System.Single>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Oculus.Interaction.Body.PoseDetection.BodyPoseData

// Oculus.Interaction.Body.PoseDetection.BodyPoseData

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>

// Oculus.Interaction.Input.DataSource`1<System.Object>

// Oculus.Interaction.Input.DataSource`1<System.Object>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>

// Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>

// Oculus.Interaction.Interactor`2<System.Object,System.Object>

// Oculus.Interaction.Interactor`2<System.Object,System.Object>

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>

// Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual

// Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual

// Oculus.Interaction.DebugGizmos
struct DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields
{
	// Oculus.Interaction.DebugGizmos Oculus.Interaction.DebugGizmos::_root
	DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027* ____root_8;
	// System.Boolean Oculus.Interaction.DebugGizmos::_renderSinglePass
	bool ____renderSinglePass_10;
	// UnityEngine.Color Oculus.Interaction.DebugGizmos::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_11;
	// System.Single Oculus.Interaction.DebugGizmos::LineWidth
	float ___LineWidth_12;
	// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3> Oculus.Interaction.DebugGizmos::CUBE_POINTS
	RuntimeObject* ___CUBE_POINTS_13;
	// System.Collections.Generic.IReadOnlyList`1<System.Int32> Oculus.Interaction.DebugGizmos::CUBE_SEGMENTS
	RuntimeObject* ___CUBE_SEGMENTS_14;
};

// Oculus.Interaction.DebugGizmos

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual

// Oculus.Interaction.Deprecated.DropZoneInteractable

// Oculus.Interaction.Deprecated.DropZoneInteractable

// Oculus.Interaction.Deprecated.DropZoneInteractor

// Oculus.Interaction.Deprecated.DropZoneInteractor

// Oculus.Interaction.Deprecated.DropZoneSequentialSlotsProvider

// Oculus.Interaction.Deprecated.DropZoneSequentialSlotsProvider

// Oculus.Interaction.GrabAPI.HandGrabAPI

// Oculus.Interaction.GrabAPI.HandGrabAPI

// Oculus.Interaction.Deprecated.HandGrabPoint

// Oculus.Interaction.Deprecated.HandGrabPoint

// Oculus.Interaction.MaterialPropertyBlockEditor

// Oculus.Interaction.MaterialPropertyBlockEditor

// Oculus.Interaction.Body.PoseDetection.PoseFromBody

// Oculus.Interaction.Body.PoseDetection.PoseFromBody

// Oculus.Interaction.DistanceReticles.ReticleDataGhost

// Oculus.Interaction.DistanceReticles.ReticleDataGhost

// Oculus.Interaction.DistanceReticles.ReticleDataIcon

// Oculus.Interaction.DistanceReticles.ReticleDataIcon

// Oculus.Interaction.DistanceReticles.ReticleDataMesh

// Oculus.Interaction.DistanceReticles.ReticleDataMesh

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport
struct ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields
{
	// System.Int32 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::_highlightShaderID
	int32_t ____highlightShaderID_6;
};

// Oculus.Interaction.DistanceReticles.ReticleDataTeleport

// Oculus.Interaction.Body.SkeletonDebugGizmos

// Oculus.Interaction.Body.SkeletonDebugGizmos

// Oculus.Interaction.TubeRenderer
struct TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_StaticFields
{
	// System.Int32 Oculus.Interaction.TubeRenderer::_fadeLimitsShaderID
	int32_t ____fadeLimitsShaderID_27;
	// System.Int32 Oculus.Interaction.TubeRenderer::_fadeSignShaderID
	int32_t ____fadeSignShaderID_28;
	// System.Int32 Oculus.Interaction.TubeRenderer::_offsetFactorShaderPropertyID
	int32_t ____offsetFactorShaderPropertyID_29;
	// System.Int32 Oculus.Interaction.TubeRenderer::_offsetUnitsShaderPropertyID
	int32_t ____offsetUnitsShaderPropertyID_30;
};

// Oculus.Interaction.TubeRenderer

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_StaticFields
{
	// TData Oculus.Interaction.Input.DataModifier`1::<InvalidAsset>k__BackingField
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___U3CInvalidAssetU3Ek__BackingField_14;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>

// Oculus.Interaction.Body.BodyDebugGizmos

// Oculus.Interaction.Body.BodyDebugGizmos

// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos

// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual

// Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer

// Oculus.Interaction.DistanceReticles.ReticleGhostDrawer

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer

// Oculus.Interaction.DistanceReticles.ReticleIconDrawer

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer

// Oculus.Interaction.DistanceReticles.ReticleMeshDrawer

// Oculus.Interaction.Locomotion.TeleportInteractable

// Oculus.Interaction.Locomotion.TeleportInteractable

// Oculus.Interaction.Locomotion.TeleportInteractor

// Oculus.Interaction.Locomotion.TeleportInteractor

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
struct TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields
{
	// System.Int32 Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_progressKey
	int32_t ____progressKey_16;
	// System.Int32 Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::_highlightKey
	int32_t ____highlightKey_17;
};

// Oculus.Interaction.DistanceReticles.TeleportReticleDrawer

// Oculus.Interaction.Body.Input.Body

// Oculus.Interaction.Body.Input.Body

// Oculus.Interaction.Input.SyntheticHand

// Oculus.Interaction.Input.SyntheticHand
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.TubePoint[]
struct TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54  : public RuntimeArray
{
	ALIGN_FIELD (8) TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B m_Items[1];

	inline TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
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
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData[]
struct JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157  : public RuntimeArray
{
	ALIGN_FIELD (8) JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE m_Items[1];

	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE value)
	{
		m_Items[index] = value;
	}
};


// System.Void Oculus.Interaction.AssertUtils::AssertField<System.Object>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD_gshared (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<System.Object>::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared (InteractorReticle_1_t37B0159A1CB3BE96C9D9C5DFD189AF9EA91742D5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_Interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m22FE567DBD77800285853031169093F3A31871CA_gshared (Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE* __this, RuntimeObject* ___0_key, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6D1FF7874DF003A3F770CC7592B6C6B802D58DF3_gshared (Dictionary_2_tC6367CB5CEDF19170086F40258B50E768945D6AE* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m2F15233A7A19B52616B7E5602933D6D54804A8C8_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_gshared (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m4F8BBB0C65C72E41F10A7F83E2963B71A631153C_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_gshared (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared (EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.DataSource`1<System.Object>::get_Started()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared (DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<UnityEngine.LineRenderer>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m0A0CF5E5718FB058A8B0579B7C05D884DDEE1101 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_NumLinePoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_positions, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectLineRenderer(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___0_lineRenderer, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_baseStart, const RuntimeMethod* method) ;
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_DistanceInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.IDistanceInteractor>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_m93E27A6B4CDBCCC26F7E5BFCDB40806E08D654C6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_monoBehaviour, bool* ___1_started, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::get_NewState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::get_PreviousState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::UpdateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Oculus.Interaction.DistanceReticles.IReticleData>(T&)
inline bool Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::set_Target(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_VisualOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::TargetHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::EvaluateBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_middle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_end, float ___3_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<UnityEngine.Material>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m1F07C2E9CE25619E86E86F609FAF98FFBD2B5CE9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.PolylineRenderer::.ctor(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer__ctor_mC22B73C3821A6BE58B733254BCA060BB41613C3F (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, bool ___1_renderSinglePass, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_gshared)(__this, ___0_collection, method);
}
// System.Void Oculus.Interaction.PolylineRenderer::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_Cleanup_m5A0AE8900DF293D647FEBEE4BBA559C64707332C (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void Oculus.Interaction.PolylineRenderer::SetLines(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_SetLines_m81F6012D448FE616DD7A2EDE10F257D90D9AD4E4 (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___0_positions, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PolylineRenderer::RenderLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineRenderer_RenderLines_m743CB16DDA07120C3731568D6D6C27D183928858 (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.TubeRenderer>(T)
inline void Assert_IsNotNull_TisTubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_m5E413DC982FAF3AFDF6EA1FDA92706BB9B530FF2 (TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::InitializeArcPoints(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_InitializeArcPoints_m5D27F8C66078FDDA76F1C235D38E718A3C3348B8 (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.TubeRenderer::RenderTube(Oculus.Interaction.TubePoint[],UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeRenderer_RenderTube_m32CD9435FBC62614E20BB3B43D66994132038F90 (TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* __this, TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* ___0_points, int32_t ___1_space, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.TubeRenderer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeRenderer_Hide_mED2DB12E1FA98AA29FC68FD2760AABE326A54DF7 (TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabInteractor_mA69FA1C38D2310DE285FC507EA040361C94BADB2_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.HandGrab.IHandGrabInteractor>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.IInteractorView>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.IHandVisual>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_m5BF72C457D16CD65FA3A37E6FA07CDF67CD4FE20 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.Input.SyntheticHand>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisSyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185_mC4003AC21FC15D1EB058C0ECCF71AD364506B998 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::GetData()
inline HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0 (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E* __this, const RuntimeMethod* method)
{
	return ((  HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* (*) (DataSource_1_t52417BE3B8B9F715907C38CA4A3396D702F6CE1E*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// Oculus.Interaction.Input.ITrackingToWorldTransformer Oculus.Interaction.Input.HandDataSourceConfig::get_TrackingToWorldTransformer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateFingers(Oculus.Interaction.HandGrab.HandPose,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___0_handPose, int32_t ___1_grabbingFingers, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabStateExtensions::GetVisualWristPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabStateExtensions_GetVisualWristPose_mEE84522B1FCB6F1A7F98E0312172104177522A67 (RuntimeObject* ___0_grabState, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::LockWristPose(UnityEngine.Pose,System.Single,Oculus.Interaction.Input.SyntheticHand/WristLockMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_wristPose, float ___1_overrideFactor, int32_t ___2_lockMode, bool ___3_worldPose, bool ___4_skipAnimation, const RuntimeMethod* method) ;
// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::OverrideAllJoints(UnityEngine.Quaternion[]&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___0_jointRotations, float ___1_overrideFactor, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::SetFingerFreedom(Oculus.Interaction.Input.HandFinger&,Oculus.Interaction.Input.JointFreedom&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t* ___0_finger, int32_t* ___1_freedomLevel, bool ___2_skipAnimation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeAllJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.SyntheticHand::FreeWrist(Oculus.Interaction.Input.SyntheticHand/WristLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6 (SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* __this, int32_t ___0_lockMode, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateHandPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_snapper, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectHandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectHandGrabInteractor_mE37D2AC6BD3E10C5932AF982BE8F92658451F0DB (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabInteractor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___0_syntheticHand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectVisualHand(Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_visualHand, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::.ctor()
inline void InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15 (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::Start()
inline void InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DistanceInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<UnityEngine.MeshRenderer>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<UnityEngine.Transform>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_CustomIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::GetTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldUp, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectCenterEye(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_centerEye, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::.ctor()
inline void InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::Start()
inline void InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabInteractor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabInteractor_m3E52DBF61DC1F42AE0C64CA7DEE0892D5F3B546E_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<UnityEngine.MeshFilter>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m39B628B92CCECA4257E6F831ED3754FDC23CB318 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabStateExtensions::GetTargetGrabPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabStateExtensions_GetTargetGrabPose_mF12A7A375A0F401F49EDE3E7043D7D7537CFFC03 (RuntimeObject* ___0_grabState, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::DestinationPose(Oculus.Interaction.DistanceReticles.ReticleDataMesh,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_worldSnapPose, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GetPose(UnityEngine.Transform,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, int32_t ___1_space, const RuntimeMethod* method) ;
// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.PoseTravelData::CreateTween(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9 (PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_from, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_to, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_target, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Tween::get_Pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::SetPose(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_SetPose_mAB343468EF0D5639215AD8F6898AD967B4A3DACA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, int32_t ___2_space, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::Delta(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_Delta_m62647EFB71E1076B0C44E3DBDE54782CDB4BA5E2 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_from, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_to, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.IHand Oculus.Interaction.GrabAPI.HandGrabAPI::get_Hand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Premultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_b, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectHandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectHandGrabInteractor_m1397D8F78F28A0CBBD8B442C4CED81B3924DAD42 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabInteractor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_filter, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_FAST()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_FAST_m0DFF02E35A779923D4E92166F75B38D453D916CA (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::.ctor()
inline void InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::Start()
inline void InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328 (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// UnityEngine.MaterialPropertyBlock Oculus.Interaction.MaterialPropertyBlockEditor::get_MaterialPropertyBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* MaterialPropertyBlockEditor_get_MaterialPropertyBlock_m67C165BCF951950D39C6DE3C53B36B66D624099A (MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MaterialPropertyBlockEditor::UpdateMaterialPropertyBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlockEditor_UpdateMaterialPropertyBlock_m16BF677358204F9ACE56AD982582F364D3249293 (MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.Locomotion.TeleportInteractor,Oculus.Interaction.Locomotion.TeleportInteractable>::get_Interactable()
inline TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_inline (Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E* __this, const RuntimeMethod* method)
{
	return ((  TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* (*) (Interactor_2_t24AEED90E2BF69D7D176B7C85B3A37C980E7884E*, const RuntimeMethod*))Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.Locomotion.TeleportInteractor>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisTeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC_mA995BDF4AAF96495E27083E136D1FB1213F7F724 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, bool ___0_highlight, const RuntimeMethod* method) ;
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::get_ReticleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Locomotion.TeleportHit Oculus.Interaction.Locomotion.TeleportInteractor::get_ArcEnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Locomotion.TeleportHit::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TeleportHit_get_Point_mA410290D272135B53FDB860D1DF4195CF18411D0 (TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Oculus.Interaction.Locomotion.TeleportHit::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TeleportHit_get_Normal_m80A0655F5E20349258BB9D1BF067A2CE5A9C6977 (TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::UpdateReticle(Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_UpdateReticle_m96090743FFD0426AD3D0C59A5843392B21825435 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, int32_t ___0_reticleMode, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleProgress(UnityEngine.Renderer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, float ___1_progress, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleHighlight(UnityEngine.Renderer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, bool ___1_highlight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectInteractor(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::.ctor()
inline void InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852 (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1__ctor_mC30F35E176FC8B9D1A513EFD4C5DC82A8265A440_gshared)(__this, method);
}
// System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::Start()
inline void InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*, const RuntimeMethod*))InteractorReticle_1_Start_m4187C4E4B8B5BA4082E36972308F58053AC55E73_gshared)(__this, method);
}
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.Body.Input.IBody>(T)
inline void Assert_IsNotNull_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m3E4857EDF6B3C380AC4FDC19D0248B359C38A653 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::get_Visibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::get_HasNegativeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::get_Space()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::Dispose()
inline void Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::get_Current()
inline int32_t Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline)(__this, method);
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.BodyDebugGizmos::GetModifiedDrawFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::Draw(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___0_joint, int32_t ___1_visibility, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::MoveNext()
inline bool Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8 (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawAxis(UnityEngine.Pose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawAxis_mBCE8CB48E9F55E334D165E527BBD45BBFE3AF44F (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_pose, float ___1_size, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawPoint(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawPoint_mE1FA1C94418F3625481A947DCCD48019D84370E7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_t, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.DebugGizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugGizmos_DrawLine_m8E20870427C2144F9AFCD6514B7056D3826EA72A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.Body.PoseDetection.IBodyPose>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::GetEnumerator()
inline Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6 (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::Dispose()
inline void Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287 (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::get_Current()
inline JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_inline (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	return ((  JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::GetJointDelta(Oculus.Interaction.Body.Input.BodyJointId,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, int32_t ___0_joint, float* ___1_delta, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0 (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* __this, float ___0_delta, float ___1_maxDelta, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* __this, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___0_key, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*, BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B, const RuntimeMethod*))Dictionary_2_set_Item_m22FE567DBD77800285853031169093F3A31871CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::MoveNext()
inline bool Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97 (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseA(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_poseA, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseB(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_poseB, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectJoints(System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_configs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::.ctor()
inline void List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924 (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5 (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>::Add(T)
inline void List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_inline (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* __this, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*, JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::.ctor()
inline void Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94 (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*, const RuntimeMethod*))Dictionary_2__ctor_m6D1FF7874DF003A3F770CC7592B6C6B802D58DF3_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisBodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792_m3AC57501753669BB5785133ABBC5ED5ECE73982E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_FeatureStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Key()
inline JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_inline (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5* __this, const RuntimeMethod* method)
{
	return ((  JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* (*) (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>::get_Value()
inline BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_inline (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5* __this, const RuntimeMethod* method)
{
	return ((  BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B (*) (KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5*, const RuntimeMethod*))KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___0_bodyPoseComparer, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectRootTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*))Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Clear()
inline void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::Add(T)
inline void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE, const RuntimeMethod*))List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline)(__this, ___0_item, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::Clear()
inline void Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Clear()
inline void HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1 (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC*, const RuntimeMethod*))HashSet_1_Clear_m2F15233A7A19B52616B7E5602933D6D54804A8C8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::Clear()
inline void Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9 (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, const RuntimeMethod*))Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Item(System.Int32)
inline JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2 (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, int32_t, const RuntimeMethod*))List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___0_key, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Add(T)
inline bool HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC*, int32_t, const RuntimeMethod*))HashSet_1_Add_m4F8BBB0C65C72E41F10A7F83E2963B71A631153C_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::get_Count()
inline int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData>::.ctor()
inline void List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8 (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, const RuntimeMethod*))List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::.ctor()
inline void Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13 (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*, const RuntimeMethod*))EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, const RuntimeMethod*))Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsNotNull<Oculus.Interaction.Body.PoseDetection.IBodyPose>(T)
inline void Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_mFA75318800124DED2E924476F16DD129394A20AC_gshared)(___0_value, method);
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.AssertUtils::AssertField<Oculus.Interaction.Body.Input.IBody>(UnityEngine.Component,TValue,System.String,System.String,System.String,System.String)
inline void AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, RuntimeObject* ___1_value, String_t* ___2_variableName, String_t* ___3_whyItFailed, String_t* ___4_whereItFailed, String_t* ___5_howToFix, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*))AssertUtils_AssertField_TisRuntimeObject_mFD68223C6661A4D9B342BF740B249B628A3ECE8F_gshared)(___0_component, ___1_value, ___2_variableName, ___3_whyItFailed, ___4_whereItFailed, ___5_howToFix, method);
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::GetData()
inline BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, int32_t ___1_dataVersion, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_trackingSpace, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::MarkInputDataRequiresUpdate()
inline void DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_Started()
inline bool DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>::.ctor()
inline void DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873 (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67* __this, const RuntimeMethod* method)
{
	((  void (*) (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67*, const RuntimeMethod*))DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_poses, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Postmultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_a, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_b, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
inline PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline (const RuntimeMethod* method)
{
	return ((  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* (*) (const RuntimeMethod*))Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline)(method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Deprecated.FingerGrabAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerGrabAPI__ctor_m3B9926AE56338B82DD0CEE906301CED1C1378011 (FingerGrabAPI_t3C16A7EFBD664E8A8966BFD6632D4211B4A8584D* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.FingerPinchAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerPinchAPI__ctor_m37A59B06AA86CC5E8E5B044E0796A746341202EF (FingerPinchAPI_t262FF8BDF662BA6239445E197D50038A09ABCA04* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.HandPoseRecordable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseRecordable__ctor_mD6A2E43C42E976857781023B22A1BB6F146A363E (HandPoseRecordable_t14C8028E918A613DAC091C87FD53826267E5AA89* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.HandPoseRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseRecorder__ctor_m6696EA3046C50EE7444CBEDC2AF9E25B090B1D62 (HandPoseRecorder_tFFC867D177BB2A3F71AEC5602232A3442D969417* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.BezierSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BezierSurface__ctor_m048D89A381F5B675D8C88D5957DC6C873681E001 (BezierSurface_tCBD298F630129D1C146147850F4E670DC5E200ED* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.BoxSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxSurface__ctor_m90B9227473C7BFBC205D6E3DE330074F9444DAB6 (BoxSurface_tAAF1A0103B0506E445926EB97C69C0648361D53D* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.ColliderSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderSurface__ctor_m2F2825636693001759F7BA3382A97830F9175C54 (ColliderSurface_t4831BCC604F8CA661E3F8076486776DC3FC15B2E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.CylinderSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderSurface__ctor_m6D88824F529DC2B9FDD9A9CA5EFA3F494258C7F3 (CylinderSurface_t4860F7819DFDDFF5CF7889F02572BB0CA482FD51* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Deprecated.SphereSurface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereSurface__ctor_m9F1CB578BAE306C6D3660FEA8DCB28BFE1D90DBF (SphereSurface_t032CD76396C515685EB3641037F5A819E46D5012* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.HandGrabInteractorVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractorVisual__ctor_m179B6039C7D8F8B315EDAF19D512A7F0FB38CA50 (HandGrabInteractorVisual_t75BAEF131EADDBAC1FA18E210E448E2161B4AF5E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.DummyDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyDataModifier__ctor_mD9E07EA68F920761DA4B4B76BDB4F598FCE8D62D (DummyDataModifier_t9697A00B2EE833C729C15C325713BD3C053FDF1B* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.FixedScaleDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedScaleDataModifier__ctor_mE9BAF71E118CDAC357131DF2A837FF2E07A8322A (FixedScaleDataModifier_t0C4BC79CB314F63A3FE6F23EDD144DBA3C778B28* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.JointRotationHistoryModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationHistoryModifier__ctor_m74F9C578C4703F97E49007125BA6E882B50C55AD (JointRotationHistoryModifier_tC19F39663A0EB67C977C0403041E5F486DDC24A8* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.LastKnownGoodDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LastKnownGoodDataModifier__ctor_m2310F04F21D4AF648B31C45E5C6BB98BC5A5B0CA (LastKnownGoodDataModifier_t80A78C5ECFB38E898AC5CE2FE9B8F3DDD112922C* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterPositionDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterPositionDataModifier__ctor_m2AC97FD9FB1F6B5862ED1074B10F75DDDE955073 (OneEuroFilterPositionDataModifier_t5B3CB83D9A08142C0C38588D2E4DEE16FB0A37BC* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterPositionHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterPositionHand__ctor_mF2710B975774400A54AECB101F840E5FA810D4D9 (OneEuroFilterPositionHand_t1E88DED99F1BEF1043B5EB4431CA3CD0D9C277DC* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterRotationDataModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterRotationDataModifier__ctor_m8B7E4A57F5649BFE21C63F474A9923FCA69BB3CD (OneEuroFilterRotationDataModifier_tAD359702D9F84B8159042B94BE0E5AB29A97500E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneEuroFilterRotationHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneEuroFilterRotationHand__ctor_m9B416A49D00680DA3360A900FD229336937C3304 (OneEuroFilterRotationHand_t7DFF718617607C32DDAC6681A1BBB9FB8A295137* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.SyntheticHandModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyntheticHandModifier__ctor_mDBE3D14C2D21839B6DF01C8CA4681A2B033E8A17 (SyntheticHandModifier_t59CA9B8F4D363EA2846F84E1CF9B9D7FDE05F16F* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.JointLocking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointLocking__ctor_m2B510082FA2944D8DBDE242EF0D115AC95D3434D (JointLocking_t7E9BB5955E0CCE41E59BD886BED92798FC6B2038* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InputDataProviderUpdateTriggerOVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataProviderUpdateTriggerOVR__ctor_m2655F66F3FC3664BFB45470BE656BC1DCE5039D2 (InputDataProviderUpdateTriggerOVR_tE8D61AA195A58A2A96B55C036E2F36275370594B* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OVRSkeletonDataProviders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRSkeletonDataProviders__ctor_mFDF580393D609D879B30197FB760803E87DDB50B (OVRSkeletonDataProviders_t491B19DD085BF3AEB8AF66239194FD781FC26C8F* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractorDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorDriver__ctor_m4139C9EEAB2DC1418F9AF7F3336037029DF3A0D5 (InteractorDriver_tCF2F3AE5B7609992F3B720446004D41630BBD4C5* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractorDriverGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorDriverGroup__ctor_m59BF26B60E475175C5715ADA2BFEBF3E97A721D8 (InteractorDriverGroup_tCB165B2D74BDEBC387B9EA115373DCBA1DCF5106* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractorGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorGroup__ctor_mE5D303C32D4D39E354DED222A4E5780ADB3717BF (InteractorGroup_t6182B1516054FEC5C050AD1BF90AD545963139C0* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractorGroupMulti::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractorGroupMulti__ctor_mCBB39D87E4BC30A8FC6460EE7C42181A193A30F2 (InteractorGroupMulti_tBE62507CB3575781A999CF25FF727E201174ECA6* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.TagInteractableFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagInteractableFilter__ctor_m4345FEA73D07DAC5065F8ECBD339557F3576433A (TagInteractableFilter_tAD802DE1C9042EDFC3CF23C3E417C07E404BAAB7* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointableGrabbableConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableGrabbableConnection__ctor_mC73E8C7B5F691BD01328B0FA78128AAED563F63A (PointableGrabbableConnection_tB8AE282D8D737108197C155D0180D63E05AD9EDA* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.DropZoneInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropZoneInteractable__ctor_mF06BFA571356D58BD778E2C1972D62389111B2C5 (DropZoneInteractable_t92FD1C2B60E67DB2097732DFE98E8E069E3F9A0D* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.DropZoneInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropZoneInteractor__ctor_m90A035B3A7F2C1A9B5BDB2AC6E0C881A97B314C3 (DropZoneInteractor_t2BD9710EB716126AA66899B10B8080C0B8558B78* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.DropZoneSequentialSlotsProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DropZoneSequentialSlotsProvider__ctor_m69C4FBE80013C51158CA5B83CFC5592EB2E3D09A (DropZoneSequentialSlotsProvider_t6AFDE2C241DAD92CBF05FFE03D5FB904E66E730D* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.GrabPointsPoseFinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPointsPoseFinder__ctor_m75B6C56C11454689E43549C791FEA7AAC035E09B (GrabPointsPoseFinder_t225254CA171C154FF956737F8AEF81B08531B663* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.HandGrabInteractionUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabInteractionUtilities__ctor_mBC4A4695E6E253D5C87EF180FFEF6EDFC6045015 (HandGrabInteractionUtilities_t938018C797EBE51065FF75A77AECA109EA7E157E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.HandGrabPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPoint__ctor_mC195008F3103B5AA678E5ADFED8AC25CEB2953FD (HandGrabPoint_tB8D7EC4231DB7A46991B4A7B4FB63ACB6B2E0D53* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.SnapAddress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapAddress__ctor_m3B706DD99744A2493ACCE4AB55EC7AF911D2E10D (SnapAddress_t9D4550D9A0DC7D5E9E69904CA9A503176EC0360B* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.ArcRangeModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcRangeModifier__ctor_m496E65EF9072197B81F09DE388A35E88E941292A (ArcRangeModifier_t4B507B64122207F45555CFE042C57C979A6EA212* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PitchRemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PitchRemap__ctor_m15611E8A1D494D5FD61270EC43A19B92502DDD76 (PitchRemap_t9D3F30AF71B221A8CFD73B3392524C65F179CB23* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.TeleportTurningGate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportTurningGate__ctor_mA2CA096EFA40D65CB6C8DBB50067912A1B6F6FA9 (TeleportTurningGate_tD89A6C0565EBCD38C5A05C1734491E55AF275C1F* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayInteractorDebugPolylineGizmos__ctor_m08A8FA5FB3622D0C8A00EE9D0ABCF0AFC5D1B6E0 (RayInteractorDebugPolylineGizmos_t931C944C882AE1D37E0941BFACFD00BA7133F403* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableDebugPolylineGizmos__ctor_m594235DD2648776D55411715DF97B0FE9CEAA610 (PointableDebugPolylineGizmos_t2DE45A6E8897D347D67431E94F432F20343FA568* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointableGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableGroup__ctor_m7FF070A1D2B2422B416D276C191D144B9FDADD9E (PointableGroup_tEB6216FE5245F1F17C4C196C7C061C0A69660A06* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.BoxProximityField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxProximityField__ctor_mCD11DA8F37F57E757F27C3BC5DA8DDBECFBBF681 (BoxProximityField_t6049F8D60A08A6DA25F6D26842E898EA25F0EB69* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.CircleProximityField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleProximityField__ctor_m249E185598464E7DC128E122A49E968AB70B2CCF (CircleProximityField_t774D98A0B8ECF26B4A51209FDEF73BF36C94BF82* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.CylinderProximityField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CylinderProximityField__ctor_mF617BF079FA761530F857528DC183A560A5356C0 (CylinderProximityField_tA3730664ED55EFDFB8CBB740B2111B33D1467ED6* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointProximityField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointProximityField__ctor_m16BB08F2273920EDBAB99AE6C7FE31E4339867B0 (PointProximityField_tA7E0DB43739877B881970616387739F119338DAC* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointableCylinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableCylinder__ctor_mD7B373CC191566DB1767E60932F29142373D7904 (PointableCylinder_t0C622E2EC0209FE17B5AAEEDAF5E4514B285FE61* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PointablePlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointablePlane__ctor_mD7793C7CD5C15072761BA5E15E884CA2E52C33C1 (PointablePlane_tD38A2A22EBDDF1077C931746C84013F9AB8E73B8* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.GrabPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPoint__ctor_m595907CF5C5D3EF04D928B178363627E62C5E692 (GrabPoint_tF1744AF0289E825C7C63D10B1FA2BE545DDEE985* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractableTransformableConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableTransformableConnection__ctor_m6C8C3D619620AA67FD11B34C09F93E1713E4D1FA (InteractableTransformableConnection_tB872442B5A31F08BCB12A7270EAB415F82F7BA6E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneHandFreeTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandFreeTransformer__ctor_m874D76B537F24DC5DD00EC00C884623CD393040E (OneHandFreeTransformer_t571E099023652EED3F3C15D41409FC531ABB778B* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneHandPhysicsJointTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandPhysicsJointTransformer__ctor_m9DE77036FB7AD03F4D95CB702966FAB0BD1676BD (OneHandPhysicsJointTransformer_t4C159D48CF783C45378E718AA6F5DB6D7E47E6E3* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneHandRotateTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandRotateTransformer__ctor_m3A7B55E87E48FB73EC3C0BC439E37D4129519D63 (OneHandRotateTransformer_tEE2AC7B0C36D7211445C1A309688F4A4B367A988* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.OneHandTranslateTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneHandTranslateTransformer__ctor_mE4FAC9ACDBD337C9168EBCA2CE08D65485EDCD31 (OneHandTranslateTransformer_t64D5E9E2C0A42EE79C58F5929131FBBBEBD86C7F* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.SnapPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapPoint__ctor_mCA1B3E0216D382D49D1CF8E8B4726353ED68F5FD (SnapPoint_t61DC9883BEC8539C7C51CC7C98E5C28B4FEDF6E6* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.Transformable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformable__ctor_m94DFA9B2DA02F0377FA2833A577719BAEFD79BD4 (Transformable_tBBAF38A85C229EA188DB5F5A6A42008F3B672993* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.TwoHandFreeTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandFreeTransformer__ctor_mEB07358952A8BA6ACE7F63038072F8F06E7E7C3C (TwoHandFreeTransformer_tB5076772ECD47864807B3F53631E18DE1C77EB9E* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.TwoHandPlaneTransformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoHandPlaneTransformer__ctor_mBD8470876630FA91BE3C5363DEE6CB9C9D57F1E4 (TwoHandPlaneTransformer_t8DE5F7E27BBF9683D3A7E7754A1D6ABC8B91CB34* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PolylineGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolylineGizmos__ctor_m0394AE1D48B493931A4425B4B2C10173100B9C84 (PolylineGizmos_tF07843F74110BB21FAA28205531CA6536815A1C8* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.AimingStabilizedOrigin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AimingStabilizedOrigin__ctor_mC3E7E35A4898AB96655DA168F6EC091A99B89A1A (AimingStabilizedOrigin_t36A4477F06F712E3E8193FD8E7C692316D8F6B1B* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.CanvasMeshPointable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasMeshPointable__ctor_m5001831F2B2FAEB206405B7463300DA25D67C9D9 (CanvasMeshPointable_t92C4339B214CCD9D4096F3BA1AF24A80D198BEE9* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.InteractionOVRCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionOVRCameraRig__ctor_m3DE6A6CAE43B9EDA2706DB48CD78AB37D7504BA2 (InteractionOVRCameraRig_t894006BD25A6C50C219E97034AC474D54671558D* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.PhysicsTransformable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsTransformable__ctor_m77CB4E951916E7554F3E45EE9C14A19AD686D8AD (PhysicsTransformable_t387F108E92330DCE5547F4A316233A4FFF6B1926* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.TransformableUnityEventWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformableUnityEventWrapper__ctor_m7E6F876FACFC86CDF53E929DBBDBE30F7E803F7C (TransformableUnityEventWrapper_tF76B34B54AA37FD9322E031288288A7BDB5B5EE2* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.Deprecated.CanvasRenderTextureMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderTextureMesh__ctor_mE1BFE0DDFDB67040B7E1EE7047A860B7173182CC (CanvasRenderTextureMesh_t02A4F45338938B3338617EA269FDD869F236157F* __this, const RuntimeMethod* method) 
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
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_Start_m3D81B491EECD04C2BAAECCD0B204D0C72C06F310 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m0A0CF5E5718FB058A8B0579B7C05D884DDEE1101_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE49DCFADDD2A3FDDB759BF68AA1C4A83171683);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904(__this, NULL);
		// this.AssertField(_lineRenderer, nameof(_lineRenderer));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		AssertUtils_AssertField_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m0A0CF5E5718FB058A8B0579B7C05D884DDEE1101(__this, L_0, _stringLiteralCEE49DCFADDD2A3FDDB759BF68AA1C4A83171683, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m0A0CF5E5718FB058A8B0579B7C05D884DDEE1101_RuntimeMethod_var);
		// _lineRenderer.positionCount = NumLinePoints;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->____lineRenderer_15;
		int32_t L_2;
		L_2 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		NullCheck(L_1);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::RenderLine(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_RenderLine_mDC74C36A0E3221A4A99A418AB13C25E23F70307B (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	{
		// _lineRenderer.SetPositions(linePoints);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_linePoints;
		NullCheck(L_0);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_0, L_1, NULL);
		// _lineRenderer.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->____lineRenderer_15;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::HideLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_HideLine_mF52C2315DC5FDD832FF4D442EE8EAF30D59F8EB9 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	{
		// _lineRenderer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_15;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectAllDistantInteractionLineRendererVisual(Oculus.Interaction.IDistanceInteractor,UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectAllDistantInteractionLineRendererVisual_m2991E5512893595533732CADC30DAD4A61CDF15D (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, RuntimeObject* ___0_interactor, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_lineRenderer, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// InjectLineRenderer(lineRenderer);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = ___1_lineRenderer;
		DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::InjectLineRenderer(UnityEngine.LineRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual_InjectLineRenderer_m671C71B20F7DD8615B5C187A58174CC1C5E45FC5 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___0_lineRenderer, const RuntimeMethod* method) 
{
	{
		// _lineRenderer = lineRenderer;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___0_lineRenderer;
		__this->____lineRenderer_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineRenderer_15), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineRendererVisual__ctor_m7A6577D29A0C6F479C7B84353BCB29289AF43324 (DistantInteractionLineRendererVisual_tF97547EDBBB4BD294D3F59525CF78C074399434D* __this, const RuntimeMethod* method) 
{
	{
		DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21(__this, NULL);
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
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_DistanceInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_VisualOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return _visualOffset;
		float L_0 = __this->____visualOffset_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::set_VisualOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_VisualOffset_mC741B05A63768BE52F14C2BC0D4E94F7CE88609F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _visualOffset = value;
		float L_0 = ___0_value;
		__this->____visualOffset_6 = L_0;
		// }
		return;
	}
}
// System.Int32 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_NumLinePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected int NumLinePoints => _numLinePoints;
		int32_t L_0 = __this->____numLinePoints_10;
		return L_0;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::get_TargetlessLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionLineVisual_get_TargetlessLength_mFED24CC0F8F529D4CC90916E69BACBD91448F275 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected float TargetlessLength => _targetlessLength;
		float L_0 = __this->____targetlessLength_11;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Awake_mBDE0F4D97FC003C5D6DF4DBF28D910FDE8389E84 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DistanceInteractor = _distanceInteractor as IDistanceInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____distanceInteractor_4;
		DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_m93E27A6B4CDBCCC26F7E5BFCDB40806E08D654C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BD9EED74CE4E82199736EB874A98184453B294);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_12);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.AssertField(DistanceInteractor, nameof(DistanceInteractor));
		RuntimeObject* L_1;
		L_1 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		AssertUtils_AssertField_TisIDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_m93E27A6B4CDBCCC26F7E5BFCDB40806E08D654C6(__this, L_1, _stringLiteral85BD9EED74CE4E82199736EB874A98184453B294, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_m93E27A6B4CDBCCC26F7E5BFCDB40806E08D654C6_RuntimeMethod_var);
		// _linePoints = new Vector3[NumLinePoints];
		int32_t L_2;
		L_2 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____linePoints_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____linePoints_7), (void*)L_3);
		// this.EndStart(ref _started);
		bool* L_4 = (&__this->____started_12);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_OnEnable_m901AE8F6BEA4E63350D24ED9352B9C05F4208BA5 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// DistanceInteractor.WhenStateChanged += HandleStateChanged;
		RuntimeObject* L_2;
		L_2 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* L_3 = (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*)il2cpp_codegen_object_new(Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD(L_3, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* >::Invoke(7 /* System.Void Oculus.Interaction.IInteractorView::add_WhenStateChanged(System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_2, L_3);
		// DistanceInteractor.WhenPostprocessed += HandlePostProcessed;
		RuntimeObject* L_4;
		L_4 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(13 /* System.Void Oculus.Interaction.IInteractorView::add_WhenPostprocessed(System.Action) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_OnDisable_mAE1EB8A99216B601DA1CD95DD775198878FA8653 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_12;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// DistanceInteractor.WhenStateChanged -= HandleStateChanged;
		RuntimeObject* L_2;
		L_2 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* L_3 = (Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513*)il2cpp_codegen_object_new(Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m28A0E488D3F39E2E22114536194A30F2B19721BD(L_3, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* >::Invoke(8 /* System.Void Oculus.Interaction.IInteractorView::remove_WhenStateChanged(System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_2, L_3);
		// DistanceInteractor.WhenPostprocessed -= HandlePostProcessed;
		RuntimeObject* L_4;
		L_4 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(14 /* System.Void Oculus.Interaction.IInteractorView::remove_WhenPostprocessed(System.Action) */, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::HandleStateChanged(Oculus.Interaction.InteractorStateChangeArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_HandleStateChanged_m964A6B366EF23C69878F59F99B9209C90A6B70B3 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78 ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B14_0 = 0;
	{
		// switch (args.NewState)
		int32_t L_0;
		L_0 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0056;
	}

IL_0016:
	{
		// if (args.PreviousState != InteractorState.Disabled)
		int32_t L_4;
		L_4 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// InteractableUnset();
		VirtualActionInvoker0::Invoke(8 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableUnset() */, __this);
	}

IL_0030:
	{
		// break;
		goto IL_0056;
	}

IL_0032:
	{
		// if (args.PreviousState == InteractorState.Normal)
		int32_t L_6;
		L_6 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// InteractableSet(DistanceInteractor.DistanceInteractable);
		RuntimeObject* L_8;
		L_8 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.IRelativeToRef Oculus.Interaction.IDistanceInteractor::get_DistanceInteractable() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_8);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableSet(Oculus.Interaction.IRelativeToRef) */, __this, L_9);
	}

IL_0054:
	{
		// break;
		goto IL_0056;
	}

IL_0056:
	{
		// if (args.NewState == InteractorState.Select
		//     || args.NewState == InteractorState.Disabled
		//     || args.PreviousState == InteractorState.Disabled)
		int32_t L_10;
		L_10 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_11;
		L_11 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_12;
		L_12 = InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline((&___0_args), NULL);
		G_B14_0 = ((((int32_t)L_12) == ((int32_t)3))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B14_0 = 1;
	}

IL_0077:
	{
		V_4 = (bool)G_B14_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// _shouldDrawLine = false;
		__this->____shouldDrawLine_13 = (bool)0;
		goto IL_00c1;
	}

IL_0088:
	{
		// else if (args.NewState == InteractorState.Hover)
		int32_t L_14;
		L_14 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		// _shouldDrawLine = true;
		__this->____shouldDrawLine_13 = (bool)1;
		goto IL_00c1;
	}

IL_00a3:
	{
		// else if (args.NewState == InteractorState.Normal)
		int32_t L_16;
		L_16 = InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline((&___0_args), NULL);
		V_6 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_00c1;
		}
	}
	{
		// _shouldDrawLine = _visibleDuringNormal;
		bool L_18 = __this->____visibleDuringNormal_8;
		__this->____shouldDrawLine_13 = L_18;
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::HandlePostProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_HandlePostProcessed_mC96E1A259CF69D4203E9BFD648094C5BD4F29E1F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_shouldDrawLine)
		bool L_0 = __this->____shouldDrawLine_13;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// UpdateLine();
		DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78(__this, NULL);
		goto IL_001f;
	}

IL_0016:
	{
		// HideLine();
		VirtualActionInvoker0::Invoke(10 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::HideLine() */, __this);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableSet(Oculus.Interaction.IRelativeToRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableSet_m99688CB11A1A7993613DB80D70781A2151551F71 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Component component = interactable as Component;
		RuntimeObject* L_0 = ___0_interactable;
		V_0 = ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_0, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
		// if (component == null)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// _target = null;
		__this->____target_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)(RuntimeObject*)NULL);
		// return;
		goto IL_0050;
	}

IL_001d:
	{
		// if (!component.TryGetComponent(out _target))
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = V_0;
		RuntimeObject** L_5 = (&__this->____target_9);
		NullCheck(L_4);
		bool L_6;
		L_6 = Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6(L_4, L_5, Component_TryGetComponent_TisIReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_mD1A571406DCFE1212E9417BC2C3EBBC9DD8E6DF6_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// _dummyTarget.Target = interactable.RelativeTo;
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_8 = __this->____dummyTarget_14;
		RuntimeObject* L_9 = ___0_interactable;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform Oculus.Interaction.IRelativeToRef::get_RelativeTo() */, IRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline(L_8, L_10, NULL);
		// _target = _dummyTarget;
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_11 = __this->____dummyTarget_14;
		__this->____target_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)L_11);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InteractableUnset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InteractableUnset_m3E91C521F531376D15BE0CA9F72A242FD8CFF30F (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// _target = null;
		__this->____target_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_9), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::UpdateLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_UpdateLine_m16134EB5F2305E2006C4A53D19A5B0C8165C6E78 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// Vector3 direction = DistanceInteractor.Origin.forward;
		RuntimeObject* L_0;
		L_0 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_0);
		V_5 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_5), NULL);
		V_0 = L_2;
		// Vector3 origin = DistanceInteractor.Origin.position;
		RuntimeObject* L_3;
		L_3 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		V_1 = L_5;
		// Vector3 start = origin + direction * VisualOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8;
		L_8 = DistantInteractionLineVisual_get_VisualOffset_mBF3E078EFED8B6A73276A85B7757F8B1F33D116A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		V_2 = L_10;
		// Vector3 end = TargetHit(DistanceInteractor.HitPoint);
		RuntimeObject* L_11;
		L_11 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 Oculus.Interaction.IDistanceInteractor::get_HitPoint() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868(__this, L_12, NULL);
		V_3 = L_13;
		// Vector3 middle = start + direction * Vector3.Distance(start, end) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_20, NULL);
		V_4 = L_21;
		// for (int i = 0; i < NumLinePoints; i++)
		V_6 = 0;
		goto IL_00a7;
	}

IL_0070:
	{
		// float t = i / (NumLinePoints - 1f);
		int32_t L_22 = V_6;
		int32_t L_23;
		L_23 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		V_7 = ((float)(((float)L_22)/((float)il2cpp_codegen_subtract(((float)L_23), (1.0f)))));
		// Vector3 point = EvaluateBezier(start, middle, end, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		float L_27 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B(L_24, L_25, L_26, L_27, NULL);
		V_8 = L_28;
		// _linePoints[i] = point;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = __this->____linePoints_7;
		int32_t L_30 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_8;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// for (int i = 0; i < NumLinePoints; i++)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a7:
	{
		// for (int i = 0; i < NumLinePoints; i++)
		int32_t L_33 = V_6;
		int32_t L_34;
		L_34 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		V_9 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_9;
		if (L_35)
		{
			goto IL_0070;
		}
	}
	{
		// RenderLine(_linePoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = __this->____linePoints_7;
		VirtualActionInvoker1< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(9 /* System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::RenderLine(UnityEngine.Vector3[]) */, __this, L_36);
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::TargetHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_TargetHit_mCD88F8B136DA7856020262D52603821A8AA34868 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_target != null)
		RuntimeObject* L_0 = __this->____target_9;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return _target.ProcessHitPoint(hitPoint);
		RuntimeObject* L_2 = __this->____target_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_hitPoint;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.IReticleData::ProcessHitPoint(UnityEngine.Vector3) */, IReticleData_tF511047D2E4C2D5C9ACF2A4EF732C170756A6C18_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_0054;
	}

IL_001e:
	{
		// return DistanceInteractor.Origin.position
		//     + DistanceInteractor.Origin.forward * _targetlessLength;
		RuntimeObject* L_5;
		L_5 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		RuntimeObject* L_8;
		L_8 = DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline(__this, NULL);
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(0 /* UnityEngine.Pose Oculus.Interaction.IDistanceInteractor::get_Origin() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_2), NULL);
		float L_11 = __this->____targetlessLength_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_12, NULL);
		V_1 = L_13;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::EvaluateBezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DistantInteractionLineVisual_EvaluateBezier_m8997CD36EB386CFFF676B1C929BC8F99DBE6B37B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_middle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_end, float ___3_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___3_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___3_t = L_1;
		// float oneMinusT = 1f - t;
		float L_2 = ___3_t;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return (oneMinusT * oneMinusT * start)
		//     + (2f * oneMinusT * t * middle)
		//     + (t * t * end);
		float L_3 = V_0;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, NULL);
		float L_7 = V_0;
		float L_8 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_middle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_7)), L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		float L_12 = ___3_t;
		float L_13 = ___3_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___2_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_12, L_13)), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_15, NULL);
		V_1 = L_16;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		return L_17;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectAllDistantInteractionLineVisual_m90C95202D4175BBA1A25938E0799789DFB2DCB33 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _distanceInteractor = interactor as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_interactor;
		__this->____distanceInteractor_4 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceInteractor_4), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// DistanceInteractor = interactor;
		RuntimeObject* L_1 = ___0_interactor;
		DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21 (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _visualOffset = 0.07f;
		__this->____visualOffset_6 = (0.0700000003f);
		// private int _numLinePoints = 20;
		__this->____numLinePoints_10 = ((int32_t)20);
		// private float _targetlessLength = 0.5f;
		__this->____targetlessLength_11 = (0.5f);
		// private DummyPointReticle _dummyTarget = new DummyPointReticle();
		DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* L_0 = (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761*)il2cpp_codegen_object_new(DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D(L_0, NULL);
		__this->____dummyTarget_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dummyTarget_14), (void*)L_0);
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
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTargetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::set_Target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9 (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DummyPointReticle_ProcessHitPoint_m2CFB800CCDDA79A12BCB9A77134AF3326303D88D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyPointReticle__ctor_m1EC65D8B9BA15A0DD79DD955D69366BE020D176D (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
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
// UnityEngine.Color Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DistantInteractionPolylineVisual_get_Color_mFF371058EC483CDAD3F1C716E13B2AD2FA4F8EC7 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____color_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_set_Color_m2A0A26E243C0222C490CD6D0344B8A9AE5B40155 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// _color = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____color_15 = L_0;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DistantInteractionPolylineVisual_get_LineWidth_m2B4CA20285D0D9908A6A940BD250E795957BEE67 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return _lineWidth;
		float L_0 = __this->____lineWidth_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::set_LineWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_set_LineWidth_m14AB8F96336AEED2E9A5A6984358CC810752042A (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _lineWidth = value;
		float L_0 = ___0_value;
		__this->____lineWidth_16 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_Start_m881FCC12AD55E68BD89DBAEF73BB0B748CEA2799 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m1F07C2E9CE25619E86E86F609FAF98FFBD2B5CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF409004AEC13091E4CA9359D39D6D2502CBB92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904(__this, NULL);
		// this.AssertField(_lineMaterial, nameof(_lineMaterial));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____lineMaterial_18;
		AssertUtils_AssertField_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m1F07C2E9CE25619E86E86F609FAF98FFBD2B5CE9(__this, L_0, _stringLiteralDDF409004AEC13091E4CA9359D39D6D2502CBB92, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m1F07C2E9CE25619E86E86F609FAF98FFBD2B5CE9_RuntimeMethod_var);
		// _polylineRenderer = new PolylineRenderer(_lineMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->____lineMaterial_18;
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_2 = (PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0*)il2cpp_codegen_object_new(PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PolylineRenderer__ctor_mC22B73C3821A6BE58B733254BCA060BB41613C3F(L_2, L_1, (bool)1, NULL);
		__this->____polylineRenderer_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____polylineRenderer_19), (void*)L_2);
		// _linePointsVec4 = new List<Vector4>(new Vector4[NumLinePoints]);
		int32_t L_3;
		L_3 = DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline(__this, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_3);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_5 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C(L_5, (RuntimeObject*)L_4, List_1__ctor_mD9791AC84BFDD1E95ED483EF04752D321D7B3D5C_RuntimeMethod_var);
		__this->____linePointsVec4_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____linePointsVec4_17), (void*)L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_OnDestroy_m5DE914F67E7805E1960944AF3419B8FB2CA30BAF (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// _polylineRenderer.Cleanup();
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_0 = __this->____polylineRenderer_19;
		NullCheck(L_0);
		PolylineRenderer_Cleanup_m5A0AE8900DF293D647FEBEE4BBA559C64707332C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::RenderLine(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_RenderLine_mD5EAAAA2A799D207B0D1E01F7E7C6786071D6F98 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// for (int i = 0; i < linePoints.Length; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0005:
	{
		// Vector3 p = linePoints[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_linePoints;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// _linePointsVec4[i] = new Vector4(p.x, p.y, p.z, _lineWidth);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = __this->____linePointsVec4_17;
		int32_t L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		float L_9 = L_8.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___z_4;
		float L_12 = __this->____lineWidth_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F(L_4, L_5, L_13, List_1_set_Item_m9CE045A3C18BAFF826CE4686A0F2D3D00930416F_RuntimeMethod_var);
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_15 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = ___0_linePoints;
		NullCheck(L_16);
		V_2 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0005;
		}
	}
	{
		// _polylineRenderer.SetLines(_linePointsVec4, _color);
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_18 = __this->____polylineRenderer_19;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_19 = __this->____linePointsVec4_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->____color_15;
		NullCheck(L_18);
		PolylineRenderer_SetLines_m81F6012D448FE616DD7A2EDE10F257D90D9AD4E4(L_18, L_19, L_20, NULL);
		// _polylineRenderer.RenderLines();
		PolylineRenderer_t5066749B173A1D4472C6D172B7199B4DCBD01CB0* L_21 = __this->____polylineRenderer_19;
		NullCheck(L_21);
		PolylineRenderer_RenderLines_m743CB16DDA07120C3731568D6D6C27D183928858(L_21, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::HideLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_HideLine_m9627A7A656B44E07E80C25D5A65FEC056E8FB04E (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectAllDistantInteractionPolylineVisual(Oculus.Interaction.IDistanceInteractor,UnityEngine.Color,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectAllDistantInteractionPolylineVisual_m061DFD363B674B375C7F7B7403F53124F61D1EDD (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, RuntimeObject* ___0_interactor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// InjectLineColor(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D(__this, L_1, NULL);
		// InjectLineMaterial(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___2_material;
		DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineColor_m53A03623A7D068ACA507FA36A4BC50CB0A81050D (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// _color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		__this->____color_15 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::InjectLineMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual_InjectLineMaterial_mB7CD79080639E9773D27848AD0DB24021415A731 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, const RuntimeMethod* method) 
{
	{
		// _lineMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_material;
		__this->____lineMaterial_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineMaterial_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionPolylineVisual__ctor_m0FAC1C98BA7631A414CCD2A7EBEAA61E02D76E14 (DistantInteractionPolylineVisual_t2291BAA19519BA2FCCE862EFAE55E2EA31D39487* __this, const RuntimeMethod* method) 
{
	{
		// private Color _color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____color_15 = L_0;
		// private float _lineWidth = 0.02f;
		__this->____lineWidth_16 = (0.0199999996f);
		DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21(__this, NULL);
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
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_Start_mE1CFC347DCCA857B71165E27E9F3D9293CD88546 (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisTubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_m5E413DC982FAF3AFDF6EA1FDA92706BB9B530FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		DistantInteractionLineVisual_Start_mE509A606D013330CCA27D2F429DEB44B4F6E0904(__this, NULL);
		// Assert.IsNotNull(_tubeRenderer);
		TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* L_0 = __this->____tubeRenderer_15;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisTubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_m5E413DC982FAF3AFDF6EA1FDA92706BB9B530FF2(L_0, Assert_IsNotNull_TisTubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362_m5E413DC982FAF3AFDF6EA1FDA92706BB9B530FF2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::RenderLine(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_RenderLine_m914442E1EE4C88E46416F83C480983ED80B6DC5E (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	{
		// InitializeArcPoints(linePoints);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___0_linePoints;
		DistantInteractionTubeVisual_InitializeArcPoints_m5D27F8C66078FDDA76F1C235D38E718A3C3348B8(__this, L_0, NULL);
		// _tubeRenderer.RenderTube(_tubePoints, Space.World);
		TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* L_1 = __this->____tubeRenderer_15;
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_2 = __this->____tubePoints_16;
		NullCheck(L_1);
		TubeRenderer_RenderTube_m32CD9435FBC62614E20BB3B43D66994132038F90(L_1, L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::HideLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_HideLine_m0B6DCE40DE93FE4DC9F2AA9C85467F179BD21C31 (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, const RuntimeMethod* method) 
{
	{
		// _tubeRenderer.Hide();
		TubeRenderer_t8ECAC5265D79682F4C5489928DA33D4F089A6362* L_0 = __this->____tubeRenderer_15;
		NullCheck(L_0);
		TubeRenderer_Hide_mED2DB12E1FA98AA29FC68FD2760AABE326A54DF7(L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::InitializeArcPoints(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_InitializeArcPoints_m5D27F8C66078FDDA76F1C235D38E718A3C3348B8 (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_linePoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B* G_B14_0 = NULL;
	TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B* G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	TubePoint_t0763BD8380C0EB98C229BA646C7116006FE0C33B* G_B15_1 = NULL;
	{
		// if (_tubePoints == null
		//     || _tubePoints.Length < linePoints.Length)
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_0 = __this->____tubePoints_16;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_1 = __this->____tubePoints_16;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___0_linePoints;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// _tubePoints = new TubePoint[linePoints.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_linePoints;
		NullCheck(L_4);
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_5 = (TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54*)(TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54*)SZArrayNew(TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		__this->____tubePoints_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tubePoints_16), (void*)L_5);
	}

IL_002d:
	{
		// float totalLength = 0f;
		V_0 = (0.0f);
		// for (int i = 1; i < linePoints.Length; i++)
		V_2 = 1;
		goto IL_005d;
	}

IL_0037:
	{
		// totalLength += (linePoints[i] - linePoints[i - 1]).magnitude;
		float L_6 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ___0_linePoints;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = ___0_linePoints;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_14, NULL);
		V_3 = L_15;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		V_0 = ((float)il2cpp_codegen_add(L_6, L_16));
		// for (int i = 1; i < linePoints.Length; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005d:
	{
		// for (int i = 1; i < linePoints.Length; i++)
		int32_t L_18 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = ___0_linePoints;
		NullCheck(L_19);
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0037;
		}
	}
	{
		// for (int i = 0; i < linePoints.Length; i++)
		V_5 = 0;
		goto IL_011d;
	}

IL_0071:
	{
		// Vector3 difference = i == 0 ? linePoints[i + 1] - linePoints[i]
		//     : linePoints[i] - linePoints[i - 1];
		int32_t L_21 = V_5;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = ___0_linePoints;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = ___0_linePoints;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_29, NULL);
		G_B12_0 = L_30;
		goto IL_00a6;
	}

IL_008f:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = ___0_linePoints;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = ___0_linePoints;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_34, L_38, NULL);
		G_B12_0 = L_39;
	}

IL_00a6:
	{
		V_6 = G_B12_0;
		// _tubePoints[i].position = linePoints[i];
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_40 = __this->____tubePoints_16;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = ___0_linePoints;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___position_0 = L_45;
		// _tubePoints[i].rotation = Quaternion.LookRotation(difference);
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_46 = __this->____tubePoints_16;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_48, NULL);
		((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___rotation_1 = L_49;
		// _tubePoints[i].relativeLength = i == 0 ? 0f
		//     : _tubePoints[i - 1].relativeLength + (difference.magnitude / totalLength);
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_50 = __this->____tubePoints_16;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = V_5;
		G_B13_0 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)));
		if (!L_52)
		{
			G_B14_0 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)));
			goto IL_010c;
		}
	}
	{
		TubePointU5BU5D_tE212FE6D99E80E8BCE6D4B0DB350A1BCB917BF54* L_53 = __this->____tubePoints_16;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		float L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_54, 1)))))->___relativeLength_2;
		float L_56;
		L_56 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		float L_57 = V_0;
		G_B15_0 = ((float)il2cpp_codegen_add(L_55, ((float)(L_56/L_57))));
		G_B15_1 = G_B13_0;
		goto IL_0111;
	}

IL_010c:
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B14_0;
	}

IL_0111:
	{
		G_B15_1->___relativeLength_2 = G_B15_0;
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_011d:
	{
		// for (int i = 0; i < linePoints.Length; i++)
		int32_t L_59 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ___0_linePoints;
		NullCheck(L_60);
		V_7 = (bool)((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))? 1 : 0);
		bool L_61 = V_7;
		if (L_61)
		{
			goto IL_0071;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::InjectAllDistantInteractionPolylineVisual(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual_InjectAllDistantInteractionPolylineVisual_mC59DA97BE2714B076D5052148528E5850B3CFA55 (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, RuntimeObject* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(interactor);
		RuntimeObject* L_0 = ___0_interactor;
		DistantInteractionLineVisual_InjectDistanceInteractor_mAAA72AFFF2F5A8E6C440FF2E78E6DF3B1FE08D0A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.DistantInteractionTubeVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DistantInteractionTubeVisual__ctor_m66440978DE957F72BB33C3A8DEE63F5D2E91156D (DistantInteractionTubeVisual_tC7FCAF946426F40BD90147032F88A65856B75BB3* __this, const RuntimeMethod* method) 
{
	{
		DistantInteractionLineVisual__ctor_mD9D05E031965E55FAFEE98C62B5005C70DE90A21(__this, NULL);
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
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataGhost::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataGhost_ProcessHitPoint_mE6C09C1084B6D299FEB624A77966B4346DEDAE49 (ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return _targetPoint != null ? _targetPoint.position
		//     : this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____targetPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_001c:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____targetPoint_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataGhost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataGhost__ctor_m3807ED2C2CB7008C31FAE30635954A6F07D933CD (ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* __this, const RuntimeMethod* method) 
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
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_CustomIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	{
		// return _customIcon;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____customIcon_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::set_CustomIcon(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_set_CustomIcon_m3A604891657EEE2B2CE5787E1E06819CD600B7AC (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// _customIcon = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->____customIcon_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____customIcon_5), (void*)L_0);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.DistanceReticles.ReticleDataIcon::get_Snappiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReticleDataIcon_get_Snappiness_mC6DCA753EAD5973BD497EC26F0610B0D8D3AFD7F (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return _snappiness;
		float L_0 = __this->____snappiness_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::set_Snappiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_set_Snappiness_m7F70F3824E31A502B06D4318FD60F1B20D824684 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _snappiness = value;
		float L_0 = ___0_value;
		__this->____snappiness_6 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::GetTargetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (_renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return _renderer.bounds.size;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->____renderer_4;
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		V_2 = L_5;
		goto IL_0036;
	}

IL_0028:
	{
		// return this.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		V_2 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataIcon::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Vector3.Lerp(hitPoint, this.transform.position, _snappiness);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_hitPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->____snappiness_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::InjectOptionalRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon_InjectOptionalRenderer_mA8C8B6E5FCC332E0839D1B0E403B847D6B536ABD (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataIcon__ctor_m7477ADDDCB18AD2A73D0991F81A884119C5A6DB1 (ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* __this, const RuntimeMethod* method) 
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
// UnityEngine.MeshFilter Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_0 = NULL;
	{
		// return _filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataMesh::set_Filter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataMesh_set_Filter_m88D4C19D32851E2C7B14BD80D1CAE9D352131F16 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_value, const RuntimeMethod* method) 
{
	{
		// _filter = value;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_value;
		__this->____filter_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform Oculus.Interaction.DistanceReticles.ReticleDataMesh::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5 (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target => _filter.transform;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataMesh::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataMesh_ProcessHitPoint_m2BDCC5DE7B1B9E7CEEC73CD16329CBE85891688F (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _filter.transform.position;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		return L_3;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataMesh__ctor_m8043D27A92C1063CE8389FE4E1F915A6AE1532DA (ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* __this, const RuntimeMethod* method) 
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
// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_HandGrabInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_HandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabInteractor_mA69FA1C38D2310DE285FC507EA040361C94BADB2 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_Interactor_m543C05D5169DD12988E0AC424E58BC1BEE846C8E (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_Interactor_mA73AEE867925C5DE263B989E4DECF7CECD9AF235 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleGhostDrawer_get_InteractableComponent_m93E3E8F99E0849D4B52BE0CDF0036B7D8AE0C3F8 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => HandGrabInteractor.TargetInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Oculus.Interaction.HandGrab.IHandGrabInteractable Oculus.Interaction.HandGrab.IHandGrabInteractor::get_TargetInteractable() */, IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Awake_mAE0A4FC1D5097F58BECFD27DA47BE36C2946250D (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual = _handVisual as IHandVisual;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____handVisual_11;
		__this->___HandVisual_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandVisual_12), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var)));
		// HandGrabInteractor = _handGrabInteractor as IHandGrabInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____handGrabInteractor_8;
		ReticleGhostDrawer_set_HandGrabInteractor_mA69FA1C38D2310DE285FC507EA040361C94BADB2_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var)), NULL);
		// Interactor = _handGrabInteractor as IInteractorView;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->____handGrabInteractor_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Start_mEA2CF2626927CF3533F35A04B7F85E28529860F4 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_m5BF72C457D16CD65FA3A37E6FA07CDF67CD4FE20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisSyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185_mC4003AC21FC15D1EB058C0ECCF71AD364506B998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleGhostDrawer_U3CStartU3Eb__18_0_m85325D39681E31568CEC8D3924042820103B308E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDFB294F778F59154B0C13DA99829139A499DF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B49D1EEA77DA58D410F235BF091E6CF4E9E3CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleGhostDrawer_U3CStartU3Eb__18_0_m85325D39681E31568CEC8D3924042820103B308E_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// this.AssertField(HandGrabInteractor, nameof(_handGrabInteractor));
		RuntimeObject* L_2;
		L_2 = ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C_inline(__this, NULL);
		AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87(__this, L_2, _stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87_RuntimeMethod_var);
		// this.AssertField(Interactor, nameof(_handGrabInteractor));
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::get_Interactor() */, __this);
		AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423(__this, L_3, _stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423_RuntimeMethod_var);
		// this.AssertField(HandVisual, nameof(HandVisual));
		RuntimeObject* L_4 = __this->___HandVisual_12;
		AssertUtils_AssertField_TisIHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_m5BF72C457D16CD65FA3A37E6FA07CDF67CD4FE20(__this, L_4, _stringLiteral4DDFB294F778F59154B0C13DA99829139A499DF0, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_m5BF72C457D16CD65FA3A37E6FA07CDF67CD4FE20_RuntimeMethod_var);
		// this.AssertField(_syntheticHand, nameof(_syntheticHand));
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_5 = __this->____syntheticHand_10;
		AssertUtils_AssertField_TisSyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185_mC4003AC21FC15D1EB058C0ECCF71AD364506B998(__this, L_5, _stringLiteralC5B49D1EEA77DA58D410F235BF091E6CF4E9E3CE, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisSyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185_mC4003AC21FC15D1EB058C0ECCF71AD364506B998_RuntimeMethod_var);
		// Transformer = _syntheticHand.GetData().Config.TrackingToWorldTransformer;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_6 = __this->____syntheticHand_10;
		NullCheck(L_6);
		HandDataAsset_tEB32D325152E55F645082B8E35A6EB27CBA629F3* L_7;
		L_7 = DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0(L_6, DataSource_1_GetData_m61634C67200FCA53F1CDA0334E39EC4784C83AF0_RuntimeMethod_var);
		NullCheck(L_7);
		HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* L_8 = L_7->___Config_14;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline(L_8, NULL);
		__this->___Transformer_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Transformer_16), (void*)L_9);
		// Hide();
		VirtualActionInvoker0::Invoke(12 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::Hide() */, __this);
		// this.EndStart(ref _started);
		bool* L_10 = (&((InteractorReticle_1_t693AB5673B9B6F95F5FA1A52F03704B20ADF8303*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateHandPose(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_snapper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		// HandGrabTarget snap = snapper.HandGrabTarget;
		RuntimeObject* L_0 = ___0_snapper;
		NullCheck(L_0);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_1;
		L_1 = InterfaceFuncInvoker0< HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* >::Invoke(4 /* Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.IHandGrabState::get_HandGrabTarget() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (snap == null)
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// FreeFingers();
		bool L_4;
		L_4 = ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875(__this, NULL);
		// FreeWrist();
		bool L_5;
		L_5 = ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78(__this, NULL);
		// return;
		goto IL_0093;
	}

IL_0021:
	{
		// if (snap.HandPose != null)
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_6 = V_0;
		NullCheck(L_6);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_7;
		L_7 = HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573(L_6, NULL);
		V_4 = (bool)((!(((RuntimeObject*)(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// UpdateFingers(snap.HandPose, snapper.GrabbingFingers());
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_9 = V_0;
		NullCheck(L_9);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_10;
		L_10 = HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573(L_9, NULL);
		RuntimeObject* L_11 = ___0_snapper;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.HandGrab.IHandGrabState::GrabbingFingers() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_11);
		ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE(__this, L_10, L_12, NULL);
		// _areFingersFree = false;
		__this->____areFingersFree_13 = (bool)0;
		goto IL_0057;
	}

IL_004e:
	{
		// FreeFingers();
		bool L_13;
		L_13 = ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875(__this, NULL);
	}

IL_0057:
	{
		// Pose wristLocalPose = snapper.GetVisualWristPose();
		RuntimeObject* L_14 = ___0_snapper;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = HandGrabStateExtensions_GetVisualWristPose_mEE84522B1FCB6F1A7F98E0312172104177522A67(L_14, NULL);
		V_1 = L_15;
		// Pose wristPose = Transformer != null
		//     ? Transformer.ToTrackingPose(wristLocalPose)
		//     : wristLocalPose;
		RuntimeObject* L_16 = __this->___Transformer_16;
		if (L_16)
		{
			goto IL_0069;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = V_1;
		G_B8_0 = L_17;
		goto IL_0076;
	}

IL_0069:
	{
		RuntimeObject* L_18 = __this->___Transformer_16;
		NullCheck(L_18);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(2 /* UnityEngine.Pose Oculus.Interaction.Input.ITrackingToWorldTransformer::ToTrackingPose(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute)) */, ITrackingToWorldTransformer_t193B383D2CCDEDD1521A0197EB476879DD657B2E_il2cpp_TypeInfo_var, L_18, (&V_1));
		G_B8_0 = L_19;
	}

IL_0076:
	{
		V_2 = G_B8_0;
		// _syntheticHand.LockWristPose(wristPose, 1f);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_20 = __this->____syntheticHand_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_2;
		NullCheck(L_20);
		SyntheticHand_LockWristPose_mAC782FC91F436A63D7E0E01FDD5BE8B88F7E5BE3(L_20, L_21, (1.0f), 3, (bool)0, (bool)0, NULL);
		// _isWristFree = false;
		__this->____isWristFree_14 = (bool)0;
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::UpdateFingers(Oculus.Interaction.HandGrab.HandPose,Oculus.Interaction.Input.HandFingerFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_UpdateFingers_mDF8DB632340E7F93C70E64A526D8D3694DFE92AE (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___0_handPose, int32_t ___1_grabbingFingers, const RuntimeMethod* method) 
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// Quaternion[] desiredRotations = handPose.JointRotations;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = ___0_handPose;
		NullCheck(L_0);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_0, NULL);
		V_0 = L_1;
		// _syntheticHand.OverrideAllJoints(desiredRotations, 1f);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_10;
		NullCheck(L_2);
		SyntheticHand_OverrideAllJoints_m112B93989E6B93073B12D39FE25FD5361D93CC2D(L_2, (&V_0), (1.0f), NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		V_1 = 0;
		goto IL_0060;
	}

IL_001f:
	{
		// int fingerFlag = 1 << fingerIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))));
		// JointFreedom fingerFreedom = handPose.FingersFreedom[fingerIndex];
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_4 = ___0_handPose;
		NullCheck(L_4);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_5;
		L_5 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(L_4, NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (fingerFreedom == JointFreedom.Constrained
		//     && ((int)grabbingFingers & fingerFlag) != 0)
		int32_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_10 = ___1_grabbingFingers;
		int32_t L_11 = V_2;
		G_B4_0 = ((!(((uint32_t)((int32_t)((int32_t)L_10&L_11))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B4_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B4_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// fingerFreedom = JointFreedom.Locked;
		V_3 = 2;
	}

IL_0047:
	{
		// _syntheticHand.SetFingerFreedom((HandFinger)fingerIndex, fingerFreedom);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_13 = __this->____syntheticHand_10;
		int32_t L_14 = V_1;
		V_5 = L_14;
		NullCheck(L_13);
		SyntheticHand_SetFingerFreedom_mAD5CA90074DAA92F5D145AF40F861187C2CFB8D8(L_13, (&V_5), (&V_3), (bool)0, NULL);
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0060:
	{
		// for (int fingerIndex = 0; fingerIndex < Constants.NUM_FINGERS; fingerIndex++)
		int32_t L_16 = V_1;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)5))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeFingers_mF17DE498855BF20F9F8296D16EB35C3C4BDFE875 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!_areFingersFree)
		bool L_0 = __this->____areFingersFree_13;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _syntheticHand.FreeAllJoints();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_10;
		NullCheck(L_2);
		SyntheticHand_FreeAllJoints_mEE570EF11E376D0E4487AA90EF853EE9D8FBF964(L_2, NULL);
		// _areFingersFree = true;
		__this->____areFingersFree_13 = (bool)1;
		// return true;
		V_1 = (bool)1;
		goto IL_002a;
	}

IL_0026:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::FreeWrist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleGhostDrawer_FreeWrist_mFBD0FE3A172C583999FB3E6048C903ACF82B0E78 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!_isWristFree)
		bool L_0 = __this->____isWristFree_14;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// _syntheticHand.FreeWrist();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_2 = __this->____syntheticHand_10;
		NullCheck(L_2);
		SyntheticHand_FreeWrist_m2FD78586CE1880855ABB6C02BB0D657BB154C5E6(L_2, 3, NULL);
		// _isWristFree = true;
		__this->____isWristFree_14 = (bool)1;
		// return true;
		V_1 = (bool)1;
		goto IL_002b;
	}

IL_0027:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataGhost)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Align_m9550BC7CD32B5892107272A60E0CE765EFD384D8 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ___0_data, const RuntimeMethod* method) 
{
	{
		// UpdateHandPose(HandGrabInteractor);
		RuntimeObject* L_0;
		L_0 = ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C_inline(__this, NULL);
		ReticleGhostDrawer_UpdateHandPose_m0366DC52AF67D12C000CE5AEC8621AF6AD8E5226(__this, L_0, NULL);
		// _syntheticHand.MarkInputDataRequiresUpdate();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_10;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataGhost)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Draw_m0C10912F392B07FC7CB41749C3FC6E85B6A3BF06 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, ReticleDataGhost_tB9A6C2CBB8B18C5DA3580DEBFC126D9822F28CBC* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual.ForceOffVisibility = false;
		RuntimeObject* L_0 = __this->___HandVisual_12;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Interaction.IHandVisual::set_ForceOffVisibility(System.Boolean) */, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_Hide_m0BE56C2285F1F499FBFED0E7993DC0A8B421D78C (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandVisual.ForceOffVisibility = true;
		RuntimeObject* L_0 = __this->___HandVisual_12;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void Oculus.Interaction.IHandVisual::set_ForceOffVisibility(System.Boolean) */, IHandVisual_tEC463E56D21FE61512608CC46D708A5B2BCC5558_il2cpp_TypeInfo_var, L_0, (bool)1);
		// _syntheticHand.MarkInputDataRequiresUpdate();
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = __this->____syntheticHand_10;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(16 /* System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Input.HandDataAsset>::MarkInputDataRequiresUpdate() */, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectAllReticleGhostDrawer(Oculus.Interaction.HandGrab.IHandGrabInteractor,Oculus.Interaction.Input.SyntheticHand,Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectAllReticleGhostDrawer_m4703C992E7DC5E8F63AC76132274CE575C93C112 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabInteractor, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___1_syntheticHand, RuntimeObject* ___2_visualHand, const RuntimeMethod* method) 
{
	{
		// InjectHandGrabInteractor(handGrabInteractor);
		RuntimeObject* L_0 = ___0_handGrabInteractor;
		ReticleGhostDrawer_InjectHandGrabInteractor_mE37D2AC6BD3E10C5932AF982BE8F92658451F0DB(__this, L_0, NULL);
		// InjectSyntheticHand(syntheticHand);
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_1 = ___1_syntheticHand;
		ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21(__this, L_1, NULL);
		// InjectVisualHand(visualHand);
		RuntimeObject* L_2 = ___2_visualHand;
		ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectHandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectHandGrabInteractor_mE37D2AC6BD3E10C5932AF982BE8F92658451F0DB (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_handGrabInteractor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabInteractor = handGrabInteractor as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_handGrabInteractor;
		__this->____handGrabInteractor_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabInteractor_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// HandGrabInteractor = handGrabInteractor;
		RuntimeObject* L_1 = ___0_handGrabInteractor;
		ReticleGhostDrawer_set_HandGrabInteractor_mA69FA1C38D2310DE285FC507EA040361C94BADB2_inline(__this, L_1, NULL);
		// Interactor = handGrabInteractor as IInteractorView;
		RuntimeObject* L_2 = ___0_handGrabInteractor;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataGhost>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectSyntheticHand(Oculus.Interaction.Input.SyntheticHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectSyntheticHand_mAA4770A43A35DF14DE032FBF6CC2F4FCB4885D21 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* ___0_syntheticHand, const RuntimeMethod* method) 
{
	{
		// _syntheticHand = syntheticHand;
		SyntheticHand_t07623CBED61B11B848CCFF29D9A3BBD99F6A4185* L_0 = ___0_syntheticHand;
		__this->____syntheticHand_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syntheticHand_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::InjectVisualHand(Oculus.Interaction.IHandVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_InjectVisualHand_mFD418FA8F74C3A3D25991AC526D87EFCA8CC3232 (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_visualHand, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handVisual = visualHand as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_visualHand;
		__this->____handVisual_11 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handVisual_11), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// HandVisual = visualHand;
		RuntimeObject* L_1 = ___0_visualHand;
		__this->___HandVisual_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandVisual_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer__ctor_m1F686310569B7A4F5AB58B7237EF8C85E4768B9D (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _areFingersFree = true;
		__this->____areFingersFree_13 = (bool)1;
		// private bool _isWristFree = true;
		__this->____isWristFree_14 = (bool)1;
		InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15(__this, InteractorReticle_1__ctor_m198C74A563EC006567A7DC400C7C7A90DE3CFD15_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleGhostDrawer::<Start>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleGhostDrawer_U3CStartU3Eb__18_0_m85325D39681E31568CEC8D3924042820103B308E (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B(__this, InteractorReticle_1_Start_m43DC176B483B590AB42527EB99D3AF2DDAC5324B_RuntimeMethod_var);
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
// Oculus.Interaction.IDistanceInteractor Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DistanceInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// UnityEngine.Texture Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_DefaultIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ReticleIconDrawer_get_DefaultIcon_m9C74FBF581D0179820B901EA20D8C4334431685B (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	{
		// return _defaultIcon;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->____defaultIcon_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_DefaultIcon(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DefaultIcon_m2A54565BB56B3D8D046C15F82551475A6AAC7CDA (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		// _defaultIcon = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->____defaultIcon_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultIcon_12), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_ConstantScreenSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReticleIconDrawer_get_ConstantScreenSize_m082E3458A9C40F1EC54D4A346B246C053AFFBBBF (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _constantScreenSize;
		bool L_0 = __this->____constantScreenSize_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_ConstantScreenSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_ConstantScreenSize_m18B7F5E8C7C308F7BAC5E320DE054F731032ACCA (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// _constantScreenSize = value;
		bool L_0 = ___0_value;
		__this->____constantScreenSize_13 = L_0;
		// }
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_Interactor_m10342F2AD65842CE82448D0425001000EA8D12AC (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_Interactor_m5A64DF90A71DE53016DEC2F52AF8E777601E2FAB (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleIconDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleIconDrawer_get_InteractableComponent_mCDAC82F801729C737D1A98730774C83669FB4811 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => DistanceInteractor.DistanceInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.IRelativeToRef Oculus.Interaction.IDistanceInteractor::get_DistanceInteractable() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_OnValidate_mE4690609E6E0376E776E9AAC00AA35F105FA102A (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// _renderer.sharedMaterial.mainTexture = _defaultIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->____renderer_10;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = __this->____defaultIcon_12;
		NullCheck(L_4);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_4, L_5, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Awake_mF3ABDD15C37146DD98D8B862C8036392C5E2BAB1 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DistanceInteractor = _distanceInteractor as IDistanceInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____distanceInteractor_8;
		ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var)), NULL);
		// Interactor = DistanceInteractor;
		RuntimeObject* L_1;
		L_1 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Start_m6D848073A4ABDE707D775E8B8E101A1BB6FBC040 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA6BD9176F469F3986DF0373CDA4DE0B72D7DADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9799E78716E1D032FAF0BDC7C122BE66683FD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// this.AssertField(_renderer, nameof(_renderer));
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->____renderer_10;
		AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13(__this, L_2, _stringLiteralAA6BD9176F469F3986DF0373CDA4DE0B72D7DADB, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13_RuntimeMethod_var);
		// this.AssertField(_centerEye, nameof(_centerEye));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____centerEye_11;
		AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1(__this, L_3, _stringLiteralFF9799E78716E1D032FAF0BDC7C122BE66683FD6, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1_RuntimeMethod_var);
		// _originalScale = this.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		__this->____originalScale_14 = L_5;
		// this.EndStart(ref _started);
		bool* L_6 = (&((InteractorReticle_1_tE6B6A89A86695A7A7A6F54768CE31115E4C91859*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataIcon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Draw_mDC06316BFDFA2C6E8504ED9CED49A5FB1AC7C7C0 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ___0_dataIcon, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// if (dataIcon != null
		//     && dataIcon.CustomIcon != null)
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_0 = ___0_dataIcon;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_2 = ___0_dataIcon;
		NullCheck(L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// _renderer.material.mainTexture = dataIcon.CustomIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->____renderer_10;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_8 = ___0_dataIcon;
		NullCheck(L_8);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = ReticleDataIcon_get_CustomIcon_m957BBFAAF7D8DE6367EBD72F9A986471EED3ABBF(L_8, NULL);
		NullCheck(L_7);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_7, L_9, NULL);
		goto IL_0051;
	}

IL_0038:
	{
		// _renderer.material.mainTexture = _defaultIcon;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->____renderer_10;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = __this->____defaultIcon_12;
		NullCheck(L_11);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_11, L_12, NULL);
	}

IL_0051:
	{
		// if (!_constantScreenSize)
		bool L_13 = __this->____constantScreenSize_13;
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		// _renderer.transform.localScale = _originalScale * dataIcon.GetTargetSize().magnitude;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_15 = __this->____renderer_10;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->____originalScale_14;
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_18 = ___0_dataIcon;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ReticleDataIcon_GetTargetSize_m5E69D80C03D174CEA801C41332DD295FDC033F49(L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_20, NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_21, NULL);
	}

IL_008a:
	{
		// _renderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_22 = __this->____renderer_10;
		NullCheck(L_22);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_22, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataIcon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Align_m63BDD94A41A0248477053A83808F34CD3160DFE2 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	{
		// this.transform.position = data.ProcessHitPoint(DistanceInteractor.HitPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ReticleDataIcon_tCA9737EBDE967653D26591083DF3A4C81EDEF1FF* L_1 = ___0_data;
		RuntimeObject* L_2;
		L_2 = ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 Oculus.Interaction.IDistanceInteractor::get_HitPoint() */, IDistanceInteractor_t175DC843F4AC46B16AD63EC2DD62A68C27A00661_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = ReticleDataIcon_ProcessHitPoint_m6C6BD7F6A4F2588A48DE69BFEB0CC6BFEF2D08B0(L_1, L_3, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		// if (_renderer.enabled)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->____renderer_10;
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_5, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_00bf;
		}
	}
	{
		// Vector3 dirToTarget = (_centerEye.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____centerEye_11;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_2 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_1 = L_13;
		// transform.LookAt(transform.position - dirToTarget, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_14);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_14, L_18, L_19, NULL);
		// if (_constantScreenSize)
		bool L_20 = __this->____constantScreenSize_13;
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00be;
		}
	}
	{
		// float distance = Vector3.Distance(transform.position, _centerEye.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->____centerEye_11;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26;
		L_26 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_23, L_25, NULL);
		V_4 = L_26;
		// _renderer.transform.localScale = _originalScale * distance;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_27 = __this->____renderer_10;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->____originalScale_14;
		float L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_31, NULL);
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_Hide_m308FE7294B685279CC8F65009421B9C743B8BCFD (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// _renderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_10;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectAllReticleIconDrawer(Oculus.Interaction.IDistanceInteractor,UnityEngine.Transform,UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectAllReticleIconDrawer_mBB828D7D93E12AFCE6C6280125E9D575358D45C7 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_centerEye, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___2_renderer, const RuntimeMethod* method) 
{
	{
		// InjectDistanceInteractor(distanceInteractor);
		RuntimeObject* L_0 = ___0_distanceInteractor;
		ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259(__this, L_0, NULL);
		// InjectCenterEye(centerEye);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_centerEye;
		ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9(__this, L_1, NULL);
		// InjectRenderer(renderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = ___2_renderer;
		ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectDistanceInteractor_m90577A5451E7D28A48CFF2644BEACFC9E490C259 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_distanceInteractor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _distanceInteractor = distanceInteractor as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_distanceInteractor;
		__this->____distanceInteractor_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____distanceInteractor_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// DistanceInteractor = distanceInteractor;
		RuntimeObject* L_1 = ___0_distanceInteractor;
		ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline(__this, L_1, NULL);
		// Interactor = distanceInteractor;
		RuntimeObject* L_2 = ___0_distanceInteractor;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataIcon>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectCenterEye(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectCenterEye_m04508B770BEA3131DCAE8AA3BDC09AEFC37020C9 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_centerEye, const RuntimeMethod* method) 
{
	{
		// _centerEye = centerEye;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_centerEye;
		__this->____centerEye_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____centerEye_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_InjectRenderer_mE9264796360EA77C678FADAD1F3F13B4BEFB7186 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer__ctor_mCE56DE37746ECD0602FAF1D8B087DC2E3A893401 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E(__this, InteractorReticle_1__ctor_m7057BCE08DA45BF2683A7F6E21363D61889DAB6E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleIconDrawer::<Start>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleIconDrawer_U3CStartU3Eb__24_0_m3982F6879210D71781F10016562F397C91A19121 (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC(__this, InteractorReticle_1_Start_m92260724DBE18E5372E29323F9E312F090B487CC_RuntimeMethod_var);
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
// Oculus.Interaction.HandGrab.IHandGrabInteractor Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_HandGrabInteractor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_HandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabInteractor_m3E52DBF61DC1F42AE0C64CA7DEE0892D5F3B546E (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_TravelData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ReticleMeshDrawer_get_TravelData_m743C855DE2D70B49B97E133F193DC96EE6DB7C0C (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _travelData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = __this->____travelData_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_TravelData(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_TravelData_mC23D4E9015CEFA1F7D5C83699CDBEE6AA934DD15 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___0_value, const RuntimeMethod* method) 
{
	{
		// _travelData = value;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___0_value;
		__this->____travelData_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travelData_12))->____travelCurve_2), (void*)NULL);
		// }
		return;
	}
}
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_Interactor_m5E4633B9E453B01B7BCFE145695A8785C3606FC2 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_Interactor_mB44F01DEEF537C6E81B7383B8832919CECEC5DF4 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ReticleMeshDrawer_get_InteractableComponent_m2B9D5B70F55B7DAB66E2A0E51DAA1D3C01F00B61 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => HandGrabInteractor.TargetInteractable as Component;
		RuntimeObject* L_0;
		L_0 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Oculus.Interaction.HandGrab.IHandGrabInteractable Oculus.Interaction.HandGrab.IHandGrabInteractor::get_TargetInteractable() */, IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var, L_0);
		return ((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)IsInstClass((RuntimeObject*)L_1, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Reset_m01FF2DE01BDE50FC2CE9AC4D8A4C3E365A41618F (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _filter = this.GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->____filter_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_10), (void*)L_0);
		// _renderer = this.GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->____renderer_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Awake_mA4E1779212BAB2EE6FC2040B9FEF0771330C25FF (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandGrabInteractor = _handGrabInteractor as IHandGrabInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____handGrabInteractor_8;
		ReticleMeshDrawer_set_HandGrabInteractor_m3E52DBF61DC1F42AE0C64CA7DEE0892D5F3B546E_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var)), NULL);
		// Interactor = _handGrabInteractor as IInteractorView;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____handGrabInteractor_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Start_mAE5F1850F8F6D85C32F9FFB783F194C9594B73CE (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m39B628B92CCECA4257E6F831ED3754FDC23CB318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleMeshDrawer_U3CStartU3Eb__20_0_m4DB55D597145D8CEC78EF3168DC560CB31F098C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA6BD9176F469F3986DF0373CDA4DE0B72D7DADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB3C10A667FA6AAD697C63CAAE1BDFC4C96C9148);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ReticleMeshDrawer_U3CStartU3Eb__20_0_m4DB55D597145D8CEC78EF3168DC560CB31F098C3_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// this.AssertField(Interactor, nameof(_handGrabInteractor));
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::get_Interactor() */, __this);
		AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423(__this, L_2, _stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_m5732659965DBFF5956BFC05D50939C61B5B01423_RuntimeMethod_var);
		// this.AssertField(HandGrabInteractor, nameof(_handGrabInteractor));
		RuntimeObject* L_3;
		L_3 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87(__this, L_3, _stringLiteral149CA0890C48CF28ABE88225C3BEB7553AA9B540, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_m677FA5EF2F87F9252DDFF043204D396EDC5C4C87_RuntimeMethod_var);
		// this.AssertField(_filter, nameof(_filter));
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = __this->____filter_10;
		AssertUtils_AssertField_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m39B628B92CCECA4257E6F831ED3754FDC23CB318(__this, L_4, _stringLiteralDB3C10A667FA6AAD697C63CAAE1BDFC4C96C9148, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_m39B628B92CCECA4257E6F831ED3754FDC23CB318_RuntimeMethod_var);
		// this.AssertField(_renderer, nameof(_renderer));
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->____renderer_11;
		AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13(__this, L_5, _stringLiteralAA6BD9176F469F3986DF0373CDA4DE0B72D7DADB, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m21682745E94947146A76880CF5A100339342AC13_RuntimeMethod_var);
		// this.EndStart(ref _started);
		bool* L_6 = (&((InteractorReticle_1_tD76A6D6DB91D235BBF56E023C27487001C8C390B*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Draw_m966C1232BFFB1373D3DB6D57F9EAFDB35436F070 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_dataMesh, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _filter.sharedMesh = dataMesh.Filter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____filter_10;
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_1 = ___0_dataMesh;
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9(L_1, NULL);
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_2, NULL);
		NullCheck(L_0);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_0, L_3, NULL);
		// _filter.transform.localScale = dataMesh.Filter.transform.lossyScale;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4 = __this->____filter_10;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_6 = ___0_dataMesh;
		NullCheck(L_6);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7;
		L_7 = ReticleDataMesh_get_Filter_mFFA135E6F8713CC243B9B8BBC855C9507F3881F9(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_8, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_9, NULL);
		// _renderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->____renderer_11;
		NullCheck(L_10);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)1, NULL);
		// Pose target = DestinationPose(dataMesh, HandGrabInteractor.GetTargetGrabPose());
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_11 = ___0_dataMesh;
		RuntimeObject* L_12;
		L_12 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		L_13 = HandGrabStateExtensions_GetTargetGrabPose_mF12A7A375A0F401F49EDE3E7043D7D7537CFFC03(L_12, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959(__this, L_11, L_13, NULL);
		V_0 = L_14;
		// _tween = _travelData.CreateTween(dataMesh.Target.GetPose(), target);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* L_15 = (&__this->____travelData_12);
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_16 = ___0_dataMesh;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5(L_16, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		L_18 = PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9(L_17, 0, NULL);
		V_1 = L_18;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_19;
		L_19 = PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9(L_15, (&V_1), (&V_0), NULL);
		__this->____tween_14 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_14), (void*)L_19);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Hide_mAE43E9A4924F8D93D570CD5918835538C77D08F4 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// _tween = null;
		__this->____tween_14 = (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_14), (void*)(Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967*)NULL);
		// _renderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____renderer_11;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_Align_m58B8779AFE44F65302B291F2FECBDC2628CA10D5 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Pose target = DestinationPose(data, HandGrabInteractor.GetTargetGrabPose());
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_0 = ___0_data;
		RuntimeObject* L_1;
		L_1 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = HandGrabStateExtensions_GetTargetGrabPose_mF12A7A375A0F401F49EDE3E7043D7D7537CFFC03(L_1, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959(__this, L_0, L_2, NULL);
		V_0 = L_3;
		// _tween.UpdateTarget(target);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_4 = __this->____tween_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		NullCheck(L_4);
		Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98(L_4, L_5, NULL);
		// _tween.Tick();
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_6 = __this->____tween_14;
		NullCheck(L_6);
		Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6(L_6, NULL);
		// _filter.transform.SetPose(_tween.Pose);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7 = __this->____filter_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_9 = __this->____tween_14;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline(L_9, NULL);
		V_1 = L_10;
		PoseUtils_SetPose_mAB343468EF0D5639215AD8F6898AD967B4A3DACA(L_8, (&V_1), 0, NULL);
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::DestinationPose(Oculus.Interaction.DistanceReticles.ReticleDataMesh,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReticleMeshDrawer_DestinationPose_m448ED3EB6BA5622C56DE4C128C06658F4CFC6959 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* ___0_data, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_worldSnapPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose targetOffset = PoseUtils.Delta(worldSnapPose, data.Target.GetPose());
		ReticleDataMesh_t22F9E277A7E6181729B4547853D3ACC10E98BB6E* L_0 = ___0_data;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = ReticleDataMesh_get_Target_m330EC44CFDAAB3CA850BBDCCDED26039D1D734D5(L_0, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_GetPose_m33C9042AEC0A37063CC4EEF49E515DC7AEB4B1B9(L_1, 0, NULL);
		V_2 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = PoseUtils_Delta_m62647EFB71E1076B0C44E3DBDE54782CDB4BA5E2((&___1_worldSnapPose), (&V_2), NULL);
		V_0 = L_3;
		// HandGrabInteractor.HandGrabApi.Hand.GetRootPose(out Pose pose);
		RuntimeObject* L_4;
		L_4 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		NullCheck(L_4);
		HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* L_5;
		L_5 = InterfaceFuncInvoker0< HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* >::Invoke(4 /* Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.HandGrab.IHandGrabInteractor::get_HandGrabApi() */, IHandGrabInteractor_t79DECF516A9CC50FC1E625552D18DDC7EC6F70A7_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(18 /* System.Boolean Oculus.Interaction.Input.IHand::GetRootPose(UnityEngine.Pose&) */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_6, (&V_1));
		// pose.Premultiply(HandGrabInteractor.WristToGrabPoseOffset);
		RuntimeObject* L_8;
		L_8 = ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline(__this, NULL);
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = InterfaceFuncInvoker0< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 >::Invoke(3 /* UnityEngine.Pose Oculus.Interaction.HandGrab.IHandGrabState::get_WristToGrabPoseOffset() */, IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
		PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063((&V_1), (&V_2), NULL);
		// pose.Premultiply(targetOffset);
		PoseUtils_Premultiply_mED7C95AA8F53A1D45974CC88B783B230214D4063((&V_1), (&V_0), NULL);
		// return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_1;
		V_3 = L_10;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_3;
		return L_11;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectAllReticleMeshDrawer(Oculus.Interaction.HandGrab.IHandGrabInteractor,UnityEngine.MeshFilter,UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectAllReticleMeshDrawer_mFA302FBD1CDF93B690075B88DAC04E42A649E1EC (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabInteractor, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___1_filter, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___2_renderer, const RuntimeMethod* method) 
{
	{
		// InjectHandGrabInteractor(handGrabInteractor);
		RuntimeObject* L_0 = ___0_handGrabInteractor;
		ReticleMeshDrawer_InjectHandGrabInteractor_m1397D8F78F28A0CBBD8B442C4CED81B3924DAD42(__this, L_0, NULL);
		// InjectFilter(filter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1 = ___1_filter;
		ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C(__this, L_1, NULL);
		// InjectRenderer(renderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = ___2_renderer;
		ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectHandGrabInteractor(Oculus.Interaction.HandGrab.IHandGrabInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectHandGrabInteractor_m1397D8F78F28A0CBBD8B442C4CED81B3924DAD42 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_handGrabInteractor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handGrabInteractor = handGrabInteractor as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_handGrabInteractor;
		__this->____handGrabInteractor_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabInteractor_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// HandGrabInteractor = handGrabInteractor;
		RuntimeObject* L_1 = ___0_handGrabInteractor;
		ReticleMeshDrawer_set_HandGrabInteractor_m3E52DBF61DC1F42AE0C64CA7DEE0892D5F3B546E_inline(__this, L_1, NULL);
		// Interactor = handGrabInteractor as IInteractorView;
		RuntimeObject* L_2 = ___0_handGrabInteractor;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataMesh>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInteractorView_t7DFA26D1DEEA13FA5573DFE13AD3CE0545DC3B76_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectFilter_m3AB6AF3B1ECDC3DC5040CDFC868E527AE289D78C (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_filter, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_filter;
		__this->____filter_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::InjectRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_InjectRenderer_mE9ADA27819129DECF0B5ED64B596BFF35754B157 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_renderer, const RuntimeMethod* method) 
{
	{
		// _renderer = renderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_renderer;
		__this->____renderer_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer__ctor_m81102DC699233D070527858E9A55A65C4F28759D (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private PoseTravelData _travelData = PoseTravelData.FAST;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0;
		L_0 = PoseTravelData_get_FAST_m0DFF02E35A779923D4E92166F75B38D453D916CA(NULL);
		__this->____travelData_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travelData_12))->____travelCurve_2), (void*)NULL);
		InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E(__this, InteractorReticle_1__ctor_m9580B69A0C26D5B8A88C89EC04C46D048E41709E_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleMeshDrawer::<Start>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleMeshDrawer_U3CStartU3Eb__20_0_m4DB55D597145D8CEC78EF3168DC560CB31F098C3 (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328(__this, InteractorReticle_1_Start_m9AFF076CADF2FA146D9AAFB15FB6DC6D4718F328_RuntimeMethod_var);
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
// Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Oculus.Interaction.DistanceReticles.ReticleDataTeleport::get_ReticleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _reticleMode;
		int32_t L_0 = __this->____reticleMode_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::set_ReticleMode(Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_set_ReticleMode_m4B4C37445C1E976FD27C6A5FDAAB38B17D8754EE (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _reticleMode = value;
		int32_t L_0 = ___0_value;
		__this->____reticleMode_7 = L_0;
		// }
		return;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.DistanceReticles.ReticleDataTeleport::ProcessHitPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_hitPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_snapPoint != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____snapPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return _snapPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____snapPoint_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		goto IL_0024;
	}

IL_0020:
	{
		// return hitPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_hitPoint;
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		return L_6;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, bool ___0_highlight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B2_1 = NULL;
	float G_B4_0 = 0.0f;
	int32_t G_B4_1 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B4_2 = NULL;
	{
		// if(_materialBlock != null)
		MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* L_0 = __this->____materialBlock_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// _materialBlock.MaterialPropertyBlock.SetFloat(_highlightShaderID, highlight ? 1f : 0f);
		MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* L_3 = __this->____materialBlock_5;
		NullCheck(L_3);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_4;
		L_4 = MaterialPropertyBlockEditor_get_MaterialPropertyBlock_m67C165BCF951950D39C6DE3C53B36B66D624099A(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		int32_t L_5 = ((ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields*)il2cpp_codegen_static_fields_for(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var))->____highlightShaderID_6;
		bool L_6 = ___0_highlight;
		G_B2_0 = L_5;
		G_B2_1 = L_4;
		if (L_6)
		{
			G_B3_0 = L_5;
			G_B3_1 = L_4;
			goto IL_002c;
		}
	}
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0031;
	}

IL_002c:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0031:
	{
		NullCheck(G_B4_2);
		MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267(G_B4_2, G_B4_1, G_B4_0, NULL);
		// _materialBlock.UpdateMaterialPropertyBlock();
		MaterialPropertyBlockEditor_t2621E059B3EC71AF973EC4DD256CD1C1683DDC05* L_7 = __this->____materialBlock_5;
		NullCheck(L_7);
		MaterialPropertyBlockEditor_UpdateMaterialPropertyBlock_m16BF677358204F9ACE56AD982582F364D3249293(L_7, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::InjectOptionalSnapPoint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport_InjectOptionalSnapPoint_mB0DF995486FB9F790D6C866B20F9C9E835797D1C (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_snapPoint, const RuntimeMethod* method) 
{
	{
		// _snapPoint = snapPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_snapPoint;
		__this->____snapPoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapPoint_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport__ctor_m1E31D813A3C6485979249D2621C251D9768D05F9 (ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* __this, const RuntimeMethod* method) 
{
	{
		// private TeleportReticleMode _reticleMode = TeleportReticleMode.ValidTarget;
		__this->____reticleMode_7 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.ReticleDataTeleport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReticleDataTeleport__cctor_m6D7942CBEC92D972E2E2BCF0C019CFBAC31BE0AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _highlightShaderID = Shader.PropertyToID("_Highlight");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0, NULL);
		((ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_StaticFields*)il2cpp_codegen_static_fields_for(ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B_il2cpp_TypeInfo_var))->____highlightShaderID_6 = L_0;
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
// Oculus.Interaction.IInteractorView Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::get_Interactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TeleportReticleDrawer_get_Interactor_m2ABA3EC856C6448793536E1A7E0D11ED3248F765 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = __this->___U3CInteractorU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::set_Interactor(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_set_Interactor_m6833352778302BEE2BACC57CC7C6AC89071FE326 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// protected override IInteractorView Interactor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CInteractorU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInteractorU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// UnityEngine.Component Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::get_InteractableComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* TeleportReticleDrawer_get_InteractableComponent_m904F9D676B7A94D4766AD82A8B036C100D33585F (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Component InteractableComponent => _interactor.Interactable;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = __this->____interactor_8;
		NullCheck(L_0);
		TeleportInteractable_t258F9867CCBC4E979AC8E09A94B67DADE63BA470* L_1;
		L_1 = Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_inline(L_0, Interactor_2_get_Interactable_m3358450D8678E4221C9206593BB9ACC5E6E58483_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Awake_m97BC2266B136641B15373829CCCCFE1EA748FF95 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Progress = _progress as IAxis1D;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____progress_11;
		__this->___Progress_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Progress_12), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var)));
		// HighlightState = _highlightState as IActiveState;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____highlightState_13;
		__this->___HighlightState_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HighlightState_14), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var)));
		// Interactor = _interactor;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_2 = __this->____interactor_8;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Oculus.Interaction.DistanceReticles.InteractorReticle`1<Oculus.Interaction.DistanceReticles.ReticleDataTeleport>::set_Interactor(Oculus.Interaction.IInteractorView) */, __this, L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Start_m079629286D2747F2BD2A0070357E123C80EE0E10 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisTeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC_mA995BDF4AAF96495E27083E136D1FB1213F7F724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_U3CStartU3Eb__16_0_mF148CD3265A7C59109D3D47C8403599CBC6A0BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B52F03BD7F046026ECD90E04FA25E19E846C75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		bool* L_0 = (&((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)TeleportReticleDrawer_U3CStartU3Eb__16_0_mF148CD3265A7C59109D3D47C8403599CBC6A0BA7_RuntimeMethod_var), NULL);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, L_1, NULL);
		// this.AssertField(_interactor, nameof(_interactor));
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_2 = __this->____interactor_8;
		AssertUtils_AssertField_TisTeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC_mA995BDF4AAF96495E27083E136D1FB1213F7F724(__this, L_2, _stringLiteral05B52F03BD7F046026ECD90E04FA25E19E846C75, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisTeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC_mA995BDF4AAF96495E27083E136D1FB1213F7F724_RuntimeMethod_var);
		// _validTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____validTargetRenderer_9;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// _invalidTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____invalidTargetRenderer_10;
		NullCheck(L_4);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// this.EndStart(ref _started);
		bool* L_5 = (&((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____started_5);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Align(Oculus.Interaction.DistanceReticles.ReticleDataTeleport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Align_m7823B59B401B72C9E780171096840D4B439AED4D (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_4 = NULL;
	bool V_5 = false;
	TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	float G_B8_0 = 0.0f;
	{
		// bool highlight = HighlightState != null && HighlightState.Active;
		RuntimeObject* L_0 = __this->___HighlightState_14;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___HighlightState_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Oculus.Interaction.IActiveState::get_Active() */, IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		// data.Highlight(highlight);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_3 = ___0_data;
		bool L_4 = V_0;
		NullCheck(L_3);
		ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72(L_3, L_4, NULL);
		// if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.Hidden)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3(L_5, NULL);
		V_5 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_010d;
	}

IL_0035:
	{
		// Vector3 position = data.ProcessHitPoint(_interactor.ArcEnd.Point);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_8 = ___0_data;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_9 = __this->____interactor_8;
		NullCheck(L_9);
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_10;
		L_10 = TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline(L_9, NULL);
		V_6 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = TeleportHit_get_Point_mA410290D272135B53FDB860D1DF4195CF18411D0((&V_6), NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = ReticleDataTeleport_ProcessHitPoint_m6AA685600FF1526EF57AAE397CDBDFE323D8B9AA(L_8, L_11, NULL);
		V_1 = L_12;
		// Quaternion rotation = Quaternion.LookRotation(_interactor.ArcEnd.Normal);
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_13 = __this->____interactor_8;
		NullCheck(L_13);
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_14;
		L_14 = TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline(L_13, NULL);
		V_6 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = TeleportHit_get_Normal_m80A0655F5E20349258BB9D1BF067A2CE5A9C6977((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_15, NULL);
		V_2 = L_16;
		// this.transform.SetPositionAndRotation(position, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_2;
		NullCheck(L_17);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_17, L_18, L_19, NULL);
		// float progress = Progress != null ? Progress.Value() : 0f;
		RuntimeObject* L_20 = __this->___Progress_12;
		if (L_20)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_0092;
	}

IL_0087:
	{
		RuntimeObject* L_21 = __this->___Progress_12;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single Oculus.Interaction.Input.IAxis1D::Value() */, IAxis1D_tE0056ECCFDD6D1CA7AA6016A1CACC2319B847803_il2cpp_TypeInfo_var, L_21);
		G_B8_0 = L_22;
	}

IL_0092:
	{
		V_3 = G_B8_0;
		// Renderer reticle = null;
		V_4 = (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL;
		// if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.ValidTarget)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3(L_23, NULL);
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b1;
		}
	}
	{
		// reticle = _validTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = __this->____validTargetRenderer_9;
		V_4 = L_26;
		goto IL_00ca;
	}

IL_00b1:
	{
		// else if (data.ReticleMode == ReticleDataTeleport.TeleportReticleMode.InvalidTarget)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_27 = ___0_data;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3(L_27, NULL);
		V_8 = (bool)((((int32_t)L_28) == ((int32_t)2))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		// reticle = _invalidTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_30 = __this->____invalidTargetRenderer_10;
		V_4 = L_30;
	}

IL_00ca:
	{
		// if (reticle == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_32;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		// return;
		goto IL_010d;
	}

IL_00db:
	{
		// UpdateReticle(data.ReticleMode);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3(L_34, NULL);
		TeleportReticleDrawer_UpdateReticle_m96090743FFD0426AD3D0C59A5843392B21825435(__this, L_35, NULL);
		// SetReticleProgress(reticle, progress);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = V_4;
		float L_37 = V_3;
		TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3(__this, L_36, L_37, NULL);
		// if (HighlightState != null)
		RuntimeObject* L_38 = __this->___HighlightState_14;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_010d;
		}
	}
	{
		// SetReticleHighlight(reticle, highlight);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_40 = V_4;
		bool L_41 = V_0;
		TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1(__this, L_40, L_41, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Draw(Oculus.Interaction.DistanceReticles.ReticleDataTeleport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Draw_mD72DD9C2BA4F3A8B4E40027040E16117314FFC5E (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* ___0_data, const RuntimeMethod* method) 
{
	{
		// UpdateReticle(data.ReticleMode);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ReticleDataTeleport_get_ReticleMode_m59794364347509747B13948604A1B6CD8E25DAC3(L_0, NULL);
		TeleportReticleDrawer_UpdateReticle_m96090743FFD0426AD3D0C59A5843392B21825435(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_Hide_mF2F6AD6A760E5DA9B9D8B957A00248EE5F3A26FC (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_validTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validTargetRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// _validTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____validTargetRenderer_9;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
	}

IL_0020:
	{
		// if (_invalidTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____invalidTargetRenderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// _invalidTargetRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->____invalidTargetRenderer_10;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
	}

IL_003f:
	{
		// if (_targetData != null)
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_8 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____targetData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// _targetData.Highlight(false);
		ReticleDataTeleport_t359262752069B0F4BBD5C382EEF4F58B3D0E859B* L_11 = ((InteractorReticle_1_tEEAF175959D06318CEDB5AD91F5767A4EF0A4DC8*)__this)->____targetData_6;
		NullCheck(L_11);
		ReticleDataTeleport_Highlight_mFDBEE9EBAF6A1B0254000CD94B0FF78A8E88DB72(L_11, (bool)0, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleProgress(UnityEngine.Renderer,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleProgress_m3870C0C3FA0B16F2F755DAB44EB0A9A604F671B3 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, float ___1_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reticle.material.SetFloat(_progressKey, progress);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_reticle;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____progressKey_16;
		float L_3 = ___1_progress;
		NullCheck(L_1);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::SetReticleHighlight(UnityEngine.Renderer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_SetReticleHighlight_m69FBC72A3C86FFA89823B4D7EE551E43585F4EC1 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_reticle, bool ___1_highlight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	int32_t G_B3_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// reticle.material.SetFloat(_highlightKey, highlight ? 1f : 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_reticle;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		int32_t L_2 = ((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____highlightKey_17;
		bool L_3 = ___1_highlight;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
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
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::UpdateReticle(Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_UpdateReticle_m96090743FFD0426AD3D0C59A5843392B21825435 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, int32_t ___0_reticleMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (_validTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____validTargetRenderer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// _validTargetRenderer.enabled = reticleMode == ReticleDataTeleport.TeleportReticleMode.ValidTarget;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->____validTargetRenderer_9;
		int32_t L_4 = ___0_reticleMode;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0), NULL);
	}

IL_0023:
	{
		// if (_invalidTargetRenderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->____invalidTargetRenderer_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// _invalidTargetRenderer.enabled = reticleMode == ReticleDataTeleport.TeleportReticleMode.InvalidTarget;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->____invalidTargetRenderer_10;
		int32_t L_9 = ___0_reticleMode;
		NullCheck(L_8);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0), NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectAllTeleportReticleDrawer(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectAllTeleportReticleDrawer_m926EFB03EE227D7700FE35E6FE9912C86DE5630C (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// InjectInteractor(interactor);
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = ___0_interactor;
		TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectInteractor(Oculus.Interaction.Locomotion.TeleportInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectInteractor_m21DCA023D4DE1D0E7784F5DA6B7534099C0BC740 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* L_0 = ___0_interactor;
		__this->____interactor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalValidTargetRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalValidTargetRenderer_m8AD570FB78592E99A40CCB73EDF0869AC2D091C9 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_validTargetRenderer, const RuntimeMethod* method) 
{
	{
		// _validTargetRenderer = validTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_validTargetRenderer;
		__this->____validTargetRenderer_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____validTargetRenderer_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalInalidTargetRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalInalidTargetRenderer_m9B6D29A6C068261B4368B70685D5129EC32A0A00 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_invalidTargetRenderer, const RuntimeMethod* method) 
{
	{
		// _invalidTargetRenderer = invalidTargetRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = ___0_invalidTargetRenderer;
		__this->____invalidTargetRenderer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____invalidTargetRenderer_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::InjectOptionalProgress(Oculus.Interaction.Input.IAxis1D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_InjectOptionalProgress_mCEFB7AD2761FD3586A36381E804392293A3CF276 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, RuntimeObject* ___0_progress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _progress = progress as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_progress;
		__this->____progress_11 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____progress_11), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Progress = progress;
		RuntimeObject* L_1 = ___0_progress;
		__this->___Progress_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Progress_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer__ctor_mBA6374887D85511B08C27D6CC8F97E95EBBB8E6A (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852(__this, InteractorReticle_1__ctor_mE75585753C3D1962479B74A3EC7A006F0D38E852_RuntimeMethod_var);
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer__cctor_mE693059303A78805B856967F5AA76429316A91E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C643EBB219C9960D2043A540482240133DB77BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int _progressKey = Shader.PropertyToID("_Progress");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7C643EBB219C9960D2043A540482240133DB77BF, NULL);
		((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____progressKey_16 = L_0;
		// private static readonly int _highlightKey = Shader.PropertyToID("_Highlight");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7DFA06D8488A900C1F7283E5B0C530311076F1E0, NULL);
		((TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_StaticFields*)il2cpp_codegen_static_fields_for(TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4_il2cpp_TypeInfo_var))->____highlightKey_17 = L_1;
		return;
	}
}
// System.Void Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::<Start>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportReticleDrawer_U3CStartU3Eb__16_0_mF148CD3265A7C59109D3D47C8403599CBC6A0BA7 (TeleportReticleDrawer_t19861262AE9DCD53FD6D03C792B6BBE329E3F0A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started, () => base.Start());
		InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A(__this, InteractorReticle_1_Start_m6CB83B321D337B2FB1B513C6FCDD7B76EC5B265A_RuntimeMethod_var);
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
// Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace Oculus.Interaction.Body.BodyDebugGizmos::get_Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// get => _space;
		int32_t L_0 = __this->____space_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::set_Space(Oculus.Interaction.Body.BodyDebugGizmos/CoordSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_set_Space_mF2B6F33A4DCF82A12A3F6DAC8BFDC7E8BF64EC1E (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _space = value;
		int32_t L_0 = ___0_value;
		__this->____space_10 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_Awake_mAE73A708AFEE94545D8AFA8B7C041B3166BC5311 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Body = _body as IBody;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____body_8;
		__this->___Body_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_Start_mF39A79DBDFBEABED535FF3DE500F6FB8475640CD (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m3E4857EDF6B3C380AC4FDC19D0248B359C38A653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_11);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// Assert.IsNotNull(Body);
		RuntimeObject* L_1 = __this->___Body_9;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m3E4857EDF6B3C380AC4FDC19D0248B359C38A653(L_1, Assert_IsNotNull_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m3E4857EDF6B3C380AC4FDC19D0248B359C38A653_RuntimeMethod_var);
		// this.EndStart(ref _started);
		bool* L_2 = (&__this->____started_11);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_OnEnable_m7B17698906660BCE314AF7DB0AA57D76177A823F (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Body.WhenBodyUpdated += HandleBodyUpdated;
		RuntimeObject* L_2 = __this->___Body_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void Oculus.Interaction.Body.Input.IBody::add_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_OnDisable_m59DFD1FBA0D5B2C4F33DB571B118351151E885F2 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Body.WhenBodyUpdated -= HandleBodyUpdated;
		RuntimeObject* L_2 = __this->___Body_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11 /* System.Void Oculus.Interaction.Body.Input.IBody::remove_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDebugGizmos_TryGetWorldJointPose_m08F7CC30AC08679573C19049FA5E9C15BB9805D7 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___0_jointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// switch (_space)
		int32_t L_0 = __this->____space_10;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		// result = Body.GetJointPose(jointId, out pose);
		RuntimeObject* L_4 = __this->___Body_9;
		int32_t L_5 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___1_pose;
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(6 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		V_0 = L_7;
		// break;
		goto IL_0068;
	}

IL_0025:
	{
		// result = Body.GetJointPoseFromRoot(jointId, out pose);
		RuntimeObject* L_8 = __this->___Body_9;
		int32_t L_9 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___1_pose;
		NullCheck(L_8);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		V_0 = L_11;
		// pose.position = transform.TransformPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = ___1_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___position_0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_13, L_15, NULL);
		L_12->___position_0 = L_16;
		// pose.rotation = transform.rotation * pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = ___1_pose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_21, NULL);
		L_17->___rotation_1 = L_22;
		// break;
		goto IL_0068;
	}

IL_0068:
	{
		// return result;
		bool L_23 = V_0;
		V_3 = L_23;
		goto IL_006c;
	}

IL_006c:
	{
		// }
		bool L_24 = V_3;
		return L_24;
	}
}
// System.Boolean Oculus.Interaction.Body.BodyDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDebugGizmos_TryGetParentJointId_m1260500555798A81BD96A4C684F54D9ECBF9C105 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, int32_t ___0_jointId, int32_t* ___1_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Body.SkeletonMapping.TryGetParentJointId(jointId, out parent);
		RuntimeObject* L_0 = __this->___Body_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___0_jointId;
		int32_t* L_3 = ___1_parent;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.BodyDebugGizmos::GetModifiedDrawFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// VisibilityFlags modifiedFlags = Visibility;
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		// if (HasNegativeScale && Space == CoordSpace.Local)
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2;
		L_2 = BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// modifiedFlags &= ~VisibilityFlags.Axes;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4&((int32_t)-3)));
	}

IL_0027:
	{
		// return modifiedFlags;
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::HandleBodyUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_HandleBodyUpdated_m93863EA2A6E591E67C771C3478A6F78BCBA8FB86 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
		RuntimeObject* L_0 = __this->___Body_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_001a_1:
			{
				// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				// Draw(joint, GetModifiedDrawFlags());
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyDebugGizmos_GetModifiedDrawFlags_mC7DB588DE0613B5D98576684B542AE53F740153B(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_0032_1:
			{
				// foreach (BodyJointId joint in Body.SkeletonMapping.Joints)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectAllBodyJointDebugGizmos(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectAllBodyJointDebugGizmos_mFF82811312D5FB7E32A76755860821261C372B85 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	{
		// InjectBody(body);
		RuntimeObject* L_0 = ___0_body;
		BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos_InjectBody_m582546FF14A1EC46F3307E50886F47F6A299344C (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _body = body as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_body;
		__this->____body_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Body = body;
		RuntimeObject* L_1 = ___0_body;
		__this->___Body_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.BodyDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDebugGizmos__ctor_mF5E0CF99E61C76D8BECE249EFC0AA4CE4E6E7EE7 (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// private CoordSpace _space = CoordSpace.World;
		__this->____space_10 = 0;
		// protected bool _started = false;
		__this->____started_11 = (bool)0;
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
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
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_Radius_m74F118994FCFDD598E57F66DC698AA08E6E0CC5F (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_Radius_m992D15B1DFD97E20914F1B5CD873A4E7368A72E1 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _radius = value;
		float L_0 = ___0_value;
		__this->____radius_7 = L_0;
		return;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _visibility;
		int32_t L_0 = __this->____visibility_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_Visibility(Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_Visibility_mA95D5C677A97EC69F9E4B19BDEF4D405764D6269 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _visibility = value;
		int32_t L_0 = ___0_value;
		__this->____visibility_4 = L_0;
		return;
	}
}
// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::get_JointColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonDebugGizmos_get_JointColor_mAB5B3DFA86DFE5237791E011FD05918FAF289DE8 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _jointColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____jointColor_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_JointColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_JointColor_m36E4CAD8B5B36A54D7739D47B004A91993E79BD7 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _jointColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____jointColor_5 = L_0;
		return;
	}
}
// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::get_BoneColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonDebugGizmos_get_BoneColor_m5CBEEDC079BD2E0E0A18570B816F84565AE15ADE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _boneColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____boneColor_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::set_BoneColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_set_BoneColor_m3356C6155C51129E3E92F81BA598A926404EB97A (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _boneColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->____boneColor_6 = L_0;
		return;
	}
}
// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::get_LineWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// private float LineWidth => _radius / 2f;
		float L_0 = __this->____radius_7;
		return ((float)(L_0/(2.0f)));
	}
}
// System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::get_HasNegativeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	{
		// protected bool HasNegativeScale => transform.lossyScale.x < 0 ||
		//                                    transform.lossyScale.y < 0 ||
		//                                    transform.lossyScale.z < 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		float L_2 = L_1.___x_2;
		if ((((float)L_2) < ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_3, NULL);
		float L_5 = L_4.___y_3;
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_6, NULL);
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_8) < ((float)(0.0f)))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B4_0 = 1;
	}

IL_0048:
	{
		return (bool)G_B4_0;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::Draw(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___0_joint, int32_t ___1_visibility, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		// if (TryGetWorldJointPose(joint, out Pose pose))
		int32_t L_0 = ___0_joint;
		bool L_1;
		L_1 = VirtualFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, __this, L_0, (&V_0));
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_00db;
		}
	}
	{
		// if (visibility.HasFlag(VisibilityFlags.Axes))
		int32_t L_3 = ___1_visibility;
		int32_t L_4 = L_3;
		int32_t L_5 = 2;
		bool L_6 = il2cpp_codegen_enum_has_flag((int32_t)L_4, (int32_t)L_5);
		V_4 = L_6;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// DebugGizmos.LineWidth = LineWidth;
		float L_8;
		L_8 = SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_8;
		// DebugGizmos.DrawAxis(pose, _radius);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_0;
		float L_10 = __this->____radius_7;
		DebugGizmos_DrawAxis_mBCE8CB48E9F55E334D165E527BBD45BBFE3AF44F(L_9, L_10, NULL);
	}

IL_0043:
	{
		// if (visibility.HasFlag(VisibilityFlags.Joints))
		int32_t L_11 = ___1_visibility;
		int32_t L_12 = L_11;
		int32_t L_13 = 1;
		bool L_14 = il2cpp_codegen_enum_has_flag((int32_t)L_12, (int32_t)L_13);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		// DebugGizmos.Color = _jointColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->____jointColor_5;
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_16;
		// DebugGizmos.LineWidth = _radius;
		float L_17 = __this->____radius_7;
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_17;
		// DebugGizmos.DrawPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___position_0;
		DebugGizmos_DrawPoint_mE1FA1C94418F3625481A947DCCD48019D84370E7(L_19, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_007f:
	{
		// if (visibility.HasFlag(VisibilityFlags.Bones) &&
		//     TryGetParentJointId(joint, out BodyJointId parent) &&
		//     TryGetWorldJointPose(parent, out Pose parentPose))
		int32_t L_20 = ___1_visibility;
		int32_t L_21 = L_20;
		int32_t L_22 = 4;
		bool L_23 = il2cpp_codegen_enum_has_flag((int32_t)L_21, (int32_t)L_22);
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_24 = ___0_joint;
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, int32_t, int32_t* >::Invoke(5 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, __this, L_24, (&V_2));
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_26 = V_2;
		bool L_27;
		L_27 = VirtualFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, __this, L_26, (&V_3));
		G_B9_0 = ((int32_t)(L_27));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B9_0 = 0;
	}

IL_00a9:
	{
		V_6 = (bool)G_B9_0;
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00da;
		}
	}
	{
		// DebugGizmos.Color = _boneColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->____boneColor_6;
		il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_29;
		// DebugGizmos.LineWidth = LineWidth;
		float L_30;
		L_30 = SkeletonDebugGizmos_get_LineWidth_m013766A82B0C6E2209216FD7386E8C5CF6B7834B(__this, NULL);
		((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = L_30;
		// DebugGizmos.DrawLine(pose.position, parentPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		DebugGizmos_DrawLine_m8E20870427C2144F9AFCD6514B7056D3826EA72A(L_32, L_34, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_00da:
	{
	}

IL_00db:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// private VisibilityFlags _visibility =
		//     VisibilityFlags.Axes | VisibilityFlags.Joints;
		__this->____visibility_4 = 3;
		// private Color _jointColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->____jointColor_5 = L_0;
		// private Color _boneColor = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		__this->____boneColor_6 = L_1;
		// private float _radius = 0.02f;
		__this->____radius_7 = (0.0199999996f);
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
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_MinTimeInState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyPoseComparerActiveState_get_MinTimeInState_m5325E973BEA5F7EDDD18A7AD52C696165BB26FBD (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// get => _minTimeInState;
		float L_0 = __this->____minTimeInState_9;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::set_MinTimeInState(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_set_MinTimeInState_m51B84C0A1C74D6094BF5C640BF4C9F853941E4E5 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _minTimeInState = value;
		float L_0 = ___0_value;
		__this->____minTimeInState_9 = L_0;
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState> Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_FeatureStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// _featureStates;
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_0 = __this->____featureStates_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_Awake_m630283E2FA306784DE340BFE9799454A7BE6A7AA (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* G_B2_0 = NULL;
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* G_B2_1 = NULL;
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* G_B1_0 = NULL;
	BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* G_B1_1 = NULL;
	{
		// PoseA = _poseA as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____poseA_4;
		__this->___PoseA_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseA_5), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// PoseB = _poseB as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->____poseB_6;
		__this->___PoseB_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseB_7), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// _timeProvider = () => Time.time;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = ((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* L_4 = ((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_5 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255_RuntimeMethod_var), NULL);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_6 = L_5;
		((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0043:
	{
		NullCheck(G_B2_1);
		G_B2_1->____timeProvider_11 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____timeProvider_11), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_Start_mE57F641CEBB81026DCBFA04103B9D9F9910F659F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA2E47AB1A65A82CB5A7C47C030B016CF800FDEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF601D7FB14510B9AF9F00A3CE377C095A91361B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.AssertField(PoseA, nameof(PoseA));
		RuntimeObject* L_0 = __this->___PoseA_5;
		AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE(__this, L_0, _stringLiteralF601D7FB14510B9AF9F00A3CE377C095A91361B0, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var);
		// this.AssertField(PoseB, nameof(PoseB));
		RuntimeObject* L_1 = __this->___PoseB_7;
		AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE(__this, L_1, _stringLiteralDA2E47AB1A65A82CB5A7C47C030B016CF800FDEE, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_get_Active_mB49EFC3B54335C43D131958A0575CC253DB8FF3B (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD V_4;
	memset((&V_4), 0, sizeof(V_4));
	JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* V_5 = NULL;
	float V_6 = 0.0f;
	bool V_7 = false;
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	float G_B7_0 = 0.0f;
	int32_t G_B10_0 = 0;
	{
		// if (!isActiveAndEnabled)
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0131;
	}

IL_0016:
	{
		// bool wasActive = _internalActive;
		bool L_2 = __this->____internalActive_13;
		V_0 = L_2;
		// _internalActive = true;
		__this->____internalActive_13 = (bool)1;
		// foreach (var config in _configs)
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_3 = __this->____configs_8;
		NullCheck(L_3);
		Enumerator_t4F0E8D43F945B755486DBD848B3844A17545BDBD L_4;
		L_4 = List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6(L_3, List_1_GetEnumerator_m908DBF89A3C2143E79D8478535AA25E6FF7854E6_RuntimeMethod_var);
		V_4 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287((&V_4), Enumerator_Dispose_m3FDEBC46F713FE78013EC56AF9E8EB0F9573F287_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bd_1;
			}

IL_0037_1:
			{
				// foreach (var config in _configs)
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_5;
				L_5 = Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_inline((&V_4), Enumerator_get_Current_mB2ED08EA71697DDE7DB72680DE5927991D992746_RuntimeMethod_var);
				V_5 = L_5;
				// float maxDelta = wasActive ?
				//                  config.MaxDelta + config.Width / 2f :
				//                  config.MaxDelta - config.Width / 2f;
				bool L_6 = V_0;
				if (L_6)
				{
					goto IL_005b_1;
				}
			}
			{
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_7 = V_5;
				NullCheck(L_7);
				float L_8 = L_7->___MaxDelta_1;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_9 = V_5;
				NullCheck(L_9);
				float L_10 = L_9->___Width_2;
				G_B7_0 = ((float)il2cpp_codegen_subtract(L_8, ((float)(L_10/(2.0f)))));
				goto IL_0070_1;
			}

IL_005b_1:
			{
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_11 = V_5;
				NullCheck(L_11);
				float L_12 = L_11->___MaxDelta_1;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_13 = V_5;
				NullCheck(L_13);
				float L_14 = L_13->___Width_2;
				G_B7_0 = ((float)il2cpp_codegen_add(L_12, ((float)(L_14/(2.0f)))));
			}

IL_0070_1:
			{
				V_6 = G_B7_0;
				// bool withinDelta = GetJointDelta(config.Joint, out float delta) &&
				//                    Mathf.Abs(delta) <= maxDelta;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_15 = V_5;
				NullCheck(L_15);
				int32_t L_16 = L_15->___Joint_0;
				bool L_17;
				L_17 = BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F(__this, L_16, (&V_8), NULL);
				if (!L_17)
				{
					goto IL_0093_1;
				}
			}
			{
				float L_18 = V_8;
				float L_19;
				L_19 = fabsf(L_18);
				float L_20 = V_6;
				G_B10_0 = ((((int32_t)((!(((float)L_19) <= ((float)L_20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0094_1;
			}

IL_0093_1:
			{
				G_B10_0 = 0;
			}

IL_0094_1:
			{
				V_7 = (bool)G_B10_0;
				// _featureStates[config] = new BodyPoseComparerFeatureState(delta, maxDelta);
				Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_21 = __this->____featureStates_10;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_22 = V_5;
				float L_23 = V_8;
				float L_24 = V_6;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_25;
				memset((&L_25), 0, sizeof(L_25));
				BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0((&L_25), L_23, L_24, /*hidden argument*/NULL);
				NullCheck(L_21);
				Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE(L_21, L_22, L_25, Dictionary_2_set_Item_m1DF7EF16D3CF82FA7E99B23F417942F6BFB862EE_RuntimeMethod_var);
				// _internalActive &= withinDelta;
				bool L_26 = __this->____internalActive_13;
				bool L_27 = V_7;
				__this->____internalActive_13 = (bool)((int32_t)((int32_t)L_26&(int32_t)L_27));
			}

IL_00bd_1:
			{
				// foreach (var config in _configs)
				bool L_28;
				L_28 = Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97((&V_4), Enumerator_MoveNext_mD2F0DEA3ADB0211F0EC234999EAADC71A6541B97_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_00da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		// float time = _timeProvider();
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_29 = __this->____timeProvider_11;
		NullCheck(L_29);
		float L_30;
		L_30 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_29, NULL);
		V_1 = L_30;
		// if (wasActive != _internalActive)
		bool L_31 = V_0;
		bool L_32 = __this->____internalActive_13;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) == ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_0101;
		}
	}
	{
		// _lastStateChangeTime = time;
		float L_34 = V_1;
		__this->____lastStateChangeTime_14 = L_34;
	}

IL_0101:
	{
		// if (time - _lastStateChangeTime >= _minTimeInState)
		float L_35 = V_1;
		float L_36 = __this->____lastStateChangeTime_14;
		float L_37 = __this->____minTimeInState_9;
		V_10 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_35, L_36))) >= ((float)L_37)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_0128;
		}
	}
	{
		// _isActive = _internalActive;
		bool L_39 = __this->____internalActive_13;
		__this->____isActive_12 = L_39;
	}

IL_0128:
	{
		// return _isActive;
		bool L_40 = __this->____isActive_12;
		V_3 = L_40;
		goto IL_0131;
	}

IL_0131:
	{
		// }
		bool L_41 = V_3;
		return L_41;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::GetJointDelta(Oculus.Interaction.Body.Input.BodyJointId,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseComparerActiveState_GetJointDelta_m5CA67337E2CA66E0CD49D625A28565CF5478C73F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, int32_t ___0_joint, float* ___1_delta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!PoseA.GetJointPoseLocal(joint, out Pose localA) ||
		//     !PoseB.GetJointPoseLocal(joint, out Pose localB))
		RuntimeObject* L_0 = __this->___PoseA_5;
		int32_t L_1 = ___0_joint;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = __this->___PoseB_7;
		int32_t L_4 = ___0_joint;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(3 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_3, L_4, (&V_1));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// delta = 0;
		float* L_7 = ___1_delta;
		*((float*)L_7) = (float)(0.0f);
		// return false;
		V_3 = (bool)0;
		goto IL_004c;
	}

IL_0035:
	{
		// delta = Quaternion.Angle(localA.rotation, localB.rotation);
		float* L_8 = ___1_delta;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9.___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___rotation_1;
		float L_13;
		L_13 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_10, L_12, NULL);
		*((float*)L_8) = (float)L_13;
		// return true;
		V_3 = (bool)1;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectAllBodyPoseComparerActiveState(Oculus.Interaction.Body.PoseDetection.IBodyPose,Oculus.Interaction.Body.PoseDetection.IBodyPose,System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectAllBodyPoseComparerActiveState_m4B819C90B11ECB844367E6B85FF5A1D350E4744F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_poseA, RuntimeObject* ___1_poseB, RuntimeObject* ___2_configs, const RuntimeMethod* method) 
{
	{
		// InjectPoseA(poseA);
		RuntimeObject* L_0 = ___0_poseA;
		BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0(__this, L_0, NULL);
		// InjectPoseB(poseB);
		RuntimeObject* L_1 = ___1_poseB;
		BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421(__this, L_1, NULL);
		// InjectJoints(configs);
		RuntimeObject* L_2 = ___2_configs;
		BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseA(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseA_mF292468D28C4D9E62D17E6E24609D9CEF8C4D5A0 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_poseA, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poseA = poseA as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_poseA;
		__this->____poseA_4 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poseA_4), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// PoseA = poseA;
		RuntimeObject* L_1 = ___0_poseA;
		__this->___PoseA_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseA_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectPoseB(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectPoseB_mED162E97D23C1A1ECA9FC179B509872E50E24421 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_poseB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _poseB = poseB as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_poseB;
		__this->____poseB_6 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poseB_6), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// PoseB = poseB;
		RuntimeObject* L_1 = ___0_poseB;
		__this->___PoseB_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PoseB_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectJoints(System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectJoints_m42232634AC6515C850B24DAFE75529CFAF8E141F (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, RuntimeObject* ___0_configs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _configs = new List<JointComparerConfig>(configs);
		RuntimeObject* L_0 = ___0_configs;
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_1 = (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*)il2cpp_codegen_object_new(List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C(L_1, L_0, List_1__ctor_mAF8C48BCAC2EDC202429E88235F168784B2BDA6C_RuntimeMethod_var);
		__this->____configs_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configs_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::InjectOptionalTimeProvider(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState_InjectOptionalTimeProvider_m290845DB15F7884CF874A3573BCA6627A24DCA5E (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___0_timeProvider, const RuntimeMethod* method) 
{
	{
		// _timeProvider = timeProvider;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___0_timeProvider;
		__this->____timeProvider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____timeProvider_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveState__ctor_mDEF64F4E87ECD9A3B4E4A30A2348659B7E22E7D8 (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointComparerConfig> _configs =
		//     new List<JointComparerConfig>()
		//     {
		//         new JointComparerConfig()
		//     };
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_0 = (List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF*)il2cpp_codegen_object_new(List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924(L_0, List_1__ctor_mE653FD76D092CCA9A0D41A8B3E18E682990B6924_RuntimeMethod_var);
		List_1_tC39AFF6C1BF42365B47C52570B92251AD98409CF* L_1 = L_0;
		JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_2 = (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373*)il2cpp_codegen_object_new(JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_inline(L_1, L_2, List_1_Add_m112C546609A7835DE47BA1F5AA9AC3FC76D0160B_RuntimeMethod_var);
		__this->____configs_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configs_8), (void*)L_1);
		// private float _minTimeInState = 0.05f;
		__this->____minTimeInState_9 = (0.0500000007f);
		// private Dictionary<JointComparerConfig, BodyPoseComparerFeatureState> _featureStates =
		//     new Dictionary<JointComparerConfig, BodyPoseComparerFeatureState>();
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_3 = (Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D*)il2cpp_codegen_object_new(Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94(L_3, Dictionary_2__ctor_mB98A75627BAA4DA4D9539B64FBCFEBBA619CCE94_RuntimeMethod_var);
		__this->____featureStates_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____featureStates_10), (void*)L_3);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0 (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* __this, float ___0_delta, float ___1_maxDelta, const RuntimeMethod* method) 
{
	{
		// Delta = delta;
		float L_0 = ___0_delta;
		__this->___Delta_0 = L_0;
		// MaxDelta = maxDelta;
		float L_1 = ___1_maxDelta;
		__this->___MaxDelta_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0_AdjustorThunk (RuntimeObject* __this, float ___0_delta, float ___1_maxDelta, const RuntimeMethod* method)
{
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B*>(__this + _offset);
	BodyPoseComparerFeatureState__ctor_mE1BB014138C51E7409D52D0E98C09FFC38EE6CB0(_thisAdjusted, ___0_delta, ___1_maxDelta, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointComparerConfig__ctor_mB7E7843A59084E2998297C09A83FC38CB99672E5 (JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* __this, const RuntimeMethod* method) 
{
	{
		// public BodyJointId Joint = BodyJointId.Body_Head;
		__this->___Joint_0 = 7;
		// public float MaxDelta = 30f;
		__this->___MaxDelta_1 = (30.0f);
		// public float Width = 4f;
		__this->___Width_2 = (4.0f);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m04A77931B0D6E2B25221439C25DA244E6D453395 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* L_0 = (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825*)il2cpp_codegen_object_new(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994(L_0, NULL);
		((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE018FB386A891F828316864CF745171796CE994 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c::<Awake>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__18_0_mBA57507B52C040F9978922264B375F018C559255 (U3CU3Ec_t07DFAD15509782281461EA24F08A267BCD5B6825* __this, const RuntimeMethod* method) 
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
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
// System.Single Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyPoseComparerActiveStateDebugVisual_get_Radius_mE96AAA8959E46907639FAE8B6B943183FE212E0D (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// get => _radius;
		float L_0 = __this->____radius_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::set_Radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_set_Radius_m0BC5DE886751BB3588E860FDE7A517F1DCB8B302 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _radius = value;
		float L_0 = ___0_value;
		__this->____radius_8 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Awake_m21FF3FFD790D3FB40A9593D292FD30F9F9105EA9 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BodyPose = _bodyPose as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose_5;
		__this->___BodyPose_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Start_m89F599F394330A84412BECE574074CE6036CF28A (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisBodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792_m3AC57501753669BB5785133ABBC5ED5ECE73982E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C4B7BB6F16715687781EE66CF5D32AE3F4DB8AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C9AA532905C162827F4D19C545C6BB49B5358CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.AssertField(_bodyPoseComparer, nameof(_bodyPoseComparer));
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = __this->____bodyPoseComparer_4;
		AssertUtils_AssertField_TisBodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792_m3AC57501753669BB5785133ABBC5ED5ECE73982E(__this, L_0, _stringLiteral6C4B7BB6F16715687781EE66CF5D32AE3F4DB8AA, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisBodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792_m3AC57501753669BB5785133ABBC5ED5ECE73982E_RuntimeMethod_var);
		// this.AssertField(BodyPose, nameof(BodyPose));
		RuntimeObject* L_1 = __this->___BodyPose_6;
		AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE(__this, L_1, _stringLiteral6C9AA532905C162827F4D19C545C6BB49B5358CC, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_mE30B0A90589EB6AC0473FD405E017CBFF00279FE_RuntimeMethod_var);
		// this.AssertField(_root, nameof(BodyPose));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____root_7;
		AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1(__this, L_2, _stringLiteral6C9AA532905C162827F4D19C545C6BB49B5358CC, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m92B4032E52329CDE2E08C24541423F1A198A86E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_Update_mF56F44D2DFEA25BD653A0B3BB2EB47CFDA080615 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// DrawJointSpheres();
		BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::DrawJointSpheres()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_DrawJointSpheres_mBE14527289E1A8B64DDA7DE905A9A4989478E7F2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	float V_11 = 0.0f;
	{
		// var featureStates = _bodyPoseComparer.FeatureStates;
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = __this->____bodyPoseComparer_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline(L_0, NULL);
		V_0 = L_1;
		// foreach (var kvp in featureStates)
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>>::GetEnumerator() */, IEnumerable_1_t3A0D91D91E0A9948017E62ACCBAED91144F0B581_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0103:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_010d;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_010d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f6_1;
			}

IL_001a_1:
			{
				// foreach (var kvp in featureStates)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_tB0829576FEB1FFAC01ACCBBACEFE41AD2D77C7D5 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig,Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/BodyPoseComparerFeatureState>>::get_Current() */, IEnumerator_1_tE715F175B187B26117618F8FD35698E7AFB02AAC_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// BodyJointId joint = kvp.Key.Joint;
				JointComparerConfig_tE73309F5035F36DCBF32D83A4B2D24E17FDB3373* L_8;
				L_8 = KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_inline((&V_2), KeyValuePair_2_get_Key_m3EFBC838E71F868167B99035CD020B111AE99217_RuntimeMethod_var);
				NullCheck(L_8);
				int32_t L_9 = L_8->___Joint_0;
				V_3 = L_9;
				// var state = kvp.Value;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_10;
				L_10 = KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_inline((&V_2), KeyValuePair_2_get_Value_m9E65C996CDD8722E45DDB4638319DCDAF1C6C662_RuntimeMethod_var);
				V_4 = L_10;
				// if (BodyPose.GetJointPoseFromRoot(joint, out Pose pose))
				RuntimeObject* L_11 = __this->___BodyPose_6;
				int32_t L_12 = V_3;
				NullCheck(L_11);
				bool L_13;
				L_13 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_11, L_12, (&V_5));
				V_6 = L_13;
				bool L_14 = V_6;
				if (!L_14)
				{
					goto IL_00f5_1;
				}
			}
			{
				// Vector3 jointPos = _root.TransformPoint(pose.position);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->____root_7;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16.___position_0;
				NullCheck(L_15);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
				L_18 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_15, L_17, NULL);
				V_7 = L_18;
				// if (state.Delta <= state.MaxDelta)
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_19 = V_4;
				float L_20 = L_19.___Delta_0;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_21 = V_4;
				float L_22 = L_21.___MaxDelta_1;
				V_9 = (bool)((((int32_t)((!(((float)L_20) <= ((float)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_23 = V_9;
				if (!L_23)
				{
					goto IL_0088_1;
				}
			}
			{
				// color = Color.green;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
				L_24 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
				V_8 = L_24;
				goto IL_00d3_1;
			}

IL_0088_1:
			{
				// else if (state.MaxDelta > 0)
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_25 = V_4;
				float L_26 = L_25.___MaxDelta_1;
				V_10 = (bool)((((float)L_26) > ((float)(0.0f)))? 1 : 0);
				bool L_27 = V_10;
				if (!L_27)
				{
					goto IL_00ca_1;
				}
			}
			{
				// float amt = (state.Delta / state.MaxDelta) / 2f;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_28 = V_4;
				float L_29 = L_28.___Delta_0;
				BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_30 = V_4;
				float L_31 = L_30.___MaxDelta_1;
				V_11 = ((float)(((float)(L_29/L_31))/(2.0f)));
				// color = Color.Lerp(Color.yellow, Color.red, amt);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
				L_32 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
				L_33 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
				float L_34 = V_11;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
				L_35 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_32, L_33, L_34, NULL);
				V_8 = L_35;
				goto IL_00d3_1;
			}

IL_00ca_1:
			{
				// color = Color.red;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
				L_36 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
				V_8 = L_36;
			}

IL_00d3_1:
			{
				// DebugGizmos.LineWidth = _radius / 2f;
				float L_37 = __this->____radius_8;
				il2cpp_codegen_runtime_class_init_inline(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var);
				((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___LineWidth_12 = ((float)(L_37/(2.0f)));
				// DebugGizmos.Color = color;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_8;
				((DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_StaticFields*)il2cpp_codegen_static_fields_for(DebugGizmos_t4647554591DE598C19228C60E9C788C39335D027_il2cpp_TypeInfo_var))->___Color_11 = L_38;
				// DebugGizmos.DrawPoint(jointPos);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_7;
				DebugGizmos_DrawPoint_mE1FA1C94418F3625481A947DCCD48019D84370E7(L_39, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
			}

IL_00f5_1:
			{
			}

IL_00f6_1:
			{
				// foreach (var kvp in featureStates)
				RuntimeObject* L_40 = V_1;
				NullCheck(L_40);
				bool L_41;
				L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
				if (L_41)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_010e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectAllBodyPoseComparerActiveStateDebugVisual(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState,Oculus.Interaction.Body.PoseDetection.IBodyPose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectAllBodyPoseComparerActiveStateDebugVisual_m3540146F7CF19EF7B77D70615F7C058EB8A341A2 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___0_bodyPoseComparer, RuntimeObject* ___1_bodyPose, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_root, const RuntimeMethod* method) 
{
	{
		// InjectBodyPoseComparer(bodyPoseComparer);
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = ___0_bodyPoseComparer;
		BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05(__this, L_0, NULL);
		// InjectBodyPose(bodyPose);
		RuntimeObject* L_1 = ___1_bodyPose;
		BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126(__this, L_1, NULL);
		// InjectRootTransform(root);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___2_root;
		BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectRootTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectRootTransform_mD5A9A14B079DAC18E70A74917736B42C132E0310 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, const RuntimeMethod* method) 
{
	{
		// _root = root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_root;
		__this->____root_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPoseComparer(Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPoseComparer_m0DD532E60E7C038959B73300C94FB3B9ACE97F05 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* ___0_bodyPoseComparer, const RuntimeMethod* method) 
{
	{
		// _bodyPoseComparer = bodyPoseComparer;
		BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* L_0 = ___0_bodyPoseComparer;
		__this->____bodyPoseComparer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPoseComparer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual_InjectBodyPose_m5167288CC7EB0E4EB6CBE880B8A165D954A11126 (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bodyPose = bodyPose as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_bodyPose;
		__this->____bodyPose_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// BodyPose = bodyPose;
		RuntimeObject* L_1 = ___0_bodyPose;
		__this->___BodyPose_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveStateDebugVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseComparerActiveStateDebugVisual__ctor_m15EC812AB97DC5AFBB5C3951554B8700E0971FFE (BodyPoseComparerActiveStateDebugVisual_tCD2A40725612EDFF0A33844C5C32998EA0DA8BE9* __this, const RuntimeMethod* method) 
{
	{
		// private float _radius = 0.1f;
		__this->____radius_8 = (0.100000001f);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::add_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_add_WhenBodyPoseUpdated_m0DC252413B8BF339AFBC7D46B5787F31CAC5CCAE (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::remove_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_remove_WhenBodyPoseUpdated_m08A78BA38F7304118E101A0DD98E2A3729E3689A (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseData_GetJointPoseFromRoot_mC3AB50A49D0923CA9F6B266539FC14BB2E175003 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _posesFromRoot.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____posesFromRoot_6;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseData_GetJointPoseLocal_m2792FB6CCE49CAE44F2B5EFD2090FF1DCD083972 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _localPoses.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____localPoses_7;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.BodyPoseData::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseData_get_SkeletonMapping_mD5EEABD236A654C492431BBD661302B08A3D6373 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping => _mapping;
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_0 = __this->____mapping_8;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::SetBodyPose(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_SetBodyPose_m309AE5565051D6DD420707F2D302F80AA49F8A9D (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B6_0 = 0;
	{
		// _jointData.Clear();
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_0 = __this->____jointData_5;
		NullCheck(L_0);
		List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_inline(L_0, List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_RuntimeMethod_var);
		// foreach (var joint in body.SkeletonMapping.Joints)
		RuntimeObject* L_1 = ___0_body;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_4;
		L_4 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0091_1;
			}

IL_0021_1:
			{
				// foreach (var joint in body.SkeletonMapping.Joints)
				int32_t L_5;
				L_5 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_5;
				// if (body.GetJointPoseLocal(joint, out Pose local) &&
				//     body.GetJointPoseFromRoot(joint, out Pose fromRoot) &&
				//     body.SkeletonMapping.TryGetParentJointId(joint, out BodyJointId parent))
				RuntimeObject* L_6 = ___0_body;
				int32_t L_7 = V_1;
				NullCheck(L_6);
				bool L_8;
				L_8 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_6, L_7, (&V_2));
				if (!L_8)
				{
					goto IL_0050_1;
				}
			}
			{
				RuntimeObject* L_9 = ___0_body;
				int32_t L_10 = V_1;
				NullCheck(L_9);
				bool L_11;
				L_11 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_9, L_10, (&V_3));
				if (!L_11)
				{
					goto IL_0050_1;
				}
			}
			{
				RuntimeObject* L_12 = ___0_body;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_12);
				int32_t L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_13, L_14, (&V_4));
				G_B6_0 = ((int32_t)(L_15));
				goto IL_0051_1;
			}

IL_0050_1:
			{
				G_B6_0 = 0;
			}

IL_0051_1:
			{
				V_5 = (bool)G_B6_0;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0090_1;
				}
			}
			{
				// _jointData.Add(new JointData()
				// {
				//     JointId = joint,
				//     ParentId = parent,
				//     PoseFromRoot = fromRoot,
				//     LocalPose = local,
				// });
				List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_17 = __this->____jointData_5;
				il2cpp_codegen_initobj((&V_6), sizeof(JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE));
				int32_t L_18 = V_1;
				(&V_6)->___JointId_0 = L_18;
				int32_t L_19 = V_4;
				(&V_6)->___ParentId_1 = L_19;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_3;
				(&V_6)->___PoseFromRoot_2 = L_20;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_2;
				(&V_6)->___LocalPose_3 = L_21;
				JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_22 = V_6;
				NullCheck(L_17);
				List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_inline(L_17, L_22, List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_RuntimeMethod_var);
			}

IL_0090_1:
			{
			}

IL_0091_1:
			{
				// foreach (var joint in body.SkeletonMapping.Joints)
				bool L_23;
				L_23 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// Rebuild();
		BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD(__this, NULL);
		// WhenBodyPoseUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = __this->___WhenBodyPoseUpdated_4;
		NullCheck(L_24);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_24, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_OnBeforeSerialize_m8D9D14F4662BCA3C182681B89588B2669007C879 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_OnAfterDeserialize_mEAFCF5E9DFA60FEE55A312156293D3FFE6406AAB (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	{
		// Rebuild();
		BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData_Rebuild_m47500E122F0465534ED1A214779BEEC545D2FEAD (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// _localPoses.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____localPoses_7;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _posesFromRoot.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____posesFromRoot_6;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _mapping.Joints.Clear();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_2 = __this->____mapping_8;
		NullCheck(L_2);
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_3 = L_2->___Joints_0;
		NullCheck(L_3);
		HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1(L_3, HashSet_1_Clear_m867A213C7D8C5847F7E92D5BFAB1698893FCAAF1_RuntimeMethod_var);
		// _mapping.JointToParent.Clear();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_4 = __this->____mapping_8;
		NullCheck(L_4);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_5 = L_4->___JointToParent_1;
		NullCheck(L_5);
		Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9(L_5, Dictionary_2_Clear_m9EF3F97EE8606366BC81B6286AD98D9A53B60DB9_RuntimeMethod_var);
		// for (int i = 0; i < _jointData.Count; ++i)
		V_0 = 0;
		goto IL_00f9;
	}

IL_0042:
	{
		// _localPoses[_jointData[i].JointId] =
		//     _jointData[i].LocalPose;
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_6 = __this->____localPoses_7;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_7 = __this->____jointData_5;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_9;
		L_9 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_7, L_8, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_10 = L_9.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_11 = __this->____jointData_5;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_13;
		L_13 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_11, L_12, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = L_13.___LocalPose_3;
		NullCheck(L_6);
		Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_6, L_10, L_14, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		// _posesFromRoot[_jointData[i].JointId] =
		//     _jointData[i].PoseFromRoot;
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_15 = __this->____posesFromRoot_6;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_16 = __this->____jointData_5;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_18;
		L_18 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_16, L_17, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_19 = L_18.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_20 = __this->____jointData_5;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_22;
		L_22 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_20, L_21, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = L_22.___PoseFromRoot_2;
		NullCheck(L_15);
		Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_15, L_19, L_23, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		// _mapping.Joints.Add(
		//     _jointData[i].JointId);
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_24 = __this->____mapping_8;
		NullCheck(L_24);
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_25 = L_24->___Joints_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_26 = __this->____jointData_5;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_28;
		L_28 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_26, L_27, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_29 = L_28.___JointId_0;
		NullCheck(L_25);
		bool L_30;
		L_30 = HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB(L_25, L_29, HashSet_1_Add_mA3C1562A8963EF15E97AFFEB682E4A14F62748CB_RuntimeMethod_var);
		// _mapping.JointToParent.Add(
		//     _jointData[i].JointId, _jointData[i].ParentId);
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_31 = __this->____mapping_8;
		NullCheck(L_31);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_32 = L_31->___JointToParent_1;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_33 = __this->____jointData_5;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_35;
		L_35 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_33, L_34, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_36 = L_35.___JointId_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_37 = __this->____jointData_5;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_39;
		L_39 = List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2(L_37, L_38, List_1_get_Item_mAF6351C555409BB3F379E0687294628428FE45F2_RuntimeMethod_var);
		int32_t L_40 = L_39.___ParentId_1;
		NullCheck(L_32);
		Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A(L_32, L_36, L_40, Dictionary_2_Add_mF3F6430D03FF2419F1AADC659C4C2C90A635432A_RuntimeMethod_var);
		// for (int i = 0; i < _jointData.Count; ++i)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f9:
	{
		// for (int i = 0; i < _jointData.Count; ++i)
		int32_t L_42 = V_0;
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_43 = __this->____jointData_5;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_inline(L_43, List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_42) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_1;
		if (L_45)
		{
			goto IL_0042;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseData__ctor_mD69C2DCC785A53A4B47DF3F53F4DD0048278F848 (BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	BodyPoseData_t3EB0945D3D2664B74B39756D56F6CAC79C4DFBC9* G_B1_1 = NULL;
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_2 = ((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated_4), (void*)G_B2_0);
		// private List<JointData> _jointData = new List<JointData>();
		List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* L_5 = (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*)il2cpp_codegen_object_new(List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8(L_5, List_1__ctor_mEB48C6DE524BE79A6EA9B0DE145A7C1305D117D8_RuntimeMethod_var);
		__this->____jointData_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointData_5), (void*)L_5);
		// private Dictionary<BodyJointId, Pose> _posesFromRoot =
		//     new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_6 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_6, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____posesFromRoot_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot_6), (void*)L_6);
		// private Dictionary<BodyJointId, Pose> _localPoses =
		//     new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_7 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_7, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____localPoses_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses_7), (void*)L_7);
		// private Mapping _mapping = new Mapping();
		Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* L_8 = (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C*)il2cpp_codegen_object_new(Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE(L_8, NULL);
		__this->____mapping_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping_8), (void*)L_8);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints_m2D30235FE8177893DC93393BE1CD674AC641ECB8 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerableHashSet<BodyJointId> ISkeletonMapping.Joints => Joints;
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = __this->___Joints_0;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId_m4C6551B1C27A94C4AE64BDC310387CE39A549518 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, int32_t ___0_jointId, int32_t* ___1_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JointToParent.TryGetValue(jointId, out parent);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_0 = __this->___JointToParent_1;
		int32_t L_1 = ___0_jointId;
		int32_t* L_2 = ___1_parent;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC(L_0, L_1, L_2, Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EnumerableHashSet<BodyJointId> Joints =
		//     new EnumerableHashSet<BodyJointId>();
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*)il2cpp_codegen_object_new(EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13(L_0, EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		__this->___Joints_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Joints_0), (void*)L_0);
		// public Dictionary<BodyJointId, BodyJointId> JointToParent =
		//     new Dictionary<BodyJointId, BodyJointId>();
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_1 = (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*)il2cpp_codegen_object_new(Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB(L_1, Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		__this->___JointToParent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JointToParent_1), (void*)L_1);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE28EBDB5735F7747B668B15B2772E24DF30BE2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_0 = (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90*)il2cpp_codegen_object_new(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719(L_0, NULL);
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<.ctor>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Awake_m1F2FAE9E28854672B894612994E02E5C0C645E2C (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BodyPose = _bodyPose as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose_8;
		__this->___BodyPose_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Start_mA0FE7E685A0C2BE1BCCD57C9D34E116AE7AEA685 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNotNull(BodyPose);
		RuntimeObject* L_0 = __this->___BodyPose_9;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3(L_0, Assert_IsNotNull_TisIBodyPose_t2BA886A75367D7351AACFE310468790C66930097_m493FE5BDF0DAA7BB9C20EC20CF7B178CDE6775E3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Update_m2648C2A6347BF946016DF0D357E2B9F82DB66A1B (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_001a_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				// Draw(joint, GetVisibilityFlags());
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_0032_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// }
		return;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// VisibilityFlags modifiedFlags = Visibility;
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		// if (HasNegativeScale)
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// modifiedFlags &= ~VisibilityFlags.Axes;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3&((int32_t)-3)));
	}

IL_0019:
	{
		// return modifiedFlags;
		int32_t L_4 = V_0;
		V_2 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetWorldJointPose_m118B15E71FE7391486DCB4F9CECA70F2A3BA85CC (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___0_jointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (BodyPose.GetJointPoseFromRoot(jointId, out pose))
		RuntimeObject* L_0 = __this->___BodyPose_9;
		int32_t L_1 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// pose.position = transform.TransformPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___1_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___position_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_6, L_8, NULL);
		L_5->___position_0 = L_9;
		// pose.rotation = transform.rotation * pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = ___1_pose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = ___1_pose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_12, L_14, NULL);
		L_10->___rotation_1 = L_15;
		// return true;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_004a:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetParentJointId_m000322E4F958E7B722297A6C965DCA3634D09512 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___0_jointId, int32_t* ___1_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return BodyPose.SkeletonMapping.TryGetParentJointId(jointId, out parent);
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___0_jointId;
		int32_t* L_3 = ___1_parent;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectAllBodyJointDebugGizmos(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectAllBodyJointDebugGizmos_mBF057DE9337123DAE98C5C615AB60F71ED3B141A (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) 
{
	{
		// InjectBodyPose(bodyPose);
		RuntimeObject* L_0 = ___0_bodyPose;
		BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___0_bodyPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bodyPose = bodyPose as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_bodyPose;
		__this->____bodyPose_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// BodyPose = bodyPose;
		RuntimeObject* L_1 = ___0_bodyPose;
		__this->___BodyPose_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos__ctor_m90242A1FA4DC5DDF6AC92D02BB2D37978A393FE8 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::add_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_add_WhenBodyPoseUpdated_m4F367E0747FC9D30C136610A4D21A3C2E97ED764 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::remove_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_remove_WhenBodyPoseUpdated_m878542A32B4026D1013A456977681CDC5DDBF995 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_get_AutoUpdate_m1B19BF70341673621096BEECA9C3284C8E1A6BAC (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// get => _autoUpdate;
		bool L_0 = __this->____autoUpdate_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::set_AutoUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_set_AutoUpdate_m281E0DF37FCE1DAB2B973B90684B83FD345F0A5E (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _autoUpdate = value;
		bool L_0 = ___0_value;
		__this->____autoUpdate_7 = L_0;
		return;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseFromBody_get_SkeletonMapping_m79DFFF5AD444C8C2AC87E9629128631A4871D8FD (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => Body.SkeletonMapping;
		RuntimeObject* L_0 = __this->___Body_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseLocal_m237F69CDB94CFE83C54A20DB0F9F6F7A5A96D68C (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseFromRoot_mC6AE256BAA70695B7A8C89A0FC2B12139A208088 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesFromRoot.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesFromRoot_10;
		int32_t L_1 = ___0_bodyJointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_pose;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Awake_m3C62CA5606E08599B6148463371FD03F9C9D7BE2 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_0, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesLocal_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesLocal_9), (void*)L_0);
		// _jointPosesFromRoot = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_1, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesFromRoot_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesFromRoot_10), (void*)L_1);
		// Body = _body as IBody;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->____body_5;
		__this->___Body_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Start_m18CD67AB3AF54313EB3C7EFBDBF98B25015DA023 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_8);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.AssertField(Body, nameof(Body));
		RuntimeObject* L_1 = __this->___Body_6;
		AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7(__this, L_1, _stringLiteral75E98C78538157035E0D0E268C0A2C76D23211BA, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, AssertUtils_AssertField_TisIBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_m00793637892563729E61078421E9DE8B749AB6D7_RuntimeMethod_var);
		// this.EndStart(ref _started);
		bool* L_2 = (&__this->____started_8);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnEnable_mC35E282A150221780C957F4A691D12A8FDA8F525 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Body.WhenBodyUpdated += Body_WhenBodyUpdated;
		RuntimeObject* L_2 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void Oculus.Interaction.Body.Input.IBody::add_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnDisable_mBB57DDE21523E881429E79588EB573CD071D0D59 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Body.WhenBodyUpdated -= Body_WhenBodyUpdated;
		RuntimeObject* L_2 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11 /* System.Void Oculus.Interaction.Body.Input.IBody::remove_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body_WhenBodyUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_autoUpdate)
		bool L_0 = __this->____autoUpdate_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// UpdatePose();
		PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	{
		// _jointPosesLocal.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _jointPosesFromRoot.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____jointPosesFromRoot_10;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// foreach (var joint in Body.SkeletonMapping.Joints)
		RuntimeObject* L_2 = __this->___Body_6;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_5;
		L_5 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0084_1;
			}

IL_0032_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_6;
				// if (Body.GetJointPoseLocal(joint,
				//     out Pose localPose))
				RuntimeObject* L_7 = __this->___Body_6;
				int32_t L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_7, L_8, (&V_2));
				V_4 = L_9;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_005f_1;
				}
			}
			{
				// _jointPosesLocal[joint] = localPose;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_11 = __this->____jointPosesLocal_9;
				int32_t L_12 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_11, L_12, L_13, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_005f_1:
			{
				// if (Body.GetJointPoseFromRoot(joint,
				//     out Pose poseFromRoot))
				RuntimeObject* L_14 = __this->___Body_6;
				int32_t L_15 = V_1;
				NullCheck(L_14);
				bool L_16;
				L_16 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_14, L_15, (&V_3));
				V_5 = L_16;
				bool L_17 = V_5;
				if (!L_17)
				{
					goto IL_0083_1;
				}
			}
			{
				// _jointPosesFromRoot[joint] = poseFromRoot;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_18 = __this->____jointPosesFromRoot_10;
				int32_t L_19 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_3;
				NullCheck(L_18);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_18, L_19, L_20, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0083_1:
			{
			}

IL_0084_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				bool L_21;
				L_21 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// WhenBodyPoseUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = __this->___WhenBodyPoseUpdated_4;
		NullCheck(L_22);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_22, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectAllPoseFromBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectAllPoseFromBody_m04B85AF80EBF8B7C2F19387F83AAA769393967A3 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	{
		// InjectBody(body);
		RuntimeObject* L_0 = ___0_body;
		PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___0_body, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _body = body as UnityEngine.Object;
		RuntimeObject* L_0 = ___0_body;
		__this->____body_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Body = body;
		RuntimeObject* L_1 = ___0_body;
		__this->___Body_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody__ctor_m93DB6B0461C2AFF46BE0CC634AD6F2B5955C1AC0 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B1_1 = NULL;
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_2 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated_4), (void*)G_B2_0);
		// private bool _autoUpdate = true;
		__this->____autoUpdate_7 = (bool)1;
		// protected bool _started = false;
		__this->____started_8 = (bool)0;
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE297FA05D8CD9E9E5891918A299A22431B08D6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_0 = (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9*)il2cpp_codegen_object_new(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E(L_0, NULL);
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<.ctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsConnected_m4BBC7B62898B592847FEDC68045AC3F6C63A51FF (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsConnected => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsHighConfidence_m0BFF1FFD4774604FAF7ADA1497C0949207D5BEBC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsHighConfidence => GetData().IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single Oculus.Interaction.Body.Input.Body::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Body_get_Scale_mADAE445C0468C2BB6930BCBBDC9810416233D8A6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Scale => GetData().RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => GetData().SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsTrackedDataValid => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::add_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_add_WhenBodyUpdated_m4B022B818252F0A0BBFAFB945DC2A6727EF899DC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::remove_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_remove_WhenBodyUpdated_mA9C5D98323F3666D16A3752C34226F26B42B3F18 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPose_mC4219B1E7D4EF11E74EE7258170353DF43C6AB20 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache_19;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		// return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseLocal_mE9642BCCA92EC6B2529B3F589A4A274F4F436735 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetLocalJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache_19;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		// return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseFromRoot_m69D84B629E83600E081F1345E40C0E791DBB763A (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___0_bodyJointId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___0_bodyJointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0051;
	}

IL_0034:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetJointPoseFromRoot(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = ___1_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_9 = __this->____jointPosesCache_19;
		int32_t L_10 = ___0_bodyJointId;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(L_9, L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_8 = L_11;
		// return true;
		V_1 = (bool)1;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetRootPose_m6C75EDBF0A1C9D10433029997E26279B13604A35 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___0_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid)
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_003a;
	}

IL_001e:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldRootPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___0_pose;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_5 = __this->____jointPosesCache_19;
		NullCheck(L_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8(L_5, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_4 = L_6;
		// return true;
		V_1 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_jointPosesCache == null)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		V_0 = (bool)((((RuntimeObject*)(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _jointPosesCache = new BodyJointsCache();
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)il2cpp_codegen_object_new(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705(L_2, NULL);
		__this->____jointPosesCache_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesCache_19), (void*)L_2);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_jointPosesCache != null
		//     && CurrentDataVersion != _jointPosesCache.LocalDataVersion)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = __this->____jointPosesCache_19;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// _jointPosesCache.Update(GetData(), CurrentDataVersion, _trackingSpace);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_5 = __this->____jointPosesCache_19;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6;
		L_6 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->____trackingSpace_17;
		NullCheck(L_5);
		BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8(L_5, L_6, L_7, L_8, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::Apply(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_Apply_m2265B8B3A62FE368E5A43B6001BACD7769B647C6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_MarkInputDataRequiresUpdate_m023BCD6AFEBC1A05252A6493085BDCF029492C01 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.MarkInputDataRequiresUpdate();
		DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC(__this, DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		// if (Started)
		bool L_0;
		L_0 = DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline(__this, DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// InitializeJointPosesCache();
		Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1(__this, NULL);
		// WhenBodyUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___WhenBodyUpdated_18;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body__ctor_m5939597A61F910B26A9F5F008F58BC849B3B9B0D (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B1_1 = NULL;
	{
		// public event Action WhenBodyUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_2 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyUpdated_18 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyUpdated_18), (void*)G_B2_0);
		il2cpp_codegen_runtime_class_init_inline(DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873(__this, DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B5F8F6C9982D2B9BB674F10EB59FD1E25D250B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_0 = (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84*)il2cpp_codegen_object_new(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40(L_0, NULL);
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::<.ctor>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyUpdated = delegate { };
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
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___0_value;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_JointPoses(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_JointPoses_m3BD13A56F9DD4E6EC6803871CD0D04F60F434FED (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___0_value;
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___0_value;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::CopyFrom(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_CopyFrom_m7E93AB9DB6DA8D6E02D3D45C12B2125A4854C854 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// SkeletonMapping = source.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0 = ___0_source;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline(__this, L_1, NULL);
		// Root = source.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_2 = ___0_source;
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_2, NULL);
		BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline(__this, L_3, NULL);
		// RootScale = source.RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_4 = ___0_source;
		NullCheck(L_4);
		float L_5;
		L_5 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_4, NULL);
		BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline(__this, L_5, NULL);
		// IsDataValid = source.IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6 = ___0_source;
		NullCheck(L_6);
		bool L_7;
		L_7 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_6, NULL);
		BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline(__this, L_7, NULL);
		// IsDataHighConfidence = source.IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_8 = ___0_source;
		NullCheck(L_8);
		bool L_9;
		L_9 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_8, NULL);
		BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline(__this, L_9, NULL);
		// SkeletonChangedCount = source.SkeletonChangedCount;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_10 = ___0_source;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline(L_10, NULL);
		BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline(__this, L_11, NULL);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		V_0 = 0;
		goto IL_0071;
	}

IL_0053:
	{
		// JointPoses[i] = source.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12;
		L_12 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(__this, NULL);
		int32_t L_13 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___0_source;
		NullCheck(L_14);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_15;
		L_15 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_18);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_20 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_21 = ___0_source;
		NullCheck(L_21);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22;
		L_22 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_21, NULL);
		NullCheck(L_22);
		V_1 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_0053;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset__ctor_mF8B6BB967E907A5ACA382FE386F6DD3C87A4E262 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose Root { get; set; } = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		// public float RootScale { get; set; } = 1f;
		__this->___U3CRootScaleU3Ek__BackingField_2 = (1.0f);
		// public bool IsDataValid { get; set; } = false;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = (bool)0;
		// public bool IsDataHighConfidence { get; set; } = false;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = (bool)0;
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_1);
		// public int SkeletonChangedCount { get; set; } = 0;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = 0;
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
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___0_value;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int LocalDataVersion { get; private set; } = -1;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = (-1);
		// private Pose[] _originalPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____originalPoses_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalPoses_2), (void*)L_0);
		// private Pose[] _posesFromRoot = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____posesFromRoot_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot_3), (void*)L_1);
		// private Pose[] _localPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____localPoses_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses_4), (void*)L_2);
		// private Pose[] _worldPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____worldPoses_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPoses_5), (void*)L_3);
		// public BodyJointsCache()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalDataVersion = -1;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, (-1), NULL);
		// _dirtyJointsFromRoot = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyJointsFromRoot_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyJointsFromRoot_9), (void*)L_4);
		// _dirtyLocalJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyLocalJoints_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyLocalJoints_10), (void*)L_5);
		// _dirtyWorldJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyWorldJoints_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyWorldJoints_11), (void*)L_6);
		// _localPosesCollection = new ReadOnlyBodyJointPoses(_localPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____localPoses_4;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_8 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_8, L_7, NULL);
		__this->____localPosesCollection_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPosesCollection_8), (void*)L_8);
		// _worldPosesCollection = new ReadOnlyBodyJointPoses(_worldPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____worldPoses_5;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_10 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_10, L_9, NULL);
		__this->____worldPosesCollection_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPosesCollection_7), (void*)L_10);
		// _posesFromRootCollection = new ReadOnlyBodyJointPoses(_posesFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____posesFromRoot_3;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_12 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_12, L_11, NULL);
		__this->____posesFromRootCollection_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRootCollection_6), (void*)L_12);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___0_data, int32_t ___1_dataVersion, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_trackingSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// LocalDataVersion = dataVersion;
		int32_t L_0 = ___1_dataVersion;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, L_0, NULL);
		// _mapping = data.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_1 = ___0_data;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_1, NULL);
		__this->____mapping_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping_15), (void*)L_2);
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		V_0 = 0;
		goto IL_003d;
	}

IL_0019:
	{
		// _dirtyJointsFromRoot[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____dirtyJointsFromRoot_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(-1)));
		// _dirtyLocalJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____dirtyLocalJoints_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((int64_t)(-1)));
		// _dirtyWorldJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____dirtyWorldJoints_11;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)((int64_t)(-1)));
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_10 = V_0;
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)2))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0019;
		}
	}
	{
		// if (!data.IsDataValid)
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_12 = ___0_data;
		NullCheck(L_12);
		bool L_13;
		L_13 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_12, NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		// return;
		goto IL_0124;
	}

IL_0058:
	{
		// _scale = Matrix4x4.Scale(Vector3.one * data.RootScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_16 = ___0_data;
		NullCheck(L_16);
		float L_17;
		L_17 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_17, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_18, NULL);
		__this->____scale_12 = L_19;
		// _rootPose = data.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_20 = ___0_data;
		NullCheck(L_20);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_20, NULL);
		__this->____rootPose_13 = L_21;
		// _worldRoot = _rootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = __this->____rootPose_13;
		__this->____worldRoot_14 = L_22;
		// if (trackingSpace != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___2_trackingSpace;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		// _scale *= Matrix4x4.Scale(trackingSpace.lossyScale);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = __this->____scale_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___2_trackingSpace;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_27, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_28, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
		L_30 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_29, NULL);
		__this->____scale_12 = L_30;
		// _worldRoot.position = trackingSpace.TransformPoint(_rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_31 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___2_trackingSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___position_0;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_32, L_34, NULL);
		L_31->___position_0 = L_35;
		// _worldRoot.rotation = trackingSpace.rotation * _rootPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = ___2_trackingSpace;
		NullCheck(L_37);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_37, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = L_39->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_38, L_40, NULL);
		L_36->___rotation_1 = L_41;
	}

IL_00f1:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		V_4 = 0;
		goto IL_0118;
	}

IL_00f6:
	{
		// _originalPoses[i] = data.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_42 = __this->____originalPoses_2;
		int32_t L_43 = V_4;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_44 = ___0_data;
		NullCheck(L_44);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_45;
		L_45 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_44, NULL);
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_48);
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0118:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_50 = V_4;
		V_5 = (bool)((((int32_t)L_50) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_00f6;
		}
	}

IL_0124:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllLocalPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllLocalPoses_mC8BF8BA0AA0FD490D6EA91BAD6B21C759C027EB3 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_localJointPoses, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// UpdateAllLocalPoses();
		BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B(__this, NULL);
		// localJointPoses = _localPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_localJointPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____localPosesCollection_8;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _localPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____localPosesCollection_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllPosesFromRoot(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllPosesFromRoot_m2D463DB2AABCEC580600448646B5BA9CE482337C (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_posesFromRoot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// UpdateAllPosesFromRoot();
		BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102(__this, NULL);
		// posesFromRoot = _posesFromRootCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_posesFromRoot;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____posesFromRootCollection_6;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _posesFromRootCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____posesFromRootCollection_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllWorldPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllWorldPoses_mE6DF5987E80578B0B228ECA3119BE6F23DFFB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___0_worldJointPoses, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// UpdateAllWorldPoses();
		BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4(__this, NULL);
		// worldJointPoses = _worldPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___0_worldJointPoses;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____worldPosesCollection_7;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _worldPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____worldPosesCollection_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateLocalJointPose(jointId);
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_0, NULL);
		// return _localPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____localPoses_4;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateJointPoseFromRoot(jointId);
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_0, NULL);
		// return _posesFromRoot[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____posesFromRoot_3;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateWorldJointPose(jointId);
		int32_t L_0 = ___0_jointId;
		BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_0, NULL);
		// return _worldPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____worldPoses_5;
		int32_t L_2 = ___0_jointId;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return _worldRoot;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = V_0;
		return L_1;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// if (!CheckJointDirty(jointId, _dirtyJointsFromRoot))
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyJointsFromRoot_9;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_008e;
	}

IL_0018:
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = __this->____originalPoses_2;
		int32_t L_5 = ___0_jointId;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// Vector3 posFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     (originalPose.position - _rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_9, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_10, L_15, NULL);
		V_1 = L_16;
		// Quaternion rotFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_21, NULL);
		V_2 = L_22;
		// _posesFromRoot[(int)jointId] = new Pose(posFromRoot, rotFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_23 = __this->____posesFromRoot_3;
		int32_t L_24 = ___0_jointId;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_27), L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_27);
		// SetJointClean(jointId, _dirtyJointsFromRoot);
		int32_t L_28 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = __this->____dirtyJointsFromRoot_9;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_28, L_29, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B5_0 = 0;
	{
		// if (!CheckJointDirty(jointId, _dirtyLocalJoints))
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyLocalJoints_10;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_00cc;
	}

IL_001b:
	{
		// if (_mapping.TryGetParentJointId(jointId, out BodyJointId parentId) &&
		//     parentId >= BodyJointId.Body_Root)
		RuntimeObject* L_4 = __this->____mapping_15;
		int32_t L_5 = ___0_jointId;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_4, L_5, (&V_0));
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ab;
		}
	}
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____originalPoses_2;
		int32_t L_10 = ___0_jointId;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// Pose parentPose = _originalPoses[(int)parentId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->____originalPoses_2;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// Vector3 localPos = Quaternion.Inverse(parentPose.rotation) *
		//     (originalPose.position - parentPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_24, NULL);
		V_5 = L_25;
		// Quaternion localRot = Quaternion.Inverse(parentPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_27, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_28, L_30, NULL);
		V_6 = L_31;
		// _localPoses[(int)jointId] = new Pose(localPos, localRot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_32 = __this->____localPoses_4;
		int32_t L_33 = ___0_jointId;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_36), L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_36);
		goto IL_00be;
	}

IL_00ab:
	{
		// _localPoses[(int)jointId] = Pose.identity;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_37 = __this->____localPoses_4;
		int32_t L_38 = ___0_jointId;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_39;
		L_39 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_39);
	}

IL_00be:
	{
		// SetJointClean(jointId, _dirtyLocalJoints);
		int32_t L_40 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = __this->____dirtyLocalJoints_10;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_40, L_41, NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!CheckJointDirty(jointId, _dirtyWorldJoints))
		int32_t L_0 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyWorldJoints_11;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_006e;
	}

IL_0018:
	{
		// Pose fromRoot = GetJointPoseFromRoot(jointId);
		int32_t L_4 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(__this, L_4, NULL);
		V_0 = L_5;
		// fromRoot.position = _scale * fromRoot.position;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = __this->____scale_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_8, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_6, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_10, NULL);
		(&V_0)->___position_0 = L_11;
		// fromRoot.Postmultiply(GetWorldRootPose());
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8(__this, NULL);
		V_2 = L_12;
		PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE((&V_0), (&V_2), NULL);
		// _worldPoses[(int)jointId] = fromRoot;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->____worldPoses_5;
		int32_t L_14 = ___0_jointId;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_15);
		// SetJointClean(jointId, _dirtyWorldJoints);
		int32_t L_16 = ___0_jointId;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->____dirtyWorldJoints_11;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_16, L_17, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateWorldJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_4, NULL);
			}

IL_0027_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateLocalJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_4, NULL);
			}

IL_0027_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateJointPoseFromRoot(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_4, NULL);
			}

IL_0027_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___0_jointId;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___0_jointId;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// return (dirtyFlags[outerIdx] & (1UL << innerIdx)) != 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_dirtyFlags;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		V_2 = (bool)((!(((uint64_t)((int64_t)(L_5&((int64_t)(((int64_t)1)<<((int32_t)(L_6&((int32_t)63)))))))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_jointId, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_dirtyFlags, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___0_jointId;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___0_jointId;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// dirtyFlags[outerIdx] = dirtyFlags[outerIdx] & ~(1UL << innerIdx);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_dirtyFlags;
		int32_t L_3 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_dirtyFlags;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)((int64_t)(L_7&((~((int64_t)(((int64_t)1)<<((int32_t)(L_8&((int32_t)63))))))))));
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___0_poses, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyBodyJointPoses(Pose[] poses)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _poses = poses;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___0_poses;
		__this->____poses_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poses_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_0 = (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_System_Collections_IEnumerable_GetEnumerator_m0EBABD29DA3CD384530ED6DC2CD883D13E986305 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ReadOnlyBodyJointPoses_get_Empty_mC44AA9A5794DB38A6D1AAE3F2BFE3AF3A948A144 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		il2cpp_codegen_runtime_class_init_inline(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_0 = ((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		// public int Count => _poses.Length;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReadOnlyBodyJointPoses_get_Item_m1857F5403B3763E108D7D958CE17B2F949B95162 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// public Pose this[int index] => _poses[index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute) Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ReadOnlyBodyJointPoses_get_Item_m437A4A40FA462414921D9CA23037598632978256 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// public ref readonly Pose this[BodyJointId index] => ref _poses[(int)index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		return ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__cctor_m1A25C248F626E6D4BD222F433A6C35E6E508BDDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0;
		L_0 = Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline(Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_1, L_0, NULL);
		((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1), (void*)L_1);
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
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m96830FE6B1A2DDA8A03FB83E2A6CECA5193DCBA8 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_mCF94D045336F511597C930CDBBAE6A45AEC3690D (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0068;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var pose in _poses)
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = L_3->____poses_0;
		__this->___U3CU3Es__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)L_4);
		__this->___U3CU3Es__2_4 = 0;
		goto IL_008a;
	}

IL_003b:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = __this->___U3CU3Es__1_3;
		int32_t L_6 = __this->___U3CU3Es__2_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___U3CposeU3E5__3_5 = L_8;
		// yield return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = __this->___U3CposeU3E5__3_5;
		__this->___U3CU3E2__current_1 = L_9;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0068:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = (&__this->___U3CposeU3E5__3_5);
		il2cpp_codegen_initobj(L_10, sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		int32_t L_11 = __this->___U3CU3Es__2_4;
		__this->___U3CU3Es__2_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_008a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->___U3CU3Es__2_4;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->___U3CU3Es__1_3;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		__this->___U3CU3Es__1_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m871B6725F46060A97986220B07EB4087A70D351E (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m3C0250A8B7B7020A3C2032A868FA5D0AA07E8602 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		RuntimeObject* L_2 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DistantInteractionLineVisual_get_NumLinePoints_m155E7A9A33A7C76557AE50CBF0E9F551DD9449E8_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// protected int NumLinePoints => _numLinePoints;
		int32_t L_0 = __this->____numLinePoints_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DistantInteractionLineVisual_set_DistanceInteractor_mCA17EF65727C824C1BBC415F403B3C30040EB114_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DistantInteractionLineVisual_get_DistanceInteractor_mEB7B1C0DFA88ADA9810341C031882215BAA84282_inline (DistantInteractionLineVisual_t7D10F56403604672DC3885A2A3022F8BE25C6B93* __this, const RuntimeMethod* method) 
{
	{
		// public IDistanceInteractor DistanceInteractor { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_NewState_mCF929C68023F4DADF7AEE2669A4BA8B9A80F0EB1_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) 
{
	{
		// public InteractorState NewState { get; }
		int32_t L_0 = __this->___U3CNewStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InteractorStateChangeArgs_get_PreviousState_m72432CC685BAFE84E82BD85DBA7C5A37C604BB00_inline (InteractorStateChangeArgs_tFFFC6FD6385DF6CFF685B60E333DCF87B379DB78* __this, const RuntimeMethod* method) 
{
	{
		// public InteractorState PreviousState { get; }
		int32_t L_0 = __this->___U3CPreviousStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DummyPointReticle_set_Target_m1BD26B263A4E1A8656875F5059BB3CA477C8DBF9_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* DummyPointReticle_get_Target_mC34A23BF365409C5E6414E9888AF5F1CB9FBBB0F_inline (DummyPointReticle_tC7D8463E33D6EDF2C88440237CE485F970363761* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTargetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleGhostDrawer_get_HandGrabInteractor_m0C3B61AE7E86AC54B4A0E44EAD6C5828BBE2122C_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleGhostDrawer_set_HandGrabInteractor_mA69FA1C38D2310DE285FC507EA040361C94BADB2_inline (ReticleGhostDrawer_t74DB7AC8062C4D3D6356565F6236FCF7D020324A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandDataSourceConfig_get_TrackingToWorldTransformer_m78056DEE0EA266365275987EB71CA8DDF9313400_inline (HandDataSourceConfig_t29A4B860CAB12E81573F5565FD5336F4010C3054* __this, const RuntimeMethod* method) 
{
	{
		// public ITrackingToWorldTransformer TrackingToWorldTransformer { get; set; }
		RuntimeObject* L_0 = __this->___U3CTrackingToWorldTransformerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleIconDrawer_get_DistanceInteractor_m6A3948F29B049712DBF6D1E01DAA204E421C6DC1_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CDistanceInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleIconDrawer_set_DistanceInteractor_mF63D75DEA9E572DC63BCD2F5544272E9AA64C1EE_inline (ReticleIconDrawer_tCF60E8CB63853D453949632732621C0AFF77C7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IDistanceInteractor DistanceInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDistanceInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReticleMeshDrawer_get_HandGrabInteractor_m27BE98DF87299FB6A3473C759EB7E2DBF0B818E0_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandGrabInteractorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReticleMeshDrawer_set_HandGrabInteractor_m3E52DBF61DC1F42AE0C64CA7DEE0892D5F3B546E_inline (ReticleMeshDrawer_t92ED69E1761A69DC119C160505E4CE498217104B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// private IHandGrabInteractor HandGrabInteractor { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHandGrabInteractorU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandGrabInteractorU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabAPI_get_Hand_m72A5774D97A3AAC504C0B4CAB2AD193323236A6E_inline (HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E TeleportInteractor_get_ArcEnd_m97C84FE83A4C922D0D398D8B8715759EA45644C8_inline (TeleportInteractor_t6EE85FB9D37B68FA7C45EE1DA150B20DBA00D9FC* __this, const RuntimeMethod* method) 
{
	{
		// public TeleportHit ArcEnd => _arcEnd;
		TeleportHit_tF5409AD7C02AAFCAACC5165150893E56E614103E L_0 = __this->____arcEnd_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _visibility;
		int32_t L_0 = __this->____visibility_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDebugGizmos_get_Space_m3827E8766857FB9300B20E368C5EC8235F03C3D3_inline (BodyDebugGizmos_t4F40CB2AE22E6FE0664E89326279E7FAF02C1612* __this, const RuntimeMethod* method) 
{
	{
		// get => _space;
		int32_t L_0 = __this->____space_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_b;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyPoseComparerActiveState_get_FeatureStates_mE53EB6A82D5777E53EE5BF1255011F4AD37EF65E_inline (BodyPoseComparerActiveState_tC7CF1EE30991EEC9B53848E8DD8F877D8C357792* __this, const RuntimeMethod* method) 
{
	{
		// _featureStates;
		Dictionary_2_t7E14691873E7C7CA2D59640CDC2497E2C8D6445D* L_0 = __this->____featureStates_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___0_value;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___0_value;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___0_value;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_v;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// public TInteractable Interactable => _interactable;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____interactable_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m72B93CEC5B36967C128CE81D691A9EDC913EB40A_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B KeyValuePair_2_get_Value_m51A8FA9C57BBE419CCE16FEA2CCA16A83772DDBA_gshared_inline (KeyValuePair_2_t668E6602CE2430EE46E4DEBC02427E14F51F6138* __this, const RuntimeMethod* method) 
{
	{
		BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B L_0 = (BodyPoseComparerFeatureState_t2521896B82984592C7784DA0BE6D7EB58B55829B)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m442D0AC77133401C24234FAD1914884CC4FCAC42_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_3 = (JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A2E20288952C0B0542939536E76579CF5811AAC_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE ___0_item, const RuntimeMethod* method) 
{
	JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_1 = (JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		JointDataU5BU5D_tEE24E35E6F2D9D6AFDF1612947FECB9942E12157* L_6 = V_0;
		int32_t L_7 = V_1;
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE)L_8);
		return;
	}

IL_0034:
	{
		JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE L_9 = ___0_item;
		((  void (*) (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C*, JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD605E2876C9D9C7CC37E69690C23ED32BCC85E97_gshared_inline (List_1_t8AC0A27B34C20E189685C15F66B7998177A3474C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) 
{
	{
		// public bool Started => _started;
		bool L_0 = (bool)__this->____started_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ((EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
