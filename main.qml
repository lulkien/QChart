import QtQuick 2.14
import QtQuick.Window 2.14
import CustomChart 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    QChart
    {
        anchors.centerIn: parent
        width: 400
        height: 300
        gridMode: Chart.Grid
        yAxisDiv: 10
        xAxisDiv: 12

        Component.onCompleted:
        {
            appendToList(0, 30)
            appendToList(0, 40)
            appendToList(0, 25)
            appendToList(0, 72)
            appendToList(0, 04)
            appendToList(0, 99)
            appendToList(0, 88)
            appendToList(0, 30)
            appendToList(0, 54)
            appendToList(0, 12)
            appendToList(0, 40)
            appendToList(0, 100)
            appendToList(0, 32)
        }
    }

}
