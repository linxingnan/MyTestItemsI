import QtQuick 2.0

Rectangle {
    id:root;

    property int rectWidth: 805;
    property int rectHeight: 625;

    width: rectWidth;
    height: rectHeight;

    ChatWindows {
        id:viewChat;
        anchors.left: root.left;
        anchors.top: root.top;
        retHeight: root.height;
        retWidth: 250;
    }

    ChatBox {
        id:viewMessageBox;
        anchors.left: viewChat.right;
        anchors.top: root.top;
        rectHeight: root.height;
        rectWidth: root.width-viewChat.width;
        titleData: "聊天吗"
    }
}
