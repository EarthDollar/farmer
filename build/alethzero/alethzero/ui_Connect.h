/********************************************************************************
** Form generated from reading UI file 'Connect.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Connect
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *formLabel;
    QComboBox *host;
    QCheckBox *required;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Connect)
    {
        if (Connect->objectName().isEmpty())
            Connect->setObjectName(QStringLiteral("Connect"));
        Connect->setWindowModality(Qt::WindowModal);
        Connect->resize(824, 142);
        Connect->setModal(true);
        verticalLayout = new QVBoxLayout(Connect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLabel = new QLabel(Connect);
        formLabel->setObjectName(QStringLiteral("formLabel"));
        formLabel->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::SpanningRole, formLabel);

        host = new QComboBox(Connect);
        host->setObjectName(QStringLiteral("host"));
        host->setMinimumSize(QSize(311, 0));
        host->setEditable(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, host);

        required = new QCheckBox(Connect);
        required->setObjectName(QStringLiteral("required"));
        required->setChecked(true);
        required->setTristate(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, required);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Connect);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Connect);
        QObject::connect(buttonBox, SIGNAL(accepted()), Connect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Connect, SLOT(reject()));

        QMetaObject::connectSlotsByName(Connect);
    } // setupUi

    void retranslateUi(QDialog *Connect)
    {
        Connect->setWindowTitle(QApplication::translate("Connect", "Connect to Peer", 0));
        formLabel->setText(QApplication::translate("Connect", "Enter a peer to which a connection may be made:", 0));
        required->setText(QApplication::translate("Connect", "Required (always connect to this peer)", 0));
    } // retranslateUi

};

namespace Ui {
    class Connect: public Ui_Connect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
