import QtQuick 2.12
import QtQuick.Window 2.12
import CustomChart 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    QChartRT
    {
        anchors.fill: parent
        xAxisDiv: 12
        yAxisDiv: 10
        gridMode: Chart.Grid
        easingType: Chart.InOutSine
    }

}
