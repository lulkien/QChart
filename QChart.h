#ifndef QCHART_H
#define QCHART_H

#include <QObject>
#include <QQuickPaintedItem>
#include <QPainter>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QList>

#define DEFAULT_BG_COLOR        "#99FFD7"
#define DEFAULT_LINE_COLOR      "#000000"
#define DEFAULT_AXIS_COLOR      "#000000"
#define DEFAULT_DOT_COLOR       "#FF7801"

struct Dot : public QObject
{
    int x;
    int y;
    Dot() : x{0}, y{0}
    { }
};

class QChart : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString xAxis READ xAxis WRITE setXAxis NOTIFY xAxisChanged)
    Q_PROPERTY(QString yAxis READ yAxis WRITE setYAxis NOTIFY yAxisChanged)

    Q_PROPERTY(int axisThickness READ axisThickness WRITE setAxisThickness NOTIFY axisThicknessChanged)
    Q_PROPERTY(int dotThickness READ dotThickness WRITE setDotThickness NOTIFY dotThicknessChanged)
    Q_PROPERTY(int lineThickness READ lineThickness WRITE setLineThickness NOTIFY lineThicknessChanged)

    Q_PROPERTY(int xAxisDiv READ xAxisDiv WRITE setXAxisDiv NOTIFY xAxisDivChanged)
    Q_PROPERTY(int yAxisDiv READ yAxisDiv WRITE setYAxisDiv NOTIFY yAxisDivChanged)
    Q_PROPERTY(int gridMode READ gridMode WRITE setGridMode NOTIFY gridModeChanged)

    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor NOTIFY backgroundColorChanged)
    Q_PROPERTY(QColor axisColor READ axisColor WRITE setAxisColor NOTIFY axisColorChanged)
    Q_PROPERTY(QColor lineColor READ lineColor WRITE setLineColor NOTIFY lineColorChanged)
    Q_PROPERTY(QColor dotColor READ dotColor WRITE setDotColor NOTIFY dotColorChanged)

    Q_PROPERTY(qreal xMax READ xMax WRITE setXMax NOTIFY xMaxChanged)
    Q_PROPERTY(qreal xMin READ xMin WRITE setXMin NOTIFY xMinChanged)
    Q_PROPERTY(qreal yMax READ yMax WRITE setYMax NOTIFY yMaxChanged)
    Q_PROPERTY(qreal yMin READ yMin WRITE setYMin NOTIFY yMinChanged)

    Q_PROPERTY(QList<QObject*> listData READ listData WRITE setListData NOTIFY listDataChanged)

public:

    explicit QChart(QQuickItem* parent = nullptr);

    enum Chart
    {
        Grid = 0,
        NoGrid
    };
    Q_ENUM(Chart);

    void paint(QPainter* painter) override;

    QString xAxis() const;
    QString yAxis() const;

    int axisThickness() const;
    int lineThickness() const;
    int dotThickness() const;

    int xAxisDiv() const;
    int yAxisDiv() const;
    int gridMode() const;

    QColor backgroundColor() const;
    QColor dotColor() const;
    QColor axisColor() const;
    QColor lineColor() const;

    QList<QObject*> listData() const;

    qreal xMax() const;
    qreal xMin() const;
    qreal yMax() const;
    qreal yMin() const;

public slots:
    void setXAxis(QString xAxis);
    void setYAxis(QString yAxis);

    void setAxisThickness(int axisThickness);
    void setLineThickness(int lineThickness);
    void setDotThickness(int dotThickness);

    void setXAxisDiv(int xAxisDiv);
    void setYAxisDiv(int yAxisDiv);
    void setGridMode(int gridMode);

    void setDotColor(QColor dotColor);
    void setAxisColor(QColor axisColor);
    void setLineColor(QColor lineColor);

    void setListData(QList<QObject*> listData);

    void setBackgroundColor(QColor backgroundColor);

    void setXMax(qreal xMax);

    void setXMin(qreal xMin);

    void setYMax(qreal yMax);

    void setYMin(qreal yMin);

signals:
    void xAxisChanged(QString xAxis);
    void yAxisChanged(QString yAxis);

    void axisThicknessChanged(int axisThickness);
    void lineThicknessChanged(int lineThickness);
    void dotThicknessChanged(int dotThickness);

    void dotColorChanged(QColor dotColor);
    void axisColorChanged(QColor axisColor);
    void lineColorChanged(QColor lineColor);

    void listDataChanged(QList<QObject*> listData);

    void xAxisDivChanged(int xAxisDiv);

    void yAxisDivChanged(int yAxisDiv);

    void gridModeChanged(int gridMode);

    void backgroundColorChanged(QColor backgroundColor);

    void xMaxChanged(qreal xMax);

    void xMinChanged(qreal xMin);

    void yMaxChanged(qreal yMax);

    void yMinChanged(qreal yMin);

private:
    QString m_xAxis;
    QString m_yAxis;

    int m_axisThickness;
    int m_lineThickness;
    int m_dotThickness;

    int m_xAxisDiv;
    int m_yAxisDiv;
    int m_gridMode;

    QColor m_backgroundColor;
    QColor m_dotColor;
    QColor m_axisColor;
    QColor m_lineColor;

    qreal m_xMax;
    qreal m_xMin;
    qreal m_yMax;
    qreal m_yMin;
    QList<QObject*> m_listData;
};

#endif // QCHART_H
