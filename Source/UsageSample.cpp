
#include "Include/Pointage.h"

#include "Pointage/Painter.h"

namespace Pointage {

    class FDeferredLihgtingBP
        : public FBlueprint
    {
        DEFINE_WORK_AS_DRAW()

    BEGIN_DEFINE_MATIERE_PACK(FMatiere)
        MATIERE_BRUSH(Texture2D, NormalMap) 
        MATIERE_DYESTUFF(int32, Attenuation) 
        MATIERE_CANVAS(Texture2D, GBufferA)
    END_DEFINE_MATIERE_PACK

    public:

    };


    void SampleDot()
    {
        FBlueprint* DefferedLightingBP = nullptr;

        struct FParam 
        {
            int NormalMap;
            int Attenuation;
            int GBufferA;
            bool bUseAttenuation;
        };
        FParam Param;

        GSeurat.AddDotNode([](FDeferredLihgtingBP::FMatiere* Matiere, const FParam& InParam) {

            Matiere->NormalMap = InParam.NormalMap;
            Matiere->Attenuation = InParam.Attenuation;
            Matiere->GBufferA = InParam.GBufferA;

        }, Param, DefferedLightingBP);

    }
}
