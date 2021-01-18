import QtQuick 2.0
import CustomChart 1.0

Rectangle
{
    id: root

    property double updateInterval: 1
    property alias xAxisDiv: chartID.xAxisDiv
    property alias yAxisDiv: chartID.yAxisDiv

    property alias gridMode: chartID.gridMode
    property alias easingType: chartID.easingType

    width: 300
    height: 200

    border.color: "black"

    QChart
    {
        id: chartID
        width: root.width - 10
        height: root.height - 10
        anchors.centerIn: root
        yMax: 40
        yMin: 10
    }

    Timer
    {
        id: updateTimer
        interval: updateInterval * 1000
        repeat: true
        onTriggered:
        {
            chartID.appendData(Math.random() * (35 - 20) + 20)
        }
    }

    Component.onCompleted:
    {
        updateTimer.start()
    }
}
