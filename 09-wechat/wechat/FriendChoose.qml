import QtQuick 2.0

Item {
    property int rectWidth:250;
    property int  rectHeight: 65;
    property url imageSource :"./image/head.png";
    property string title_data: "标题"
    property color backColor :"#EDEAE8";
    id:root;

    width: root.rectWidth;
    height: root.rectHeight;
    Rectangle {
        id:baseItem
        anchors.fill: parent;
//        color: "black"
        color: root.backColor
        radius: 5
        MouseArea {
            anchors.fill: parent;
            hoverEnabled: true //可响应悬停
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
                id:titleImage
                width: 50;
                height: 50;
                source: root.imageSource;
            }

            Text {
                id:title;
                anchors.verticalCenter: titleImage.verticalCenter;
                text: root.title_data
                font.pixelSize: 24;
            }
        }

    }
}
