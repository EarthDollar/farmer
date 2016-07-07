/********************************************************************************
** Form generated from reading UI file 'LogPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGPANEL_H
#define UI_LOGPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *log;
    QVBoxLayout *verticalLayout_6;
    QSlider *verbosity;
    QLabel *verbosityLabel;

    void setupUi(QWidget *LogPanel)
    {
        if (LogPanel->objectName().isEmpty())
            LogPanel->setObjectName(QStringLiteral("LogPanel"));
        LogPanel->resize(834, 265);
        horizontalLayout = new QHBoxLayout(LogPanel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        log = new QPlainTextEdit(LogPanel);
        log->setObjectName(QStringLiteral("log"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        log->setFont(font);
        log->setFrameShape(QFrame::NoFrame);
        log->setFrameShadow(QFrame::Plain);
        log->setLineWidth(0);
        log->setLineWrapMode(QPlainTextEdit::NoWrap);
        log->setReadOnly(true);

        horizontalLayout->addWidget(log);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verbosity = new QSlider(LogPanel);
        verbosity->setObjectName(QStringLiteral("verbosity"));
        verbosity->setMaximum(20);
        verbosity->setValue(1);
        verbosity->setOrientation(Qt::Vertical);
        verbosity->setTickPosition(QSlider::TicksBothSides);

        verticalLayout_6->addWidget(verbosity);

        verbosityLabel = new QLabel(LogPanel);
        verbosityLabel->setObjectName(QStringLiteral("verbosityLabel"));
        verbosityLabel->setMinimumSize(QSize(20, 0));
        verbosityLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(verbosityLabel);


        horizontalLayout->addLayout(verticalLayout_6);


        retranslateUi(LogPanel);

        QMetaObject::connectSlotsByName(LogPanel);
    } // setupUi

    void retranslateUi(QWidget *LogPanel)
    {
        LogPanel->setWindowTitle(QApplication::translate("LogPanel", "Form", 0));
        verbosityLabel->setText(QApplication::translate("LogPanel", "20", 0));
    } // retranslateUi

};

namespace Ui {
    class LogPanel: public Ui_LogPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGPANEL_H
