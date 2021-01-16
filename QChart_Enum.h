#ifndef QCHART_ENUM_H
#define QCHART_ENUM_H

#include <QObject>

class QChart_Enum : public QObject
{
    Q_GADGET
public:
    enum Chart
    {
        NoGrid = 0,
        Grid,
    };
    Q_ENUM(Chart)
};

#endif // QCHART_ENUM_H
