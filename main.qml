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
        width: 600
        height: 400
        gridMode:
    }

}
