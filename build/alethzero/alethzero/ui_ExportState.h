/********************************************************************************
** Form generated from reading UI file 'ExportState.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSTATE_H
#define UI_EXPORTSTATE_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ExportState
{
public:
    QGridLayout *gridLayout;
    QLabel *label5;
    QComboBox *block;
    QLabel *label_7;
    QListWidget *accounts;
    QLabel *label_6;
    QListWidget *contracts;
    QLabel *label_2;
    QTextEdit *json;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;

    void setupUi(QDialog *ExportState)
    {
        if (ExportState->objectName().isEmpty())
            ExportState->setObjectName(QStringLiteral("ExportState"));
        ExportState->resize(490, 522);
        ExportState->setModal(true);
        gridLayout = new QGridLayout(ExportState);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label5 = new QLabel(ExportState);
        label5->setObjectName(QStringLiteral("label5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label5->sizePolicy().hasHeightForWidth());
        label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label5, 0, 0, 1, 1);

        block = new QComboBox(ExportState);
        block->setObjectName(QStringLiteral("block"));
        block->setEditable(true);

        gridLayout->addWidget(block, 0, 1, 1, 1);

        label_7 = new QLabel(ExportState);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        accounts = new QListWidget(ExportState);
        accounts->setObjectName(QStringLiteral("accounts"));
        accounts->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(accounts->sizePolicy().hasHeightForWidth());
        accounts->setSizePolicy(sizePolicy1);
        accounts->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(accounts, 1, 1, 1, 1);

        label_6 = new QLabel(ExportState);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        contracts = new QListWidget(ExportState);
        contracts->setObjectName(QStringLiteral("contracts"));
        contracts->setEnabled(false);
        sizePolicy1.setHeightForWidth(contracts->sizePolicy().hasHeightForWidth());
        contracts->setSizePolicy(sizePolicy1);
        contracts->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(contracts, 2, 1, 1, 1);

        label_2 = new QLabel(ExportState);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        json = new QTextEdit(ExportState);
        json->setObjectName(QStringLiteral("json"));
        json->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(json->sizePolicy().hasHeightForWidth());
        json->setSizePolicy(sizePolicy3);
        json->setReadOnly(true);

        gridLayout->addWidget(json, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        saveButton = new QPushButton(ExportState);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(ExportState);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout->addWidget(close);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label5->setBuddy(block);
        label_7->setBuddy(accounts);
        label_6->setBuddy(contracts);
        label_2->setBuddy(json);
#endif // QT_NO_SHORTCUT

        retranslateUi(ExportState);

        QMetaObject::connectSlotsByName(ExportState);
    } // setupUi

    void retranslateUi(QDialog *ExportState)
    {
        ExportState->setWindowTitle(QApplication::translate("ExportState", "Export State", 0));
        label5->setText(QApplication::translate("ExportState", "&Block", 0));
        block->setCurrentText(QString());
        label_7->setText(QApplication::translate("ExportState", "&Accounts", 0));
        label_6->setText(QApplication::translate("ExportState", "&Contracts", 0));
        label_2->setText(QApplication::translate("ExportState", "&JSON", 0));
        saveButton->setText(QApplication::translate("ExportState", "&Save...", 0));
        saveButton->setShortcut(QApplication::translate("ExportState", "Esc", 0));
        close->setText(QApplication::translate("ExportState", "&Close", 0));
        close->setShortcut(QApplication::translate("ExportState", "Esc", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportState: public Ui_ExportState {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSTATE_H
