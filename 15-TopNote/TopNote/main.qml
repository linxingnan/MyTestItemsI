import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.14
Window {
    id:root;
    visible: true
    width: 640
    height: 480
    minimumHeight: 480;
    minimumWidth: 640;
    title: qsTr("Hello World")
    color: "#D6D6D6"

    MyTitle {
        id:myTitle
        height: 35;
        anchors.right: parent.right;
        anchors.left: parent.left;
        onMoveWindow: {
            root.setX(root.x+delta.x)
            root.setY(root.y+delta.y)
        }
        onCloseClicked: {
            Qt.quit();
        }
    }
    Rectangle {
       id:leftRect;
       width: 20;
       anchors.left: parent.left;
       color: "#D6D6D6"
//       anchors.right:inputRect.left;
       anchors.top: myTitle.bottom;
       anchors.bottom: parent.bottom;
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
    Rectangle {
        id:rightRect;
        width: 20;
        color: "#D6D6D6"
//        anchors.left: inputRect.right;
        anchors.right:parent.right;
        anchors.top: myTitle.bottom;
        anchors.bottom: parent.bottom;
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

    Rectangle {
        id:bottomRect;
        height: 20;
        color: "#D6D6D6"
        anchors.left: leftRect.right;
        anchors.right: rightRect.left;
        anchors.bottom: parent.bottom;
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

    Rectangle {
        id:inputRect
        anchors.topMargin: 10;
        anchors.top: myTitle.bottom;
        anchors.left: leftRect.right;
        anchors.right: rightRect.left;
        anchors.bottom: bottomRect.top;
        color: "#D6D6D6"
        TextEdit {
            id:textEdit;
            width:inputRect.width-vbar.width
            height: contentHeight
            selectByMouse:true;
            selectByKeyboard: true
            font.pixelSize: 20;
            y: -vbar.position * textEdit.height
            text: "headABCDEFGHIJKLABCDEFGHaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
            wrapMode: TextEdit.Wrap//换行
            MouseArea{
              anchors.fill: parent
              onWheel: {
                  console.log("vbar.position ",vbar.position);
                  console.log("textEdit.height ",textEdit.height);
                  if (wheel.angleDelta.y > 0) {
                      vbar.decrease();
                  }
                  else {
                      vbar.increase();
                  }
              }
              onClicked: {
                  textEdit.forceActiveFocus();
              }
          }
        }
        ScrollBar {
            id: vbar
            hoverEnabled: true
            active: hovered || pressed
            orientation: Qt.Vertical
            size: inputRect.height/textEdit.height;
            width: 10
            anchors.top: parent.top
            anchors.right: parent.right
            anchors.bottom: parent.bottom

        }

    }
}
