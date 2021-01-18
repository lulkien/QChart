#ifndef QCHART_ENUM_H
#define QCHART_ENUM_H

#include <QObject>

class QChart_Enum
{
    Q_GADGET
public:
    enum Chart
    {
        NoGrid = 0,
        Grid,
    };
    Q_ENUM(Chart)

    enum EasingType
    {
        Linear = 0,

        InOutSine,      // 1
        OutSine,
        InSine,

        InOutBack,      // 4
        OutBack,
        InBack,

        InOutQuad,      // 7
        OutQuad,
        InQuad,

        InOutCirc,      // 10
        OutCirc,
        InCirc,

        InOutExpo,      // 13
        OutExpo,
        InExpo,

        InOutElastic,   // 16
        OutElastic,
        InElastic,

        InOutCubic,     // 19
        OutCubic,
        InCubic,

        InOutQuint,     // 22
        OutQuint,
        InQuint,

        InOutQuart,     // 25
        OutQuart,
        InQuart,

        InOutBounce,    // 28
        OutBounce,
        InBounce,
    };
    Q_ENUM(EasingType)
};

#endif // QCHART_ENUM_H
