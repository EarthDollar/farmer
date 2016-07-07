/********************************************************************************
** Form generated from reading UI file 'ImportKey.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTKEY_H
#define UI_IMPORTKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportKey
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *passwordHash;
    QCheckBox *showPassword;
    QLabel *label_2;
    QToolButton *openKey;
    QRadioButton *newPassword;
    QLineEdit *address;
    QLabel *label_4;
    QRadioButton *noPassword;
    QLineEdit *hint;
    QRadioButton *oldPassword;
    QLineEdit *password;
    QLineEdit *name;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *masterLabel;
    QLineEdit *key;
    QLabel *label;
    QLabel *oldLabel;
    QLineEdit *addressOut;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *action;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *import_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ImportKey)
    {
        if (ImportKey->objectName().isEmpty())
            ImportKey->setObjectName(QStringLiteral("ImportKey"));
        ImportKey->resize(530, 389);
        verticalLayout = new QVBoxLayout(ImportKey);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        passwordHash = new QLineEdit(ImportKey);
        passwordHash->setObjectName(QStringLiteral("passwordHash"));
        passwordHash->setReadOnly(true);

        gridLayout->addWidget(passwordHash, 10, 2, 1, 3);

        showPassword = new QCheckBox(ImportKey);
        showPassword->setObjectName(QStringLiteral("showPassword"));
        showPassword->setEnabled(false);

        gridLayout->addWidget(showPassword, 8, 3, 1, 2);

        label_2 = new QLabel(ImportKey);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 2);

        openKey = new QToolButton(ImportKey);
        openKey->setObjectName(QStringLiteral("openKey"));

        gridLayout->addWidget(openKey, 3, 4, 1, 1);

        newPassword = new QRadioButton(ImportKey);
        buttonGroup = new QButtonGroup(ImportKey);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(newPassword);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setEnabled(false);

        gridLayout->addWidget(newPassword, 8, 0, 1, 2);

        address = new QLineEdit(ImportKey);
        address->setObjectName(QStringLiteral("address"));

        gridLayout->addWidget(address, 4, 2, 1, 3);

        label_4 = new QLabel(ImportKey);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        noPassword = new QRadioButton(ImportKey);
        buttonGroup->addButton(noPassword);
        noPassword->setObjectName(QStringLiteral("noPassword"));
        noPassword->setEnabled(false);
        noPassword->setChecked(true);

        gridLayout->addWidget(noPassword, 6, 0, 1, 2);

        hint = new QLineEdit(ImportKey);
        hint->setObjectName(QStringLiteral("hint"));

        gridLayout->addWidget(hint, 11, 2, 1, 3);

        oldPassword = new QRadioButton(ImportKey);
        buttonGroup->addButton(oldPassword);
        oldPassword->setObjectName(QStringLiteral("oldPassword"));
        oldPassword->setEnabled(false);

        gridLayout->addWidget(oldPassword, 7, 0, 1, 2);

        password = new QLineEdit(ImportKey);
        password->setObjectName(QStringLiteral("password"));

        gridLayout->addWidget(password, 8, 2, 1, 1);

        name = new QLineEdit(ImportKey);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 2, 2, 1, 3);

        label_3 = new QLabel(ImportKey);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 10, 0, 1, 2);

        label_5 = new QLabel(ImportKey);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 11, 0, 1, 2);

        masterLabel = new QLabel(ImportKey);
        masterLabel->setObjectName(QStringLiteral("masterLabel"));
        masterLabel->setEnabled(false);
        masterLabel->setWordWrap(false);

        gridLayout->addWidget(masterLabel, 6, 2, 1, 3);

        key = new QLineEdit(ImportKey);
        key->setObjectName(QStringLiteral("key"));
        key->setClearButtonEnabled(true);

        gridLayout->addWidget(key, 3, 2, 1, 2);

        label = new QLabel(ImportKey);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 2);

        oldLabel = new QLabel(ImportKey);
        oldLabel->setObjectName(QStringLiteral("oldLabel"));
        oldLabel->setEnabled(false);

        gridLayout->addWidget(oldLabel, 7, 2, 1, 3);

        addressOut = new QLineEdit(ImportKey);
        addressOut->setObjectName(QStringLiteral("addressOut"));
        addressOut->setReadOnly(true);

        gridLayout->addWidget(addressOut, 5, 2, 1, 3);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        action = new QLabel(ImportKey);
        action->setObjectName(QStringLiteral("action"));

        horizontalLayout->addWidget(action);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(ImportKey);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        import_2 = new QPushButton(ImportKey);
        import_2->setObjectName(QStringLiteral("import_2"));
        import_2->setEnabled(false);
        import_2->setDefault(true);

        horizontalLayout->addWidget(import_2);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(address);
        label_4->setBuddy(name);
        label_3->setBuddy(passwordHash);
        label_5->setBuddy(hint);
        label->setBuddy(key);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name, key);
        QWidget::setTabOrder(key, openKey);
        QWidget::setTabOrder(openKey, address);
        QWidget::setTabOrder(address, addressOut);
        QWidget::setTabOrder(addressOut, noPassword);
        QWidget::setTabOrder(noPassword, oldPassword);
        QWidget::setTabOrder(oldPassword, newPassword);
        QWidget::setTabOrder(newPassword, password);
        QWidget::setTabOrder(password, showPassword);
        QWidget::setTabOrder(showPassword, passwordHash);
        QWidget::setTabOrder(passwordHash, hint);
        QWidget::setTabOrder(hint, cancel);
        QWidget::setTabOrder(cancel, import_2);

        retranslateUi(ImportKey);
        QObject::connect(import_2, SIGNAL(clicked()), ImportKey, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), ImportKey, SLOT(reject()));
        QObject::connect(newPassword, SIGNAL(pressed()), password, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(ImportKey);
    } // setupUi

    void retranslateUi(QDialog *ImportKey)
    {
        ImportKey->setWindowTitle(QApplication::translate("ImportKey", "Dialog", 0));
        showPassword->setText(QApplication::translate("ImportKey", "Show", 0));
        label_2->setText(QApplication::translate("ImportKey", "&Address:", 0));
        openKey->setText(QApplication::translate("ImportKey", "...", 0));
        newPassword->setText(QApplication::translate("ImportKey", "New &Passphrase:", 0));
        address->setPlaceholderText(QApplication::translate("ImportKey", "Place the address of the key here", 0));
        label_4->setText(QApplication::translate("ImportKey", "&Name:", 0));
        noPassword->setText(QApplication::translate("ImportKey", "&Master Passphrase", 0));
        oldPassword->setText(QApplication::translate("ImportKey", "&Old Passphrase", 0));
        password->setPlaceholderText(QApplication::translate("ImportKey", "Enter the passphrase you wish to use for the key here", 0));
        name->setPlaceholderText(QApplication::translate("ImportKey", "Enter this key's name here", 0));
        label_3->setText(QApplication::translate("ImportKey", "Passphrase &Hash:", 0));
        label_5->setText(QApplication::translate("ImportKey", "Passphrase Hin&t:", 0));
        masterLabel->setText(QApplication::translate("ImportKey", "Use same passphrase for the key as for the master.", 0));
        key->setPlaceholderText(QApplication::translate("ImportKey", "Brain wallet (no key file)", 0));
        label->setText(QApplication::translate("ImportKey", "&Key:", 0));
        oldLabel->setText(QApplication::translate("ImportKey", "Use the same passphrase as in the key file.", 0));
        addressOut->setPlaceholderText(QApplication::translate("ImportKey", "Unknown Address", 0));
        action->setText(QString());
        cancel->setText(QApplication::translate("ImportKey", "Cancel", 0));
        cancel->setShortcut(QApplication::translate("ImportKey", "Esc", 0));
        import_2->setText(QApplication::translate("ImportKey", "&Import", 0));
    } // retranslateUi

};

namespace Ui {
    class ImportKey: public Ui_ImportKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTKEY_H
