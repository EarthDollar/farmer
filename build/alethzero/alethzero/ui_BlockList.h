/********************************************************************************
** Form generated from reading UI file 'BlockList.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKLIST_H
#define UI_BLOCKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockList
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *filter;
    QSplitter *splitter_2;
    QListWidget *blocks;
    QPlainTextEdit *info;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *debugCurrent;
    QPushButton *dumpPre;
    QPushButton *dumpPost;

    void setupUi(QWidget *BlockList)
    {
        if (BlockList->objectName().isEmpty())
            BlockList->setObjectName(QStringLiteral("BlockList"));
        BlockList->resize(596, 429);
        verticalLayout = new QVBoxLayout(BlockList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        filter = new QLineEdit(BlockList);
        filter->setObjectName(QStringLiteral("filter"));
        filter->setClearButtonEnabled(true);

        verticalLayout->addWidget(filter);

        splitter_2 = new QSplitter(BlockList);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        blocks = new QListWidget(splitter_2);
        blocks->setObjectName(QStringLiteral("blocks"));
        sizePolicy.setHeightForWidth(blocks->sizePolicy().hasHeightForWidth());
        blocks->setSizePolicy(sizePolicy);
        blocks->setFocusPolicy(Qt::NoFocus);
        blocks->setFrameShape(QFrame::NoFrame);
        splitter_2->addWidget(blocks);
        info = new QPlainTextEdit(splitter_2);
        info->setObjectName(QStringLiteral("info"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy1);
        info->setFocusPolicy(Qt::WheelFocus);
        info->setFrameShape(QFrame::NoFrame);
        info->setReadOnly(true);
        splitter_2->addWidget(info);

        verticalLayout->addWidget(splitter_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        debugCurrent = new QPushButton(BlockList);
        debugCurrent->setObjectName(QStringLiteral("debugCurrent"));

        horizontalLayout->addWidget(debugCurrent);

        dumpPre = new QPushButton(BlockList);
        dumpPre->setObjectName(QStringLiteral("dumpPre"));

        horizontalLayout->addWidget(dumpPre);

        dumpPost = new QPushButton(BlockList);
        dumpPost->setObjectName(QStringLiteral("dumpPost"));

        horizontalLayout->addWidget(dumpPost);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BlockList);

        QMetaObject::connectSlotsByName(BlockList);
    } // setupUi

    void retranslateUi(QWidget *BlockList)
    {
        BlockList->setWindowTitle(QApplication::translate("BlockList", "Form", 0));
        filter->setText(QString());
        filter->setPlaceholderText(QApplication::translate("BlockList", "Filter with block number or hash", 0));
        debugCurrent->setText(QApplication::translate("BlockList", "Debug...", 0));
        dumpPre->setText(QApplication::translate("BlockList", "Dump Pre-State", 0));
        dumpPost->setText(QApplication::translate("BlockList", "Dump Post-State", 0));
    } // retranslateUi

};

namespace Ui {
    class BlockList: public Ui_BlockList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKLIST_H
