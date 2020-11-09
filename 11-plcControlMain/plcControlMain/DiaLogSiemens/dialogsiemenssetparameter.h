#ifndef DIALOGSIEMENSSETPARAMETER_H
#define DIALOGSIEMENSSETPARAMETER_H

#include <QDialog>
namespace Ui {
class DialogSiemensSetParameter;
}

class DialogSiemensSetParameter : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSiemensSetParameter(QWidget *parent = nullptr);
    ~DialogSiemensSetParameter();
    void setViewData(QString ipAddr);
    QString getIp();
    void setModData(QList<int> listData);
    void setNetData(QStringList netData);

    void setModbusMapData(QVector<QString> vecStr);

    void downConfig_ModbusMap(QString &listStr);
    void downConfig_netData(QList<int> &vecInt, QVector<QString> &vecStr);
private slots:
    void on_tabWidgetTabChange(int page);
    void on_listWidget_currentRowChanged(int currentRow);

    void on_tableBtnClicked();
private:
    void initUi();
    void createTableHead();
    void initTableData();
    void createRowData(int row, QString &modbusData, QString &s7PlcData, QString &cmd);

    QString inserRowToMbCmd(int row, const QString &mbCMd);
private:
    //  自定义单元格Type的类型，在创建单元格的Item时使用
    enum    CellType{ctID=1000,ctModbusData,ctS7PlcData}; //各单元格的类型
    //  各字段在表格中的列号
    enum    FieldColNum{colModbusData=0,colS7PlcData};

    Ui::DialogSiemensSetParameter *ui;

signals:
    void upConfig();
    void downConfig();

};

#endif // DIALOGSIEMENSSETPARAMETER_H
