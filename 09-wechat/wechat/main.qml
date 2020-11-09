import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
Window {
    id:root;
    visible: true
    width: 875
    height: 625
    title: qsTr("Hello World")
    color: "white"
    minimumHeight: 625
    minimumWidth: 875
    flags: Qt.Window | Qt.FramelessWindowHint //隐藏标题栏

    property bool isMax:false;
    Rectangle {
        id:backRect;
        anchors.fill: parent;
        Rectangle {//用来移动的标题栏
            id:moveTitle;
            anchors.top: backRect.top;
            anchors.left: backRect.left;
            anchors.right: backRect.right;
            height: 35;

            MouseArea{  //设置可以拖动没有标题的登录界面.  /*这个要放在上面，放在最下面的话，会把上面全部屏蔽掉的*/
                anchors.fill:parent
                property point clickPos: "0,0"  //定义一个点

                onPressed: {
                    clickPos = Qt.point(mouseX, mouseY)
                }

                onPositionChanged: {  //属性的改变
                    var delta = Qt.point(mouseX-clickPos.x, mouseY-clickPos.y)
                    root.setX(root.x+delta.x)
                    root.setY(root.y+delta.y)
                }
            }
        }

        Rectangle {//向左拖动
            id:leftSizeChange;
            anchors.top: moveTitle.bottom;
            anchors.bottom: downSizeChange.top;
            anchors.left: backRect.left;
//            height: root.height-35-downSizeChange.height;
            width: 15;
            color: "yellow"

            MouseArea{  //设置可以拖动没有标题的登录界面.  /*这个要放在上面，放在最下面的话，会把上面全部屏蔽掉的*/
                anchors.fill:parent
                property point clickPos: "0,0"  //定义一个点
                cursorShape:Qt.SizeHorCursor
                onPressed: {
                    clickPos = Qt.point(mouseX, mouseY)
                }

                onPositionChanged: {  //属性的改变
                    var delta = Qt.point(mouseX-clickPos.x, mouseY-clickPos.y)
                    if((root.width-delta.x)>root.minimumWidth)
                    {
                       root.setX(root.x+delta.x)
                       root.setWidth(root.width-delta.x)
                    }
                    else
                        root.setWidth(root.minimumWidth)
                }
            }
        }

        Rectangle {//向下拖动
            id:downSizeChange;
            anchors.bottom: backRect.bottom;
            anchors.left: leftSizeChange.right;
            anchors.right: rightSizeChange.left;
            height: 10;//远离发送的按钮
            color: "green"

            MouseArea{  //设置可以拖动没有标题的登录界面.  /*这个要放在上面，放在最下面的话，会把上面全部屏蔽掉的*/
                anchors.fill:parent
                property point clickPos: "0,0"  //定义一个点
                cursorShape:Qt.SizeVerCursor
                onPressed: {
                    clickPos = Qt.point(mouseX, mouseY)
                }

                onPositionChanged: {  //属性的改变
                    var delta = Qt.point(mouseX-clickPos.x, mouseY-clickPos.y)
                    if((root.height+delta.y)>root.minimumHeight)
//                        root.setHeight(root.height+delta.y)
                        root.height += delta.y
                    else
                        root.setHeight(root.minimumHeight)
                }
            }
        }

        Rectangle {//向右拖动
            id:rightSizeChange;
            width: 15;
            anchors.right: backRect.right;
            anchors.top:moveTitle.bottom;
            anchors.bottom: downSizeChange.top;
            color: "yellow";
            MouseArea{  //设置可以拖动没有标题的登录界面.  /*这个要放在上面，放在最下面的话，会把上面全部屏蔽掉的*/
                anchors.fill:parent
                property point clickPos: "0,0"  //定义一个点
                cursorShape:Qt.SizeHorCursor
                onPressed: {
                    clickPos = Qt.point(mouseX, mouseY)
                }

                onPositionChanged: {  //属性的改变
                    var delta = Qt.point(mouseX-clickPos.x, mouseY-clickPos.y)
                    if((root.width+delta.x)>root.minimumWidth)
                    {
//                       root.setX(root.x+delta.x)
                       root.setWidth(root.width+delta.x)
                    }
                    else
                        root.setWidth(root.minimumWidth)
                }
            }
        }

        LeftArea {
            id:toolBar;
            anchors.left: backRect.left;
            anchors.top: backRect.top;
            rectHeight: backRect.height;
            rectWidth: 70;

            onChatWindowClicked :{
                console.log("onChatWindowClicked");
                stackView.push(Qt.resolvedUrl("AllChat.qml"))
            }
            onFrienWindowClicked :{
                stackView.push(Qt.resolvedUrl("AllFriend.qml"))
            }
            onCollectionWindowClicked: {

            }
            onFileWindowClicked: {

            }
            onLookWindowClicked: {

            }
        }
        StackView {
            id: stackView
            initialItem:Qt.resolvedUrl("AllChat.qml")
            anchors.left: toolBar.right
            anchors.right: backRect.right;
            anchors.top: backRect.top;
            anchors.bottom: backRect.bottom;
        }
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
            id:closeButton;
            sourceComponent:titleButton
            anchors.right: backRect.right;
            anchors.rightMargin: 0;
            width: 40;
            height: 35;
            onLoaded: {
                item.titleButtonWidth = 40;
                item.titleButtonHeight = 35;
                item.iconImageSource = "./image/guanbi-copy.svg";
                item.hoveColor = "#FA5151";
                item.noHoveColor = "#F5F5F5";
            }
        }
        Connections {
            target: closeButton.item;//不要忘记.item
            onTitleButtonClicked: {
                Qt.quit();
            }
        }

        Loader {
            id:changeButton;
            sourceComponent:titleButton
            anchors.right: closeButton.left;
            anchors.rightMargin: 0;
            width: 40;
            height: 35;
            onLoaded: {
                item.titleButtonWidth = 40;
                item.titleButtonHeight = 35;
                item.iconImageSource = "./image/zuidahua_1.svg";
                item.hoveColor = "#E5E5E5";
                item.noHoveColor = "#F5F5F5";
            }
        }
        Connections {
            target: changeButton.item;//不要忘记.item
            onTitleButtonClicked: {
                if(!root.isMax)
                {
                    root.visibility = Window.FullScreen;
                    changeButton.item.iconImageSource = "./image/zuidahua.svg";
                    root.isMax = true;
                }
                else
                {
                    root.visibility = Window.Windowed
//                    root.width = 700
//                    root.height = 800
                    changeButton.item.iconImageSource = "./image/zuidahua_1.svg";
                    root.isMax = false;
                }

            }
        }

        Loader {
            id:hideButton;
            sourceComponent:titleButton
            anchors.right: changeButton.left;
            anchors.rightMargin: 0;
            width: 40;
            height: 35;
            onLoaded: {
                item.titleButtonWidth = 40;
                item.titleButtonHeight = 35;
                item.iconImageSource = "./image/zuixiaohua.svg";
                item.hoveColor = "#E5E5E5";
                item.noHoveColor = "#F5F5F5";
            }
        }

        Connections {
            target: hideButton.item;//不要忘记.item
            onTitleButtonClicked: {
                root.visibility =Window.Minimized
            }
        }
    }

}
