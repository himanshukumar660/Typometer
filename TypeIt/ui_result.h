/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(400, 300);
        Result->setWindowOpacity(0.99);
        Result->setStyleSheet(QString::fromUtf8("background-image:url(:/CSS-Background-Images-1-Red-and-Yellow.jpg)"));
        textBrowser = new QTextBrowser(Result);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 30, 201, 181));
        QFont font;
        font.setFamily(QString::fromUtf8("FreeMono"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        textBrowser->setMouseTracking(true);
        textBrowser->setStyleSheet(QString::fromUtf8("color:rgb(255, 94, 0);\n"
"background:transparent;\n"
"font: 12pt \"FreeMono\";\n"
"border:none;"));
        textBrowser->setFrameShadow(QFrame::Raised);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser->setLineWrapMode(QTextEdit::WidgetWidth);
        textBrowser->setAcceptRichText(false);
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_2 = new QPushButton(Result);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 14, 181, 201));
        pushButton_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("position:absolute;\n"
"background:none;\n"
"border:none;\n"
"border-image:url(://imageedit_4_5424026280.png);"));
        pushButton_3 = new QPushButton(Result);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 230, 181, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("FreeMono"));
        font1.setPointSize(17);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"color:rgb(255, 94, 0);\n"
""));
        pushButton = new QPushButton(Result);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 230, 171, 51));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border:rgb(255, 94, 0);\n"
"color:rgb(255, 94, 0);\n"
""));

        retranslateUi(Result);
        QObject::connect(pushButton, SIGNAL(clicked()), Result, SLOT(close()));

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QApplication::translate("Result", "Result", 0, 0));
        textBrowser->setPlaceholderText(QApplication::translate("Result", "YOUR RESULT APPEARS HERE..CLICK \"RESULT\"", 0, 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QApplication::translate("Result", "Give Up", 0, 0));
        pushButton->setText(QApplication::translate("Result", "Test Again", 0, 0));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
