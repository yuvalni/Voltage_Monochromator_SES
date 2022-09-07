#pragma once
#define Mono_API __declspec(dllexport)

extern "C"
{
    struct MonochromatorInfo
    {
        double minEnergy_;
        double maxEnergy_;
        double minEnergyStep_;
        double maxEnergyStep_;
    };
}





extern "C" Mono_API char* GDS_MO_GetLibInfo();
extern "C" Mono_API int GDS_MO_Initialize(void* mainWindow);
extern "C" Mono_API int GDS_MO_Finalize();
extern "C" Mono_API int GDS_MO_GetInfo(MonochromatorInfo * monochromatorInfo);
extern "C" Mono_API int GDS_MO_SetEnergy(double &AEnergy);
extern "C" Mono_API int GDS_MO_GetEnergy(double &AEnergy);