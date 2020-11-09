import QtQuick 2.0
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1

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
            text: root.titleData
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
        Rectangle {
            id:sendMessBox;
            anchors.bottom: backRect.bottom;
            anchors.left: backRect.left;
            anchors.right: backRect.right;
            width: root.rectWidth;
            height: 180;
            color: "#FFFFFF"

            Button {
                Text {
                    id: buttonText
                    text: qsTr("发送(S)")
                    anchors.centerIn: parent
                    font.pixelSize: 18;
                    anchors.margins: 10;
                    color: (sendButton.hovered|| sendButton.pressed) ?"#FFFFFF":"#606060"
                }
                id:sendButton
                width: 85;
                height: 35;
                anchors.right: sendMessBox.right;
                anchors.rightMargin: 40;
                anchors.bottom: sendMessBox.bottom;
                anchors.bottomMargin: 10;
                style: ButtonStyle {
                            background: Rectangle {
                            implicitWidth: 85;
                            implicitHeight: 35;
                            border.width: 0;
                            color: (control.hovered || control.pressed) ? "#129611" : "#F5F5F5";
                        }
                }
            }
        }
    }
}
