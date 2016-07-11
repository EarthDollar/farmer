/********************************************************************************
** Form generated from reading UI file 'GetPassword.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPASSWORD_H
#define UI_GETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GetPassword
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *entry;
    QLineEdit *confirm;
    QHBoxLayout *horizontalLayout;
    QLabel *error;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *ok;

    void setupUi(QDialog *GetPassword)
    {
        if (GetPassword->objectName().isEmpty())
            GetPassword->setObjectName(QStringLiteral("GetPassword"));
        verticalLayout = new QVBoxLayout(GetPassword);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(GetPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        entry = new QLineEdit(GetPassword);
        entry->setObjectName(QStringLiteral("entry"));
        entry->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(entry);

        confirm = new QLineEdit(GetPassword);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(confirm);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        error = new QLabel(GetPassword);
        error->setObjectName(QStringLiteral("error"));
        error->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0)"));
        error->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(error);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(GetPassword);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        ok = new QPushButton(GetPassword);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setDefault(true);

        horizontalLayout->addWidget(ok);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(entry, confirm);
        QWidget::setTabOrder(confirm, cancel);
        QWidget::setTabOrder(cancel, ok);

        retranslateUi(GetPassword);
        QObject::connect(cancel, SIGNAL(clicked()), GetPassword, SLOT(reject()));
        QObject::connect(ok, SIGNAL(clicked()), GetPassword, SLOT(accept()));

        QMetaObject::connectSlotsByName(GetPassword);
    } // setupUi

    void retranslateUi(QDialog *GetPassword)
    {
        GetPassword->setWindowTitle(QApplication::translate("GetPassword", "Enter Password", 0));
        label->setText(QApplication::translate("GetPassword", "Some label here.", 0));
        entry->setPlaceholderText(QApplication::translate("GetPassword", "Enter the passphrase here", 0));
        confirm->setPlaceholderText(QApplication::translate("GetPassword", "Confirm the passphrase by entering it again", 0));
        error->setText(QString());
        cancel->setText(QApplication::translate("GetPassword", "Cancel", 0));
        cancel->setShortcut(QApplication::translate("GetPassword", "Esc", 0));
        ok->setText(QApplication::translate("GetPassword", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class GetPassword: public Ui_GetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPASSWORD_H
