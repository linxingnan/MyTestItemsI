import QtQuick 2.0

Item {
    property int rectWidth:250;
    property int  rectHeight: 65;
    property url imageSource :"./image/head.png";
    property string title_data: "标题"
    property string message_data: "我：消息内容"
    property color backColor :"#E6E6E6";
    id:root;

    width: root.rectWidth;
    height: root.rectHeight;
    Rectangle {
        id:baseItem
        anchors.fill: parent;
        color: root.backColor
        radius: 5
        MouseArea {
            anchors.fill: parent;
            hoverEnabled: true //可响应悬停
//            onPressed: {
//                baseItem.titleButtonClicked();
//            }
            onEntered: {//进入颜色改变
                baseItem.color = "#D5D3D2";
            }

            onExited: {//退出颜色改变
                baseItem.color = root.backColor;
            }
        }
        Row{
            anchors.top: parent.top;
            anchors.topMargin: 10;
            anchors.left: parent.left;
            anchors.leftMargin: 10;
            spacing: 10;
            Image {
                width: 50;
                height: 50;
                source: root.imageSource;
            }
            Column {
                spacing: 10
                Text {
                    id:title;
                    text: root.title_data
                    font.pixelSize: 24;
                }
                Text {
                    id:message;
                    text: root.message_data
                    font.pixelSize: 12;
                }
            }
        }

    }
}
