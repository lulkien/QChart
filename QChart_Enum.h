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
        InOutSine,
        InOutBack,
        InOutQuad,
        InOutCirc,
        InOutExpo,
        easeInOutElastic,
        easeInOutBounce,
    };
    Q_ENUM(EasingType)
};

#endif // QCHART_ENUM_H
