/********************************************************************************
** Form generated from reading UI file 'NewAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACCOUNT_H
#define UI_NEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewAccount
{
public:
    QGridLayout *gridLayout;
    QRadioButton *useOwn;
    QLabel *nameLabel;
    QLabel *typeLabel;
    QComboBox *keyType;
    QLabel *additionalLabel;
    QLabel *passwordLabel;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *status;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *create;
    QLabel *passwordAgainLabel;
    QLineEdit *password;
    QLineEdit *confirm;
    QTextEdit *hint;
    QLineEdit *keyName;
    QSpacerItem *verticalSpacer;
    QRadioButton *useMaster;
    QLabel *label;
    QLineEdit *keysPath;
    QButtonGroup *passType;

    void setupUi(QDialog *NewAccount)
    {
        if (NewAccount->objectName().isEmpty())
            NewAccount->setObjectName(QStringLiteral("NewAccount"));
        NewAccount->resize(511, 444);
        NewAccount->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(NewAccount);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        useOwn = new QRadioButton(NewAccount);
        passType = new QButtonGroup(NewAccount);
        passType->setObjectName(QStringLiteral("passType"));
        passType->addButton(useOwn);
        useOwn->setObjectName(QStringLiteral("useOwn"));

        gridLayout->addWidget(useOwn, 8, 0, 1, 2);

        nameLabel = new QLabel(NewAccount);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        typeLabel = new QLabel(NewAccount);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setMaximumSize(QSize(16777215, 50));
        typeLabel->setWordWrap(true);

        gridLayout->addWidget(typeLabel, 2, 0, 1, 1);

        keyType = new QComboBox(NewAccount);
        keyType->setObjectName(QStringLiteral("keyType"));
        keyType->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(keyType, 2, 1, 1, 1);

        additionalLabel = new QLabel(NewAccount);
        additionalLabel->setObjectName(QStringLiteral("additionalLabel"));
        additionalLabel->setMaximumSize(QSize(16777215, 100));
        additionalLabel->setWordWrap(true);

        gridLayout->addWidget(additionalLabel, 0, 0, 1, 2);

        passwordLabel = new QLabel(NewAccount);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setEnabled(true);
        passwordLabel->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(passwordLabel, 9, 0, 1, 1);

        hintLabel = new QLabel(NewAccount);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setEnabled(true);

        gridLayout->addWidget(hintLabel, 14, 0, 1, 1, Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        status = new QLabel(NewAccount);
        status->setObjectName(QStringLiteral("status"));

        horizontalLayout->addWidget(status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(NewAccount);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setMaximumSize(QSize(83, 16777215));
        cancel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(cancel);

        create = new QPushButton(NewAccount);
        create->setObjectName(QStringLiteral("create"));
        create->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(create->sizePolicy().hasHeightForWidth());
        create->setSizePolicy(sizePolicy);
        create->setMaximumSize(QSize(83, 16777215));
        create->setLayoutDirection(Qt::LeftToRight);
        create->setDefault(true);

        horizontalLayout->addWidget(create);


        gridLayout->addLayout(horizontalLayout, 16, 0, 1, 2);

        passwordAgainLabel = new QLabel(NewAccount);
        passwordAgainLabel->setObjectName(QStringLiteral("passwordAgainLabel"));
        passwordAgainLabel->setEnabled(true);
        passwordAgainLabel->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(passwordAgainLabel, 11, 0, 1, 1);

        password = new QLineEdit(NewAccount);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(false);

        gridLayout->addWidget(password, 9, 1, 1, 1);

        confirm = new QLineEdit(NewAccount);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setEnabled(false);

        gridLayout->addWidget(confirm, 11, 1, 1, 1);

        hint = new QTextEdit(NewAccount);
        hint->setObjectName(QStringLiteral("hint"));
        hint->setEnabled(false);
        hint->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(hint, 14, 1, 1, 1);

        keyName = new QLineEdit(NewAccount);
        keyName->setObjectName(QStringLiteral("keyName"));

        gridLayout->addWidget(keyName, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 15, 1, 1, 1);

        useMaster = new QRadioButton(NewAccount);
        passType->addButton(useMaster);
        useMaster->setObjectName(QStringLiteral("useMaster"));
        useMaster->setChecked(true);

        gridLayout->addWidget(useMaster, 7, 0, 1, 2);

        label = new QLabel(NewAccount);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 6, 0, 1, 1);

        keysPath = new QLineEdit(NewAccount);
        keysPath->setObjectName(QStringLiteral("keysPath"));
        keysPath->setReadOnly(true);

        gridLayout->addWidget(keysPath, 6, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(keyName);
        typeLabel->setBuddy(keyType);
        passwordLabel->setBuddy(password);
        hintLabel->setBuddy(hint);
        passwordAgainLabel->setBuddy(confirm);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(keyName, keyType);
        QWidget::setTabOrder(keyType, keysPath);
        QWidget::setTabOrder(keysPath, useMaster);
        QWidget::setTabOrder(useMaster, useOwn);
        QWidget::setTabOrder(useOwn, password);
        QWidget::setTabOrder(password, confirm);
        QWidget::setTabOrder(confirm, hint);
        QWidget::setTabOrder(hint, cancel);
        QWidget::setTabOrder(cancel, create);

        retranslateUi(NewAccount);
        QObject::connect(cancel, SIGNAL(clicked()), NewAccount, SLOT(reject()));
        QObject::connect(create, SIGNAL(clicked()), NewAccount, SLOT(accept()));

        QMetaObject::connectSlotsByName(NewAccount);
    } // setupUi

    void retranslateUi(QDialog *NewAccount)
    {
        NewAccount->setWindowTitle(QApplication::translate("NewAccount", "New Account", 0));
        useOwn->setText(QApplication::translate("NewAccount", "Encrypt the key with its &own passphrase (more security)", 0));
        nameLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p>&amp;Name:</p></body></html>", 0));
        typeLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p>&amp;Address Type:</p></body></html>", 0));
        keyType->clear();
        keyType->insertItems(0, QStringList()
         << QApplication::translate("NewAccount", "Normal address", 0)
         << QApplication::translate("NewAccount", "ICAP-35 address (IBAN incompatible)", 0)
         << QApplication::translate("NewAccount", "Two pairs first (a few seconds)", 0)
         << QApplication::translate("NewAccount", "Two pairs first and second (a few minutes)", 0)
         << QApplication::translate("NewAccount", "Three pairs first (a few minutes)", 0)
         << QApplication::translate("NewAccount", "Four pairs first (several hours)", 0)
        );
        additionalLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p><span style=\" font-weight:600;\">Creating a new account will give you a new &quot;identity&quot;.</span> Accounts can hold ether but can also be used to identify you to services. Accounts are usable by anyone who has the key (a file on your computer) and the passphrase for it. You should never share your passphrase. You should always back-up your keys.</p></body></html>", 0));
        passwordLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p>&amp;Passphrase:</p></body></html>", 0));
        hintLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p>Passphrase &amp;Hint:</p></body></html>", 0));
        status->setText(QString());
        cancel->setText(QApplication::translate("NewAccount", "Cancel", 0));
        create->setText(QApplication::translate("NewAccount", "&Create", 0));
        passwordAgainLabel->setText(QApplication::translate("NewAccount", "<html><head/><body><p>&amp;Confirm Passphrase:</p></body></html>", 0));
        password->setPlaceholderText(QApplication::translate("NewAccount", "Enter a passphrase here", 0));
        confirm->setPlaceholderText(QApplication::translate("NewAccount", "Enter the same passphrase here", 0));
        hint->setPlaceholderText(QApplication::translate("NewAccount", "Provide a hint to help you remember the passphrase here", 0));
        keyName->setPlaceholderText(QApplication::translate("NewAccount", "Enter a name for the account here", 0));
        useMaster->setText(QApplication::translate("NewAccount", "Encrypt the key with the &Master passphrase (less security)", 0));
        label->setText(QApplication::translate("NewAccount", "Your key is in the directory", 0));
    } // retranslateUi

};

namespace Ui {
    class NewAccount: public Ui_NewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACCOUNT_H
