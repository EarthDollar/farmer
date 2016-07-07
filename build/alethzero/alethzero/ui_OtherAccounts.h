/********************************************************************************
** Form generated from reading UI file 'OtherAccounts.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERACCOUNTS_H
#define UI_OTHERACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OtherAccounts
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *accounts;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *create;

    void setupUi(QDialog *OtherAccounts)
    {
        if (OtherAccounts->objectName().isEmpty())
            OtherAccounts->setObjectName(QStringLiteral("OtherAccounts"));
        OtherAccounts->resize(511, 508);
        verticalLayout = new QVBoxLayout(OtherAccounts);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        accounts = new QTextEdit(OtherAccounts);
        accounts->setObjectName(QStringLiteral("accounts"));

        verticalLayout->addWidget(accounts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(OtherAccounts);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        create = new QPushButton(OtherAccounts);
        create->setObjectName(QStringLiteral("create"));
        create->setDefault(true);

        horizontalLayout->addWidget(create);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OtherAccounts);
        QObject::connect(create, SIGNAL(clicked()), OtherAccounts, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), OtherAccounts, SLOT(reject()));

        QMetaObject::connectSlotsByName(OtherAccounts);
    } // setupUi

    void retranslateUi(QDialog *OtherAccounts)
    {
        OtherAccounts->setWindowTitle(QApplication::translate("OtherAccounts", "Dialog", 0));
        accounts->setPlaceholderText(QApplication::translate("OtherAccounts", "Write the accounts you wish to name here, one address/name pair per line, the name following the address split only be a single space character.", 0));
        cancel->setText(QApplication::translate("OtherAccounts", "Cancel", 0));
        create->setText(QApplication::translate("OtherAccounts", "&Import", 0));
    } // retranslateUi

};

namespace Ui {
    class OtherAccounts: public Ui_OtherAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERACCOUNTS_H
