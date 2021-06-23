/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *scoreEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QPushButton *selectButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(520, 571);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 501, 551));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(widget);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));
        idEdit->setFont(font);

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setFont(font);

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(widget);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));
        scoreEdit->setFont(font);

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        insertButton = new QPushButton(widget);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));
        insertButton->setFont(font);

        horizontalLayout->addWidget(insertButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setFont(font);

        horizontalLayout->addWidget(deleteButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setFont(font);

        horizontalLayout->addWidget(updateButton);

        selectButton = new QPushButton(widget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setFont(font);

        horizontalLayout->addWidget(selectButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "sqlite", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\346\210\220\347\273\251\357\274\232", nullptr));
        insertButton->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245", nullptr));
        deleteButton->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        updateButton->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271", nullptr));
        selectButton->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
