#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C;
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1;
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2;
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8;
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD;
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5;
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E;
struct ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB;
struct ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6;
struct ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED;
struct ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA;
struct Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494;
struct Dictionary_2_t3D5C4496A22EAD3D8DD55DCDFBB4F4E9BE8311FF;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
struct Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA;
struct Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E;
struct Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tCF3029BCCA647C1B54318B688881E1742A230E8C;
struct Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C;
struct Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84;
struct Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B;
struct Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B;
struct Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38;
struct Func_2_tAF4123F8D69F1A665BBB864E1C97131C05AEBBEB;
struct Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C;
struct Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139;
struct Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030;
struct Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED;
struct Func_2_t819E3101AAD2232A75291196D6A77A13AA17D757;
struct Func_2_tBE7C7D7D87BF049F077FB1C3C13F8D4726A8409C;
struct Func_2_t35A0759604C6FA9D13A00A7CC21B570688F82AC8;
struct Func_2_t9B09C5B81DDDD4DE86CA950919B2C1E9EBEFA578;
struct HashSet_1_t015F1F38EE02675ACF63C72E1E1D832249BB06DA;
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
struct ICollection_1_tAEF1C056C36E7D5FEA74D8B3050426267827D51F;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IConnectionCollection_3_t3FEDE29075183F9ACBC556BA0F14BF8852E55CD8;
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
struct IEnumerable_1_tE358DC946BA72354C4905C9036C90AE414732E22;
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IKeyedCollection_2_tBC0B3807991A88196989268115CB5D747BAD3402;
struct IKeyedCollection_2_tDE9FC926FFB5ED2A3546B72DDB931B8B52FF21D9;
struct IList_1_tFCC4681CBA27EDD8B4A096B1C53F52612FF07ED9;
struct IUnitPortCollection_1_t3F6779B00496B9FD84FEF2783F509958D57F354E;
struct IUnitPortCollection_1_t867A0E5526AAABA203704CD692FBEA4174C71C05;
struct IUnitPortCollection_1_t3839C272AE6727AE9A1BAC110A75614EBFE42B31;
struct IUnitPortCollection_1_t0F2047F1654080ECEB25DFDFAE47ED18B2E4C0F7;
struct IUnitPortCollection_1_t3B86C97EE8F1E1DB05CEFB161850DF05862EAFD4;
struct IUnitPortCollection_1_tA11C7DC2E90483113DB83CE13759F647978FFF63;
struct KeyCollection_tA6BB3F9653CB4F3E185C9E752FAFF1905BF0BBF6;
struct KeyCollection_t1FD6E7D32C062C67FD82F82B3C2EC52321838EEE;
struct KeyCollection_t5AAE9EFFB551C8D12751FF328B61A8CD7E3BEDB8;
struct List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0;
struct List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310;
struct List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF;
struct Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D;
struct Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F;
struct Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561;
struct Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A;
struct Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323;
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487;
struct MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599;
struct MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741;
struct MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235;
struct MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F;
struct MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C;
struct MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF;
struct MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7;
struct MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D;
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1;
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141;
struct ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7;
struct ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB;
struct ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74;
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9;
struct EntryU5BU5D_t86F646861AD0B8EEDC9634734B5E6BD7EA0618F7;
struct EntryU5BU5D_t3979C9E5A7B2C5E38DAEEDB9DF1CA142FF18C844;
struct EntryU5BU5D_t683351846B543976329DF7DB9C3C5E821D5FD769;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582;
struct FlowGraph_tF9E42FECF535CD5BAB10F75672B5BCE285627A45;
struct GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
struct IUnit_tDD8B7D0F06EA3DB55DEBE4DF3CC85F4A63FBB98E;
struct IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191;
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392;
struct ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B;
struct VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Tracker_t87786DE591594D927CDFC72463D3B89E0C97C983;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralD89AB0EC0F027A8F0B88AD0787D8C345FE59EFD0;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF3ED082BD3B74B60BE13F42B001034915D0E06;
IL2CPP_EXTERN_C const RuntimeMethod* EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97  : public RuntimeObject
{
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D  : public RuntimeObject
{
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549  : public RuntimeObject
{
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC  : public RuntimeObject
{
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F  : public RuntimeObject
{
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6  : public RuntimeObject
{
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1  : public RuntimeObject
{
};
struct U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE  : public RuntimeObject
{
};
struct U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA  : public RuntimeObject
{
};
struct U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C  : public RuntimeObject
{
};
struct U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D  : public RuntimeObject
{
};
struct Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t86F646861AD0B8EEDC9634734B5E6BD7EA0618F7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA6BB3F9653CB4F3E185C9E752FAFF1905BF0BBF6* ____keys;
	ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t3979C9E5A7B2C5E38DAEEDB9DF1CA142FF18C844* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1FD6E7D32C062C67FD82F82B3C2EC52321838EEE* ____keys;
	ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t683351846B543976329DF7DB9C3C5E821D5FD769* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t5AAE9EFFB551C8D12751FF328B61A8CD7E3BEDB8* ____keys;
	ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88  : public RuntimeObject
{
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599  : public RuntimeObject
{
	Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* ___collections;
};
struct MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741  : public RuntimeObject
{
	Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* ___collections;
	Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* ___collectionsLookup;
};
struct MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235  : public RuntimeObject
{
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ___collections;
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ___collectionsLookup;
};
struct ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1  : public RuntimeObject
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct UnitPort_3_t3120713700769DD514D6ED9ACFD105D4B583C09E  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct UnitPort_3_t3BDB6AF6AAF9927A0C940F08CFD19E645813CFB0  : public RuntimeObject
{
	RuntimeObject* ___U3CunitU3Ek__BackingField;
	String_t* ___U3CkeyU3Ek__BackingField;
};
struct ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7  : public RuntimeObject
{
	Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* ____dictionary;
};
struct ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB  : public RuntimeObject
{
	Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* ____dictionary;
};
struct ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74  : public RuntimeObject
{
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ____dictionary;
};
struct EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC  : public RuntimeObject
{
	String_t* ___paramName;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582  : public RuntimeObject
{
	GraphStack_tD9049F5FB5F8D9E9CD80764D18067D0F87343E7C* ___U3CstackU3Ek__BackingField;
	Recursion_1_tDFF1B549E70648F1694033FADF89F8F0EB28587D* ___recursion;
	Dictionary_2_t3D5C4496A22EAD3D8DD55DCDFBB4F4E9BE8311FF* ___locals;
	VariableDeclarations_t7701E0B99E3AED5CDC693ABFBDD6D1C73945B405* ___variables;
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___loops;
	HashSet_1_t015F1F38EE02675ACF63C72E1E1D832249BB06DA* ___preservedStacks;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___U3CcoroutineRunnerU3Ek__BackingField;
	RuntimeObject* ___activeCoroutinesRegistry;
	bool ___coroutineStopRequested;
	bool ___U3CisCoroutineU3Ek__BackingField;
	RuntimeObject* ___coroutineEnumerator;
	bool ___U3CisPredictionU3Ek__BackingField;
	bool ___disposed;
	int32_t ___loopIdentifier;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 
{
	Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentValue;
};
struct Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 
{
	Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentValue;
};
struct Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F 
{
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentValue;
};
struct Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E 
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
struct KeyValuePair_2_t700026870420ACE3270D1BDF081B5E8F25593CB0 
{
	Type_t* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 
{
	Type_t* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE 
{
	Type_t* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	bool ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	Il2CppSharedGenericObject* ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A;
struct ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D 
{
	bool ____initialized;
	Il2CppSharedGenericObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392  : public UnitPort_3_t3BDB6AF6AAF9927A0C940F08CFD19E645813CFB0
{
	Type_t* ___U3CtypeU3Ek__BackingField;
	bool ___U3CnullMeansSelfU3Ek__BackingField;
	bool ___U3CallowsNullU3Ek__BackingField;
};
struct ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B  : public UnitPort_3_t3120713700769DD514D6ED9ACFD105D4B583C09E
{
	Func_2_tB98BB93B60A3562C54694B9F37AEBD38DE206A9C* ___getValue;
	Func_2_tCF3029BCCA647C1B54318B688881E1742A230E8C* ___canPredictValue;
	Type_t* ___U3CtypeU3Ek__BackingField;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct Metrics_t865BF0741490865117A79705F58784742D6F02B8 
{
	int32_t ___TotalRoomCount;
	int32_t ___CandidateRoomCount;
	int32_t ___Loaded;
	int32_t ___Failed;
	int32_t ___SkippedUserNotInRoom;
	int32_t ___SkippedAlreadyInstantiated;
};
struct AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B 
{
	Tracker_t87786DE591594D927CDFC72463D3B89E0C97C983* ____tracker;
};
struct AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B_marshaled_pinvoke
{
	Tracker_t87786DE591594D927CDFC72463D3B89E0C97C983* ____tracker;
};
struct AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B_marshaled_com
{
	Tracker_t87786DE591594D927CDFC72463D3B89E0C97C983* ____tracker;
};
struct U3CGetEnumeratorU3Ed__11_tE2CCBC907E4B1A08E585C41F9CF62BB6C25B8EE1 : public RuntimeObject {};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3 
{
	Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t700026870420ACE3270D1BDF081B5E8F25593CB0 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B 
{
	Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D 
{
	Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD 
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ____current;
	int32_t ____getEnumeratorRetType;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct GraphElement_1_t3220EDD6251B31FC22A192EC12682C1D8B28F16D  : public RuntimeObject
{
	Guid_t ___U3CguidU3Ek__BackingField;
	FlowGraph_tF9E42FECF535CD5BAB10F75672B5BCE285627A45* ___U3CgraphU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct MemoryPressure_t12C53FDB3D069AAE9DB8F6D9FDDD6D8C733E1A4E 
{
	int32_t ___value__;
};
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t842F850D315484F407FE5A0D42F82BC882AD9402 
{
	int32_t ___value__;
};
struct MemoryPressure_tF5D6FF2361EFD4E88547037E04D95BBFEC692F20 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct MemoryPressure_t7D21C8A6329CC326E234FF7BC14D5785D9B0B33D 
{
	int32_t ___value__;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct ValueTaskSourceOnCompletedFlags_t3181838E33741E1E7338B33740CCEAD38C6B8BFF 
{
	int32_t ___value__;
};
struct ValueTaskSourceStatus_t9F496A09D3BF95F42C0C5366D8DEBA49F08C4FD3 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Flags_tD935E34E819419AC18907444AF9A5993A183FC09 
{
	int32_t ___value__;
};
struct ConfigureTrackerResult_t073B11F91678F715E405998906D6F44A9DF141D4 
{
	int32_t ___value__;
};
struct EraseResult_t27CCAC05D8F12165F5B34088ECFFAE9410A59707 
{
	int32_t ___value__;
};
struct FetchResult_t6C02AA7FC4DC5E33605E1C5ACB176CBEE7F338F4 
{
	int32_t ___value__;
};
struct SaveResult_t158A36F68A44B33A2045C4AC8FD6A48E7493DC61 
{
	int32_t ___value__;
};
struct ShareResult_t90D8BAF09E08C8C86153A674AE72DED88E706A2B 
{
	int32_t ___value__;
};
struct Result_t2D88432FA2C70DFD3C20AE308848F404D22376D0 
{
	int32_t ___value__;
};
struct Result_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797 
{
	int32_t ___value__;
};
struct LoadSceneModelResult_t7EF1562A6712CE21E388C7FCAE0EAD67764E2E77 
{
	int32_t ___value__;
};
struct OperationResult_tCEEF60CD40479FB5175A075F097BA5C1811E555D 
{
	int32_t ___value__;
};
struct Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C 
{
	Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B ___collectionsEnumerator;
	Il2CppSharedGenericObject* ___currentItem;
	RuntimeObject* ___currentCollection;
	int32_t ___indexInCurrentCollection;
	bool ___exceeded;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724;
struct ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tD2A946B63F2A8372E5F002C81A6223B4F8CA89F3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t9394EDB4552688DB3D952D42E0377CE9CE15F70F 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tA15855D5689FD73FC415588C2AF7BEB583CF45DF 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED 
{
	bool ____initialized;
	List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710  : public RuntimeObject
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContext;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContextNoFlow;
	LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E* ____logicalCallContext;
	IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5* ____illogicalCallContext;
	int32_t ____flags;
	Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494* ____localValues;
	List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0* ____localChangeNotifications;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191  : public GraphElement_1_t3220EDD6251B31FC22A192EC12682C1D8B28F16D
{
	bool ___U3CisDefinedU3Ek__BackingField;
	RuntimeObject* ___U3CcontrolInputsU3Ek__BackingField;
	RuntimeObject* ___U3CcontrolOutputsU3Ek__BackingField;
	RuntimeObject* ___U3CvalueInputsU3Ek__BackingField;
	RuntimeObject* ___U3CvalueOutputsU3Ek__BackingField;
	RuntimeObject* ___U3CinvalidInputsU3Ek__BackingField;
	RuntimeObject* ___U3CinvalidOutputsU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPortsChanged;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CdefaultValuesU3Ek__BackingField;
	RuntimeObject* ___U3CrelationsU3Ek__BackingField;
	bool ___U3CisControlRootU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField;
	Exception_t* ___U3CdefinitionExceptionU3Ek__BackingField;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA  : public MulticastDelegate_t
{
};
struct Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84  : public MulticastDelegate_t
{
};
struct Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B  : public MulticastDelegate_t
{
};
struct Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B  : public MulticastDelegate_t
{
};
struct Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38  : public MulticastDelegate_t
{
};
struct Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B  : public MulticastDelegate_t
{
};
struct Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C  : public MulticastDelegate_t
{
};
struct Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139  : public MulticastDelegate_t
{
};
struct Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030  : public MulticastDelegate_t
{
};
struct Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED  : public MulticastDelegate_t
{
};
struct Func_2_tDF45E5A9ECFB307BF4418A8ECD594AF82A625551  : public MulticastDelegate_t
{
};
struct ManualResetValueTaskSourceCore_1_t9D46914F6792C23ADDD0977C316A9B39096632AC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t49A683C035E9754A360539AEE85399929A56DEC8 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tF30060C21BA57ACA8FD40996D154E4CEB3F4911A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tDC987E53B0C4E84CCA07A16A3F705E69CCDA602B 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tC3B9C67B67DD3203C4A245361EEA11972E220D67 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t475BDC90EB9D192DCB7C092762FA8D243CDDA890 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tCA97ED50751D5A2D5504306B87C4D084B3C4FB8A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t9CBBB4E0EBA4D6D17BF284DCB6013B6C5719917A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t75D8FA9F3A403BD05EC767109CB661B074DF2DAA 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t2786AF0527550C71E6A45EB0936BD321EEF87ED3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t236379DB803801F959F1391B14505A9D3CD9E980 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t1210CCD6E418EA3A577725405E872BAC2A44CC11 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ____inputCount;
	ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* ___U3CmultiInputsU3Ek__BackingField;
};
struct MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ____inputCount;
	ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* ___U3CmultiInputsU3Ek__BackingField;
};
struct MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ____inputCount;
	ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* ___U3CmultiInputsU3Ek__BackingField;
};
struct MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ____inputCount;
	ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* ___U3CmultiInputsU3Ek__BackingField;
};
struct MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9  : public Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191
{
	int32_t ____inputCount;
	ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* ___U3CmultiInputsU3Ek__BackingField;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};
struct Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D  : public MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F
{
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CmaximumU3Ek__BackingField;
};
struct Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F  : public MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C
{
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CmaximumU3Ek__BackingField;
};
struct Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561  : public MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF
{
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CmaximumU3Ek__BackingField;
};
struct Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A  : public MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7
{
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CmaximumU3Ek__BackingField;
};
struct Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323  : public MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9
{
	ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___U3CmaximumU3Ek__BackingField;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields
{
	U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields
{
	U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields
{
	U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields
{
	U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields
{
	U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields
{
	U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields
{
	U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields
{
	U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields
{
	U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields
{
	U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields
{
	U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582_StaticFields
{
	Func_2_tAF4123F8D69F1A665BBB864E1C97131C05AEBBEB* ___U3CisInspectedBindingU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_sentinel;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_StaticFields
{
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___typesWithDefaultValues;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticFields
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___s_dummyDefaultEC;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___Default;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared (Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0_gshared (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___1_callback, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684 (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___1_callback, ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mC2F885F79CE516C7EEA8163CE71A4042EC725308 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m5A05C20208ECBBC47B673FAEB91426DF86346949 (ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45_m781F7901618419D8F3164AB883D4EA36DAD1FEB9 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* ___1_callback, ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m237972B57B02A03461EE2080A5C64D6658B39DD7 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m2F481529B1C516C912AE7008867C8CEC3917B4CA_inline (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m25F6CEAB52119FFDF67663DF556602CB2188A007 (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE7A06BE8B2CF2DC2E9E528B933045D9809A2FA18_gshared (Func_2_t819E3101AAD2232A75291196D6A77A13AA17D757* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m039FDD20D7A16689873E8C7607CA53A0C40D7862 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4550DD869199B6BB5004D0EC5F84EAD608E5D0BD_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_get_Item_m23FB0C503360A616B4AB2D24C802A792FB262012_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m829E8AA72E4FE9851D8B3440A4A95DF2BF51649C_gshared (RuntimeObject* ___0_source, Func_2_t819E3101AAD2232A75291196D6A77A13AA17D757* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1__ctor_mB27059B92A6877A2F93A87C6E70AE156C97714D6_fshared (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_mB38B1FB185B0533FFF90BBBEC1EBFDF8CCEE8506 (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAD0389C16518054492063F15D45C44495E938BC1_gshared (Func_2_tBE7C7D7D87BF049F077FB1C3C13F8D4726A8409C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m361C2B6CE866543DFB652A1889EF7DAE569F5BC7 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Flow_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m045E887DCCC284FDEB1CAE038AB1BB8EDDEE4376 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA460C292F4CB309EB1F5839901E93F7DE7772A28_gshared (RuntimeObject* ___0_source, Func_2_tBE7C7D7D87BF049F077FB1C3C13F8D4726A8409C* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m06BC8BE89AB3FFCAD8D300E944CC2590463B6F5F (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m991E78BB3F13536DCFCF434F71C0CF00C47AA906_gshared (Func_2_t35A0759604C6FA9D13A00A7CC21B570688F82AC8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m249BF749883366BD04F81E63FFE3308F6DD314BC (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Flow_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA592D2C65EF035471B5EBFF72D1CCE8990108EA3 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFEEF8ED534BDF9EB612C761640535D58D989F245_gshared (RuntimeObject* ___0_source, Func_2_t35A0759604C6FA9D13A00A7CC21B570688F82AC8* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m71EA394ED340069B2410C5D46A3AC66DF6349A13 (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAC9F2315CBB8CE5E3C7F1D490BDC0FD4EADBD6CF_gshared (Func_2_t9B09C5B81DDDD4DE86CA950919B2C1E9EBEFA578* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDC032021FB403D399A4A305BADCB1AB15C5B994 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Flow_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DC64597C1E60BFF073DCEF83A4180BE7BF6EED2 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4D0506F7B723225967179817625A0DB6E7265A53_gshared (RuntimeObject* ___0_source, Func_2_t9B09C5B81DDDD4DE86CA950919B2C1E9EBEFA578* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_mB1A2F3FD59B83C362C8302E1AF255EAF7CCBBD4A (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m9FEC5FAFF1463BC5D846F2A7575A25C60F95CCF0 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mB28C14918360DCF1F38D2B3FF7103191A6C72C8A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_mF0ABC1A7FD71E5893FB319CEC658BF9D42D84BF6 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD Dictionary_2_GetEnumerator_m6936E0CC980D654F028D72ECA7D9E3021E7B2DD9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Enumerator_get_Current_m07BBC92FACF2833ADF73017D627B6F818067DA01_gshared_inline (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA47B0C6000D01A481E9EA66B22479AF60343B563_gshared (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Type_t* ___0_type, bool ___1_throwOnFail, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnsureThat_IsNotNull_TisIl2CppSharedGenericObject_m5BACE0A7351431F5CCA16F96BEEA860BC179451E_gshared (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, bool ___1_throwOnFail, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* Dictionary_2_get_Values_m8E3BE68654ED4904A823A5EC8071AAABB4FAFEF9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E ValueCollection_GetEnumerator_m516DD89FFFE3A9ED28CF68A395A1B801E38F35D1_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m98FA9131B497E701601CDA065CC01721E11C40E8_gshared (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MergedKeyedCollection_2_get_Count_m6AB1D2540513DB6822DD8ECD5FFC647870BE6EF9_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m54CDD61C1B382B1BEB4B8A891B48D34206D61F5E_gshared (Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C* __this, MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* ___0_merged, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6B52D8CF1A1753A28498CA6217388A59385CB5F5_fshared (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* ___0_merged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;

inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared)(__this, ___0_token, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
inline bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
inline bool ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared)(___0_item1, ___1_item2, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
inline void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3 (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline)(__this, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705 (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4 (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890 (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637 (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0 (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___1_callback, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229 (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684 (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___1_callback, ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mC2F885F79CE516C7EEA8163CE71A4042EC725308 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m5A05C20208ECBBC47B673FAEB91426DF86346949 (ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45_m781F7901618419D8F3164AB883D4EA36DAD1FEB9 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* ___1_callback, ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m237972B57B02A03461EE2080A5C64D6658B39DD7 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m2F481529B1C516C912AE7008867C8CEC3917B4CA_inline (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m25F6CEAB52119FFDF67663DF556602CB2188A007 (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mF53FFAD9FFFDB7826F1D7F184C8D28EAEFD90F45 (Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE7A06BE8B2CF2DC2E9E528B933045D9809A2FA18_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m039FDD20D7A16689873E8C7607CA53A0C40D7862 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84* ___1_getValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736 (ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* __this, const RuntimeMethod* method) ;
inline void Maximum_1_set_maximum_m21E453F4FE53D8130742BCD716F03CDEFACBFBBA_inline (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline)(__this, ___0_value, method);
}
inline ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m71D836286E0A0111B4DC9AC12728FF8F0EE4ACF4_inline (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F*, const RuntimeMethod*))MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline)(__this, method);
}
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8 (ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m4550DD869199B6BB5004D0EC5F84EAD608E5D0BD_gshared)(__this, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m6C975BFD2DB0A33DCF86566538829C878972A497_inline (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D* __this, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D*, const RuntimeMethod*))Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_source, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___1_destination, const RuntimeMethod* method) ;
inline ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4 (ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* (*) (ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m23FB0C503360A616B4AB2D24C802A792FB262012_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
inline void Func_2__ctor_m3C326996DF4E34B09865AB44399C79641F40B7DC (Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE7A06BE8B2CF2DC2E9E528B933045D9809A2FA18_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBB65F3A54B826526121E63506CA83F85C3A1FFAD (RuntimeObject* ___0_source, Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C*, const RuntimeMethod*))Enumerable_Select_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m829E8AA72E4FE9851D8B3440A4A95DF2BF51649C_gshared)(___0_source, ___1_selector, method);
}
inline void MultiInputUnit_1__ctor_m17509DD51F259A6A877B092B1AB030DBF28DBBC7 (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiInputUnit_1_tC7B4346E60926ADABAC1EF5FD9733C44B443506F*, const RuntimeMethod*))MultiInputUnit_1__ctor_mB27059B92A6877A2F93A87C6E70AE156C97714D6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_mB38B1FB185B0533FFF90BBBEC1EBFDF8CCEE8506 (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mE9E5873A90C57FFB6BF79DF507EB649B2F7F805D (Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAD0389C16518054492063F15D45C44495E938BC1_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m361C2B6CE866543DFB652A1889EF7DAE569F5BC7 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B* ___1_getValue, const RuntimeMethod* method) ;
inline void Maximum_1_set_maximum_m8557A216BEC90669C2F5E1C97B803F6A9C4D5670_inline (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline)(__this, ___0_value, method);
}
inline ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m1D62090F1FABEF4864CB354EF18B26F1C383E6C6_inline (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C*, const RuntimeMethod*))MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline)(__this, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m3B92C26DB6889C9610BF41B8E78106BE1FFA101A_inline (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F* __this, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F*, const RuntimeMethod*))Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Flow_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m045E887DCCC284FDEB1CAE038AB1BB8EDDEE4376 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
inline void Func_2__ctor_mFFCAE09994762D5940598FD76779FCE94266CBA7 (Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAD0389C16518054492063F15D45C44495E938BC1_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA304E8AB9EF4F2028D80B36295445E4DED176AEE (RuntimeObject* ___0_source, Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139*, const RuntimeMethod*))Enumerable_Select_TisIl2CppSharedGenericObject_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA460C292F4CB309EB1F5839901E93F7DE7772A28_gshared)(___0_source, ___1_selector, method);
}
inline void MultiInputUnit_1__ctor_m5790694AC0BF5FD13CDF6133A13D4AAA349A1F26 (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiInputUnit_1_t9BEC79E965297E440E69E310234A00BC35CCF37C*, const RuntimeMethod*))MultiInputUnit_1__ctor_mB27059B92A6877A2F93A87C6E70AE156C97714D6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m06BC8BE89AB3FFCAD8D300E944CC2590463B6F5F (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m06CCABD848FD916E05298F3EF64DED9EFA88438E (Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m991E78BB3F13536DCFCF434F71C0CF00C47AA906_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m249BF749883366BD04F81E63FFE3308F6DD314BC (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B* ___1_getValue, const RuntimeMethod* method) ;
inline void Maximum_1_set_maximum_m15076E6CC07816A90B137D227E261F488DE0B05E_inline (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline)(__this, ___0_value, method);
}
inline ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m27A254D9163F3C6C2604C3941078057A66C57073_inline (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF*, const RuntimeMethod*))MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline)(__this, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m30496E086B8CD7BDB88260E700642DE2C4563576_inline (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561* __this, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561*, const RuntimeMethod*))Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Flow_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA592D2C65EF035471B5EBFF72D1CCE8990108EA3 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
inline void Func_2__ctor_mBE40818874E8A9FF1042ACC0A071F5E7E6B53600 (Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m991E78BB3F13536DCFCF434F71C0CF00C47AA906_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9378D78F11BB0350E153B3F93C78531530BE5783 (RuntimeObject* ___0_source, Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030*, const RuntimeMethod*))Enumerable_Select_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFEEF8ED534BDF9EB612C761640535D58D989F245_gshared)(___0_source, ___1_selector, method);
}
inline void MultiInputUnit_1__ctor_mFC715A8727CC370ACE9E6BBFAA10D65F04AE073E (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiInputUnit_1_tECC48B6C5F1DC2BCCB6D1D3A2C8477F0F76845AF*, const RuntimeMethod*))MultiInputUnit_1__ctor_mB27059B92A6877A2F93A87C6E70AE156C97714D6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiInputUnit_1_Definition_m71EA394ED340069B2410C5D46A3AC66DF6349A13 (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mEE583AC91F7B5A4817581DD9E55E8A8A944B4E2C (Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAC9F2315CBB8CE5E3C7F1D490BDC0FD4EADBD6CF_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Unit_ValueOutput_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDC032021FB403D399A4A305BADCB1AB15C5B994 (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191* __this, String_t* ___0_key, Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38* ___1_getValue, const RuntimeMethod* method) ;
inline void Maximum_1_set_maximum_m9029E5FCAA4E55B2680EA18F7E3CEBC74ABA617C_inline (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline)(__this, ___0_value, method);
}
inline ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m8082B58A3A02FC4B0C443C094A4B20FFF9A52FCA_inline (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7*, const RuntimeMethod*))MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline)(__this, method);
}
inline ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m46CECA9A0AD3F74E29F1E37F16A0C8D7545AE020_inline (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A* __this, const RuntimeMethod* method)
{
	return ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A*, const RuntimeMethod*))Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Flow_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DC64597C1E60BFF073DCEF83A4180BE7BF6EED2 (Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* __this, ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* ___0_input, const RuntimeMethod* method) ;
inline void Func_2__ctor_m7CD275F437FEB527A1FD6C2E78113B880270E46F (Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAC9F2315CBB8CE5E3C7F1D490BDC0FD4EADBD6CF_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m39AD03244DB05712E756CB177D59416F28C89D39 (RuntimeObject* ___0_source, Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED*, const RuntimeMethod*))Enumerable_Select_TisIl2CppSharedGenericObject_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4D0506F7B723225967179817625A0DB6E7265A53_gshared)(___0_source, ___1_selector, method);
}
inline void MultiInputUnit_1__ctor_m9EC66B0EEF73919EC728E1773D1212ABF02B66E1 (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiInputUnit_1_tB74C2449278675C420215C3BFD0195E1F2214AD7*, const RuntimeMethod*))MultiInputUnit_1__ctor_mB27059B92A6877A2F93A87C6E70AE156C97714D6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_mB1A2F3FD59B83C362C8302E1AF255EAF7CCBBD4A (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared)(___0_memory, method);
}
inline bool ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline bool Memory_1_Equals_mFC02B29BD9A77E87A81EC2CFCF364ACDA3ED384A (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m9FEC5FAFF1463BC5D846F2A7575A25C60F95CCF0 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mB28C14918360DCF1F38D2B3FF7103191A6C72C8A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_mF0ABC1A7FD71E5893FB319CEC658BF9D42D84BF6 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
inline int32_t Memory_1_CombineHashCodes_mB3C5FDF64EE1BC13E072AA2B1FE571D1C8F256B8 (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
inline void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline)(__this, ___0_array, method);
}
inline String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
inline String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline)(__this, ___0_obj, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, const RuntimeMethod*))Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared)(__this, ___0_obj, method);
}
inline bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared)(__this, ___0_other, method);
}
inline int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_m4175423956FEF09EB6CC388E6030230CADE305ED (Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9 (String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_mAA276F8BD705987CD72A9728A3142CC2BDBC14D7 (Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m3EC1B86BC8F0509A8F088D4113AF738BC1A8C3A9 (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*, const RuntimeMethod*))Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared)(__this, method);
}
inline Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B Dictionary_2_GetEnumerator_m4C5708218203DAD1DD854AC7E1B2AEE2E5F9A49A (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B (*) (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m6936E0CC980D654F028D72ECA7D9E3021E7B2DD9_gshared)(__this, method);
}
inline void Enumerator_Dispose_m2B105804D1E22598418E9EA3BB01B1FB4293531A (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared)(__this, method);
}
inline KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 Enumerator_get_Current_m7F01CFF8CB73F8FA710B8A865E528521FCA4E7AF_inline (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 (*) (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B*, const RuntimeMethod*))Enumerator_get_Current_m07BBC92FACF2833ADF73017D627B6F818067DA01_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline (KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m88509BB166883447904192E265BB4A411B3C33AE (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B*, const RuntimeMethod*))Enumerator_MoveNext_mA47B0C6000D01A481E9EA66B22479AF60343B563_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, const RuntimeMethod* method) ;
inline RuntimeObject* MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1 (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Type_t* ___0_type, bool ___1_throwOnFail, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, Type_t*, bool, const RuntimeMethod*))MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1_gshared)(__this, ___0_type, ___1_throwOnFail, method);
}
inline void EnsureThat_IsNotNull_TisIl2CppSharedGenericObject_m5BACE0A7351431F5CCA16F96BEEA860BC179451E (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*, Il2CppSharedGenericObject*, const RuntimeMethod*))EnsureThat_IsNotNull_TisIl2CppSharedGenericObject_m5BACE0A7351431F5CCA16F96BEEA860BC179451E_gshared)(__this, ___0_value, method);
}
inline void EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC*, Type_t*, const RuntimeMethod*))EnsureThat_IsNotNull_TisIl2CppSharedGenericObject_m5BACE0A7351431F5CCA16F96BEEA860BC179451E_gshared)(__this, ___0_value, method);
}
inline bool Dictionary_2_TryGetValue_mA83A757DDBC5EC53310DF9A201EEC27CC3774CB2 (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared)(__this, ___0_key, ___1_value, method);
}
inline Type_t* KeyValuePair_2_get_Key_mFD63272138B662F7F0EF05F8C9F554B914C48753_inline (KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475*, const RuntimeMethod*))KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m70BD5A674677C68859B27722D6186B01265F4FF1 (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73 (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, bool ___1_throwOnFail, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, Guid_t, bool, const RuntimeMethod*))MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73_gshared)(__this, ___0_key, ___1_throwOnFail, method);
}
inline RuntimeObject* MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97 (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, Il2CppSharedGenericObject*, const RuntimeMethod*))MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97_gshared)(__this, ___0_item, method);
}
inline ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* Dictionary_2_get_Values_m13D1E60C7B4C64468E6EA787F6EC23B07586D074 (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* (*) (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*, const RuntimeMethod*))Dictionary_2_get_Values_m8E3BE68654ED4904A823A5EC8071AAABB4FAFEF9_gshared)(__this, method);
}
inline Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 ValueCollection_GetEnumerator_m9847E5E2EA7C0B00994B6E3032DC6581275365DB (ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 (*) (ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB*, const RuntimeMethod*))ValueCollection_GetEnumerator_m516DD89FFFE3A9ED28CF68A395A1B801E38F35D1_gshared)(__this, method);
}
inline void Enumerator_Dispose_m6B7924C5A6B8766E29C55DEA6C5966B22145AC20 (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mA0F0DC12AEC6FBA398F845E93C085134DC635C30_inline (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160*, const RuntimeMethod*))Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m3FA5BFA6986E7517AEF42E3926A0DEE8353B417C (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160*, const RuntimeMethod*))Enumerator_MoveNext_m98FA9131B497E701601CDA065CC01721E11C40E8_gshared)(__this, method);
}
inline int32_t MergedKeyedCollection_2_get_Count_m6AB1D2540513DB6822DD8ECD5FFC647870BE6EF9 (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, const RuntimeMethod*))MergedKeyedCollection_2_get_Count_m6AB1D2540513DB6822DD8ECD5FFC647870BE6EF9_gshared)(__this, method);
}
inline Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C (*) (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, const RuntimeMethod*))MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC_gshared)(__this, method);
}
inline void Enumerator__ctor_m54CDD61C1B382B1BEB4B8A891B48D34206D61F5E (Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C* __this, MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* ___0_merged, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C*, MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741*, const RuntimeMethod*))Enumerator__ctor_m54CDD61C1B382B1BEB4B8A891B48D34206D61F5E_gshared)(__this, ___0_merged, method);
}
inline void Enumerator_Dispose_m91D684A53A5E30DF7E5E49792F1F973DC0B7ABBD (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared)(__this, method);
}
inline void Enumerator_Dispose_mEE2C957718EC7A5031359F242032CDFE0DB6AA61 (Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
inline void Enumerator__ctor_m6B52D8CF1A1753A28498CA6217388A59385CB5F5 (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* __this, MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* ___0_merged, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*, MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*, const RuntimeMethod*))Enumerator__ctor_m6B52D8CF1A1753A28498CA6217388A59385CB5F5_fshared)(__this, ___0_merged, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE970D9419FAC2AE246864EB745D34A34A577849E_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387* L_2 = (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mC43C9DA85DE35C28AE72C7650138B75D4DC6B67A_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m4BE3C92EF70A708115C401738ED985C1B654E0BA_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m74A3DD32CA7F3C950E28AAC95ED69245944AD02C_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m692F1C28071026485741643C07EEC30710B04A33_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ManualResetValueTaskSourceCore_1_GetResult_m8AD46EC86EE64E18905CC9A16EBD6F05AFFE0A88_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04646BE1F16754BFB79C953ECFD27DA0D67111CF_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_43 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_7 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_9 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_10 = (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_11 = L_10;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_19 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mD5766A38A9D1C11FD35912C866131273D672336D_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8* L_2 = (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m642D519C76F5A575328EBC3B68EEEA6308C35A60_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m95F190D91E54AB3C573B32A6B930912EC07DAE12_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEE079E0EA63A4DB1153740DF1F598A7FEE77BA61_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m62C6BACDBFAC1AE4F903BD3E1D82064FE0379F59_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ManualResetValueTaskSourceCore_1_GetResult_mE5D11E7F6A12F171CAAF3B84AA59C7643124A67A_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mFCA1B9BF69C4D1051066326D3C5DF62C5F066CFA_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_43 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_7 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_9 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_10 = (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_11 = L_10;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_19 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE441848250908EBD7088016B27639218657D76B3_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D* L_2 = (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m93027472B2C83716E6CA8B31C921AA8B2293D6BF_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____result))->____value), (void*)NULL);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mAB45E37D8508DD4A026B4C084B3BCF071E1CCBD1_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mF2F887C8166E3050A2258BDDDC74B681DE6ECB53_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m069971BC020CAC3542B68F7F5AE4420CAE6F4E2E_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ManualResetValueTaskSourceCore_1_GetResult_m9EA98CA58B8BEEE6403BAD0A004F82EB0A295CF2_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m2D5AC6EA5F802A65F0C119C9A87EFCB20617CD7B_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_43 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_7 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_9 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_10 = (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_11 = L_10;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_19 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m449BA9EC55349EF349E738ABAE9265AE1BFABC08_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD* L_2 = (ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mA6F82486BB6A1BFA49636709FF1BC84FDBE59D96_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m8D9350AAF4FD3265566096119CFF252BB72C8CC2_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m229C1DFF5BFE3DB429851D460271D58A96A2ED12_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mD0AFF0541AEA16977FA06D967C21B35145A467CF_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ManualResetValueTaskSourceCore_1_GetResult_m1AF193DE3B26F47F216A34C207988E0A6E580B29_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mC522B49D7D2CF9A0FCA0037F677F1460DE38EF5E_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_43 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_7 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_9 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_10 = (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_11 = L_10;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_19 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m0D16E61936A591EE50C6A0775F03BA50C38BD32A (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		bool* L_2 = (bool*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m68CA264778C35B72D3720931E7657F724D12E04C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, bool ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mB0640DBFBC14BC4F6CEBEA405E621B9D61B86D4B (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mDBEB9C4A34525DB098B1BB39EB7C82C6F3A59EBB (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m9AB7F5CEFC512304D381AA39FCC5C39F90DE1061 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_GetResult_m966754ADB9C524C24F22E830B21D10BEE4CDBC6E (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		bool L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB201EA33D774FB460FF8D5E1F31D81EA8B9BE15C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_43 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_7 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_9 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_10 = (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_11 = L_10;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_19 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mA1124455316B9A21B574B7534B7634930DBF4819 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_2 = (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mAB1E4665D9FAE9382F8E3D9F3DA6E1FDEBDB8988 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mA9CAF16B00FD644238D06CD1E400C5EAAC77B223 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEB84EF7AF3EF779326591C4029D2D67800C83F79 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mAF61D032C85265E85C35885CF0BDE1B05C1CBBBA (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ManualResetValueTaskSourceCore_1_GetResult_m3414631E4E6442F3387FD5696353E4DC4D996F8B (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB4BD238C2FB1A7A1ACE0A8BB5BBEE72994F99850 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_43 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_7 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_9 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_10 = (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_11 = L_10;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_19 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mC6B64A53E44C35B583D1A2391FCC1BE81E165344_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m844EBABC78CC898DA13FB6303B8C6E15893654EB_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result), (void*)L_0);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mF463755DA8463216488439C2448C5A2C7E25EF54_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mBF5C8CF17B560BDD9AB1A454DE90029164CA5F4C_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m3030DC4B16C28DA7A451B34E75CA6913985B005D_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ManualResetValueTaskSourceCore_1_GetResult_m09A654557257394869C7432EB05B8B88A69C360E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		Il2CppSharedGenericObject* L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04AF624DBD24D07C63B7257D036F1B416AC9E7A6_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_43 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_7 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_9 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_10 = (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_11 = L_10;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_19 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mDD02D741785B516AF918F4B558FFA1B98ACD3D0F_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m510A349D977D43AC9401DDD55E2CDBB91168D560_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),7), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (bool)0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_write_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),6), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		il2cpp_codegen_write_field_data<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), NULL);
		il2cpp_codegen_write_field_data<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m963686376F48F1A227E9CC1FF86B449DAFC1B3CD_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___0_result : &___0_result), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),5), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_0, SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mF7BF08920989E5C2698F01D53613CACD21D541F6_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		il2cpp_codegen_write_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),6), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_1);
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m755C0341857AF92FAEFFC86C4617CEA4206620E3_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m632C224C7134BD4B5E7A0A94D88D694159C61855_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_GetResult_m2591EF1326047360EF20288EA0304D8C1A6E9BA1_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		return;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m42E3144E0F4EBF175C4015BDF7EBFD6E0BD1707E_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		il2cpp_codegen_write_field_data<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22;
		L_22 = il2cpp_intrinsic_interlocked_compare_exchange((((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))), L_21, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_22;
	}

IL_0089:
	{
		RuntimeObject* L_23 = V_0;
		if (!L_23)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_25 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_24) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_25)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_5 = L_26;
		RuntimeObject* L_27 = V_5;
		if (!L_27)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_28 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_28, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_29 = V_3;
		if (L_29)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_30 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_30, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_31 = V_4;
		if (L_31)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_32 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_32)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_33 = ___0_continuation;
		RuntimeObject* L_34 = ___1_state;
		bool L_35;
		L_35 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_33, L_34, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_36 = ___0_continuation;
		RuntimeObject* L_37 = ___1_state;
		bool L_38;
		L_38 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_36, L_37, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_39 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_40 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = L_40;
		if (L_41)
		{
			G_B24_0 = L_41;
			G_B24_1 = L_39;
			goto IL_00fd;
		}
		G_B23_0 = L_41;
		G_B23_1 = L_39;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_42 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_43 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_43, (RuntimeObject*)L_42, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = L_43;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_44);
		G_B24_0 = L_44;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_45 = ___0_continuation;
		RuntimeObject* L_46 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_47;
		L_47 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_45, L_46, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_47);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_48;
		L_48 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_49 = ___0_continuation;
		RuntimeObject* L_50 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_51;
		L_51 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_52 = V_4;
		NullCheck(L_48);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_53;
		L_53 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_48, L_49, L_50, L_51, 8, L_52, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m42805625C11AAC4FC1096AD7AAF0A9895BCD46D1_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m44775A2F3DF4BE1B461339AF576A094007609137_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (bool)1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange((((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))), L_2, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_3)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_6 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_7 = L_6;
		if (L_7)
		{
			G_B7_0 = L_7;
			G_B7_1 = L_5;
			goto IL_005c;
		}
		G_B6_0 = L_7;
		G_B6_1 = L_5;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_8 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_9 = (ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		((  void (*) (ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)))(L_9, (RuntimeObject*)L_8, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_10 = L_9;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_10);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*, ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(G_B7_1, G_B7_0, __this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return;
	}

IL_0063:
	{
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m64FDB14F39773A4F0C60CB557B4E6C6A4AFF152A_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ((  bool (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_19 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mDF6BC21AC744EBC1DABDB771AAF46D6EF330350F_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		int32_t* L_2 = (int32_t*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(int32_t));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m1C6A17BAD6622AF12F90F4E05F6A2EF2C1043D38_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int32_t ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mDCCDA1C3EFA844958908E7B0BCF702A6F8919933_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m40C4F5702D2D1E9F251EF3B30B718AF3CF82967F_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m38EDE9F358A0122B4AF456DDECC17CBA803FF560_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetResult_mDF08F335DA94C1BD14307BE9CA72E92781D6CF30_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		int32_t L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m4BEA9C534DE5896C82C81B91A6B71D4A5CEF02B1_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_43 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_7 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_9 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_10 = (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_11 = L_10;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_19 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m2C9FA4F1EFF240198BC2E23FEEED563F75943CA9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_2 = (Metrics_t865BF0741490865117A79705F58784742D6F02B8*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(Metrics_t865BF0741490865117A79705F58784742D6F02B8));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m57DBA55193D0E8E9B2773FAD70255D7E5E1402D1 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mCDF3AD1FEA7C4FDAF0DCD2B0747301DE32DC2921 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m5E989EA24BC5AEEA00447BBC85971C2B7FDADCF0 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m2C7749654532AC9D59391794B0162A4787FDF045 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 ManualResetValueTaskSourceCore_1_GetResult_m078411966BB0BF14547C8ABEA1A4DCE7A591FD05 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mF6C089650C0CB25B2E5EEAC72BB996FF391D919B (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_43 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_7 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_9 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_10 = (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_11 = L_10;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_19 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 5291
// Method Definition Index: 5292
// Method Definition Index: 5293
// Method Definition Index: 5294
// Method Definition Index: 5295
// Method Definition Index: 5296
// Method Definition Index: 5297
// Method Definition Index: 5298
// Method Definition Index: 5299
// Method Definition Index: 5300
// Method Definition Index: 5301
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m2F481529B1C516C912AE7008867C8CEC3917B4CA (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mA6E9D9E32AB793820A07F932070B08244B72E15A (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B* L_2 = (AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m9D66096AB30564492A008691A9141024B187503F (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____result))->____tracker), (void*)NULL);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mC2F885F79CE516C7EEA8163CE71A4042EC725308(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m95B5A2AF3F3B703E79765E1ED5E447656FBF56D5 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mC2F885F79CE516C7EEA8163CE71A4042EC725308(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m6BA376B040B19F6E5029A54DD3F90BFEC92B0061 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m2F90A2735D9008CB4F2C73180D1E675ACB36AA3B (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B ManualResetValueTaskSourceCore_1_GetResult_mB89775BE042C3C4A229FD03E2094D889E2C45AF3 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		AsyncLock_t4C2B2F5A918FB982D90F2689A8BC5DEC785DE52B L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mA5354556B47992B515C82596FE5BFE7B38E33B43 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D* L_43 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC267BBA32514305241A7411220EB3684753785C2 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mC2F885F79CE516C7EEA8163CE71A4042EC725308 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* L_7 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D* L_9 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* L_10 = (ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m5A05C20208ECBBC47B673FAEB91426DF86346949(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t899516293BFF85124B02F4C3B62E560CA24F2BAA* L_11 = L_10;
		((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45_m781F7901618419D8F3164AB883D4EA36DAD1FEB9(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m237972B57B02A03461EE2080A5C64D6658B39DD7(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m237972B57B02A03461EE2080A5C64D6658B39DD7 (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m2F481529B1C516C912AE7008867C8CEC3917B4CA_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D* L_19 = ((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t752792A200CCC1920FC27CCC836EB8BF1949A84D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
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
// Method Definition Index: 94772
// Method Definition Index: 94773
// Method Definition Index: 94774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Definition_m0089278AA2451D4DA3A6405A0053BBB683E064CE (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* V_1 = NULL;
	{
		MultiInputUnit_1_Definition_m25F6CEAB52119FFDF67663DF556602CB2188A007(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84* L_0 = (Func_2_t0FC20FF8C2E4818EC62830FC1839407381014B84*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		Func_2__ctor_mF53FFAD9FFFDB7826F1D7F184C8D28EAEFD90F45(L_0, __this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), NULL);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_1;
		L_1 = Unit_ValueOutput_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m039FDD20D7A16689873E8C7607CA53A0C40D7862(__this, _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_1);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_2;
		L_2 = ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736(L_1, NULL);
		Maximum_1_set_maximum_m21E453F4FE53D8130742BCD716F03CDEFACBFBBA_inline(__this, L_2, NULL);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_3;
		L_3 = MultiInputUnit_1_get_multiInputs_m71D836286E0A0111B4DC9AC12728FF8F0EE4ACF4_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8(L_3, ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_8;
				L_8 = InterfaceFuncInvoker0< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* >::Invoke(0, IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_9 = V_1;
				ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_10;
				L_10 = Maximum_1_get_maximum_m6C975BFD2DB0A33DCF86566538829C878972A497_inline(__this, NULL);
				Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809(__this, L_9, L_10, NULL);
			}

IL_004a_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// Method Definition Index: 94777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Maximum_1_Operation_m6ADA8909B35DBA56C7FBCF6668634A4D818B1DC3 (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D* __this, Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* ___0_flow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(78, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_1 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_2;
		L_2 = MultiInputUnit_1_get_multiInputs_m71D836286E0A0111B4DC9AC12728FF8F0EE4ACF4_inline(__this, NULL);
		NullCheck(L_2);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_3;
		L_3 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_2, 0, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_1);
		float L_4;
		L_4 = Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF(L_1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_5 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_6;
		L_6 = MultiInputUnit_1_get_multiInputs_m71D836286E0A0111B4DC9AC12728FF8F0EE4ACF4_inline(__this, NULL);
		NullCheck(L_6);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_6, 1, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_5);
		float L_8;
		L_8 = Flow_GetValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFAA42FEC56C0636578AC3386C19FE39A6F0B04CF(L_5, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		float L_9;
		L_9 = VirtualFuncInvoker2< float, float, float >::Invoke(80, __this, L_4, L_8);
		return L_9;
	}

IL_0034:
	{
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_10;
		L_10 = MultiInputUnit_1_get_multiInputs_m71D836286E0A0111B4DC9AC12728FF8F0EE4ACF4_inline(__this, NULL);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_11 = ___0_flow;
		Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C* L_12 = (Func_2_tF884C412552EB3E54C7287A70ACB283B049F514C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
		Func_2__ctor_m3C326996DF4E34B09865AB44399C79641F40B7DC(L_12, L_11, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBB65F3A54B826526121E63506CA83F85C3A1FFAD(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		float L_14;
		L_14 = VirtualFuncInvoker1< float, RuntimeObject* >::Invoke(81, __this, L_13);
		return L_14;
	}
}
// Method Definition Index: 94778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1__ctor_m10D092F8625C3D8695686441867A3D266617B963 (Maximum_1_tE5B5B2553B1DA17AC9AD6EC4EE85FBAE54D63F3D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MultiInputUnit_1__ctor_m17509DD51F259A6A877B092B1AB030DBF28DBBC7(__this, NULL);
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
// Method Definition Index: 94772
// Method Definition Index: 94773
// Method Definition Index: 94774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Definition_m44C6F3C9C63B700954E004C62E4214213E6ADE9B (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* V_1 = NULL;
	{
		MultiInputUnit_1_Definition_mB38B1FB185B0533FFF90BBBEC1EBFDF8CCEE8506(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B* L_0 = (Func_2_tB4E80D24D99E11D7091949A721AAF0EE41CE867B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		Func_2__ctor_mE9E5873A90C57FFB6BF79DF507EB649B2F7F805D(L_0, __this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), NULL);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_1;
		L_1 = Unit_ValueOutput_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m361C2B6CE866543DFB652A1889EF7DAE569F5BC7(__this, _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_1);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_2;
		L_2 = ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736(L_1, NULL);
		Maximum_1_set_maximum_m8557A216BEC90669C2F5E1C97B803F6A9C4D5670_inline(__this, L_2, NULL);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_3;
		L_3 = MultiInputUnit_1_get_multiInputs_m1D62090F1FABEF4864CB354EF18B26F1C383E6C6_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8(L_3, ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_8;
				L_8 = InterfaceFuncInvoker0< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* >::Invoke(0, IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_9 = V_1;
				ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_10;
				L_10 = Maximum_1_get_maximum_m3B92C26DB6889C9610BF41B8E78106BE1FFA101A_inline(__this, NULL);
				Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809(__this, L_9, L_10, NULL);
			}

IL_004a_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// Method Definition Index: 94777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Maximum_1_Operation_m8DDD339EF0BCAF6EDD5B7DB930A4595E6FA6DB3B (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F* __this, Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* ___0_flow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(78, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_1 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_2;
		L_2 = MultiInputUnit_1_get_multiInputs_m1D62090F1FABEF4864CB354EF18B26F1C383E6C6_inline(__this, NULL);
		NullCheck(L_2);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_3;
		L_3 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_2, 0, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Flow_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m045E887DCCC284FDEB1CAE038AB1BB8EDDEE4376(L_1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_5 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_6;
		L_6 = MultiInputUnit_1_get_multiInputs_m1D62090F1FABEF4864CB354EF18B26F1C383E6C6_inline(__this, NULL);
		NullCheck(L_6);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_6, 1, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Flow_GetValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m045E887DCCC284FDEB1CAE038AB1BB8EDDEE4376(L_5, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = VirtualFuncInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(80, __this, L_4, L_8);
		return L_9;
	}

IL_0034:
	{
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_10;
		L_10 = MultiInputUnit_1_get_multiInputs_m1D62090F1FABEF4864CB354EF18B26F1C383E6C6_inline(__this, NULL);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_11 = ___0_flow;
		Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139* L_12 = (Func_2_t93AF9BF75D763EC76EDC24325158D0A320C0E139*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
		Func_2__ctor_mFFCAE09994762D5940598FD76779FCE94266CBA7(L_12, L_11, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA304E8AB9EF4F2028D80B36295445E4DED176AEE(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(81, __this, L_13);
		return L_14;
	}
}
// Method Definition Index: 94778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1__ctor_mC8EB2A8E61497809651161D1BB29928C47F36968 (Maximum_1_t52DD678E6CCCDB4066013A42D34FE97610500D2F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MultiInputUnit_1__ctor_m5790694AC0BF5FD13CDF6133A13D4AAA349A1F26(__this, NULL);
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
// Method Definition Index: 94772
// Method Definition Index: 94773
// Method Definition Index: 94774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Definition_m2D185FC0B36A49E8A3F7FBBA667200980BAC637B (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* V_1 = NULL;
	{
		MultiInputUnit_1_Definition_m06BC8BE89AB3FFCAD8D300E944CC2590463B6F5F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B* L_0 = (Func_2_t0D515DC0786F388C37CD68F67B38F1F5D468901B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		Func_2__ctor_m06CCABD848FD916E05298F3EF64DED9EFA88438E(L_0, __this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), NULL);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_1;
		L_1 = Unit_ValueOutput_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m249BF749883366BD04F81E63FFE3308F6DD314BC(__this, _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_1);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_2;
		L_2 = ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736(L_1, NULL);
		Maximum_1_set_maximum_m15076E6CC07816A90B137D227E261F488DE0B05E_inline(__this, L_2, NULL);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_3;
		L_3 = MultiInputUnit_1_get_multiInputs_m27A254D9163F3C6C2604C3941078057A66C57073_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8(L_3, ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_8;
				L_8 = InterfaceFuncInvoker0< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* >::Invoke(0, IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_9 = V_1;
				ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_10;
				L_10 = Maximum_1_get_maximum_m30496E086B8CD7BDB88260E700642DE2C4563576_inline(__this, NULL);
				Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809(__this, L_9, L_10, NULL);
			}

IL_004a_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// Method Definition Index: 94777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Maximum_1_Operation_m845DA2DC668D67C5BC7B95F65289C64BD8C416AD (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561* __this, Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* ___0_flow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(78, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_1 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_2;
		L_2 = MultiInputUnit_1_get_multiInputs_m27A254D9163F3C6C2604C3941078057A66C57073_inline(__this, NULL);
		NullCheck(L_2);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_3;
		L_3 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_2, 0, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Flow_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA592D2C65EF035471B5EBFF72D1CCE8990108EA3(L_1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_5 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_6;
		L_6 = MultiInputUnit_1_get_multiInputs_m27A254D9163F3C6C2604C3941078057A66C57073_inline(__this, NULL);
		NullCheck(L_6);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_6, 1, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Flow_GetValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA592D2C65EF035471B5EBFF72D1CCE8990108EA3(L_5, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(80, __this, L_4, L_8);
		return L_9;
	}

IL_0034:
	{
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_10;
		L_10 = MultiInputUnit_1_get_multiInputs_m27A254D9163F3C6C2604C3941078057A66C57073_inline(__this, NULL);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_11 = ___0_flow;
		Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030* L_12 = (Func_2_tAAC29290C710831402035B3B327A5C93C0CAC030*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
		Func_2__ctor_mBE40818874E8A9FF1042ACC0A071F5E7E6B53600(L_12, L_11, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9378D78F11BB0350E153B3F93C78531530BE5783(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(81, __this, L_13);
		return L_14;
	}
}
// Method Definition Index: 94778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1__ctor_m57AF354225C1EE7380CD737623F76F4BEB1F989F (Maximum_1_tE515EF101FE4005B2D226B2EE875AEF04F5D7561* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MultiInputUnit_1__ctor_mFC715A8727CC370ACE9E6BBFAA10D65F04AE073E(__this, NULL);
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
// Method Definition Index: 94772
// Method Definition Index: 94773
// Method Definition Index: 94774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Definition_mF9D14C04ED0926BA59E0E110E2C19DAB4BDEA1C7 (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* V_1 = NULL;
	{
		MultiInputUnit_1_Definition_m71EA394ED340069B2410C5D46A3AC66DF6349A13(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38* L_0 = (Func_2_t6824D8E92FC886D316AD760E5DF7296AAB542A38*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		Func_2__ctor_mEE583AC91F7B5A4817581DD9E55E8A8A944B4E2C(L_0, __this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), NULL);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_1;
		L_1 = Unit_ValueOutput_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mCDC032021FB403D399A4A305BADCB1AB15C5B994(__this, _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_1);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_2;
		L_2 = ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736(L_1, NULL);
		Maximum_1_set_maximum_m9029E5FCAA4E55B2680EA18F7E3CEBC74ABA617C_inline(__this, L_2, NULL);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_3;
		L_3 = MultiInputUnit_1_get_multiInputs_m8082B58A3A02FC4B0C443C094A4B20FFF9A52FCA_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8(L_3, ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_8;
				L_8 = InterfaceFuncInvoker0< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* >::Invoke(0, IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_9 = V_1;
				ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_10;
				L_10 = Maximum_1_get_maximum_m46CECA9A0AD3F74E29F1E37F16A0C8D7545AE020_inline(__this, NULL);
				Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809(__this, L_9, L_10, NULL);
			}

IL_004a_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// Method Definition Index: 94777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Maximum_1_Operation_m0C23440A7AE62166DAB554DACC1C18F084D08374 (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A* __this, Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* ___0_flow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(78, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_1 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_2;
		L_2 = MultiInputUnit_1_get_multiInputs_m8082B58A3A02FC4B0C443C094A4B20FFF9A52FCA_inline(__this, NULL);
		NullCheck(L_2);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_3;
		L_3 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_2, 0, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Flow_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DC64597C1E60BFF073DCEF83A4180BE7BF6EED2(L_1, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_5 = ___0_flow;
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_6;
		L_6 = MultiInputUnit_1_get_multiInputs_m8082B58A3A02FC4B0C443C094A4B20FFF9A52FCA_inline(__this, NULL);
		NullCheck(L_6);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_6, 1, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_5);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Flow_GetValue_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DC64597C1E60BFF073DCEF83A4180BE7BF6EED2(L_5, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = VirtualFuncInvoker2< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(80, __this, L_4, L_8);
		return L_9;
	}

IL_0034:
	{
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_10;
		L_10 = MultiInputUnit_1_get_multiInputs_m8082B58A3A02FC4B0C443C094A4B20FFF9A52FCA_inline(__this, NULL);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_11 = ___0_flow;
		Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED* L_12 = (Func_2_t5C8E65041A7F24EE320A2DDCD10BFAE789F229ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
		Func_2__ctor_m7CD275F437FEB527A1FD6C2E78113B880270E46F(L_12, L_11, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m39AD03244DB05712E756CB177D59416F28C89D39(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = VirtualFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, RuntimeObject* >::Invoke(81, __this, L_13);
		return L_14;
	}
}
// Method Definition Index: 94778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1__ctor_m7B9788793C5C888FF407B17F1F64E3152CBFA139 (Maximum_1_t95DBFB824A11DBD481FF1D8BB163CDCF41C2DB1A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MultiInputUnit_1__ctor_m9EC66B0EEF73919EC728E1773D1212ABF02B66E1(__this, NULL);
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
// Method Definition Index: 94772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_0 = __this->___U3CmaximumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 94773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_0 = ___0_value;
		__this->___U3CmaximumU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaximumU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 94774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Definition_m0B5152960A25FE9B638AB3724D36D6AB901E231E_fshared (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* V_1 = NULL;
	{
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		((  void (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B* L_0 = (Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
		((  void (*) (Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(L_0, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), NULL);
		NullCheck((Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*)__this);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_1;
		L_1 = ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*, String_t*, Func_2_tB5F9BE35E4AA94B462634399A29B0A00F9C45B4B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))((Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*)__this, _stringLiteralBDA7FC09DA5C880BF9D6040156838ACE1A02817F, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NullCheck(L_1);
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_2;
		L_2 = ValueOutput_Predictable_mA0C2A0B9760C00B077ECDC644F1AE839A6EA1736(L_1, NULL);
		((  void (*) (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323*, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_2, NULL);
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_3;
		L_3 = ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8(L_3, ReadOnlyCollection_1_GetEnumerator_m5C7C2C896E59E3FDCE42D3C2F5B6317679E988F8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_8;
				L_8 = InterfaceFuncInvoker0< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* >::Invoke(0, IEnumerator_1_t154184C6F7B3234EDD6DB28CF65D27D28B231E18_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_9 = V_1;
				ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_10;
				L_10 = ((  ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* (*) (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, NULL);
				NullCheck((Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*)__this);
				Unit_Requirement_m51C96EBEF949FC801D26BA8AF75D305C6494D809((Unit_tEFDDF0DAD2C72D6F68E357D3530E23599F7D8191*)__this, L_9, L_10, NULL);
			}

IL_004a_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_005e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		return;
	}
}
// Method Definition Index: 94777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1_Operation_mF0E1A00B6F2D6B46710D7A0E06E184746140E51D_fshared (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* ___0_flow, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC);
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC);
	//<source_info:<no-source>:1>
	{
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(78, (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_1 = ___0_flow;
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_2;
		L_2 = ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, NULL);
		NullCheck(L_2);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_3;
		L_3 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_2, 0, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_1);
		InvokerActionInvoker2< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), L_1, L_3, (Il2CppFullySharedGenericAny*)L_4);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_5 = ___0_flow;
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_6;
		L_6 = ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, NULL);
		NullCheck(L_6);
		ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392* L_7;
		L_7 = ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4(L_6, 1, ReadOnlyCollection_1_get_Item_m7DF7514F283CC134639BB6AED51F9E7118CCB0E4_RuntimeMethod_var);
		NullCheck(L_5);
		InvokerActionInvoker2< ValueInput_t2F9A2AA29F683A1C27C273BF8AABA4C2D9851392*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), L_5, L_7, (Il2CppFullySharedGenericAny*)L_8);
		VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(80, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)) ? L_8: *(void**)L_8), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC);
		return;
	}

IL_0034:
	{
		NullCheck((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this);
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_10;
		L_10 = ((  ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, NULL);
		Flow_tC370BDFF173D53E274F883ED6ADAFE29B049C582* L_11 = ___0_flow;
		Func_2_tDF45E5A9ECFB307BF4418A8ECD594AF82A625551* L_12 = (Func_2_tDF45E5A9ECFB307BF4418A8ECD594AF82A625551*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
		((  void (*) (Func_2_tDF45E5A9ECFB307BF4418A8ECD594AF82A625551*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(L_12, L_11, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDF45E5A9ECFB307BF4418A8ECD594AF82A625551*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_10, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		VirtualActionInvoker2Invoker< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(81, __this, L_13, (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_T_tEA2876FD3456167AA325EEEAA0A2A044F99DB6FC);
		return;
	}
}
// Method Definition Index: 94778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maximum_1__ctor_mEB57D4F9B317ABFC34B228724347E45348A8FBA3_fshared (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9*)__this, NULL);
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
// Method Definition Index: 11605
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11605
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryManager_1_TryGetArray_mD5E21D825D64F54D13E8D64297A71424E0CA60C9_fshared (MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* __this, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* ___0_segment, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_0 = ___0_segment;
		il2cpp_codegen_initobj(L_0, sizeof(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178));
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		__this->____object = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_2);
		__this->____index = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m68A8E646FE59E19C27755D139B2EB8BBB4914685 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_array;
		__this->____object = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_11);
		int32_t L_12 = ___1_start;
		__this->____index = L_12;
		int32_t L_13 = ___2_length;
		__this->____length = L_13;
		return;
	}
}
// Method Definition Index: 2080
// Method Definition Index: 2081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 Memory_1_op_Implicit_m40D10666CBBA1748CA281BAB5EDA02E8525D1B3C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 2082
// Method Definition Index: 2083
// Method Definition Index: 2084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_mB1A2F3FD59B83C362C8302E1AF255EAF7CCBBD4A (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = ((int32_t)(L_3&((int32_t)2147483647LL)));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Memory_1_ToString_mB1A2F3FD59B83C362C8302E1AF255EAF7CCBBD4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036>(__this);
	String_t* _returnValue;
	_returnValue = Memory_1_ToString_mB1A2F3FD59B83C362C8302E1AF255EAF7CCBBD4A(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2085
// Method Definition Index: 2086
// Method Definition Index: 2087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, NULL);
		return L_5;
	}

IL_0034:
	{
		goto IL_0089;
	}

IL_0089:
	{
		RuntimeObject* L_6 = __this->____object;
		if (!L_6)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_10), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), L_8, ((int32_t)(L_9&((int32_t)2147483647LL))), NULL);
		return L_10;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 2088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_mEB11D0F8C8EB46D23F5B487EC428AA067637F873 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_4;
	memset((&V_4), 0, sizeof(V_4));
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		int32_t L_2 = __this->____index;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_3;
		L_3 = VirtualFuncInvoker1< MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD, int32_t >::Invoke(5, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))), ((int32_t)(L_2&((int32_t)2147483647LL))));
		return L_3;
	}

IL_0026:
	{
		goto IL_0076;
	}

IL_0076:
	{
		RuntimeObject* L_4 = __this->____object;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		if (!L_5)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_6 = __this->____length;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		void* L_9;
		L_9 = il2cpp_unsafe_as_pointer(L_8);
		int32_t L_10 = __this->____index;
		void* L_11;
		L_11 = il2cpp_unsafe_add<uint8_t,int32_t>(L_9, L_10, sizeof(uint8_t));
		il2cpp_codegen_initobj((&V_3), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12 = V_3;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_13;
		memset((&L_13), 0, sizeof(L_13));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_13), L_11, L_12, (RuntimeObject*)NULL, NULL);
		return L_13;
	}

IL_00b4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_15;
		L_15 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_14, 3, NULL);
		V_4 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck((RuntimeArray*)L_16);
		uint8_t* L_17;
		L_17 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_16, NULL);
		void* L_18;
		L_18 = il2cpp_unsafe_as_pointer(L_17);
		int32_t L_19 = __this->____index;
		void* L_20;
		L_20 = il2cpp_unsafe_add<uint8_t,int32_t>(L_18, L_19, sizeof(uint8_t));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_21 = V_4;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_22;
		memset((&L_22), 0, sizeof(L_22));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_22), L_20, L_21, (RuntimeObject*)NULL, NULL);
		return L_22;
	}

IL_00dc:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_23 = V_5;
		return L_23;
	}
}
// Method Definition Index: 2089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Memory_1_ToArray_mFFF10775AF41F16E84896E79791E6D35657B0DB2 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0;
		L_0 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_inline((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
// Method Definition Index: 2090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m9FEC5FAFF1463BC5D846F2A7575A25C60F95CCF0 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14))));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_2 = (*(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)__this);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_3;
		L_3 = Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD(L_2, NULL);
		bool L_4;
		L_4 = ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9((&V_0), L_3, NULL);
		return L_4;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17))))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_1 = ((*(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)UnBox(L_6, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17))));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_7 = V_1;
		bool L_8;
		L_8 = Memory_1_Equals_mFC02B29BD9A77E87A81EC2CFCF364ACDA3ED384A(__this, L_7, NULL);
		return L_8;
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m9FEC5FAFF1463BC5D846F2A7575A25C60F95CCF0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m9FEC5FAFF1463BC5D846F2A7575A25C60F95CCF0(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 2091
// Method Definition Index: 2092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_mF0ABC1A7FD71E5893FB319CEC658BF9D42D84BF6 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = Memory_1_CombineHashCodes_mB28C14918360DCF1F38D2B3FF7103191A6C72C8A(L_2, L_4, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t Memory_1_GetHashCode_mF0ABC1A7FD71E5893FB319CEC658BF9D42D84BF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036>(__this);
	int32_t _returnValue;
	_returnValue = Memory_1_GetHashCode_mF0ABC1A7FD71E5893FB319CEC658BF9D42D84BF6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2093
// Method Definition Index: 2094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mB28C14918360DCF1F38D2B3FF7103191A6C72C8A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = Memory_1_CombineHashCodes_mB3C5FDF64EE1BC13E072AA2B1FE571D1C8F256B8(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = Memory_1_CombineHashCodes_mB3C5FDF64EE1BC13E072AA2B1FE571D1C8F256B8(L_2, L_3, NULL);
		return L_4;
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
// Method Definition Index: 2078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
	}
}
// Method Definition Index: 2079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		__this->____object = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_17);
		int32_t L_18 = ___1_start;
		__this->____index = L_18;
		int32_t L_19 = ___2_length;
		__this->____length = L_19;
		return;
	}
}
// Method Definition Index: 2080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_op_Implicit_mFD3FBCC47F7B2A4351BE34A9200917FFA907A50A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline((&L_1), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_1;
	}
}
// Method Definition Index: 2082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* L_0;
		L_0 = il2cpp_unsafe_as_ref<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>((&___0_memory));
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1 = (*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return ((int32_t)(L_0&((int32_t)2147483647LL)));
	}
}
// Method Definition Index: 2084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		L_3 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_1 = L_3;
		String_t* L_4;
		L_4 = Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED((&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_4;
	}

IL_003f:
	{
		String_t* L_5 = V_0;
		int32_t L_6 = __this->____index;
		int32_t L_7 = __this->____length;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, L_6, ((int32_t)(L_7&((int32_t)2147483647LL))), NULL);
		return L_8;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_10);
		int32_t L_12 = __this->____length;
		int32_t L_13 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	String_t* _returnValue;
	_returnValue = Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____object;
		int32_t L_5 = __this->____index;
		int32_t L_6 = ___0_start;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_start;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		return L_9;
	}
}
// Method Definition Index: 2086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_start;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = ___0_start;
		int32_t L_10 = ___1_length;
		int32_t L_11 = V_0;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), NULL);
		return L_12;
	}
}
// Method Definition Index: 2087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_5;
	}

IL_0034:
	{
		bool L_6 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_1;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_10);
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_14), L_11, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = __this->____index;
		int32_t L_16 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17;
		L_17 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))((&V_0), L_15, L_16, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_17;
	}

IL_0089:
	{
		RuntimeObject* L_18 = __this->____object;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_19 = __this->____object;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_22), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), L_20, ((int32_t)(L_21&((int32_t)2147483647LL))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_22;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_23 = V_0;
		return L_23;
	}
}
// Method Definition Index: 2088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_4;
	memset((&V_4), 0, sizeof(V_4));
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		int32_t L_2 = __this->____index;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_3;
		L_3 = VirtualFuncInvoker1< MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD, int32_t >::Invoke(5, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))), ((int32_t)(L_2&((int32_t)2147483647LL))));
		return L_3;
	}

IL_0026:
	{
		bool L_4 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_5 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_7 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_7, 3, NULL);
		V_1 = L_8;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		void* L_11;
		L_11 = il2cpp_unsafe_as_pointer(L_10);
		int32_t L_12 = __this->____index;
		void* L_13;
		L_13 = ((  void* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_11, L_12, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = V_1;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_15;
		memset((&L_15), 0, sizeof(L_15));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_15), L_13, L_14, (RuntimeObject*)NULL, NULL);
		return L_15;
	}

IL_0076:
	{
		RuntimeObject* L_16 = __this->____object;
		V_2 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_18 = __this->____length;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_2;
		NullCheck((RuntimeArray*)L_19);
		uint8_t* L_20;
		L_20 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_19, NULL);
		void* L_21;
		L_21 = il2cpp_unsafe_as_pointer(L_20);
		int32_t L_22 = __this->____index;
		void* L_23;
		L_23 = ((  void* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_21, L_22, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_initobj((&V_3), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_24 = V_3;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_25;
		memset((&L_25), 0, sizeof(L_25));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_25), L_23, L_24, (RuntimeObject*)NULL, NULL);
		return L_25;
	}

IL_00b4:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_27;
		L_27 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_26, 3, NULL);
		V_4 = L_27;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = V_2;
		NullCheck((RuntimeArray*)L_28);
		uint8_t* L_29;
		L_29 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_28, NULL);
		void* L_30;
		L_30 = il2cpp_unsafe_as_pointer(L_29);
		int32_t L_31 = __this->____index;
		void* L_32;
		L_32 = ((  void* (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_30, L_31, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_33 = V_4;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_34;
		memset((&L_34), 0, sizeof(L_34));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_34), L_32, L_33, (RuntimeObject*)NULL, NULL);
		return L_34;
	}

IL_00dc:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_35 = V_5;
		return L_35;
	}
}
// Method Definition Index: 2089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
// Method Definition Index: 2090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_2 = (*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)__this);
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_3;
		L_3 = ((  ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(L_2, NULL);
		bool L_4;
		L_4 = ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))((&V_0), L_3, NULL);
		return L_4;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17))))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_1 = ((*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)UnBox(L_6, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = V_1;
		bool L_8;
		L_8 = ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(__this, L_7, NULL);
		return L_8;
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 2091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1 = ___0_other;
		RuntimeObject* L_2 = L_1.____object;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->____index;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_4 = ___0_other;
		int32_t L_5 = L_4.____index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->____length;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = ___0_other;
		int32_t L_8 = L_7.____length;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_AdjustorThunk (RuntimeObject* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 2092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))(L_2, L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	int32_t _returnValue;
	_returnValue = Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_left;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_right;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
	}
}
// Method Definition Index: 2094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_fshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(L_2, L_3, NULL);
		return L_4;
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
// Method Definition Index: 71611
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedCollection_1__ctor_m3B6360D2378DF7D8DCA87B4ECDACBE649AA52898_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_0 = (Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___collections = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collections), (void*)L_0);
		return;
	}
}
// Method Definition Index: 71612
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MergedCollection_1_get_Count_m5ADD5E90133F62D4D1A81596806E553EF6A00B02_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		V_0 = 0;
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_0 = __this->___collections;
		NullCheck(L_0);
		ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* L_1;
		L_1 = ((  ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* (*) (Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_1);
		Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 L_2;
		L_2 = InvokerFuncInvoker0< Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				Enumerator_Dispose_m4175423956FEF09EB6CC388E6030230CADE305ED((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_3;
				L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_1));
				V_2 = L_3;
				int32_t L_4 = V_0;
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_5);
				V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_6));
			}

IL_0026_1:
			{
				bool L_7;
				L_7 = ((  bool (*) (Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
				if (L_7)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 71613
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedCollection_1_get_IsReadOnly_mA84F22F86C4CF59C71533C12A42A4D8C91B6E8E1_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 71616
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedCollection_1_Includes_mA86A8BB35CD3565AB0D5BE9490C396566592911B_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Type_t* ___0_implementationType, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_implementationType;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599*, Type_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, L_0, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 71618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedCollection_1_System_Collections_IEnumerable_GetEnumerator_mAAEC96D78A7C89F0DC6CE078B5CBB2060C348AD0_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 71619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedCollection_1_GetEnumerator_mABF0CFEE413531A7C15105AF01F9170C1962153C_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CGetEnumeratorU3Ed__11_tE2CCBC907E4B1A08E585C41F9CF62BB6C25B8EE1* L_0 = (U3CGetEnumeratorU3Ed__11_tE2CCBC907E4B1A08E585C41F9CF62BB6C25B8EE1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
		((  void (*) (U3CGetEnumeratorU3Ed__11_tE2CCBC907E4B1A08E585C41F9CF62BB6C25B8EE1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		U3CGetEnumeratorU3Ed__11_tE2CCBC907E4B1A08E585C41F9CF62BB6C25B8EE1* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), __this);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 71620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedCollection_1_GetCollectionForItem_mC5ECF6150119A8E1CC7AD53539D9815B9B93787C_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit);
	const uint32_t SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit,(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9(_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_1: *(void**)L_1));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), &L_3, L_2);
		typedef Type_t* ( *func_L_5)(void*,const RuntimeMethod*);
		Type_t* L_6 = ((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599*, Type_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, L_6, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return L_7;
	}
}
// Method Definition Index: 71621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedCollection_1_GetCollectionForType_m8261594A8B992EFBF49AB8BA9B654C41F4427CB4_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Type_t* ___0_type, bool ___1_throwOnFail, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t700026870420ACE3270D1BDF081B5E8F25593CB0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_0 = __this->___collections;
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker1< bool, Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), L_0, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_3 = __this->___collections;
		Type_t* L_4 = ___0_type;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), L_3, L_4);
		return L_5;
	}

IL_001b:
	{
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_6 = __this->___collections;
		NullCheck(L_6);
		Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3 L_7;
		L_7 = InvokerFuncInvoker0< Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{
				Enumerator_Dispose_mAA276F8BD705987CD72A9728A3142CC2BDBC14D7((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_004a_1;
			}

IL_0029_1:
			{
				KeyValuePair_2_t700026870420ACE3270D1BDF081B5E8F25593CB0 L_8;
				L_8 = InvokerFuncInvoker0< KeyValuePair_2_t700026870420ACE3270D1BDF081B5E8F25593CB0 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22), (&V_0));
				V_1 = L_8;
				Type_t* L_9;
				L_9 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23), (&V_1));
				Type_t* L_10 = ___0_type;
				NullCheck(L_9);
				bool L_11;
				L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_9, L_10);
				if (!L_11)
				{
					goto IL_004a_1;
				}
			}
			{
				RuntimeObject* L_12;
				L_12 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24), (&V_1));
				V_2 = L_12;
				goto IL_0079;
			}

IL_004a_1:
			{
				bool L_13;
				L_13 = ((  bool (*) (Enumerator_t046A81E1E6C71C59B2664C263EC456B009A8D6E3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
				if (L_13)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0063;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		bool L_14 = ___1_throwOnFail;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		Type_t* L_15 = ___0_type;
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89AB0EC0F027A8F0B88AD0787D8C345FE59EFD0)), L_15, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0077:
	{
		return (RuntimeObject*)NULL;
	}

IL_0079:
	{
		RuntimeObject* L_18 = V_2;
		return L_18;
	}
}
// Method Definition Index: 71622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedCollection_1_Contains_m3B91E8B92125134C70559961BDEC916940B22813_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 71623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedCollection_1_Add_mCD112F953C8716EDE8A92BBDEAE099A2558B098C_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		NullCheck(L_1);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_2: *(void**)L_2));
		return;
	}
}
// Method Definition Index: 71624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedCollection_1_Clear_m63B7C0CAD66F749F0D68DDEC8557DFFFD998B9E0_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_0 = __this->___collections;
		NullCheck(L_0);
		ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* L_1;
		L_1 = ((  ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* (*) (Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_1);
		Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 L_2;
		L_2 = InvokerFuncInvoker0< Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				Enumerator_Dispose_m4175423956FEF09EB6CC388E6030230CADE305ED((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_3;
				L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_0));
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_3);
			}

IL_001f_1:
			{
				bool L_4;
				L_4 = ((  bool (*) (Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
				if (L_4)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// Method Definition Index: 71625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedCollection_1_Remove_m04D55E8B9368EC26676CE7C61F73AD8B8547E14A_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? ___0_item : &___0_item), SizeOf_T_tCD3678179F54917DB48E97EFA39D3806C9BE48EE);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 16)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 71626
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedCollection_1_CopyTo_m5E772A8B60A767F37DCE26789158DA7787F78D38_fshared (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7;
		L_7 = ((  int32_t (*) (MergedCollection_1_tC554E7AE342E5C1EDA317F0E2CB139510195A599*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0030:
	{
		V_0 = 0;
		Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA* L_9 = __this->___collections;
		NullCheck(L_9);
		ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* L_10;
		L_10 = ((  ValueCollection_t738D69509F693BB256E7352C8A509589975C46B7* (*) (Dictionary_2_tEE0013EAB4D2BDA96F58F8CCD596A290A316CADA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		NullCheck(L_10);
		Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 L_11;
		L_11 = InvokerFuncInvoker0< Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_10);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{
				Enumerator_Dispose_m4175423956FEF09EB6CC388E6030230CADE305ED((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0060_1;
			}

IL_0045_1:
			{
				RuntimeObject* L_12;
				L_12 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_1));
				V_2 = L_12;
				RuntimeObject* L_13 = V_2;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
				int32_t L_15 = ___1_arrayIndex;
				int32_t L_16 = V_0;
				NullCheck(L_13);
				InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)));
				int32_t L_17 = V_0;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_18);
				V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_19));
			}

IL_0060_1:
			{
				bool L_20;
				L_20 = ((  bool (*) (Enumerator_t1A1C9C0425932192CEC0A499242038F4072BA688*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
				if (L_20)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_0079;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
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
// Method Definition Index: 71635
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2__ctor_m400A424B8CCF764E189298721239C39E27E03B10_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_0 = (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		Dictionary_2__ctor_m3EC1B86BC8F0509A8F088D4113AF738BC1A8C3A9(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___collections = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collections), (void*)L_0);
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_1 = (Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		Dictionary_2__ctor_m3EC1B86BC8F0509A8F088D4113AF738BC1A8C3A9(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___collectionsLookup = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectionsLookup), (void*)L_1);
		return;
	}
}
// Method Definition Index: 71636
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MergedKeyedCollection_2_get_Item_mF7A0BBB7912D230A83C3CC7CDE09845DBB481F84_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_1 = __this->___collections;
		NullCheck(L_1);
		Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B L_2;
		L_2 = Dictionary_2_GetEnumerator_m4C5708218203DAD1DD854AC7E1B2AEE2E5F9A49A(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{
				Enumerator_Dispose_m2B105804D1E22598418E9EA3BB01B1FB4293531A((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0048_1;
			}

IL_0021_1:
			{
				KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 L_3;
				L_3 = Enumerator_get_Current_m7F01CFF8CB73F8FA710B8A865E528521FCA4E7AF_inline((&V_0), NULL);
				V_1 = L_3;
				RuntimeObject* L_4;
				L_4 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_1), NULL);
				Guid_t L_5 = ___0_key;
				NullCheck(L_4);
				bool L_6;
				L_6 = InterfaceFuncInvoker1< bool, Guid_t >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_4, L_5);
				if (!L_6)
				{
					goto IL_0048_1;
				}
			}
			{
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_1), NULL);
				Guid_t L_8 = ___0_key;
				NullCheck(L_7);
				Il2CppSharedGenericObject* L_9;
				L_9 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, Guid_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_7, L_8);
				V_2 = L_9;
				goto IL_0067;
			}

IL_0048_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m88509BB166883447904192E265BB4A411B3C33AE((&V_0), NULL);
				if (L_10)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0061;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_11 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0067:
	{
		Il2CppSharedGenericObject* L_12 = V_2;
		return L_12;
	}
}
// Method Definition Index: 71637
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MergedKeyedCollection_2_get_Count_m6AB1D2540513DB6822DD8ECD5FFC647870BE6EF9_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_0 = __this->___collections;
		NullCheck(L_0);
		Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B L_1;
		L_1 = Dictionary_2_GetEnumerator_m4C5708218203DAD1DD854AC7E1B2AEE2E5F9A49A(L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Enumerator_Dispose_m2B105804D1E22598418E9EA3BB01B1FB4293531A((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_0010_1:
			{
				KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 L_2;
				L_2 = Enumerator_get_Current_m7F01CFF8CB73F8FA710B8A865E528521FCA4E7AF_inline((&V_1), NULL);
				V_2 = L_2;
				int32_t L_3 = V_0;
				RuntimeObject* L_4;
				L_4 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_2), NULL);
				NullCheck((RuntimeObject*)L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_4);
				V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_5));
			}

IL_0027_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_m88509BB166883447904192E265BB4A411B3C33AE((&V_1), NULL);
				if (L_6)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 71638
// Method Definition Index: 71640
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Includes_m564D2CD2243923463A3F91139EF11670F5E58338_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Type_t* ___0_elementType, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_elementType;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1(__this, L_0, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 71643
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit,(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9(_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521, NULL);
		Il2CppSharedGenericObject* L_1 = ___0_item;
		NullCheck(L_0);
		EnsureThat_IsNotNull_TisIl2CppSharedGenericObject_m5BACE0A7351431F5CCA16F96BEEA860BC179451E(L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		NullCheck((RuntimeObject*)(___0_item));
		Type_t* L_2;
		L_2 = il2cpp_codegen_object_get_type((RuntimeObject*)(___0_item));
		RuntimeObject* L_3;
		L_3 = MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1(__this, L_2, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}
}
// Method Definition Index: 71644
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForType_m9BFFEEEE2E17536C405F68CF75672B562E4993C1_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Type_t* ___0_type, bool ___1_throwOnFail, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		CHECKED_LOCAL_INIT(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit,(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9(_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F(L_0, L_1, EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F_RuntimeMethod_var);
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_2 = __this->___collectionsLookup;
		Type_t* L_3 = ___0_type;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mA83A757DDBC5EC53310DF9A201EEC27CC3774CB2(L_2, L_3, (&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_0022:
	{
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_6 = __this->___collections;
		NullCheck(L_6);
		Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B L_7;
		L_7 = Dictionary_2_GetEnumerator_m4C5708218203DAD1DD854AC7E1B2AEE2E5F9A49A(L_6, NULL);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{
				Enumerator_Dispose_m2B105804D1E22598418E9EA3BB01B1FB4293531A((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0060_1;
			}

IL_0030_1:
			{
				KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 L_8;
				L_8 = Enumerator_get_Current_m7F01CFF8CB73F8FA710B8A865E528521FCA4E7AF_inline((&V_1), NULL);
				V_2 = L_8;
				Type_t* L_9;
				L_9 = KeyValuePair_2_get_Key_mFD63272138B662F7F0EF05F8C9F554B914C48753_inline((&V_2), NULL);
				Type_t* L_10 = ___0_type;
				NullCheck(L_9);
				bool L_11;
				L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_9, L_10);
				if (!L_11)
				{
					goto IL_0060_1;
				}
			}
			{
				RuntimeObject* L_12;
				L_12 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_2), NULL);
				V_0 = L_12;
				Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_13 = __this->___collectionsLookup;
				Type_t* L_14 = ___0_type;
				RuntimeObject* L_15 = V_0;
				NullCheck(L_13);
				Dictionary_2_Add_m70BD5A674677C68859B27722D6186B01265F4FF1(L_13, L_14, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
				RuntimeObject* L_16 = V_0;
				V_3 = L_16;
				goto IL_008f;
			}

IL_0060_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_m88509BB166883447904192E265BB4A411B3C33AE((&V_1), NULL);
				if (L_17)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0079;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		bool L_18 = ___1_throwOnFail;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		Type_t* L_19 = ___0_type;
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89AB0EC0F027A8F0B88AD0787D8C345FE59EFD0)), L_19, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_008d:
	{
		return (RuntimeObject*)NULL;
	}

IL_008f:
	{
		RuntimeObject* L_22 = V_3;
		return L_22;
	}
}
// Method Definition Index: 71645
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, bool ___1_throwOnFail, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_0 = __this->___collections;
		NullCheck(L_0);
		Enumerator_t859D9051AC7D18DBF5993A3CE50CF95EC3E3280B L_1;
		L_1 = Dictionary_2_GetEnumerator_m4C5708218203DAD1DD854AC7E1B2AEE2E5F9A49A(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				Enumerator_Dispose_m2B105804D1E22598418E9EA3BB01B1FB4293531A((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_002f_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_tC4C96A08F46DB371204D5AFD63EF8E0B16CAD475 L_2;
				L_2 = Enumerator_get_Current_m7F01CFF8CB73F8FA710B8A865E528521FCA4E7AF_inline((&V_0), NULL);
				V_1 = L_2;
				RuntimeObject* L_3;
				L_3 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_1), NULL);
				Guid_t L_4 = ___0_key;
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1< bool, Guid_t >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_3, L_4);
				if (!L_5)
				{
					goto IL_002f_1;
				}
			}
			{
				RuntimeObject* L_6;
				L_6 = KeyValuePair_2_get_Value_m5EBAB14F440DA4B98E321A17B95F39DC6C00BA16_inline((&V_1), NULL);
				V_2 = L_6;
				goto IL_0063;
			}

IL_002f_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m88509BB166883447904192E265BB4A411B3C33AE((&V_0), NULL);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0048;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		bool L_8 = ___1_throwOnFail;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		Guid_t L_9 = ___0_key;
		Guid_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAF3ED082BD3B74B60BE13F42B001034915D0E06)), L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0061:
	{
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		RuntimeObject* L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 71646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_TryGetValue_mFCB481A799C7264BEA74DC9A738B653D0151999A_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73(__this, L_0, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		V_0 = L_1;
		Il2CppSharedGenericObject** L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		Guid_t L_5 = ___0_key;
		Il2CppSharedGenericObject** L_6 = ___1_value;
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, Guid_t, Il2CppSharedGenericObject** >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_4, L_5, L_6);
		return L_7;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 71647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_Add_m9D3D0C7E84ADBC7DB97579BBA53307A3FEE348A8_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1< Il2CppSharedGenericObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, L_2);
		return;
	}
}
// Method Definition Index: 71648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_Clear_m2C6E002CFAAA283329783B934D5D3ACC997BBCE4_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_0 = __this->___collections;
		NullCheck(L_0);
		ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* L_1;
		L_1 = Dictionary_2_get_Values_m13D1E60C7B4C64468E6EA787F6EC23B07586D074(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		NullCheck(L_1);
		Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 L_2;
		L_2 = ValueCollection_GetEnumerator_m9847E5E2EA7C0B00994B6E3032DC6581275365DB(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				Enumerator_Dispose_m6B7924C5A6B8766E29C55DEA6C5966B22145AC20((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mA0F0DC12AEC6FBA398F845E93C085134DC635C30_inline((&V_0), NULL);
				NullCheck((RuntimeObject*)L_3);
				InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_3);
			}

IL_001f_1:
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_m3FA5BFA6986E7517AEF42E3926A0DEE8353B417C((&V_0), NULL);
				if (L_4)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// Method Definition Index: 71649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Contains_mFCDC31AD7364271B446C5600942FADE65F8B4EFE_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck((RuntimeObject*)L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 71650
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Remove_mBE68B11164C512E76F7EB5642A65CB638B6ADB6B_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForItem_m0BEBCA4EE528AE666D48C3EF7E447E233FFE3A97(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck((RuntimeObject*)L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 71651
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_CopyTo_mAACEE4185356E60471C410FCAE1C79DD7E235936_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7;
		L_7 = MergedKeyedCollection_2_get_Count_m6AB1D2540513DB6822DD8ECD5FFC647870BE6EF9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0030:
	{
		V_0 = 0;
		Dictionary_2_t3A8A58DC17FF8CEBEFDB576383E7DB7BC1002D9E* L_9 = __this->___collections;
		NullCheck(L_9);
		ValueCollection_t1F332035D3A9269E054E6D476B0FCAC89F3F94BB* L_10;
		L_10 = Dictionary_2_get_Values_m13D1E60C7B4C64468E6EA787F6EC23B07586D074(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		NullCheck(L_10);
		Enumerator_tFA119810E79DDBB84B2714EAC6E146D16A8B6160 L_11;
		L_11 = ValueCollection_GetEnumerator_m9847E5E2EA7C0B00994B6E3032DC6581275365DB(L_10, NULL);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{
				Enumerator_Dispose_m6B7924C5A6B8766E29C55DEA6C5966B22145AC20((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0060_1;
			}

IL_0045_1:
			{
				RuntimeObject* L_12;
				L_12 = Enumerator_get_Current_mA0F0DC12AEC6FBA398F845E93C085134DC635C30_inline((&V_1), NULL);
				V_2 = L_12;
				RuntimeObject* L_13 = V_2;
				__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = ___0_array;
				int32_t L_15 = ___1_arrayIndex;
				int32_t L_16 = V_0;
				NullCheck((RuntimeObject*)L_13);
				InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)));
				int32_t L_17 = V_0;
				RuntimeObject* L_18 = V_2;
				NullCheck((RuntimeObject*)L_18);
				int32_t L_19;
				L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_18);
				V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_19));
			}

IL_0060_1:
			{
				bool L_20;
				L_20 = Enumerator_MoveNext_m3FA5BFA6986E7517AEF42E3926A0DEE8353B417C((&V_1), NULL);
				if (L_20)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_0079;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		return;
	}
}
// Method Definition Index: 71652
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Contains_m3CBF6FFA4D9BD774A90E7DC3A5789A625C3C548C_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73(__this, L_0, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 71653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Remove_m7641F62B279760EE6CCD6DA5B13A743D46A4EDCE_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Guid_t L_0 = ___0_key;
		RuntimeObject* L_1;
		L_1 = MergedKeyedCollection_2_GetCollectionForKey_m2E362AE215A1725EC19E173A37EB3ED53FE56A73(__this, L_0, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		Guid_t L_2 = ___0_key;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, Guid_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_1, L_2);
		return L_3;
	}
}
// Method Definition Index: 71654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_System_Collections_IEnumerable_GetEnumerator_m3481B04B2BAD50DF179377674037284855296CF8_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C L_0;
		L_0 = MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC(__this, NULL);
		Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 71655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_System_Collections_Generic_IEnumerableU3CTItemU3E_GetEnumerator_m85D63B4E5DBA877FEF877125BF82A399C637F8A5_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C L_0;
		L_0 = MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC(__this, NULL);
		Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 71656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C MergedKeyedCollection_2_GetEnumerator_m630413713FB57B141B3E5A0CA370B24AE38C5DDC_gshared (MergedKeyedCollection_2_t6190988F324EAEB2A89BF14C574145B93B892741* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t8F0B1EAE85151918E71C17BBEE213E3A93A9512C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m54CDD61C1B382B1BEB4B8A891B48D34206D61F5E((&L_0), __this, NULL);
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
// Method Definition Index: 71635
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2__ctor_m0A77881C941A05842893170085AAD99D153B0240_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_0 = (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___collections = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collections), (void*)L_0);
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_1 = (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___collectionsLookup = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectionsLookup), (void*)L_1);
		return;
	}
}
// Method Definition Index: 71636
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_get_Item_m62032B2460F4334E4290BE78C84D45FB5C5661EB_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const uint32_t SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	const Il2CppFullySharedGenericAny L_14 = L_11;
	//<source_info:<no-source>:1>
	Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	memset(V_2, 0, SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_3 = __this->___collections;
		NullCheck(L_3);
		Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D L_4;
		L_4 = InvokerFuncInvoker0< Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{
				Enumerator_Dispose_m91D684A53A5E30DF7E5E49792F1F973DC0B7ABBD((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0048_1;
			}

IL_0021_1:
			{
				KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE L_5;
				L_5 = InvokerFuncInvoker0< KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_0));
				V_1 = L_5;
				RuntimeObject* L_6;
				L_6 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_1));
				il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
				NullCheck(L_6);
				bool L_8;
				L_8 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_7: *(void**)L_7));
				if (!L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				RuntimeObject* L_9;
				L_9 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_1));
				il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
				NullCheck(L_9);
				InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
				il2cpp_codegen_memcpy(V_2, L_11, SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
				goto IL_0067;
			}

IL_0048_1:
			{
				bool L_12;
				L_12 = ((  bool (*) (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_12)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0061;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_13 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0067:
	{
		il2cpp_codegen_memcpy(L_14, V_2, SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		return;
	}
}
// Method Definition Index: 71637
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MergedKeyedCollection_2_get_Count_m19B49E06FC4C3DEF9D243FFB02C272048A2D7B5E_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_0 = __this->___collections;
		NullCheck(L_0);
		Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D L_1;
		L_1 = InvokerFuncInvoker0< Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{
				Enumerator_Dispose_m91D684A53A5E30DF7E5E49792F1F973DC0B7ABBD((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_0010_1:
			{
				KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE L_2;
				L_2 = InvokerFuncInvoker0< KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_1));
				V_2 = L_2;
				int32_t L_3 = V_0;
				RuntimeObject* L_4;
				L_4 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_2));
				NullCheck((RuntimeObject*)L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_4);
				V_0 = ((int32_t)il2cpp_codegen_add(L_3, L_5));
			}

IL_0027_1:
			{
				bool L_6;
				L_6 = ((  bool (*) (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_6)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0040;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 71638
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_get_IsReadOnly_m3E7112C1A13FFDF71275B9CE288777EF3BE667E3_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 71640
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Includes_mB9568F29DDF2006274B67DFE32E94FA6F96FACC6_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Type_t* ___0_elementType, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_elementType;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*, Type_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, L_0, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 71643
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForItem_mB07E18E25CA9267849D9A9EDCFC89D5FE1B5FB9C_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit);
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit,(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9(_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_1: *(void**)L_1));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), &L_3, L_2);
		typedef Type_t* ( *func_L_5)(void*,const RuntimeMethod*);
		Type_t* L_6 = ((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*, Type_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, L_6, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_7;
	}
}
// Method Definition Index: 71644
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForType_m08EDD1ABEDFD3AFC29099C63D7E79E2447EDC793_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Type_t* ___0_type, bool ___1_throwOnFail, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		CHECKED_LOCAL_INIT(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_StaticInit,(Ensure_t1AB90E1B9CFC75A223C082272E0281C91184901D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EnsureThat_tCC49E8B65851E70C9534A68EB657B6227F0549FC* L_0;
		L_0 = Ensure_That_mA8D5A2A6E1D51157C99920962B64DF9BF20DA1E9(_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		Type_t* L_1 = ___0_type;
		NullCheck(L_0);
		EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F(L_0, L_1, EnsureThat_IsNotNull_TisType_t_m40B42BDE6178A07EC6EB4E316FB60D2C1F90964F_RuntimeMethod_var);
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_2 = __this->___collectionsLookup;
		Type_t* L_3 = ___0_type;
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_0022:
	{
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_6 = __this->___collections;
		NullCheck(L_6);
		Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D L_7;
		L_7 = InvokerFuncInvoker0< Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{
				Enumerator_Dispose_m91D684A53A5E30DF7E5E49792F1F973DC0B7ABBD((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0060_1;
			}

IL_0030_1:
			{
				KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE L_8;
				L_8 = InvokerFuncInvoker0< KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_1));
				V_2 = L_8;
				Type_t* L_9;
				L_9 = InvokerFuncInvoker0< Type_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (&V_2));
				Type_t* L_10 = ___0_type;
				NullCheck(L_9);
				bool L_11;
				L_11 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_9, L_10);
				if (!L_11)
				{
					goto IL_0060_1;
				}
			}
			{
				RuntimeObject* L_12;
				L_12 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_2));
				V_0 = L_12;
				Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_13 = __this->___collectionsLookup;
				Type_t* L_14 = ___0_type;
				RuntimeObject* L_15 = V_0;
				NullCheck(L_13);
				InvokerActionInvoker2< Type_t*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), L_13, L_14, L_15);
				RuntimeObject* L_16 = V_0;
				V_3 = L_16;
				goto IL_008f;
			}

IL_0060_1:
			{
				bool L_17;
				L_17 = ((  bool (*) (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_17)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_0079;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		bool L_18 = ___1_throwOnFail;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		Type_t* L_19 = ___0_type;
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89AB0EC0F027A8F0B88AD0787D8C345FE59EFD0)), L_19, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_008d:
	{
		return (RuntimeObject*)NULL;
	}

IL_008f:
	{
		RuntimeObject* L_22 = V_3;
		return L_22;
	}
}
// Method Definition Index: 71645
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_GetCollectionForKey_m9F2EA9BE4C52F523A71721AF59A404FB7E1FBEA4_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_key, bool ___1_throwOnFail, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	//<source_info:<no-source>:1>
	Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_0 = __this->___collections;
		NullCheck(L_0);
		Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D L_1;
		L_1 = InvokerFuncInvoker0< Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				Enumerator_Dispose_m91D684A53A5E30DF7E5E49792F1F973DC0B7ABBD((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_002f_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE L_2;
				L_2 = InvokerFuncInvoker0< KeyValuePair_2_tE44B9A09962D1040730206412AB4A435181D2BAE >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (&V_0));
				V_1 = L_2;
				RuntimeObject* L_3;
				L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_1));
				il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
				NullCheck(L_3);
				bool L_5;
				L_5 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_4: *(void**)L_4));
				if (!L_5)
				{
					goto IL_002f_1;
				}
			}
			{
				RuntimeObject* L_6;
				L_6 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_1));
				V_2 = L_6;
				goto IL_0063;
			}

IL_002f_1:
			{
				bool L_7;
				L_7 = ((  bool (*) (Enumerator_t391D96353AA372F41B7E4473BDAB57A89D9DFC5D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0048;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		bool L_8 = ___1_throwOnFail;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAF3ED082BD3B74B60BE13F42B001034915D0E06)), L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0061:
	{
		return (RuntimeObject*)NULL;
	}

IL_0063:
	{
		RuntimeObject* L_13 = V_2;
		return L_13;
	}
}
// Method Definition Index: 71646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_TryGetValue_m1BF778851F7CB86BFF4F667418AD6148A28685CC_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0), (bool)0);
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_5: *(void**)L_5), L_6);
		return L_7;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 71647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_Add_mB1697AB609726DCCE2981465A127246C81387154_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_2: *(void**)L_2));
		return;
	}
}
// Method Definition Index: 71648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_Clear_m9C772A562E2D1834327525EFF6B25013C2693FC2_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_0 = __this->___collections;
		NullCheck(L_0);
		ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74* L_1;
		L_1 = ((  ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74* (*) (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		NullCheck(L_1);
		Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F L_2;
		L_2 = InvokerFuncInvoker0< Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{
				Enumerator_Dispose_mEE2C957718EC7A5031359F242032CDFE0DB6AA61((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_3;
				L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), (&V_0));
				NullCheck((RuntimeObject*)L_3);
				InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_3);
			}

IL_001f_1:
			{
				bool L_4;
				L_4 = ((  bool (*) (Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))((&V_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
				if (L_4)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// Method Definition Index: 71649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Contains_mBED4E515AE661D662A9D99BC91A1583BEDC0C2E0_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		NullCheck((RuntimeObject*)L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 71650
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Remove_m8B3A57453808CFEA0F82549FC5AC355973A9BE7C_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_0: *(void**)L_0));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_TItem_t44988A189432FF21C3F0C4CEBBA7A641F1967F3E);
		NullCheck((RuntimeObject*)L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 71651
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_CopyTo_m844B348034847DE3552F0E06C3525B2B76181A1A_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7;
		L_7 = ((  int32_t (*) (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0030:
	{
		V_0 = 0;
		Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A* L_9 = __this->___collections;
		NullCheck(L_9);
		ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74* L_10;
		L_10 = ((  ValueCollection_t2D379C4B6B001F6A276746FAB3BBA5E951D3AD74* (*) (Dictionary_2_t31B3F7A6228750CB7481F0928966EC9DB8EF714A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		NullCheck(L_10);
		Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F L_11;
		L_11 = InvokerFuncInvoker0< Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26), L_10);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{
				Enumerator_Dispose_mEE2C957718EC7A5031359F242032CDFE0DB6AA61((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0060_1;
			}

IL_0045_1:
			{
				RuntimeObject* L_12;
				L_12 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), (&V_1));
				V_2 = L_12;
				RuntimeObject* L_13 = V_2;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
				int32_t L_15 = ___1_arrayIndex;
				int32_t L_16 = V_0;
				NullCheck((RuntimeObject*)L_13);
				InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)));
				int32_t L_17 = V_0;
				RuntimeObject* L_18 = V_2;
				NullCheck((RuntimeObject*)L_18);
				int32_t L_19;
				L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 12), (RuntimeObject*)L_18);
				V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_19));
			}

IL_0060_1:
			{
				bool L_20;
				L_20 = ((  bool (*) (Enumerator_tE8251EBF6A87A0559BAF4C3EA2A2804E42FF1C2F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
				if (L_20)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_0079;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		return;
	}
}
// Method Definition Index: 71652
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Contains_m1EFFA01D59DF484A2727F7074150B82AC72BCE81_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0), (bool)0);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 71653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MergedKeyedCollection_2_Remove_m1B2A85BA8F5A3E99DDAFF93006FA28A37597A777_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0), (bool)1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_key : &___0_key), SizeOf_TKey_t4A1C77F6C63F73FDF11E1DD67538AE9705122147);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// Method Definition Index: 71654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_System_Collections_IEnumerable_GetEnumerator_m9981F4F177C838DE16B9D450140AA946BE6A430C_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37));
	const Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724 L_0 = alloca(SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36), __this, (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 71655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MergedKeyedCollection_2_System_Collections_Generic_IEnumerableU3CTItemU3E_GetEnumerator_mDB9C1B3E62938133DD52581BD36740BD42EE775A_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37));
	const Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724 L_0 = alloca(SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36), __this, (Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 71656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MergedKeyedCollection_2_GetEnumerator_mFEF9F76B008E1542EC2B5D1E07D8010D6C6A81C0_fshared (MergedKeyedCollection_2_t3968D06213D0CA6B9201813F72943BDAF5F0A235* __this, Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37));
	const Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724 L_0 = alloca(SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE);
		Enumerator__ctor_m6B52D8CF1A1753A28498CA6217388A59385CB5F5((Enumerator_tD4F6832207950558C08187C30C71E5E4DCFAB724*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t0311A632D22C040E2DAC90BD357D84296DF822DE);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 8230
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = __this->___m_Exception;
		return L_0;
	}
}
// Method Definition Index: 5263
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
// Method Definition Index: 5072
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 3215
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 706
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 882
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5291
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m2F481529B1C516C912AE7008867C8CEC3917B4CA_inline (ManualResetValueTaskSourceCore_1_t18665AEE27B38E9FF2A6184B277FD61EFD60AF45* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 94773
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Maximum_1_set_maximum_mBBDE8450F999C893D5E99F358D77063EBB63D486_fshared_inline (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_0 = ___0_value;
		__this->___U3CmaximumU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmaximumU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 95535
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* MultiInputUnit_1_get_multiInputs_m4D69C759BB55F6B188D87B6781417BEBA765FCF6_fshared_inline (MultiInputUnit_1_t769F071BA7F1836781FD85F19E7AC49280C6CBF9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ReadOnlyCollection_1_t23633718B1ADFA60DD4047E37F4F2D278B8DC3D9* L_0 = __this->___U3CmultiInputsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 94772
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* Maximum_1_get_maximum_m7AC64E6AF6AD8A06B80C6A73A021A7D83EAB5173_fshared_inline (Maximum_1_tFAB96BBCB97C1B10EA1B4E7676AA15562A8BD323* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueOutput_tADDC9DBF6515A1572E876C3881B5F110DC5EBE1B* L_0 = __this->___U3CmaximumU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 2078
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_mF10BE08398FB78520DEB28560C586BCE81919F76_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		__this->____object = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_2);
		__this->____index = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7, sizeof(uint8_t));
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		int32_t L_14 = ___1_start;
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_add<uint8_t,int32_t>(L_13, L_14, sizeof(uint8_t));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
// Method Definition Index: 2087
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, NULL);
		return L_5;
	}

IL_0034:
	{
		goto IL_0089;
	}

IL_0089:
	{
		RuntimeObject* L_6 = __this->____object;
		if (!L_6)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_10), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), L_8, ((int32_t)(L_9&((int32_t)2147483647LL))), NULL);
		return L_10;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 2433
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
// Method Definition Index: 2078
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
	}
}
// Method Definition Index: 2080
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2421
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		NullCheck((RuntimeArray*)L_17);
		uint8_t* L_18;
		L_18 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_17, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_18);
		int32_t L_20 = ___1_start;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, L_20, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_22;
		memset((&L_22), 0, sizeof(L_22));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_22), L_21);
		__this->____pointer = L_22;
		int32_t L_23 = ___2_length;
		__this->____length = L_23;
		return;
	}
}
// Method Definition Index: 11199
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Enumerator_get_Current_m07BBC92FACF2833ADF73017D627B6F818067DA01_gshared_inline (Enumerator_tF5CB4685E5CE314516C255FB297CA56E9D7408BD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 11283
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_mC4437F96887FBE0C954234394562430C0CE7747C_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11282
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m652AB26F17E6ECED100EADCA06D2352D6612B42B_gshared_inline (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11243
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____currentValue;
		return L_0;
	}
}
// Method Definition Index: 3264
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
