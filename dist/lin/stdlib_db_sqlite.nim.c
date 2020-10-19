/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(NI32, tyProc__MGvm2GDOLe9cOGVrF2xiL8g) (NCSTRING filename, tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA** ppDb);
struct tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA {
char dummy;
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ {
  tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw Sup;
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
typedef N_CDECL_PTR(NCSTRING, tyProc__9c803Jlmvw39cDHXPnE9c9acPA) (tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* para1);
typedef N_CDECL_PTR(int, tyProc__M35TeFGPs7TPKADYDaEq4Q) (tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db, NCSTRING zSql, int nByte, tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg** ppStmt, NCSTRING* pzTail);
typedef N_CDECL_PTR(NI32, tyProc__1jkYBsuhXdCj7QieWqeYyQ) (tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg* para1);
typedef N_CDECL_PTR(NI32, tyProc__gjdebP9bh9a6kXA5fmIpsLzQ) (tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* para1);
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, dbError__tMZ1L6kpZL5DXC6qzvE1JA)(tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dbFormat__JmBfN0RHyho9cnKh177PR9bw)(NimStringDesc* formatstr, NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dbQuote__gYzTFzWM5d8AZ9avHT8NO9ag)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);

/* section: NIM_merge_DATA */
extern TNimType NTI__ZVbaMVrRDW1Cj9bby6YsVhA_;
extern TNimType NTI__9cp8FUMATyqFmLaAKCXEjCQ_;
STRING_LITERAL(TM__Y7t52g9b69cVuzHT832OjgmA_2, "\'", 1);
STRING_LITERAL(TM__Y7t52g9b69cVuzHT832OjgmA_3, "\'\'", 2);

/* section: NIM_merge_VARS */
extern tyProc__MGvm2GDOLe9cOGVrF2xiL8g Dl_25286893_;
extern tyProc__9c803Jlmvw39cDHXPnE9c9acPA Dl_25286906_;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern tyProc__M35TeFGPs7TPKADYDaEq4Q Dl_25286921_;
extern tyProc__1jkYBsuhXdCj7QieWqeYyQ Dl_25287037_;
extern tyProc__1jkYBsuhXdCj7QieWqeYyQ Dl_25287079_;
extern tyProc__gjdebP9bh9a6kXA5fmIpsLzQ Dl_25286787_;

/* section: NIM_merge_PROCS */
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, dbError__tMZ1L6kpZL5DXC6qzvE1JA)(tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db) {
	tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ* e;
	NCSTRING T1_;
{	e = (tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ*)0;
	e = (tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ*) newObj((&NTI__ZVbaMVrRDW1Cj9bby6YsVhA_), sizeof(tyObject_DbError__9cp8FUMATyqFmLaAKCXEjCQ));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTI__9cp8FUMATyqFmLaAKCXEjCQ_);
	(*e).Sup.Sup.Sup.name = "DbError";
	T1_ = (NCSTRING)0;
	T1_ = Dl_25286906_(db);
	(*e).Sup.Sup.Sup.message = cstrToNimstr(T1_);
	raiseExceptionEx((Exception*)e, "DbError", "dbError", "db_sqlite.nim", 147);
	goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA*, open__9bWoBLV7kjx9cw2VXGIleH8w)(NimStringDesc* connection, NimStringDesc* user, NimStringDesc* password, NimStringDesc* database) {
	tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* result;
	tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA*)0;
	db = (tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA*)0;
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = Dl_25286893_(nimToCStringConv(connection), &db);
		if (!(T3_ == ((NI32) 0))) goto LA4_;
		result = db;
	}
	goto LA1_;
	LA4_: ;
	{
		dbError__tMZ1L6kpZL5DXC6qzvE1JA(db);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dbQuote__gYzTFzWM5d8AZ9avHT8NO9ag)(NimStringDesc* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__Y7t52g9b69cVuzHT832OjgmA_2));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				{
					if (!((NU8)(c) == (NU8)(39))) goto LA6_;
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__Y7t52g9b69cVuzHT832OjgmA_3));
				}
				goto LA4_;
				LA6_: ;
				{
					result = addChar(result, c);
				}
				LA4_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 39);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dbFormat__JmBfN0RHyho9cnKh177PR9bw)(NimStringDesc* formatstr, NimStringDesc** args, NI argsLen_0) {
	NimStringDesc* result;
	NI a;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	a = ((NI) 0);
	{
		NIM_CHAR c;
		NimStringDesc* colontmp_;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		colontmp_ = (NimStringDesc*)0;
		colontmp_ = formatstr;
		i = ((NI) 0);
		L = (colontmp_ ? colontmp_->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = colontmp_->data[i];
				{
					NimStringDesc* T8_;
					if (!((NU8)(c) == (NU8)(63))) goto LA6_;
					T8_ = (NimStringDesc*)0;
					T8_ = dbQuote__gYzTFzWM5d8AZ9avHT8NO9ag(args[a]);
					result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
					a += ((NI) 1);
				}
				goto LA4_;
				LA6_: ;
				{
					result = addChar(result, c);
				}
				LA4_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryExec__x8iLJptB05buMJbN9cGcx0Q)(tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db, NimStringDesc* query, NimStringDesc** args, NI argsLen_0) {
	NIM_BOOL result;
	NimStringDesc* q;
	tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg* stmt;
	result = (NIM_BOOL)0;
	q = dbFormat__JmBfN0RHyho9cnKh177PR9bw(query, args, argsLen_0);
	stmt = (tyObject_TStmt__GsRxsaEvnkRT4evqPcjTkg*)0;
	{
		NimStringDesc* T3_;
		int T4_;
		NI32 x;
		T3_ = (NimStringDesc*)0;
		T3_ = q;
		T4_ = (int)0;
		T4_ = Dl_25286921_(db, nimToCStringConv(T3_), ((int) ((q ? q->Sup.len : 0))), &stmt, NIM_NIL);
		if (!(T4_ == ((NI32) 0))) goto LA5_;
		x = Dl_25287037_(stmt);
		{
			NI32 T11_;
			if (!(x == ((NI) 101) || x == ((NI) 100))) goto LA9_;
			T11_ = (NI32)0;
			T11_ = Dl_25287079_(stmt);
			result = (T11_ == ((NI32) 0));
		}
		goto LA7_;
		LA9_: ;
		{
			NI32 T13_;
			T13_ = (NI32)0;
			T13_ = Dl_25287079_(stmt);
			(void)(T13_);
			result = NIM_FALSE;
		}
		LA7_: ;
	}
	LA5_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__tMZ1L6kpZL5DXC6qzvE1JA_2)(tyObject_Sqlite3__xRZkbCqVWSKf8kX4o9cbKXA* db) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = Dl_25286787_(db);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		dbError__tMZ1L6kpZL5DXC6qzvE1JA(db);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
