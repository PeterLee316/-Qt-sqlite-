#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    createDB();
    createTable();
    queryTable();
}

Widget::~Widget()
{
    delete ui;
}
//创建数据库
void Widget::createDB()
{
    //添加数据库驱动
    db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名字
    db.setDatabaseName("student.db");
    //打开数据库
    if(db.open()==true)
    {
        qDebug()<<"创建/打开数据库成功！";
    }
    else
    {
        qDebug()<<"创建/打开数据库失败！";
    }
}
//创建数据表
void Widget::createTable()
{
    QSqlQuery query;
    QString str = QString("CREATE TABLE student("
                          "id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    if(query.exec(str)==false)
    {
        qDebug()<<str;
    }
    else
    {
        qDebug()<<"创建数据表成功！";
    }
}
//查询
void Widget::queryTable()
{
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}
//插入操作的槽函数
void Widget::on_insertButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"ERROR","ID输入错误！");
        return;
    }
    QString name = ui->nameEdit->text();
    if(name=="")
    {
        QMessageBox::critical(this,"ERROR","姓名输入错误！");
        return;
    }
    double score = ui->scoreEdit->text().toDouble();
    if(score<0||score>100)
    {
        QMessageBox::critical(this,"ERROR","成绩输入错误！");
        return;
    }
    QString str = QString("INSERT INTO student VALUES(%1,'%2',%3)").arg(id).arg(name).arg(score);
    if(query.exec(str)==false)
    {
        qDebug()<<str;
    }
    else
    {
        qDebug()<<"插入数据成功!";
        queryTable();
    }
}

//删除操作的槽函数
void Widget::on_deleteButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"ERROR","ID输入错误！");
        return;
    }
    QString str = QString("DELETE FROM student WHERE id = %1").arg(id);
    if(query.exec(str)==false)
    {
        qDebug()<<str;
    }
    else
    {
        qDebug()<<"删除操作成功！";
        queryTable();
    }
}

//修改操作的槽函数
void Widget::on_updateButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"ERROR","ID输入错误！");
        return;
    }
    double score = ui->scoreEdit->text().toDouble();
    if(score<0||score>100)
    {
        QMessageBox::critical(this,"ERROR","成绩输入错误！");
        return;
    }
    QString str = QString("UPDATE student SET score=%1 WHERE id=%2").arg(score).arg(id);
    if(query.exec(str)==false)
    {
        qDebug()<<str;
    }
    else
    {
        qDebug()<<"修改操作成功！";
        queryTable();
    }
}

//查询操作的槽函数
void Widget::on_selectButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"ERROR","ID输入错误！");
        return;
    }
    QString str = QString("SELECT * FROM student WHERE id=%1").arg(id);
    if(query.exec(str)==false)
    {
        qDebug()<<str;
    }
    else
    {
        qDebug()<<"查询操作成功！";
        model.setQuery(str);
        ui->tableView->setModel(&model);
    }
}

