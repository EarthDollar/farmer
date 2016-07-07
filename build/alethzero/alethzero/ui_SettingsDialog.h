/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QListView *categoryList;
    QLabel *headerLabel;
    QStackedWidget *stackedWidget;
    QWidget *Page1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(898, 510);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        categoryList = new QListView(SettingsDialog);
        categoryList->setObjectName(QStringLiteral("categoryList"));
        categoryList->setMinimumSize(QSize(250, 0));
        categoryList->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(categoryList, 1, 0, 1, 1);

        headerLabel = new QLabel(SettingsDialog);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        headerLabel->setFont(font);
        headerLabel->setMargin(9);

        gridLayout->addWidget(headerLabel, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        Page1 = new QWidget();
        Page1->setObjectName(QStringLiteral("Page1"));
        stackedWidget->addWidget(Page1);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Preferences", 0));
        headerLabel->setText(QApplication::translate("SettingsDialog", "Category Title", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
