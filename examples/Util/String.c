#include "rts.h"
#include "bc/interpreter.h"

typedef Word64 (*GB_Ty_CFun_w81w8)(Word64) ;
static void gb_callc_w81w8()
{ GB_WordPtr args = ((GB_WordPtr)(GB_SPRel(1))) ;
  GB_Word func = GB_TOS ;
  Word nargs ;
  Word64 res_Word64 ;
  GB_SetTOS(1) ;
  GB_Push(pc) ;
  GB_BP_Link ;
  res_Word64 =
   ((GB_Ty_CFun_w81w8)(func))(GB_RegByteRelCastx(Word64,args,0)) ;
  GB_PassExcWith(,,(gb_ThrownException_NrOfEvalWrappers > 0),return) ;
  GB_BP_UnlinkSP ;
  GB_PopCastIn(GB_BytePtr,pc) ;
  GB_PopIn(nargs) ;
  sp =
   GB_RegByteRel(GB_Word,sp,((nargs * sizeof(GB_Word)) - sizeof(Word64))) ;
  GB_SetCallCResult(Word64,Word64,sp,0,res_Word64) ;
}
 
static Word8 Util_String_bytePool[] =
{ 0x55,0x74,0x69,0x6c,0x2e,0x53,0x74,0x72,0x69,0x6e,0x67,0x2e,0x5f,0x5f,0x74,0x6f,0x50,0x61,0x63,0x6b,0x65,0x64,0x53,0x74,0x72,0x69,0x6e,0x67,0x00
, 0x55,0x74,0x69,0x6c,0x2e,0x53,0x74,0x72,0x69,0x6e,0x67,0x2e,0x5f,0x35,0x5f,0x34,0x37,0x5f,0x30,0x5f,0x32,0x5f,0x40,0x31,0x55,0x4e,0x51,0x5f,0x40,0x32,0x00
, 0x05,0x02
, 0x70,0x72,0x69,0x6d,0x53,0x74,0x72,0x69,0x6e,0x67,0x54,0x6f,0x50,0x61,0x63,0x6b,0x65,0x64,0x53,0x74,0x72,0x69,0x6e,0x67,0x00
, 0x05,0x04
, 0x55,0x74,0x69,0x6c,0x2e,0x53,0x74,0x72,0x69,0x6e,0x67,0x2e,0x75,0x6e,0x70,0x61,0x63,0x6b,0x00
, 0x03,0x04
, 0x55,0x74,0x69,0x6c,0x2e,0x53,0x74,0x72,0x69,0x6e,0x67,0x2e,0x70,0x61,0x63,0x6b,0x00
};
 
static GB_LinkChainResolvedInfo Util_String_linkChainIndirections[] =
{ };
 
static GCStackInfo Util_String_gcStackInfos[] =
{ { 3
  , 2
  , &(Util_String_bytePool[60])
  }
, { 4
  , 2
  , &(Util_String_bytePool[87])
  }
, { 3
  , 2
  , &(Util_String_bytePool[108])
  }
};
 
static FunctionInfo Util_String_functionInfos[] =
{ {24,FunctionInfoFlag_None,&(Util_String_bytePool[0])}
, {16,FunctionInfoFlag_None,&(Util_String_bytePool[89])}
, {16,FunctionInfoFlag_None,&(Util_String_bytePool[110])}
};
 
static CallInfo Util_String_callinfos[] =
{ MkCallInfoWith(2,&(Util_String_bytePool[29]),FunctionInfo_Inx_None,FunctionInfo_Inx_None,NULL,NULL) 
, MkCallInfoWith(6,&(Util_String_bytePool[62]),FunctionInfo_Inx_None,FunctionInfo_Inx_None,&(Util_String_gcStackInfos[0]),"w8w8") 
};
 
static GB_Byte Util_String_bytecode[] =
{    0xfe,0xff
,    0xe1,0x02,0x00,0x00,0x00,0x00,0x00,0x00
,    0x20,0x10
,    0xe0,0xd9,0x02,0x00,0x00,0x00,0x00,0x00,0x00
,    0x20,0x00
,    0xe6,0xc9,0x02,0x00,0x00,0x00,0x00,0x00,0x00
,    0xf7,0x00,0x01,0x09,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x19,0x05,0x00,0x00,0x01,0x00,0x00,0x00
,    0x0b,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00
,    0x08,0x10
,    0xec,0x05,0x03,0x00,0x00,0x02,0x00,0x00,0x00
,    0xf4,0x00,0x08,0x08
,    0x61,0x02,0x00,0x00,0x01,0x00,0x00,0x00
,    0xe7,0xe5,0x05,0x00,0x00,0x01,0x00,0x00,0x00
,    0x25,0xf0,0x0f
,    0x0b,0x04,0x00,0x00,0x40,0x02,0x00,0x00,0x00
,    0x08,0x10
,    0xec,0x05,0x03,0x00,0x00,0x03,0x00,0x00,0x00
,    0xf4,0x00,0x08,0x00
,    0x61,0x02,0x00,0x00,0x02,0x00,0x00,0x00
,    0xe6,0x0d,0x05,0x00,0x00,0x00,0x00,0x00,0x00
,    0x0b,0x04,0x00,0x00,0x40,0x02,0x00,0x00,0x00
,    0x08,0x10
,    0xec,0x05,0x00,0x00,0x00,0x03,0x00,0x00,0x00
,    0xf4,0x00,0x08,0x00
};
GB_ByteCodeModule Util_String_bytecodeModule =
  { "Util_String"
  , NULL
  , 0
  , Util_String_bytecode
  , 160
  } ;
 
static GB_Word Util_String_constants[] =
{ ((GB_Word)(&(primStringToPackedString)))
, ((GB_Word)(&(gb_callc_w81w8)))
};
 
static HalfWord Util_String_cafGlEntryIndices[] =
{ 1
, 2
};
 
static GB_BytePtr Util_String_globalEntries[] =
{ &(Util_String_bytecode[10])
, &(Util_String_bytecode[83])
, &(Util_String_bytecode[127])
};
GB_NodePtr Util_String_expNode ;
static int Util_String_expNode_offs[] =
  { 2 
  , 1 
  } ;
int Util_String_expNode_size = 2 ;

static GB_ImpModEntry Util_String_impMods[] =
         { { "Prelude"
           , 0 
           }
         , { "UHC.Base"
           , 0 
           }
         } ;

void Util_String_initModule(GB_ModEntry* modTbl, Word modTblInx) {
  gb_InitTables( Util_String_bytecode
               , 160
               , Util_String_cafGlEntryIndices
               , 2
               , Util_String_globalEntries
               , 3
               , Util_String_constants
               , Util_String_gcStackInfos
               , Util_String_linkChainIndirections
               , Util_String_callinfos
               , 2
               , Util_String_functionInfos
               , 3
               , Util_String_bytePool
               , 2
               , Util_String_impMods
               , 2
               , &(Util_String_expNode)
               , Util_String_expNode_size
               , Util_String_expNode_offs
               , modTbl
               , modTblInx
               ) ;
}

