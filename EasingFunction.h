#ifndef EASINGFUNCTION_H
#define EASINGFUNCTION_H

#include <QtMath>

#ifndef DEFINE_CONST
#define DEFINE_CONST
#define Q_PI 3.141592654
#endif

#define EASE EasingFunction::instance()

class EasingFunction
{
    static EasingFunction* m_instance;

    EasingFunction();
    EasingFunction(const EasingFunction&) = delete;
    EasingFunction& operator= (const EasingFunction&) = delete;

public:
    static EasingFunction *instance();
    ~EasingFunction();

    qreal func_InOutSine(qreal x) const;
    qreal func_InOutBack(qreal x) const;
    qreal func_InOutQuad(qreal x) const;
    qreal func_easeInOutExpo(qreal x) const;

};

#endif // EASINGFUNCTION_H
