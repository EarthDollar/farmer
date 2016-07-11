/********************************************************************************
** Form generated from reading UI file 'TransactDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTDIALOG_H
#define UI_TRANSACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TransactDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *debug;
    QSpinBox *gas;
    QComboBox *valueUnits;
    QComboBox *gasPriceUnits;
    QLineEdit *calculatedName;
    QCheckBox *optimize;
    QPushButton *send;
    QSpinBox *nonce;
    QSplitter *splitter_5;
    QPlainTextEdit *data;
    QTextEdit *code;
    QSpinBox *value;
    QPushButton *copyUnsigned;
    QComboBox *from;
    QLabel *label_6;
    QLabel *label5;
    QPushButton *cancel;
    QCheckBox *autoNonce;
    QComboBox *destination;
    QLabel *total;
    QLabel *label5_2;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *gasPrice;
    QSpinBox *maxGas;
    QSpinBox *minGas;
    QProgressBar *progressGas;

    void setupUi(QDialog *TransactDialog)
    {
        if (TransactDialog->objectName().isEmpty())
            TransactDialog->setObjectName(QStringLiteral("TransactDialog"));
        TransactDialog->resize(604, 695);
        gridLayout = new QGridLayout(TransactDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        debug = new QPushButton(TransactDialog);
        debug->setObjectName(QStringLiteral("debug"));

        gridLayout->addWidget(debug, 10, 2, 1, 1);

        gas = new QSpinBox(TransactDialog);
        gas->setObjectName(QStringLiteral("gas"));
        gas->setMinimum(-1);
        gas->setMaximum(430000000);
        gas->setValue(-1);

        gridLayout->addWidget(gas, 4, 1, 1, 1);

        valueUnits = new QComboBox(TransactDialog);
        valueUnits->setObjectName(QStringLiteral("valueUnits"));

        gridLayout->addWidget(valueUnits, 3, 3, 1, 1);

        gasPriceUnits = new QComboBox(TransactDialog);
        gasPriceUnits->setObjectName(QStringLiteral("gasPriceUnits"));

        gridLayout->addWidget(gasPriceUnits, 4, 3, 1, 1);

        calculatedName = new QLineEdit(TransactDialog);
        calculatedName->setObjectName(QStringLiteral("calculatedName"));
        calculatedName->setEnabled(false);
        calculatedName->setReadOnly(true);

        gridLayout->addWidget(calculatedName, 2, 1, 1, 3);

        optimize = new QCheckBox(TransactDialog);
        optimize->setObjectName(QStringLiteral("optimize"));
        optimize->setChecked(true);

        gridLayout->addWidget(optimize, 7, 1, 1, 1);

        send = new QPushButton(TransactDialog);
        send->setObjectName(QStringLiteral("send"));
        send->setDefault(false);

        gridLayout->addWidget(send, 10, 3, 1, 1);

        nonce = new QSpinBox(TransactDialog);
        nonce->setObjectName(QStringLiteral("nonce"));
        nonce->setEnabled(false);

        gridLayout->addWidget(nonce, 7, 3, 1, 1);

        splitter_5 = new QSplitter(TransactDialog);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        data = new QPlainTextEdit(splitter_5);
        data->setObjectName(QStringLiteral("data"));
        data->setFrameShape(QFrame::NoFrame);
        data->setLineWidth(0);
        splitter_5->addWidget(data);
        code = new QTextEdit(splitter_5);
        code->setObjectName(QStringLiteral("code"));
        code->setFocusPolicy(Qt::ClickFocus);
        code->setFrameShape(QFrame::NoFrame);
        code->setLineWidth(0);
        code->setReadOnly(true);
        splitter_5->addWidget(code);

        gridLayout->addWidget(splitter_5, 8, 0, 1, 4);

        value = new QSpinBox(TransactDialog);
        value->setObjectName(QStringLiteral("value"));
        value->setMaximum(430000000);
        value->setValue(0);

        gridLayout->addWidget(value, 3, 1, 1, 2);

        copyUnsigned = new QPushButton(TransactDialog);
        copyUnsigned->setObjectName(QStringLiteral("copyUnsigned"));

        gridLayout->addWidget(copyUnsigned, 10, 1, 1, 1);

        from = new QComboBox(TransactDialog);
        from->setObjectName(QStringLiteral("from"));

        gridLayout->addWidget(from, 0, 1, 1, 3);

        label_6 = new QLabel(TransactDialog);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label5 = new QLabel(TransactDialog);
        label5->setObjectName(QStringLiteral("label5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label5->sizePolicy().hasHeightForWidth());
        label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label5, 1, 0, 1, 1);

        cancel = new QPushButton(TransactDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 10, 0, 1, 1);

        autoNonce = new QCheckBox(TransactDialog);
        autoNonce->setObjectName(QStringLiteral("autoNonce"));
        autoNonce->setChecked(true);
        autoNonce->setAutoRepeat(false);

        gridLayout->addWidget(autoNonce, 7, 2, 1, 1);

        destination = new QComboBox(TransactDialog);
        destination->setObjectName(QStringLiteral("destination"));
        destination->setEditable(true);

        gridLayout->addWidget(destination, 1, 1, 1, 3);

        total = new QLabel(TransactDialog);
        total->setObjectName(QStringLiteral("total"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(total->sizePolicy().hasHeightForWidth());
        total->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(total, 9, 0, 1, 4);

        label5_2 = new QLabel(TransactDialog);
        label5_2->setObjectName(QStringLiteral("label5_2"));

        gridLayout->addWidget(label5_2, 3, 0, 1, 1);

        label_2 = new QLabel(TransactDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label = new QLabel(TransactDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gasPrice = new QSpinBox(TransactDialog);
        gasPrice->setObjectName(QStringLiteral("gasPrice"));
        gasPrice->setMinimum(0);
        gasPrice->setMaximum(430000000);

        gridLayout->addWidget(gasPrice, 4, 2, 1, 1);

        maxGas = new QSpinBox(TransactDialog);
        maxGas->setObjectName(QStringLiteral("maxGas"));
        maxGas->setMaximum(450000000);

        gridLayout->addWidget(maxGas, 5, 3, 1, 1);

        minGas = new QSpinBox(TransactDialog);
        minGas->setObjectName(QStringLiteral("minGas"));
        minGas->setReadOnly(true);
        minGas->setMinimum(0);
        minGas->setMaximum(450000000);

        gridLayout->addWidget(minGas, 5, 2, 1, 1);

        progressGas = new QProgressBar(TransactDialog);
        progressGas->setObjectName(QStringLiteral("progressGas"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressGas->sizePolicy().hasHeightForWidth());
        progressGas->setSizePolicy(sizePolicy3);
        progressGas->setValue(24);

        gridLayout->addWidget(progressGas, 5, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(gas);
        label5->setBuddy(destination);
        label5_2->setBuddy(value);
        label_2->setBuddy(data);
        label->setBuddy(from);
#endif // QT_NO_SHORTCUT

        retranslateUi(TransactDialog);
        QObject::connect(autoNonce, SIGNAL(toggled(bool)), nonce, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(TransactDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactDialog)
    {
        TransactDialog->setWindowTitle(QApplication::translate("TransactDialog", "Transact", 0));
        debug->setText(QApplication::translate("TransactDialog", "&Debug", 0));
        gas->setSpecialValueText(QApplication::translate("TransactDialog", "Automatic", 0));
        gas->setSuffix(QApplication::translate("TransactDialog", " gas", 0));
        calculatedName->setPlaceholderText(QString());
        optimize->setText(QApplication::translate("TransactDialog", "&Optimise", 0));
        send->setText(QApplication::translate("TransactDialog", "&Execute", 0));
        value->setSuffix(QString());
        copyUnsigned->setText(QApplication::translate("TransactDialog", "Copy &Unsigned", 0));
        label_6->setText(QApplication::translate("TransactDialog", "&Gas", 0));
        label5->setText(QApplication::translate("TransactDialog", "&To", 0));
        cancel->setText(QApplication::translate("TransactDialog", "&Cancel", 0));
        cancel->setShortcut(QApplication::translate("TransactDialog", "Esc", 0));
        autoNonce->setText(QApplication::translate("TransactDialog", "Auto Nonce", 0));
        destination->clear();
        destination->insertItems(0, QStringList()
         << QApplication::translate("TransactDialog", "(Create Contract)", 0)
        );
        total->setText(QString());
        label5_2->setText(QApplication::translate("TransactDialog", "&Amount", 0));
        label_2->setText(QApplication::translate("TransactDialog", "D&ata", 0));
        label->setText(QApplication::translate("TransactDialog", "&From", 0));
        gasPrice->setPrefix(QApplication::translate("TransactDialog", "@ ", 0));
        maxGas->setSuffix(QApplication::translate("TransactDialog", " gas", 0));
        maxGas->setPrefix(QApplication::translate("TransactDialog", "max ", 0));
        minGas->setSuffix(QApplication::translate("TransactDialog", " gas", 0));
        minGas->setPrefix(QApplication::translate("TransactDialog", "min ", 0));
        progressGas->setFormat(QApplication::translate("TransactDialog", "Calculating gas...", 0));
    } // retranslateUi

};

namespace Ui {
    class TransactDialog: public Ui_TransactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTDIALOG_H
