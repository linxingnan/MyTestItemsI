import QtQuick 2.0

Rectangle {
    id:root;
//    color: "green";
//    height: 35;
//    width: 200;
    signal closeClicked();
    signal moveWindow(point delta);
    Component {//标题栏上面三个按钮
                id:titleButton;
                Rectangle {
                    property int titleButtonWidth: 40;
                    property int titleButtonHeight: 35;
                    property url iconImageSource;
                    property color hoveColor: "#FA5151";
                    property color noHoveColor: "#F5F5F5"

                    id: baseItem
                    color: baseItem.noHoveColor
                    width: baseItem.titleButtonWidth;
                    height: baseItem.titleButtonHeight;
                    signal titleButtonClicked();

                    Image {
                        width: 15;
                        height: 15;
                        anchors.centerIn: parent
    //                    anchors.fill: parent
                        source: baseItem.iconImageSource;
                    }

                    MouseArea {
                        anchors.fill: parent
                        hoverEnabled: true //可响应悬停
                        onPressed: {
                            baseItem.titleButtonClicked();
                        }
                        onEntered: {//进入颜色改变
                            baseItem.color = hoveColor;
                        }

                        onExited: {//退出颜色改变
                            baseItem.color = noHoveColor;
                        }
                    }
                }
            }
    Loader {
        id:closeButton
        sourceComponent: titleButton
        anchors.right: root.right;
        anchors.top: root.top;
        anchors.bottom: root.bottom;
    }
    Connections {
        target: closeButton.item;
        onTitleButtonClicked: {
            root.closeClicked();
        }
    }

    Rectangle {
        id:titleRet;
        anchors.left: root.left;
        anchors.right: closeButton.left;
        anchors.top: root.top;
        anchors.bottom: root.bottom;
        color: "#F5F5F5"
        MouseArea{
            anchors.fill:parent
            property point clickPos: "0,0"  //定义一个点

            onPressed: {
                clickPos = Qt.point(mouseX, mouseY)
            }

            onPositionChanged: {  //属性的改变
                var delta = Qt.point(mouseX-clickPos.x, mouseY-clickPos.y)
                root.moveWindow(delta);
            }

            onEntered: {//进入颜色改变
                titleRet.color = "#444540";
            }

            onExited: {//退出颜色改变
                titleRet.color = "#F5F5F5";
            }
        }
    }
//    Rectangle {
//        id:spaceLine;
//        color: "#444540"
//        anchors.top: titleRet.bottom;
//        anchors.left: root.left;
//        anchors.right: closeButton.left;
//    }
}
