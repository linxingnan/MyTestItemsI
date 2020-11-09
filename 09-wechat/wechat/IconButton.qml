import QtQuick 2.0

Rectangle {
    id: backRect;
    width: 50;
    height: 50;
    color: "#26292C"
    property url imageUrl;
    signal imageClicked();
    Image {
        id:iconImageButton
        width: 40;
        height: 40;
        source: backRect.imageUrl
    }
    MouseArea {
        anchors.fill: backRect;
        onPressed: {
            backRect.imageClicked();
        }
    }
}
