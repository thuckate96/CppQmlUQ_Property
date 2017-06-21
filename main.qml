import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 300
    title: qsTr("Hello World")

    Column{
        id: firstCol
        Text {
            id: txtCount
            text: dataStore.message
        }

        Button{
            id: btnUpdate
            text: "Just click me"
            onClicked: {
                dataStore.callMeFromQml()
            }
        }
    }

    Column{
        anchors.left: firstCol.right
        TextEdit{
            id: txtEdit
            height: txtCount.height
            width: btnEdit.width


        }
        Button{
            id: btnEdit
            text: "update property"
            onClicked: {
                dataStore.message = txtEdit.text
            }
        }
    }
}
