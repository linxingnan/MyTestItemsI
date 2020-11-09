#ifndef PROGRESSBARDELEGATE_H
#define PROGRESSBARDELEGATE_H

#define     ProGressBarColumn   3

#include <QItemDelegate>
#include <QProgressBar>

#include <QPainter>
#include <QApplication>
class ProgressBarDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit ProgressBarDelegate(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:

private:


};

#endif // PROGRESSBARDELEGATE_H
