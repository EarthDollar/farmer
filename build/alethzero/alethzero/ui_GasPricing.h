/********************************************************************************
** Form generated from reading UI file 'GasPricing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASPRICING_H
#define UI_GASPRICING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GasPricing
{
public:
    QGridLayout *gridLayout;
    QComboBox *bidUnits;
    QSpacerItem *verticalSpacer_2;
    QComboBox *askUnits;
    QLabel *label5_3;
    QSpinBox *bidValue;
    QLabel *label5_2;
    QSpinBox *askValue;

    void setupUi(QWidget *GasPricing)
    {
        if (GasPricing->objectName().isEmpty())
            GasPricing->setObjectName(QStringLiteral("GasPricing"));
        GasPricing->resize(416, 231);
        gridLayout = new QGridLayout(GasPricing);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bidUnits = new QComboBox(GasPricing);
        bidUnits->setObjectName(QStringLiteral("bidUnits"));

        gridLayout->addWidget(bidUnits, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 2);

        askUnits = new QComboBox(GasPricing);
        askUnits->setObjectName(QStringLiteral("askUnits"));

        gridLayout->addWidget(askUnits, 1, 1, 1, 1);

        label5_3 = new QLabel(GasPricing);
        label5_3->setObjectName(QStringLiteral("label5_3"));
        label5_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label5_3->setWordWrap(true);

        gridLayout->addWidget(label5_3, 3, 0, 1, 2);

        bidValue = new QSpinBox(GasPricing);
        bidValue->setObjectName(QStringLiteral("bidValue"));
        bidValue->setMaximum(430000000);
        bidValue->setValue(0);

        gridLayout->addWidget(bidValue, 4, 0, 1, 1);

        label5_2 = new QLabel(GasPricing);
        label5_2->setObjectName(QStringLiteral("label5_2"));
        label5_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label5_2->setWordWrap(true);

        gridLayout->addWidget(label5_2, 0, 0, 1, 2);

        askValue = new QSpinBox(GasPricing);
        askValue->setObjectName(QStringLiteral("askValue"));
        askValue->setMaximum(430000000);
        askValue->setValue(0);

        gridLayout->addWidget(askValue, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label5_3->setBuddy(bidValue);
        label5_2->setBuddy(askValue);
#endif // QT_NO_SHORTCUT

        retranslateUi(GasPricing);

        QMetaObject::connectSlotsByName(GasPricing);
    } // setupUi

    void retranslateUi(QWidget *GasPricing)
    {
        label5_3->setText(QApplication::translate("GasPricing", "&Bid: The minimum grice of gas that is accepting into a block which we mine.", 0));
        bidValue->setSuffix(QString());
        label5_2->setText(QApplication::translate("GasPricing", "&Ask: The minimum grice of gas that is accepting into a block which we mine.", 0));
        askValue->setSuffix(QString());
        Q_UNUSED(GasPricing);
    } // retranslateUi

};

namespace Ui {
    class GasPricing: public Ui_GasPricing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GASPRICING_H
