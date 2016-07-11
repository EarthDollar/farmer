/********************************************************************************
** Form generated from reading UI file 'BrainWallet.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRAINWALLET_H
#define UI_BRAINWALLET_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrainWallet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QTextEdit *seed;
    QLabel *label_2;
    QTextEdit *hint;
    QHBoxLayout *horizontalLayout;
    QPushButton *generate;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *create;

    void setupUi(QDialog *BrainWallet)
    {
        if (BrainWallet->objectName().isEmpty())
            BrainWallet->setObjectName(QStringLiteral("BrainWallet"));
        BrainWallet->resize(511, 508);
        verticalLayout = new QVBoxLayout(BrainWallet);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BrainWallet);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        name = new QLineEdit(BrainWallet);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout->addWidget(name);

        seed = new QTextEdit(BrainWallet);
        seed->setObjectName(QStringLiteral("seed"));

        verticalLayout->addWidget(seed);

        label_2 = new QLabel(BrainWallet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        hint = new QTextEdit(BrainWallet);
        hint->setObjectName(QStringLiteral("hint"));

        verticalLayout->addWidget(hint);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        generate = new QPushButton(BrainWallet);
        generate->setObjectName(QStringLiteral("generate"));

        horizontalLayout->addWidget(generate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(BrainWallet);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);

        create = new QPushButton(BrainWallet);
        create->setObjectName(QStringLiteral("create"));
        create->setDefault(true);

        horizontalLayout->addWidget(create);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BrainWallet);
        QObject::connect(create, SIGNAL(clicked()), BrainWallet, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), BrainWallet, SLOT(reject()));

        QMetaObject::connectSlotsByName(BrainWallet);
    } // setupUi

    void retranslateUi(QDialog *BrainWallet)
    {
        BrainWallet->setWindowTitle(QApplication::translate("BrainWallet", "Dialog", 0));
        label->setText(QApplication::translate("BrainWallet", "<html><head/><body><p><span style=\" font-weight:600;\">WARNING: Brain wallets, or human-entropic seeds, are generally a Bad Plan. Unless used properly they're a terrible idea for protecteding anything of value. Read up on them and know the risks before using this functionality!</span></p><p>That said, if you're intent on using one, make the phrase as long and random as you can. If you're sensible, you'll use the Generate button and memorise the list of words it gives you. This is the only way to guarantee a strong brainwallet. Write the phrase down on paper and bury it under an oak tree or something - if you forget it, you're screwed.</p></body></html>", 0));
        name->setPlaceholderText(QApplication::translate("BrainWallet", "Please name of this account here e.g. My Brain Wallet", 0));
        seed->setPlaceholderText(QApplication::translate("BrainWallet", "Write your seed phrase here. Make it long and random. Don't ever forget it. If you want it to have any chance at being secure, hit the Generate button and memorize what ends up here.", 0));
        label_2->setText(QApplication::translate("BrainWallet", "<html><head/><body><p>You can leave a hint here if you want; don't rely on it or there's little point in it being a <span style=\" font-style:italic;\">brain</span> wallet.</p></body></html>", 0));
        hint->setPlaceholderText(QApplication::translate("BrainWallet", "An optional hint for the text above.", 0));
        generate->setText(QApplication::translate("BrainWallet", "&Generate", 0));
        cancel->setText(QApplication::translate("BrainWallet", "Cancel", 0));
        create->setText(QApplication::translate("BrainWallet", "&Create", 0));
    } // retranslateUi

};

namespace Ui {
    class BrainWallet: public Ui_BrainWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRAINWALLET_H
