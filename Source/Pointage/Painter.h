#pragma once

#include "RenderGraph/RenderResource.h"
#include "RenderGraph/ResourceView.h"

#include <vector>

namespace Pointage {
    
    
    class FParameterPack
    {

    };

    class FBlueprint 
    {
    public:
        enum Type 
        {
            Figuration, // Compute
            Draw        // Graphics
        };

    public:



    private:
    };

    class FPainter
    {
    public:

        void BeginWork() {}

        template<typename Function, typename FParameterPack>
        void AddDotNode(const Function& InFunction, const FParameterPack& Params, FBlueprint* InBlueprint)
        {
            InFunction(Param)
        }

    private:
        void Masterplanning() {}
        void Craft() {}
        void Exhibit() {}
    };

    FPainter GSeurat;

#define DEFINE_WORK_AS_FIGURATION()
#define DEFINE_WORK_AS_DRAW()

#define BEGIN_DEFINE_MATIERE_PACK(PackName)
#define END_DEFINE_MATIERE_PACK

#define MATIERE_OBJECT(Type, Name)
#define MATIERE_BRUSH(Type, Name)
#define MATIERE_DYESTUFF(Type, Name)
#define MATIERE_CANVAS(Type, Name)

}
