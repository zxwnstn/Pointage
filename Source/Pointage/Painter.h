#pragma once

#include "RenderGraph/RenderResource.h"
#include "RenderGraph/ResourceView.h"

#include <vector>

namespace Pointage {

    
    class FArtSupply
    {
    public:

    private:

        std::vector<FDyestuffRef> Dystuffs;
        std::vector<FBrushRef> Brushes;
        std::vector<FCanvasRef> Canvases;
    };

    class FPainter
    {
    public:



        template<typename Function>
        void Dot(const Function& InFunction, const FArtSupply& InArtSupplies)
        {

        }

    };
}