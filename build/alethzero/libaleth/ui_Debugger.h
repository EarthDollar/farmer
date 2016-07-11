/********************************************************************************
** Form generated from reading UI file 'Debugger.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGER_H
#define UI_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Debugger
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *stepOver;
    QToolButton *stepInto;
    QToolButton *stepOut;
    QToolButton *backOver;
    QToolButton *backInto;
    QToolButton *backOut;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter_6;
    QSplitter *splitter_42;
    QListWidget *debugCode;
    QListWidget *callStack;
    QSplitter *splitter_4;
    QTextEdit *debugStack;
    QTextEdit *debugMemory;
    QTextEdit *debugStorage;
    QTextEdit *debugCallData;
    QLabel *debugStateInfo;
    QSlider *debugTimeline;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *dump;
    QToolButton *dumpStorage;
    QToolButton *dumpPretty;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *close;

    void setupUi(QDialog *Debugger)
    {
        if (Debugger->objectName().isEmpty())
            Debugger->setObjectName(QStringLiteral("Debugger"));
        Debugger->resize(989, 690);
        verticalLayout = new QVBoxLayout(Debugger);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(Debugger);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stepOver = new QToolButton(frame);
        stepOver->setObjectName(QStringLiteral("stepOver"));

        horizontalLayout->addWidget(stepOver);

        stepInto = new QToolButton(frame);
        stepInto->setObjectName(QStringLiteral("stepInto"));

        horizontalLayout->addWidget(stepInto);

        stepOut = new QToolButton(frame);
        stepOut->setObjectName(QStringLiteral("stepOut"));

        horizontalLayout->addWidget(stepOut);

        backOver = new QToolButton(frame);
        backOver->setObjectName(QStringLiteral("backOver"));

        horizontalLayout->addWidget(backOver);

        backInto = new QToolButton(frame);
        backInto->setObjectName(QStringLiteral("backInto"));

        horizontalLayout->addWidget(backInto);

        backOut = new QToolButton(frame);
        backOut->setObjectName(QStringLiteral("backOut"));

        horizontalLayout->addWidget(backOut);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        splitter_6 = new QSplitter(Debugger);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_6->sizePolicy().hasHeightForWidth());
        splitter_6->setSizePolicy(sizePolicy);
        splitter_6->setOrientation(Qt::Horizontal);
        splitter_42 = new QSplitter(splitter_6);
        splitter_42->setObjectName(QStringLiteral("splitter_42"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter_42->sizePolicy().hasHeightForWidth());
        splitter_42->setSizePolicy(sizePolicy1);
        splitter_42->setOrientation(Qt::Vertical);
        debugCode = new QListWidget(splitter_42);
        debugCode->setObjectName(QStringLiteral("debugCode"));
        sizePolicy.setHeightForWidth(debugCode->sizePolicy().hasHeightForWidth());
        debugCode->setSizePolicy(sizePolicy);
        debugCode->setFrameShape(QFrame::NoFrame);
        debugCode->setLineWidth(0);
        splitter_42->addWidget(debugCode);
        callStack = new QListWidget(splitter_42);
        callStack->setObjectName(QStringLiteral("callStack"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        callStack->setFont(font);
        callStack->setFrameShape(QFrame::NoFrame);
        callStack->setLineWidth(0);
        splitter_42->addWidget(callStack);
        splitter_6->addWidget(splitter_42);
        splitter_4 = new QSplitter(splitter_6);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        sizePolicy1.setHeightForWidth(splitter_4->sizePolicy().hasHeightForWidth());
        splitter_4->setSizePolicy(sizePolicy1);
        splitter_4->setOrientation(Qt::Vertical);
        debugStack = new QTextEdit(splitter_4);
        debugStack->setObjectName(QStringLiteral("debugStack"));
        debugStack->setFrameShape(QFrame::NoFrame);
        debugStack->setLineWidth(0);
        debugStack->setReadOnly(true);
        debugStack->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        splitter_4->addWidget(debugStack);
        debugMemory = new QTextEdit(splitter_4);
        debugMemory->setObjectName(QStringLiteral("debugMemory"));
        debugMemory->setFrameShape(QFrame::NoFrame);
        debugMemory->setLineWidth(0);
        debugMemory->setReadOnly(true);
        debugMemory->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        splitter_4->addWidget(debugMemory);
        debugStorage = new QTextEdit(splitter_4);
        debugStorage->setObjectName(QStringLiteral("debugStorage"));
        debugStorage->setFrameShape(QFrame::NoFrame);
        debugStorage->setLineWidth(0);
        debugStorage->setReadOnly(true);
        debugStorage->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        splitter_4->addWidget(debugStorage);
        debugCallData = new QTextEdit(splitter_4);
        debugCallData->setObjectName(QStringLiteral("debugCallData"));
        debugCallData->setFrameShape(QFrame::NoFrame);
        debugCallData->setReadOnly(true);
        splitter_4->addWidget(debugCallData);
        splitter_6->addWidget(splitter_4);

        verticalLayout->addWidget(splitter_6);

        debugStateInfo = new QLabel(Debugger);
        debugStateInfo->setObjectName(QStringLiteral("debugStateInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(debugStateInfo->sizePolicy().hasHeightForWidth());
        debugStateInfo->setSizePolicy(sizePolicy2);
        debugStateInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(debugStateInfo);

        debugTimeline = new QSlider(Debugger);
        debugTimeline->setObjectName(QStringLiteral("debugTimeline"));
        debugTimeline->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(debugTimeline);

        frame_2 = new QFrame(Debugger);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        dump = new QToolButton(frame_2);
        dump->setObjectName(QStringLiteral("dump"));

        horizontalLayout_2->addWidget(dump);

        dumpStorage = new QToolButton(frame_2);
        dumpStorage->setObjectName(QStringLiteral("dumpStorage"));

        horizontalLayout_2->addWidget(dumpStorage);

        dumpPretty = new QToolButton(frame_2);
        dumpPretty->setObjectName(QStringLiteral("dumpPretty"));

        horizontalLayout_2->addWidget(dumpPretty);

        horizontalSpacer_2 = new QSpacerItem(577, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        close = new QToolButton(frame_2);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout_2->addWidget(close);


        verticalLayout->addWidget(frame_2);


        retranslateUi(Debugger);

        QMetaObject::connectSlotsByName(Debugger);
    } // setupUi

    void retranslateUi(QDialog *Debugger)
    {
        Debugger->setWindowTitle(QApplication::translate("Debugger", "Dialog", 0));
        stepOver->setText(QApplication::translate("Debugger", "Step Over", 0));
        stepInto->setText(QApplication::translate("Debugger", "Step Into", 0));
        stepOut->setText(QApplication::translate("Debugger", "Step Out", 0));
        backOver->setText(QApplication::translate("Debugger", "Back Over", 0));
        backInto->setText(QApplication::translate("Debugger", "Back Into", 0));
        backOut->setText(QApplication::translate("Debugger", "Back Out", 0));
        debugStateInfo->setText(QString());
        dump->setText(QApplication::translate("Debugger", "Dump", 0));
        dumpStorage->setText(QApplication::translate("Debugger", "Dump Storage", 0));
        dumpPretty->setText(QApplication::translate("Debugger", "Dump Pretty", 0));
        close->setText(QApplication::translate("Debugger", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Debugger: public Ui_Debugger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGER_H
