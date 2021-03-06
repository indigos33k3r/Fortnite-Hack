#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify
struct UAnimNotify_PlayForceFeedback_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
