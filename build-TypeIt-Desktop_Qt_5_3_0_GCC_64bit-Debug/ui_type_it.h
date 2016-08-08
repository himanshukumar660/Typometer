/********************************************************************************
** Form generated from reading UI file 'type_it.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPE_IT_H
#define UI_TYPE_IT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Type_It
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *clear;
    QPushButton *aboutMe;
    QPushButton *heading;
    QPushButton *start;
    QPushButton *logo;
    QPushButton *giveUp;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *getRandom;
    QPushButton *upload;

    void setupUi(QMainWindow *Type_It)
    {
        if (Type_It->objectName().isEmpty())
            Type_It->setObjectName(QStringLiteral("Type_It"));
        Type_It->setEnabled(true);
        Type_It->resize(1000, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Type_It->sizePolicy().hasHeightForWidth());
        Type_It->setSizePolicy(sizePolicy);
        Type_It->setMinimumSize(QSize(1000, 650));
        Type_It->setMaximumSize(QSize(1000, 650));
        Type_It->setCursor(QCursor(Qt::ArrowCursor));
        Type_It->setMouseTracking(true);
        Type_It->setWindowOpacity(0.99);
        Type_It->setLayoutDirection(Qt::LeftToRight);
        Type_It->setStyleSheet(QStringLiteral(""));
        Type_It->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks);
        centralWidget = new QWidget(Type_It);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 80, 651, 551));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font;
        font.setFamily(QStringLiteral("GibsonLight"));
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        textBrowser->setMouseTracking(true);
        textBrowser->setStyleSheet(QLatin1String("background-image:url(:/light.jpg);\n"
"background-color: rgb(187, 187, 187);\n"
"\n"
"padding-top:15;\n"
"padding-bottom:15;\n"
"padding-right:10;\n"
"padding-left:10;"));
        textBrowser->setFrameShape(QFrame::StyledPanel);
        textBrowser->setFrameShadow(QFrame::Raised);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setAcceptRichText(false);
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);
        textBrowser->setOpenLinks(false);

        verticalLayout->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(649, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFont(font);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit->setMouseTracking(true);
        textEdit->setStyleSheet(QLatin1String("background-image: url(:/light.jpg);\n"
"background-color: rgb(187, 187, 187);\n"
"padding-top:15;\n"
"padding-bottom:15;\n"
"padding-right:10;\n"
"padding-left:10;"));
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Raised);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setUndoRedoEnabled(false);
        textEdit->setAcceptRichText(false);
        textEdit->setTextInteractionFlags(Qt::TextEditable);

        verticalLayout->addWidget(textEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(860, 80, 111, 141));
        close->setStyleSheet(QLatin1String("position:absolute;\n"
"background:none;\n"
"border:none;\n"
"border-image:url(://logo.png);"));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(840, 270, 151, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        clear = new QPushButton(layoutWidget1);
        clear->setObjectName(QStringLiteral("clear"));
        QFont font1;
        font1.setFamily(QStringLiteral("FreeMono"));
        font1.setPointSize(18);
        clear->setFont(font1);
        clear->setCursor(QCursor(Qt::OpenHandCursor));
        clear->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 94, 0);"));

        verticalLayout_2->addWidget(clear);

        aboutMe = new QPushButton(layoutWidget1);
        aboutMe->setObjectName(QStringLiteral("aboutMe"));
        QFont font2;
        font2.setFamily(QStringLiteral("FreeMono"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        aboutMe->setFont(font2);
        aboutMe->setCursor(QCursor(Qt::OpenHandCursor));
        aboutMe->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 94, 0);"));

        verticalLayout_2->addWidget(aboutMe);

        heading = new QPushButton(centralWidget);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(220, 0, 551, 71));
        QFont font3;
        font3.setFamily(QStringLiteral("FreeMono"));
        font3.setPointSize(40);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        heading->setFont(font3);
        heading->setStyleSheet(QLatin1String("font:  40pt \"FreeMono\";\n"
"color:rgb(255,94, 0);\n"
"border:none;\n"
"font-weight:bold;"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(11, 470, 141, 141));
        QFont font4;
        font4.setFamily(QStringLiteral("FreeMono"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        start->setFont(font4);
        start->setCursor(QCursor(Qt::OpenHandCursor));
        start->setStyleSheet(QLatin1String("border-image:url(:/imageedit_1_8076061353.png);\n"
"color:rgb(0, 0, 0);\n"
"font: 75 18pt \"FreeMono\";\n"
"font-weight:bold;\n"
"position:absolute;\n"
"background:none;\n"
"border:none;\n"
"\n"
""));
        logo = new QPushButton(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(30, 80, 111, 141));
        logo->setStyleSheet(QLatin1String("position:absolute;\n"
"background:none;\n"
"border:none;\n"
"border-image:url(:/imageedit_4_4169169761.png);"));
        giveUp = new QPushButton(centralWidget);
        giveUp->setObjectName(QStringLiteral("giveUp"));
        giveUp->setGeometry(QRect(840, 480, 141, 141));
        giveUp->setFont(font4);
        giveUp->setCursor(QCursor(Qt::OpenHandCursor));
        giveUp->setStyleSheet(QLatin1String("border-image:url(:/stop-icon.png);\n"
"color:rgb(0, 0, 0);\n"
"font: 75 18pt \"FreeMono\";\n"
"font-weight:bold;\n"
"position:absolute;\n"
"background:none;\n"
"border:none;\n"
"\n"
""));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 260, 151, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        getRandom = new QPushButton(layoutWidget2);
        getRandom->setObjectName(QStringLiteral("getRandom"));
        getRandom->setFont(font1);
        getRandom->setCursor(QCursor(Qt::OpenHandCursor));
        getRandom->setStyleSheet(QLatin1String("color:rgb(255, 94, 0);\n"
"background:transparent;\n"
""));

        verticalLayout_3->addWidget(getRandom);

        upload = new QPushButton(layoutWidget2);
        upload->setObjectName(QStringLiteral("upload"));
        upload->setFont(font2);
        upload->setCursor(QCursor(Qt::OpenHandCursor));
        upload->setStyleSheet(QLatin1String("color:rgb(255, 94, 0);\n"
"background:transparent;\n"
""));

        verticalLayout_3->addWidget(upload);

        Type_It->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        close->raise();
        layoutWidget->raise();
        heading->raise();
        start->raise();
        logo->raise();
        giveUp->raise();
        QWidget::setTabOrder(textEdit, start);
        QWidget::setTabOrder(start, close);
        QWidget::setTabOrder(close, aboutMe);
        QWidget::setTabOrder(aboutMe, clear);
        QWidget::setTabOrder(clear, heading);

        retranslateUi(Type_It);
        QObject::connect(clear, SIGNAL(clicked()), textBrowser, SLOT(clear()));
        QObject::connect(getRandom, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(upload, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(start, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(clear, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Type_It);
    } // setupUi

    void retranslateUi(QMainWindow *Type_It)
    {
        Type_It->setWindowTitle(QApplication::translate("Type_It", "Typometer", 0));
        textBrowser->setPlaceholderText(QApplication::translate("Type_It", "Your Uploaded File Appers Here...", 0));
        textEdit->setPlaceholderText(QApplication::translate("Type_It", "You Type Here...", 0));
        close->setText(QString());
        clear->setText(QApplication::translate("Type_It", "Clear", 0));
        aboutMe->setText(QApplication::translate("Type_It", "About Me", 0));
        heading->setText(QApplication::translate("Type_It", "TYPOMETER", 0));
        start->setText(QApplication::translate("Type_It", "START", 0));
        logo->setText(QString());
        giveUp->setText(QApplication::translate("Type_It", "STOP", 0));
        getRandom->setText(QApplication::translate("Type_It", "Random", 0));
        upload->setText(QApplication::translate("Type_It", "Upload", 0));
    } // retranslateUi

};

namespace Ui {
    class Type_It: public Ui_Type_It {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPE_IT_H
