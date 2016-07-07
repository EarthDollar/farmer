/********************************************************************************
** Form generated from reading UI file 'InjectTransactions.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INJECTTRANSACTIONS_H
#define UI_INJECTTRANSACTIONS_H

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

class Ui_InjectTransactions
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *transactions;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *inject;

    void setupUi(QDialog *InjectTransactions)
    {
        if (InjectTransactions->objectName().isEmpty())
            InjectTransactions->setObjectName(QStringLiteral("InjectTransactions"));
        InjectTransactions->resize(511, 508);
        verticalLayout = new QVBoxLayout(InjectTransactions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        transactions = new QTextEdit(InjectTransactions);
        transactions->setObjectName(QStringLiteral("transactions"));

        verticalLayout->addWidget(transactions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(InjectTransactions);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        inject = new QPushButton(InjectTransactions);
        inject->setObjectName(QStringLiteral("inject"));
        inject->setDefault(true);

        horizontalLayout->addWidget(inject);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InjectTransactions);
        QObject::connect(inject, SIGNAL(clicked()), InjectTransactions, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), InjectTransactions, SLOT(reject()));

        QMetaObject::connectSlotsByName(InjectTransactions);
    } // setupUi

    void retranslateUi(QDialog *InjectTransactions)
    {
        InjectTransactions->setWindowTitle(QApplication::translate("InjectTransactions", "Dialog", 0));
        transactions->setPlaceholderText(QApplication::translate("InjectTransactions", "Write the transactions you wish to inject here, in hex, one per line.", 0));
        cancel->setText(QApplication::translate("InjectTransactions", "Cancel", 0));
        inject->setText(QApplication::translate("InjectTransactions", "&Import", 0));
    } // retranslateUi

};

namespace Ui {
    class InjectTransactions: public Ui_InjectTransactions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INJECTTRANSACTIONS_H
