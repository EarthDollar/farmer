/********************************************************************************
** Form generated from reading UI file 'Whisper.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHISPER_H
#define UI_WHISPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Whisper
{
public:
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLabel *label5_6;
    QPlainTextEdit *shhData;
    QComboBox *shhTopic;
    QComboBox *shhFrom;
    QLabel *label_9;
    QLabel *label5_3;
    QComboBox *shhTo;
    QSpinBox *shhTtl;
    QLabel *label5_5;
    QLabel *label5_4;
    QSpinBox *shhWork;
    QPushButton *post;
    QPushButton *forgetTopics;
    QPushButton *forgetDestinations;

    void setupUi(QWidget *WhisperWidget)
    {
        if (WhisperWidget->objectName().isEmpty())
            WhisperWidget->setObjectName(QStringLiteral("WhisperWidget"));
        gridLayout_4 = new QGridLayout(WhisperWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_8 = new QLabel(WhisperWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_8, 4, 0, 2, 1);

        label5_6 = new QLabel(WhisperWidget);
        label5_6->setObjectName(QStringLiteral("label5_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label5_6->sizePolicy().hasHeightForWidth());
        label5_6->setSizePolicy(sizePolicy1);
        label5_6->setAlignment(Qt::AlignLeading|Qt::AlignRight|Qt::AlignVCenter);

        gridLayout_4->addWidget(label5_6, 2, 2, 1, 2);

        shhData = new QPlainTextEdit(WhisperWidget);
        shhData->setObjectName(QStringLiteral("shhData"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shhData->sizePolicy().hasHeightForWidth());
        shhData->setSizePolicy(sizePolicy2);
        shhData->setFrameShape(QFrame::StyledPanel);
        shhData->setLineWidth(0);

        gridLayout_4->addWidget(shhData, 5, 1, 1, 4);

        shhTopic = new QComboBox(WhisperWidget);
        shhTopic->setObjectName(QStringLiteral("shhTopic"));
        shhTopic->setEditable(true);

        gridLayout_4->addWidget(shhTopic, 3, 1, 1, 4);

        shhFrom = new QComboBox(WhisperWidget);
        shhFrom->setObjectName(QStringLiteral("shhFrom"));
        shhFrom->setEditable(false);

        gridLayout_4->addWidget(shhFrom, 1, 1, 1, 4);

        label_9 = new QLabel(WhisperWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_9, 3, 0, 1, 1);

        label5_3 = new QLabel(WhisperWidget);
        label5_3->setObjectName(QStringLiteral("label5_3"));
        sizePolicy1.setHeightForWidth(label5_3->sizePolicy().hasHeightForWidth());
        label5_3->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label5_3, 0, 0, 1, 1);

        shhTo = new QComboBox(WhisperWidget);
        shhTo->setObjectName(QStringLiteral("shhTo"));
        shhTo->setEditable(true);

        gridLayout_4->addWidget(shhTo, 0, 1, 1, 4);

        shhTtl = new QSpinBox(WhisperWidget);
        shhTtl->setObjectName(QStringLiteral("shhTtl"));
        shhTtl->setMinimum(5);
        shhTtl->setMaximum(259200);

        gridLayout_4->addWidget(shhTtl, 2, 1, 1, 1);

        label5_5 = new QLabel(WhisperWidget);
        label5_5->setObjectName(QStringLiteral("label5_5"));
        sizePolicy1.setHeightForWidth(label5_5->sizePolicy().hasHeightForWidth());
        label5_5->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label5_5, 2, 0, 1, 1);

        label5_4 = new QLabel(WhisperWidget);
        label5_4->setObjectName(QStringLiteral("label5_4"));
        sizePolicy1.setHeightForWidth(label5_4->sizePolicy().hasHeightForWidth());
        label5_4->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label5_4, 1, 0, 1, 1);

        shhWork = new QSpinBox(WhisperWidget);
        shhWork->setObjectName(QStringLiteral("shhWork"));
        shhWork->setMinimum(1);
        shhWork->setMaximum(1000);
        shhWork->setValue(50);

        gridLayout_4->addWidget(shhWork, 2, 4, 1, 1);

        post = new QPushButton(WhisperWidget);
        post->setObjectName(QStringLiteral("post"));

        gridLayout_4->addWidget(post, 6, 4, 1, 1);

        forgetTopics = new QPushButton(WhisperWidget);
        forgetTopics->setObjectName(QStringLiteral("forgetTopics"));

        gridLayout_4->addWidget(forgetTopics, 6, 1, 1, 1);

        forgetDestinations = new QPushButton(WhisperWidget);
        forgetDestinations->setObjectName(QStringLiteral("forgetDestinations"));

        gridLayout_4->addWidget(forgetDestinations, 6, 2, 1, 1);


        retranslateUi(WhisperWidget);

        QMetaObject::connectSlotsByName(WhisperWidget);
    } // setupUi

    void retranslateUi(QWidget *WhisperWidget)
    {
        label_8->setText(QApplication::translate("Whisper", "Data", 0));
        label5_6->setText(QApplication::translate("Whisper", "Work to Prove", 0));
        label_9->setText(QApplication::translate("Whisper", "Topic", 0));
        label5_3->setText(QApplication::translate("Whisper", "To", 0));
        shhTtl->setSuffix(QApplication::translate("Whisper", " seconds", 0));
        label5_5->setText(QApplication::translate("Whisper", "TTL", 0));
        label5_4->setText(QApplication::translate("Whisper", "From", 0));
        shhWork->setSuffix(QApplication::translate("Whisper", " ms", 0));
        post->setText(QApplication::translate("Whisper", "Post", 0));
        forgetTopics->setText(QApplication::translate("Whisper", "Forget Topics", 0));
        forgetDestinations->setText(QApplication::translate("Whisper", "Forget Destinations", 0));
        Q_UNUSED(WhisperWidget);
    } // retranslateUi

};

namespace Ui {
    class Whisper: public Ui_Whisper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHISPER_H
