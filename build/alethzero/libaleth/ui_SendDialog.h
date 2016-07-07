/********************************************************************************
** Form generated from reading UI file 'SendDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDDIALOG_H
#define UI_SENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *value;
    QLineEdit *to;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *problem;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *send;

    void setupUi(QDialog *SendDialog)
    {
        if (SendDialog->objectName().isEmpty())
            SendDialog->setObjectName(QStringLiteral("SendDialog"));
        SendDialog->resize(223, 150);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SendDialog->sizePolicy().hasHeightForWidth());
        SendDialog->setSizePolicy(sizePolicy);
        SendDialog->setMinimumSize(QSize(0, 150));
        SendDialog->setMaximumSize(QSize(223, 150));
        verticalLayout = new QVBoxLayout(SendDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(SendDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 2, 1);

        label = new QLabel(SendDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 2, 1);

        value = new QLineEdit(SendDialog);
        value->setObjectName(QStringLiteral("value"));

        gridLayout->addWidget(value, 0, 1, 2, 1);

        to = new QLineEdit(SendDialog);
        to->setObjectName(QStringLiteral("to"));

        gridLayout->addWidget(to, 2, 1, 2, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(0, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        problem = new QLabel(SendDialog);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setEnabled(true);
        problem->setStyleSheet(QStringLiteral("color: darkred"));

        horizontalLayout->addWidget(problem);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(SendDialog);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setMinimumSize(QSize(80, 0));
        cancel->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(cancel);

        send = new QPushButton(SendDialog);
        send->setObjectName(QStringLiteral("send"));
        send->setEnabled(true);
        send->setMinimumSize(QSize(80, 0));
        send->setMaximumSize(QSize(80, 16777215));
        send->setDefault(false);

        horizontalLayout->addWidget(send);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(value);
        label->setBuddy(to);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendDialog);

        QMetaObject::connectSlotsByName(SendDialog);
    } // setupUi

    void retranslateUi(QDialog *SendDialog)
    {
        SendDialog->setWindowTitle(QApplication::translate("SendDialog", "Send Transaction", 0));
        label_2->setText(QApplication::translate("SendDialog", "&Send", 0));
        label->setText(QApplication::translate("SendDialog", "&To", 0));
        value->setInputMask(QString());
        value->setText(QString());
        value->setPlaceholderText(QApplication::translate("SendDialog", "e.g. 1 ether", 0));
        to->setText(QString());
        to->setPlaceholderText(QApplication::translate("SendDialog", "Name, ICAP or hex address", 0));
        problem->setText(QString());
        cancel->setText(QApplication::translate("SendDialog", "Cancel", 0));
        cancel->setShortcut(QApplication::translate("SendDialog", "Esc", 0));
        send->setText(QApplication::translate("SendDialog", "&Send", 0));
    } // retranslateUi

};

namespace Ui {
    class SendDialog: public Ui_SendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDDIALOG_H
