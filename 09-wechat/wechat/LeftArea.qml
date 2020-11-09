import QtQuick 2.0

Item {
    id:root;
    property int rectWidth :70;
    property int rectHeight : 800;
    width: root.rectWidth;
    height:root.rectHeight;
    signal chatWindowClicked();
    signal frienWindowClicked();
    signal collectionWindowClicked();
    signal fileWindowClicked();
    signal lookWindowClicked();

    Rectangle {
        id:toolRect;
        color: "#26292C";
        anchors.fill: parent

        Column{
            id:imageColumn
            width: toolRect.width;
            height: toolRect.height;
            anchors.fill: parent
//            anchors.margins: 15
            anchors.top: toolRect.top;
            anchors.left: toolRect.left;
            anchors.leftMargin: 15;
            anchors.topMargin: 40;
            spacing: 10;

            IconButton {
                id:chatWindow;

                imageUrl: "./image/liaotian.svg"
                onImageClicked : {
                    root.chatWindowClicked();
                }
            }
            IconButton {
                id:frienWindow;
                imageUrl: "./image/icon-friends.svg"
                onImageClicked : {
                    root.frienWindowClicked();
                }
            }

            IconButton {
                id:collectionWindow;
                imageUrl: "./image/zhengfangti.svg"
                onImageClicked : {
                    root.collectionWindowClicked();
                }
            }

            IconButton {
                id:fileWindow;
                imageUrl: "./image/wenjian.svg"
                onImageClicked : {
                    root.fileWindowClicked();
                }
            }

            IconButton {
                id:lookWindow;
                imageUrl: "./image/xingxing.svg"
                onImageClicked : {
                    root.lookWindowClicked();
                }
            }
        }
    }
}
