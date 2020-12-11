/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#include <windows.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ tySequence__aNpJjaoUowCQc7fBn3wtDQ;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg;
typedef struct tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
typedef NF tyArray__iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg {
tyArray__iV2wVpdhi9coq9cstlcqapXg tls;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9axCnCRMUx32AHzFgBrzSMg) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI collections;
NI maxThreshold;
NI maxStackSize;
NI freedObjects;
};
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
CRITICAL_SECTION lock;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw toDispose;
NI gcThreadId;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyProc__HzVCwACFYM9cx9aV62PdjtuA cbproc, void* ClE_0);
void* ClE_0;
} tyProc__VHS3NdmbwcdcZKmKV1JWhw;

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ {
  TGenericSeq Sup;
  tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];
};
typedef struct {tyProc__9axCnCRMUx32AHzFgBrzSMg localRaiseHook__EIvMhANBvB9cp2Ezvt29cADg;
tySequence__aNpJjaoUowCQc7fBn3wtDQ* threadDestructionHandlers__8OmU3x0fNdA0DLtOmU3kWw;
NI threadId__wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
GcFrameHeader* gcFramePtr__ot48iojqko9aFxGhyjjjVaA;
NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;
NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* ownArgv__WVJ54JSHy7VxacV39bwBPFA;
NIM_BOOL ownParsedArgv__9btHydaUC5pNXxitEZsyzIg;
tyProc__VHS3NdmbwcdcZKmKV1JWhw callSoonProc__9b9b4iUSd60RO2UqC52ifJ6A;
tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg* gDisp__yIbBArLUsg2pBJkilx4yvg;
tyObject_SslContextcolonObjectType___nNdejAl9bbVbX7sP6RJ4h0w* defaultSslContext__3GZQajZtKdLpqTTN2RjTzw;
NIM_BOOL pyThreadFrameInited__0LBR4zzVR5uWvgtv8SrMjg;
NIM_BOOL gcInited__uuy3PWTwb5gov9ao9bXJYBPg;
NIM_BOOL isSlave__t9a8wsVVRYqGEKhg1vb49b3g;
} NimThreadVars;

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw)(NimStringDesc* s, NI* b, NI start);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__EnrqtYM0boqQqeAIRc9bdmA)(NimStringDesc* s, NI pos, NI start);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString__pfisktkC9crnJPz5c4ILtRg)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill);
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__gZHDHaRdP4jROav7Hun29aA)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_LIB_PRIVATE N_NIMCALL(void*, threadVarGetValue__O8VJSmwa3WY6y9bP6Ht9b7hw)(NI32 dwTlsIndex);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__3zjq9csYPBcIN7AqvyU5ZLA)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___xqL1qTIQGkhdyM4F59c1P9aw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toString__vY9b9br9btFmrOxuFGpY9cNqbQ)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* values);

/* section: NIM_merge_DATA */
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_2, "invalid format string, cannot parse: ", 37);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_3, "invalid type in format string for string, expected \'s\', but got"
" ", 64);

/* section: NIM_merge_VARS */
extern NI32 globalsSlot__ciXDZu9c27pHpCRMoz4RIgw;

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)((NI)((s ? s->Sup.len : 0) - x.b) - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix) {
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ result;
	NI i;
	NI parsedLength;
{	nimZeroMem((void*)(&result), sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	result.fill = 32;
	result.align = 0;
	result.sign = 45;
	i = start;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((NI)(i + ((NI) 1)) < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(60)) || ((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(62)) || ((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(94)));
		LA4_: ;
		if (!T3_) goto LA5_;
		result.fill = s->data[i];
		result.align = s->data[(NI)(i + ((NI) 1))];
		i += ((NI) 2);
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = (i < (s ? s->Sup.len : 0));
		if (!(T8_)) goto LA9_;
		T8_ = (((NU8)(s->data[i])) == ((NU8)(60)) || ((NU8)(s->data[i])) == ((NU8)(62)) || ((NU8)(s->data[i])) == ((NU8)(94)));
		LA9_: ;
		if (!T8_) goto LA10_;
		result.align = s->data[i];
		i += ((NI) 1);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		T14_ = (((NU8)(s->data[i])) == ((NU8)(45)) || ((NU8)(s->data[i])) == ((NU8)(43)) || ((NU8)(s->data[i])) == ((NU8)(32)));
		LA15_: ;
		if (!T14_) goto LA16_;
		result.sign = s->data[i];
		i += ((NI) 1);
	}
	LA16_: ;
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = (i < (s ? s->Sup.len : 0));
		if (!(T20_)) goto LA21_;
		T20_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA21_: ;
		if (!T20_) goto LA22_;
		result.alternateForm = NIM_TRUE;
		i += ((NI) 1);
	}
	LA22_: ;
	{
		NIM_BOOL T26_;
		NIM_BOOL T27_;
		T26_ = (NIM_BOOL)0;
		T27_ = (NIM_BOOL)0;
		T27_ = ((NI)(i + ((NI) 1)) < (s ? s->Sup.len : 0));
		if (!(T27_)) goto LA28_;
		T27_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA28_: ;
		T26_ = T27_;
		if (!(T26_)) goto LA29_;
		T26_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
		LA29_: ;
		if (!T26_) goto LA30_;
		result.padWithZero = NIM_TRUE;
		i += ((NI) 1);
	}
	LA30_: ;
	parsedLength = parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw(s, (&result.minimumWidth), i);
	i += parsedLength;
	{
		NIM_BOOL T34_;
		NI parsedLengthB;
		T34_ = (NIM_BOOL)0;
		T34_ = (i < (s ? s->Sup.len : 0));
		if (!(T34_)) goto LA35_;
		T34_ = ((NU8)(s->data[i]) == (NU8)(46));
		LA35_: ;
		if (!T34_) goto LA36_;
		i += ((NI) 1);
		parsedLengthB = parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw(s, (&result.precision), i);
		i += parsedLengthB;
	}
	goto LA32_;
	LA36_: ;
	{
		result.precision = ((NI) -1);
	}
	LA32_: ;
	{
		NIM_BOOL T41_;
		T41_ = (NIM_BOOL)0;
		T41_ = (i < (s ? s->Sup.len : 0));
		if (!(T41_)) goto LA42_;
		T41_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)) || ((NU8)(s->data[i])) >= ((NU8)(97)) && ((NU8)(s->data[i])) <= ((NU8)(122)));
		LA42_: ;
		if (!T41_) goto LA43_;
		result.typ = s->data[i];
		i += ((NI) 1);
	}
	LA43_: ;
	result.endPosition = i;
	{
		NIM_BOOL T47_;
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T51_;
		NimStringDesc* T52_;
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T53_;
		NimStringDesc* T54_;
		T47_ = (NIM_BOOL)0;
		T47_ = !((i == (s ? s->Sup.len : 0)));
		if (!(T47_)) goto LA48_;
		T47_ = !(ignoreUnknownSuffix);
		LA48_: ;
		if (!T47_) goto LA49_;
		T51_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T51_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T51_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*T51_).Sup.Sup.name = "ValueError";
		T52_ = (NimStringDesc*)0;
		T53_ = dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem(i, ((NI) 1));
		T54_ = (NimStringDesc*)0;
		T54_ = X5BX5D___ogYTOKbgqbjPfyC123US1gsystem(s, T53_);
		T52_ = rawNewString((T54_ ? T54_->Sup.len : 0) + 37);
appendString(T52_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_2));
appendString(T52_, T54_);
		(*T51_).Sup.Sup.message = T52_;
		(*T51_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T51_, "ValueError", "parseStandardFormatSpecifier", "strformat.nim", 462);
		goto BeforeRet_;
	}
	LA49_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString__pfisktkC9crnJPz5c4ILtRg)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		if (!(minimumWidth == ((NI) 0))) goto LA3_;
		result = copyString(s);
	}
	goto LA1_;
	LA3_: ;
	{
		NI sRuneLen;
		NI toFill;
		{
			NI T8_;
			T8_ = (NI)0;
			T8_ = validateUtf8__gZHDHaRdP4jROav7Hun29aA(s);
			if (!(T8_ == ((NI) -1))) goto LA9_;
			sRuneLen = nucruneLen(s);
		}
		goto LA6_;
		LA9_: ;
		{
			sRuneLen = (s ? s->Sup.len : 0);
		}
		LA6_: ;
		toFill = (NI)(minimumWidth - sRuneLen);
		{
			if (!(toFill <= ((NI) 0))) goto LA14_;
			result = copyString(s);
		}
		goto LA12_;
		LA14_: ;
		{
			NIM_BOOL T17_;
			NimStringDesc* T21_;
			NimStringDesc* T22_;
			T17_ = (NIM_BOOL)0;
			T17_ = ((NU8)(align) == (NU8)(60));
			if (T17_) goto LA18_;
			T17_ = ((NU8)(align) == (NU8)(0));
			LA18_: ;
			if (!T17_) goto LA19_;
			T21_ = (NimStringDesc*)0;
			T22_ = (NimStringDesc*)0;
			T22_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T21_ = rawNewString((s ? s->Sup.len : 0) + (T22_ ? T22_->Sup.len : 0) + 0);
appendString(T21_, s);
appendString(T21_, T22_);
			result = T21_;
		}
		goto LA12_;
		LA19_: ;
		{
			NI half;
			NimStringDesc* T26_;
			NimStringDesc* T27_;
			NimStringDesc* T28_;
			if (!((NU8)(align) == (NU8)(94))) goto LA24_;
			half = (NI)(toFill / ((NI) 2));
			T26_ = (NimStringDesc*)0;
			T27_ = (NimStringDesc*)0;
			T27_ = nsuRepeatChar(fill, ((NI) (half)));
			T28_ = (NimStringDesc*)0;
			T28_ = nsuRepeatChar(fill, ((NI) ((NI)(toFill - half))));
			T26_ = rawNewString((T27_ ? T27_->Sup.len : 0) + (s ? s->Sup.len : 0) + (T28_ ? T28_->Sup.len : 0) + 0);
appendString(T26_, T27_);
appendString(T26_, s);
appendString(T26_, T28_);
			result = T26_;
		}
		goto LA12_;
		LA24_: ;
		{
			NimStringDesc* T30_;
			NimStringDesc* T31_;
			T30_ = (NimStringDesc*)0;
			T31_ = (NimStringDesc*)0;
			T31_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T30_ = rawNewString((T31_ ? T31_->Sup.len : 0) + (s ? s->Sup.len : 0) + 0);
appendString(T30_, T31_);
appendString(T30_, s);
			result = T30_;
		}
		LA12_: ;
	}
	LA1_: ;
	return result;
}
static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue__O8VJSmwa3WY6y9bP6Ht9b7hw(globalsSlot__ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread__hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	result = (NIM_BOOL*)0;
	result = (&NimTV_->nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__3zjq9csYPBcIN7AqvyU5ZLA)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier) {
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NimStringDesc* value_2;
	NimStringDesc* T15_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	spec = parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA(specifier, ((NI) 0), NIM_FALSE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	value_2 = copyString(value);
	switch (((NU8)(spec.typ))) {
	case 115:
	case 0:
	{
	}
	break;
	default:
	{
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T3_;
		NimStringDesc* T4_;
		T3_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T3_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T3_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*T3_).Sup.Sup.name = "ValueError";
		T4_ = (NimStringDesc*)0;
		T4_ = rawNewString(65);
appendString(T4_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_3));
appendChar(T4_, spec.typ);
		(*T3_).Sup.Sup.message = T4_;
		(*T3_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T3_, "ValueError", "formatValue", "strformat.nim", 552);
		goto BeforeRet_;
	}
	break;
	}
	{
		if (!!((spec.precision == ((NI) -1)))) goto LA7_;
		{
			NI T11_;
			NI T14_;
			T11_ = (NI)0;
			T11_ = nucruneLen(value_2);
			if (!(spec.precision < T11_)) goto LA12_;
			T14_ = (NI)0;
			T14_ = runeOffset__EnrqtYM0boqQqeAIRc9bdmA(value_2, ((NI) (spec.precision)), ((NI) 0));
			value_2 = setLengthStr(value_2, ((NI) (T14_)));
		}
		LA12_: ;
	}
	LA7_: ;
	T15_ = (NimStringDesc*)0;
	T15_ = alignString__pfisktkC9crnJPz5c4ILtRg(value_2, spec.minimumWidth, spec.align, spec.fill);
	(*result) = resizeString((*result), (T15_ ? T15_->Sup.len : 0) + 0);
appendString((*result), T15_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__PHzHQ49cckXxAixMhrUaa9aw)(NimStringDesc** result, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* value, NimStringDesc* specifier) {
	NimStringDesc* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NimStringDesc*)0;
	T1_ = dollar___xqL1qTIQGkhdyM4F59c1P9aw(value);
	formatValue__3zjq9csYPBcIN7AqvyU5ZLA(result, T1_, specifier);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__nuvPxy3So9bkMUo9a9aV6jlNQ)(NimStringDesc** result, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* value, NimStringDesc* specifier) {
	NimStringDesc* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NimStringDesc*)0;
	T1_ = toString__vY9b9br9btFmrOxuFGpY9cNqbQ(value);
	formatValue__3zjq9csYPBcIN7AqvyU5ZLA(result, T1_, specifier);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}