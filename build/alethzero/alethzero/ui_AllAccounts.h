/********************************************************************************
** Form generated from reading UI file 'AllAccounts.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLACCOUNTS_H
#define UI_ALLACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllAccounts
{
public:
    QGridLayout *gridLayout_4;
    QListWidget *accounts;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *accountsFilter;
    QCheckBox *showBasic;
    QCheckBox *showContracts;
    QCheckBox *onlyKnown;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancel;
    QPushButton *OK;
    QFrame *line;
    QWidget *detailsView;
    QGridLayout *gridLayout_2;
    QLabel *addressLabel;
    QPushButton *deleteButton;
    QPushButton *addressCopy;
    QLabel *codeValue;
    QLabel *defaultLabel;
    QSpacerItem *verticalSpacer;
    QLabel *codeLabel;
    QLabel *nameLabel;
    QLabel *balanceLabel;
    QLabel *ICAPValue;
    QPushButton *codeCopy;
    QSpacerItem *horizontalSpacer;
    QLabel *addressValue;
    QLabel *ICAPLabel;
    QLabel *balanceValue;
    QCheckBox *defaultValue;
    QPushButton *ICAPCopy;
    QLineEdit *nameValue;

    void setupUi(QDialog *AllAccounts)
    {
        if (AllAccounts->objectName().isEmpty())
            AllAccounts->setObjectName(QStringLiteral("AllAccounts"));
        AllAccounts->resize(840, 444);
        AllAccounts->setSizeGripEnabled(false);
        gridLayout_4 = new QGridLayout(AllAccounts);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        accounts = new QListWidget(AllAccounts);
        accounts->setObjectName(QStringLiteral("accounts"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(accounts->sizePolicy().hasHeightForWidth());
        accounts->setSizePolicy(sizePolicy);
        accounts->setMinimumSize(QSize(250, 0));
        accounts->setMaximumSize(QSize(250, 16777215));
        accounts->setFocusPolicy(Qt::NoFocus);
        accounts->setFrameShape(QFrame::NoFrame);

        gridLayout_4->addWidget(accounts, 4, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, -1, -1, 0);
        accountsFilter = new QLineEdit(AllAccounts);
        accountsFilter->setObjectName(QStringLiteral("accountsFilter"));
        accountsFilter->setMinimumSize(QSize(250, 0));
        accountsFilter->setMaximumSize(QSize(250, 16777215));
        accountsFilter->setFrame(true);

        horizontalLayout_12->addWidget(accountsFilter);

        showBasic = new QCheckBox(AllAccounts);
        showBasic->setObjectName(QStringLiteral("showBasic"));
        showBasic->setMinimumSize(QSize(60, 20));
        showBasic->setChecked(true);

        horizontalLayout_12->addWidget(showBasic);

        showContracts = new QCheckBox(AllAccounts);
        showContracts->setObjectName(QStringLiteral("showContracts"));
        showContracts->setMinimumSize(QSize(86, 20));

        horizontalLayout_12->addWidget(showContracts);

        onlyKnown = new QCheckBox(AllAccounts);
        onlyKnown->setObjectName(QStringLiteral("onlyKnown"));
        onlyKnown->setMinimumSize(QSize(100, 20));
        onlyKnown->setChecked(true);

        horizontalLayout_12->addWidget(onlyKnown);


        gridLayout_4->addLayout(horizontalLayout_12, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancel = new QPushButton(AllAccounts);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setMaximumSize(QSize(83, 16777215));

        horizontalLayout->addWidget(cancel);

        OK = new QPushButton(AllAccounts);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setMaximumSize(QSize(83, 16777215));
        OK->setDefault(true);

        horizontalLayout->addWidget(OK);


        gridLayout_4->addLayout(horizontalLayout, 5, 0, 1, 3);

        line = new QFrame(AllAccounts);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 3);

        detailsView = new QWidget(AllAccounts);
        detailsView->setObjectName(QStringLiteral("detailsView"));
        gridLayout_2 = new QGridLayout(detailsView);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addressLabel = new QLabel(detailsView);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        gridLayout_2->addWidget(addressLabel, 1, 0, 1, 1);

        deleteButton = new QPushButton(detailsView);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(82, 0));

        gridLayout_2->addWidget(deleteButton, 7, 0, 1, 1);

        addressCopy = new QPushButton(detailsView);
        addressCopy->setObjectName(QStringLiteral("addressCopy"));
        addressCopy->setMaximumSize(QSize(16777215, 16777215));
        addressCopy->setIconSize(QSize(16, 16));
        addressCopy->setFlat(false);

        gridLayout_2->addWidget(addressCopy, 1, 2, 1, 1);

        codeValue = new QLabel(detailsView);
        codeValue->setObjectName(QStringLiteral("codeValue"));
        codeValue->setWordWrap(true);

        gridLayout_2->addWidget(codeValue, 5, 1, 1, 1);

        defaultLabel = new QLabel(detailsView);
        defaultLabel->setObjectName(QStringLiteral("defaultLabel"));

        gridLayout_2->addWidget(defaultLabel, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);

        codeLabel = new QLabel(detailsView);
        codeLabel->setObjectName(QStringLiteral("codeLabel"));

        gridLayout_2->addWidget(codeLabel, 5, 0, 1, 1);

        nameLabel = new QLabel(detailsView);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(nameLabel, 0, 0, 1, 1);

        balanceLabel = new QLabel(detailsView);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));

        gridLayout_2->addWidget(balanceLabel, 4, 0, 1, 1);

        ICAPValue = new QLabel(detailsView);
        ICAPValue->setObjectName(QStringLiteral("ICAPValue"));

        gridLayout_2->addWidget(ICAPValue, 3, 1, 1, 1);

        codeCopy = new QPushButton(detailsView);
        codeCopy->setObjectName(QStringLiteral("codeCopy"));
        codeCopy->setMaximumSize(QSize(16777215, 16777215));
        codeCopy->setFlat(false);

        gridLayout_2->addWidget(codeCopy, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 7, 1, 1, 1);

        addressValue = new QLabel(detailsView);
        addressValue->setObjectName(QStringLiteral("addressValue"));

        gridLayout_2->addWidget(addressValue, 1, 1, 1, 1);

        ICAPLabel = new QLabel(detailsView);
        ICAPLabel->setObjectName(QStringLiteral("ICAPLabel"));

        gridLayout_2->addWidget(ICAPLabel, 3, 0, 1, 1);

        balanceValue = new QLabel(detailsView);
        balanceValue->setObjectName(QStringLiteral("balanceValue"));

        gridLayout_2->addWidget(balanceValue, 4, 1, 1, 1);

        defaultValue = new QCheckBox(detailsView);
        defaultValue->setObjectName(QStringLiteral("defaultValue"));

        gridLayout_2->addWidget(defaultValue, 6, 1, 1, 1);

        ICAPCopy = new QPushButton(detailsView);
        ICAPCopy->setObjectName(QStringLiteral("ICAPCopy"));
        ICAPCopy->setMaximumSize(QSize(16777215, 16777215));
        ICAPCopy->setFlat(false);

        gridLayout_2->addWidget(ICAPCopy, 3, 2, 1, 1);

        nameValue = new QLineEdit(detailsView);
        nameValue->setObjectName(QStringLiteral("nameValue"));
        nameValue->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(nameValue, 0, 1, 1, 1);


        gridLayout_4->addWidget(detailsView, 4, 1, 1, 1);


        retranslateUi(AllAccounts);
        QObject::connect(cancel, SIGNAL(clicked()), AllAccounts, SLOT(reject()));
        QObject::connect(OK, SIGNAL(clicked()), AllAccounts, SLOT(accept()));

        QMetaObject::connectSlotsByName(AllAccounts);
    } // setupUi

    void retranslateUi(QDialog *AllAccounts)
    {
        AllAccounts->setWindowTitle(QApplication::translate("AllAccounts", "Form", 0));
        accountsFilter->setPlaceholderText(QApplication::translate("AllAccounts", "Filter...", 0));
        showBasic->setText(QApplication::translate("AllAccounts", "Basic", 0));
        showContracts->setText(QApplication::translate("AllAccounts", "Contracts", 0));
        onlyKnown->setText(QApplication::translate("AllAccounts", "Only Known", 0));
        cancel->setText(QApplication::translate("AllAccounts", "Cancel", 0));
        OK->setText(QApplication::translate("AllAccounts", "OK", 0));
        addressLabel->setText(QApplication::translate("AllAccounts", "Address", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("AllAccounts", "Delete Account", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("AllAccounts", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        addressCopy->setToolTip(QApplication::translate("AllAccounts", "Copy Address To Clipboard", 0));
#endif // QT_NO_TOOLTIP
        addressCopy->setText(QApplication::translate("AllAccounts", "Copy", 0));
#ifndef QT_NO_TOOLTIP
        codeValue->setToolTip(QApplication::translate("AllAccounts", "Contract's Code", 0));
#endif // QT_NO_TOOLTIP
        codeValue->setText(QApplication::translate("AllAccounts", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        defaultLabel->setToolTip(QApplication::translate("AllAccounts", "Set Account as Default", 0));
#endif // QT_NO_TOOLTIP
        defaultLabel->setText(QApplication::translate("AllAccounts", "Default", 0));
#ifndef QT_NO_TOOLTIP
        codeLabel->setToolTip(QApplication::translate("AllAccounts", "Contract's Code", 0));
#endif // QT_NO_TOOLTIP
        codeLabel->setText(QApplication::translate("AllAccounts", "Code", 0));
        nameLabel->setText(QApplication::translate("AllAccounts", "Name", 0));
        balanceLabel->setText(QApplication::translate("AllAccounts", "Balance", 0));
        ICAPValue->setText(QApplication::translate("AllAccounts", "TextLabel", 0));
        codeCopy->setText(QApplication::translate("AllAccounts", "Copy", 0));
        addressValue->setText(QApplication::translate("AllAccounts", "TextLabel", 0));
        ICAPLabel->setText(QApplication::translate("AllAccounts", "ICAP", 0));
        balanceValue->setText(QApplication::translate("AllAccounts", "TextLabel", 0));
#ifndef QT_NO_TOOLTIP
        defaultValue->setToolTip(QApplication::translate("AllAccounts", "Set Account as Default", 0));
#endif // QT_NO_TOOLTIP
        defaultValue->setText(QString());
#ifndef QT_NO_TOOLTIP
        ICAPCopy->setToolTip(QApplication::translate("AllAccounts", "Copy ICAP to Clipboard", 0));
#endif // QT_NO_TOOLTIP
        ICAPCopy->setText(QApplication::translate("AllAccounts", "Copy", 0));
    } // retranslateUi

};

namespace Ui {
    class AllAccounts: public Ui_AllAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLACCOUNTS_H
