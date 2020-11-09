import QtQuick 2.0

Item {
    id: root;
    property int rectWidth: 1000;
    property int rectHeight: 900;
    property string titleData: "标题"
    width:rectWidth;
    height: rectHeight;

    Rectangle {
        id:backRect;
        anchors.fill: parent;
        color: "#F5F5F5";

        Text {
            id: title
            text: root.titleData;
            font.pixelSize: 30;
            anchors.top: backRect.top;
            anchors.topMargin: 30;
            anchors.left: backRect.left;
            anchors.leftMargin: 30;
        }

        Rectangle {
            id:lineRect;
            height: 2;
            anchors.left: backRect.left;
            anchors.right: backRect.right;
            anchors.top: backRect.top;
            anchors.topMargin: 80;
            color: "#D4D3D2"
        }
    }

}
