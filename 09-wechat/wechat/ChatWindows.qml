import QtQuick 2.0

Item {
    id: root;
    property int retWidth :250;
    property int retHeight :800;

    width: root.retWidth;
    height: root.retHeight;
    Rectangle {
        id:recChatWindow
        anchors.fill: parent
        color: "#EDEBE9"

        Rectangle{
            id:inputRect
            width: recChatWindow.width-50;
            height: 30;
//            color: "black"
            color: "#DBD9D8"
            anchors.top: recChatWindow.top;
            anchors.topMargin: 40;
            anchors.left: recChatWindow.left;
            anchors.leftMargin: 10;
            radius: 20;
            TextInput {
                width: inputRect.width-5;
                height: inputRect.height-5;
                color: "black"
                text:"Test";
                anchors.top: inputRect.top;
                anchors.topMargin: 5;
                anchors.bottom: inputRect.bottom;
                anchors.bottomMargin: 5;
                anchors.left: inputRect.left;
                anchors.leftMargin: 5;
                anchors.right: inputRect.right;
                anchors.rightMargin: 5;
//                horizontalAlignment: Text.AlignHCenter
//                anchors.verticalCenter: inputRect.verticalCenter;
            }
        }

        Rectangle {
            id: plusRect;
            width: 30;
            height: 30;
            radius:10
            color: "#DBD9D8"
            anchors.left: inputRect.right;
            anchors.leftMargin: 5;

            anchors.top: recChatWindow.top;
            anchors.topMargin: 40;

            Text {
                text: qsTr("+")
                anchors.centerIn: parent
                font.pixelSize: 20;
            }
        }

        ChatChoose {
            anchors.top: inputRect.bottom
            anchors.topMargin: 15;
            anchors.left: recChatWindow.left
            anchors.right: recChatWindow.right;
        }

    }
}
