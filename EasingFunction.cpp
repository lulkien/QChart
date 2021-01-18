#include "EasingFunction.h"

EasingFunction *EasingFunction::m_instance = nullptr;
EasingFunction::EasingFunction() {}

EasingFunction *EasingFunction::instance()
{
if (nullptr == m_instance)
{
m_instance = new EasingFunction();
}
return m_instance;
}

EasingFunction::~EasingFunction()
{
if (nullptr != m_instance)
{
delete m_instance;
m_instance = nullptr;
}
}

qreal EasingFunction::func_InOutSine(qreal x) const
{
if (x > 1) x = 1;
if (x < 0) x = 0;
return qPow(qSin(Q_PI * x / 2), 2);
}

qreal EasingFunction::func_InOutBack(qreal x) const
{
if (x > 1) x = 1;
if (x < 0) x = 0;

const qreal c1 = 1.70158;
const qreal c2 = c1 + 1.525;

qreal y;
if (x < 0.5) y = (qPow(2*x, 2)*((c2 + 1)*2 * x - c2)) / 2;
else
y = (qPow(2*x - 2, 2)*((c2 + 1)*(x*2 - 2) + c2) + 2) / 2;

return y;
}

qreal EasingFunction::func_InOutQuad(qreal x) const
{
if (x > 1) x = 1;
if (x < 0) x = 0;

qreal y;
if (x < 0.5) y = 2*x*x;
else
y = 1 - qPow(-2*x+2, 2)/2;
return y;
}

qreal EasingFunction::func_easeInOutExpo(qreal x) const
{
if (x <= 0) return 0;
if (x >= 1) return 1;

qreal y;
if (x < 0.5) y = qPow(2, 20*x - 10) / 2;
else
y = (2 - qPow(2, -20*x + 10)) / 2;
return y;
}
