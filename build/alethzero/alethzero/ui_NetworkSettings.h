/********************************************************************************
** Form generated from reading UI file 'NetworkSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QSpinBox *port;
    QLineEdit *listenIP;
    QCheckBox *hermitMode;
    QCheckBox *useUpnp;
    QLineEdit *clientName;
    QLineEdit *forcePublicIP;
    QCheckBox *dropPeers;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QSpinBox *idealPeers;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NetworkSettings)
    {
        if (NetworkSettings->objectName().isEmpty())
            NetworkSettings->setObjectName(QStringLiteral("NetworkSettings"));
        NetworkSettings->resize(345, 387);
        verticalLayout = new QVBoxLayout(NetworkSettings);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        port = new QSpinBox(NetworkSettings);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimum(1024);
        port->setMaximum(32767);
        port->setValue(30303);

        gridLayout_4->addWidget(port, 3, 3, 1, 1);

        listenIP = new QLineEdit(NetworkSettings);
        listenIP->setObjectName(QStringLiteral("listenIP"));

        gridLayout_4->addWidget(listenIP, 3, 2, 1, 1);

        hermitMode = new QCheckBox(NetworkSettings);
        hermitMode->setObjectName(QStringLiteral("hermitMode"));

        gridLayout_4->addWidget(hermitMode, 6, 0, 1, 4);

        useUpnp = new QCheckBox(NetworkSettings);
        useUpnp->setObjectName(QStringLiteral("useUpnp"));

        gridLayout_4->addWidget(useUpnp, 7, 0, 1, 4);

        clientName = new QLineEdit(NetworkSettings);
        clientName->setObjectName(QStringLiteral("clientName"));

        gridLayout_4->addWidget(clientName, 0, 2, 1, 2);

        forcePublicIP = new QLineEdit(NetworkSettings);
        forcePublicIP->setObjectName(QStringLiteral("forcePublicIP"));

        gridLayout_4->addWidget(forcePublicIP, 4, 2, 1, 2);

        dropPeers = new QCheckBox(NetworkSettings);
        dropPeers->setObjectName(QStringLiteral("dropPeers"));

        gridLayout_4->addWidget(dropPeers, 8, 0, 1, 4);

        label_8 = new QLabel(NetworkSettings);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 5, 0, 1, 2);

        label_7 = new QLabel(NetworkSettings);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 4, 0, 1, 2);

        label_6 = new QLabel(NetworkSettings);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 3, 0, 1, 2);

        label_9 = new QLabel(NetworkSettings);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 2);

        idealPeers = new QSpinBox(NetworkSettings);
        idealPeers->setObjectName(QStringLiteral("idealPeers"));
        idealPeers->setMinimum(1);
        idealPeers->setValue(5);

        gridLayout_4->addWidget(idealPeers, 5, 2, 1, 2);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(idealPeers);
        label_6->setBuddy(port);
        label_9->setBuddy(clientName);
#endif // QT_NO_SHORTCUT

        retranslateUi(NetworkSettings);

        QMetaObject::connectSlotsByName(NetworkSettings);
    } // setupUi

    void retranslateUi(QWidget *NetworkSettings)
    {
        listenIP->setInputMask(QString());
        listenIP->setText(QString());
        listenIP->setPlaceholderText(QApplication::translate("NetworkSettings", "Automatic", 0));
        hermitMode->setText(QApplication::translate("NetworkSettings", "Hermit Mode", 0));
        useUpnp->setText(QApplication::translate("NetworkSettings", "Use UPnP", 0));
        clientName->setPlaceholderText(QApplication::translate("NetworkSettings", "Anonymous", 0));
        forcePublicIP->setPlaceholderText(QApplication::translate("NetworkSettings", "Automatic", 0));
        dropPeers->setText(QApplication::translate("NetworkSettings", "Forget Peers from Last Session", 0));
        label_8->setText(QApplication::translate("NetworkSettings", "Ideal &Peers", 0));
        label_7->setText(QApplication::translate("NetworkSettings", "Public IP", 0));
        label_6->setText(QApplication::translate("NetworkSettings", "&Listen on", 0));
        label_9->setText(QApplication::translate("NetworkSettings", "&Client Name", 0));
        Q_UNUSED(NetworkSettings);
    } // retranslateUi

};

namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKSETTINGS_H
