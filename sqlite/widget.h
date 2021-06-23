#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QDebug>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    //创建数据库
    void createDB();
    //创建数据表
    void createTable();
    //查询
    void queryTable();
private slots:
    //插入操作的槽函数
    void on_insertButton_clicked();
    //删除操作的槽函数
    void on_deleteButton_clicked();
    //修改操作的槽函数
    void on_updateButton_clicked();
    //查询操作的槽函数
    void on_selectButton_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;//建立Qt和数据库的链接
    QSqlQueryModel model;//保存结果集
};
#endif // WIDGET_H
