/********************************************************************************
** Form generated from reading UI file 'WhisperPeers.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHISPERPEERS_H
#define UI_WHISPERPEERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WhisperPeers
{
public:
    QVBoxLayout *whisperPeersLayout;
    QComboBox *topics;
    QListWidget *whispers;
    QWidget *whisperPeersWidget2;
    QHBoxLayout *whisperPeersLayout2;
    QPushButton *clear;
    QPushButton *stop;
    QPushButton *forgetCurrent;
    QPushButton *forgetAll;

    void setupUi(QWidget *whisperPeersWidget)
    {
        if (whisperPeersWidget->objectName().isEmpty())
            whisperPeersWidget->setObjectName(QStringLiteral("whisperPeersWidget"));
        whisperPeersLayout = new QVBoxLayout(whisperPeersWidget);
        whisperPeersLayout->setSpacing(0);
        whisperPeersLayout->setObjectName(QStringLiteral("whisperPeersLayout"));
        whisperPeersLayout->setContentsMargins(0, 0, 0, 0);
        topics = new QComboBox(whisperPeersWidget);
        topics->setObjectName(QStringLiteral("topics"));
        topics->setEditable(false);

        whisperPeersLayout->addWidget(topics);

        whispers = new QListWidget(whisperPeersWidget);
        whispers->setObjectName(QStringLiteral("whispers"));
        whispers->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        whispers->setAlternatingRowColors(true);
        whispers->setWordWrap(true);
        whispers->setFrameShape(QFrame::StyledPanel);

        whisperPeersLayout->addWidget(whispers);

        whisperPeersWidget2 = new QWidget(whisperPeersWidget);
        whisperPeersWidget2->setObjectName(QStringLiteral("whisperPeersWidget2"));
        whisperPeersLayout2 = new QHBoxLayout(whisperPeersWidget2);
        whisperPeersLayout2->setSpacing(4);
        whisperPeersLayout2->setObjectName(QStringLiteral("whisperPeersLayout2"));
        whisperPeersLayout2->setContentsMargins(4, 4, 4, 4);
        clear = new QPushButton(whisperPeersWidget2);
        clear->setObjectName(QStringLiteral("clear"));

        whisperPeersLayout2->addWidget(clear);

        stop = new QPushButton(whisperPeersWidget2);
        stop->setObjectName(QStringLiteral("stop"));

        whisperPeersLayout2->addWidget(stop);

        forgetCurrent = new QPushButton(whisperPeersWidget2);
        forgetCurrent->setObjectName(QStringLiteral("forgetCurrent"));

        whisperPeersLayout2->addWidget(forgetCurrent);

        forgetAll = new QPushButton(whisperPeersWidget2);
        forgetAll->setObjectName(QStringLiteral("forgetAll"));

        whisperPeersLayout2->addWidget(forgetAll);


        whisperPeersLayout->addWidget(whisperPeersWidget2);


        retranslateUi(whisperPeersWidget);

        QMetaObject::connectSlotsByName(whisperPeersWidget);
    } // setupUi

    void retranslateUi(QWidget *whisperPeersWidget)
    {
        whispers->setStyleSheet(QApplication::translate("WhisperPeers", "alternate-background-color: aquamarine;", 0));
        clear->setText(QApplication::translate("WhisperPeers", "Clear Screen", 0));
        stop->setText(QApplication::translate("WhisperPeers", "Freeze", 0));
        forgetCurrent->setText(QApplication::translate("WhisperPeers", "Forget Topic", 0));
        forgetAll->setText(QApplication::translate("WhisperPeers", "Forget All", 0));
        Q_UNUSED(whisperPeersWidget);
    } // retranslateUi

};

namespace Ui {
    class WhisperPeers: public Ui_WhisperPeers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHISPERPEERS_H
