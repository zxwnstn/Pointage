#pragma once

#include <memory>

namespace Pointage {
    
    class FView
    {

    };

    class FDyestuff : public FView// SRV
    {

    };

    class FBrush : public FView// CBV
    {

    };

    class FCanvas : public FView// RTV, RW UAV
    {

    };


    using FDyestuffRef = std::shared_ptr<FDyestuff>;
    using FBrushRef = std::shared_ptr<FBrush>;
    using FCanvasRef = std::shared_ptr<FCanvas>;

}
