/********************************************************************************
** Form generated from reading UI file 'AlethZero.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALETHZERO_H
#define UI_ALETHZERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <libaleth/SyncView.h>

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QAction *quit;
    QAction *connect;
    QAction *net;
    QAction *preview;
    QAction *exportKey;
    QAction *refresh;
    QAction *go;
    QAction *killAccount;
    QAction *confirm;
    QAction *reencryptKey;
    QAction *reencryptAll;
    QAction *settings;
    QAction *about;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QTabWidget *tabs;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNetwork;
    QMenu *menuAccounts;
    QMenu *menuHelp;
    QMenu *menuSpecial;
    QMenu *menuView;
    QMenu *menuConfig;
    QMenu *menuActions;
    QStatusBar *statusbar;
    QLabel *cacheUsage;
    QLabel *syncStatus;
    QLabel *chainStatus;
    QLabel *blockCount;
    QLabel *balance;
    QLabel *peerCount;
    QLabel *mineStatus;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_2;
    QListWidget *peers;
    QLineEdit *enode;
    QToolBar *toolBar;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_7;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *ourAccounts;
    QDockWidget *dockWidget_12;
    QWidget *dockWidgetContents_12;
    QHBoxLayout *horizontalLayout_8;
    dev::aleth::SyncView *downloadView;
    QDockWidget *dockWidget_13;
    QWidget *dockWidgetContents_13;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *nodes;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName(QStringLiteral("Main"));
        Main->resize(1088, 792);
        Main->setDockNestingEnabled(true);
        Main->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::VerticalTabs);
        Main->setProperty("sizeGripEnabled", QVariant(true));
        quit = new QAction(Main);
        quit->setObjectName(QStringLiteral("quit"));
        connect = new QAction(Main);
        connect->setObjectName(QStringLiteral("connect"));
        net = new QAction(Main);
        net->setObjectName(QStringLiteral("net"));
        net->setCheckable(true);
        preview = new QAction(Main);
        preview->setObjectName(QStringLiteral("preview"));
        preview->setCheckable(true);
        exportKey = new QAction(Main);
        exportKey->setObjectName(QStringLiteral("exportKey"));
        refresh = new QAction(Main);
        refresh->setObjectName(QStringLiteral("refresh"));
        go = new QAction(Main);
        go->setObjectName(QStringLiteral("go"));
        killAccount = new QAction(Main);
        killAccount->setObjectName(QStringLiteral("killAccount"));
        confirm = new QAction(Main);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setCheckable(true);
        confirm->setChecked(true);
        reencryptKey = new QAction(Main);
        reencryptKey->setObjectName(QStringLiteral("reencryptKey"));
        reencryptAll = new QAction(Main);
        reencryptAll->setObjectName(QStringLiteral("reencryptAll"));
        settings = new QAction(Main);
        settings->setObjectName(QStringLiteral("settings"));
        about = new QAction(Main);
        about->setObjectName(QStringLiteral("about"));
        centralwidget = new QWidget(Main);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tabs = new QTabWidget(centralwidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        tabs->setTabsClosable(true);
        tabs->setMovable(true);
        tabs->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        tabs->addTab(tab, QString());

        horizontalLayout_7->addWidget(tabs);


        verticalLayout->addLayout(horizontalLayout_7);

        Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1088, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuNetwork = new QMenu(menubar);
        menuNetwork->setObjectName(QStringLiteral("menuNetwork"));
        menuAccounts = new QMenu(menubar);
        menuAccounts->setObjectName(QStringLiteral("menuAccounts"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSpecial = new QMenu(menubar);
        menuSpecial->setObjectName(QStringLiteral("menuSpecial"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuConfig = new QMenu(menubar);
        menuConfig->setObjectName(QStringLiteral("menuConfig"));
        menuActions = new QMenu(menubar);
        menuActions->setObjectName(QStringLiteral("menuActions"));
        Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Main);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        cacheUsage = new QLabel(statusbar);
        cacheUsage->setObjectName(QStringLiteral("cacheUsage"));
        cacheUsage->setGeometry(QRect(0, 0, 100, 30));
        syncStatus = new QLabel(statusbar);
        syncStatus->setObjectName(QStringLiteral("syncStatus"));
        syncStatus->setGeometry(QRect(0, 0, 100, 30));
        chainStatus = new QLabel(statusbar);
        chainStatus->setObjectName(QStringLiteral("chainStatus"));
        chainStatus->setGeometry(QRect(0, 0, 100, 30));
        blockCount = new QLabel(statusbar);
        blockCount->setObjectName(QStringLiteral("blockCount"));
        blockCount->setGeometry(QRect(0, 0, 100, 30));
        balance = new QLabel(statusbar);
        balance->setObjectName(QStringLiteral("balance"));
        balance->setGeometry(QRect(0, 0, 100, 30));
        peerCount = new QLabel(statusbar);
        peerCount->setObjectName(QStringLiteral("peerCount"));
        peerCount->setGeometry(QRect(0, 0, 100, 30));
        mineStatus = new QLabel(statusbar);
        mineStatus->setObjectName(QStringLiteral("mineStatus"));
        mineStatus->setGeometry(QRect(0, 0, 100, 30));
        Main->setStatusBar(statusbar);
        dockWidget_3 = new QDockWidget(Main);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        peers = new QListWidget(dockWidgetContents_3);
        peers->setObjectName(QStringLiteral("peers"));
        peers->setFocusPolicy(Qt::NoFocus);
        peers->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(peers);

        enode = new QLineEdit(dockWidgetContents_3);
        enode->setObjectName(QStringLiteral("enode"));
        enode->setReadOnly(true);

        verticalLayout_2->addWidget(enode);

        dockWidget_3->setWidget(dockWidgetContents_3);
        Main->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_3);
        toolBar = new QToolBar(Main);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Main->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_7 = new QDockWidget(Main);
        dockWidget_7->setObjectName(QStringLiteral("dockWidget_7"));
        dockWidget_7->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        horizontalLayout_5 = new QHBoxLayout(dockWidgetContents_7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ourAccounts = new QListWidget(dockWidgetContents_7);
        ourAccounts->setObjectName(QStringLiteral("ourAccounts"));
        ourAccounts->setFocusPolicy(Qt::WheelFocus);
        ourAccounts->setFrameShape(QFrame::NoFrame);
        ourAccounts->setProperty("showDropIndicator", QVariant(false));
        ourAccounts->setAlternatingRowColors(true);
        ourAccounts->setSortingEnabled(true);

        horizontalLayout_5->addWidget(ourAccounts);

        dockWidget_7->setWidget(dockWidgetContents_7);
        Main->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_7);
        dockWidget_12 = new QDockWidget(Main);
        dockWidget_12->setObjectName(QStringLiteral("dockWidget_12"));
        dockWidget_12->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_12 = new QWidget();
        dockWidgetContents_12->setObjectName(QStringLiteral("dockWidgetContents_12"));
        horizontalLayout_8 = new QHBoxLayout(dockWidgetContents_12);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        downloadView = new dev::aleth::SyncView(dockWidgetContents_12);
        downloadView->setObjectName(QStringLiteral("downloadView"));

        horizontalLayout_8->addWidget(downloadView);

        dockWidget_12->setWidget(dockWidgetContents_12);
        Main->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_12);
        dockWidget_13 = new QDockWidget(Main);
        dockWidget_13->setObjectName(QStringLiteral("dockWidget_13"));
        dockWidget_13->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_13 = new QWidget();
        dockWidgetContents_13->setObjectName(QStringLiteral("dockWidgetContents_13"));
        horizontalLayout_10 = new QHBoxLayout(dockWidgetContents_13);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        nodes = new QListWidget(dockWidgetContents_13);
        nodes->setObjectName(QStringLiteral("nodes"));
        nodes->setFrameShape(QFrame::NoFrame);

        horizontalLayout_10->addWidget(nodes);

        dockWidget_13->setWidget(dockWidgetContents_13);
        Main->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_13);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuActions->menuAction());
        menubar->addAction(menuNetwork->menuAction());
        menubar->addAction(menuAccounts->menuAction());
        menubar->addAction(menuConfig->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuSpecial->menuAction());
        menuFile->addAction(quit);
        menuNetwork->addAction(go);
        menuNetwork->addSeparator();
        menuNetwork->addAction(net);
        menuNetwork->addAction(connect);
        menuAccounts->addAction(exportKey);
        menuAccounts->addAction(reencryptAll);
        menuAccounts->addAction(reencryptKey);
        menuAccounts->addAction(killAccount);
        menuHelp->addAction(about);
        menuSpecial->addAction(confirm);
        menuView->addAction(preview);
        menuView->addSeparator();
        menuView->addAction(refresh);
        menuConfig->addAction(settings);
        toolBar->addAction(go);

        retranslateUi(Main);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QApplication::translate("Main", "AlethZero", 0));
        quit->setText(QApplication::translate("Main", "&Quit", 0));
        quit->setShortcut(QApplication::translate("Main", "Ctrl+Q", 0));
        connect->setText(QApplication::translate("Main", "&Connect to Peer...", 0));
        net->setText(QApplication::translate("Main", "Enable &Network", 0));
        preview->setText(QApplication::translate("Main", "&Preview Pending Transactions", 0));
        exportKey->setText(QApplication::translate("Main", "&Export Selected Key...", 0));
        refresh->setText(QApplication::translate("Main", "&Refresh", 0));
        go->setText(QApplication::translate("Main", "&Go!", 0));
        killAccount->setText(QApplication::translate("Main", "&Kill Account", 0));
        confirm->setText(QApplication::translate("Main", "Co&nfirm Transactions", 0));
        reencryptKey->setText(QApplication::translate("Main", "&Re-Encrypt Key", 0));
        reencryptAll->setText(QApplication::translate("Main", "Re-Encrypt All Keys...", 0));
        settings->setText(QApplication::translate("Main", "&Preferences...", 0));
        settings->setShortcut(QApplication::translate("Main", "Ctrl+P, F10", 0));
        about->setText(QApplication::translate("Main", "&About...", 0));
        tabs->setTabText(tabs->indexOf(tab), QApplication::translate("Main", "n/a", 0));
        menuFile->setTitle(QApplication::translate("Main", "&File", 0));
        menuNetwork->setTitle(QApplication::translate("Main", "&Network", 0));
        menuAccounts->setTitle(QApplication::translate("Main", "&Accounts", 0));
        menuHelp->setTitle(QApplication::translate("Main", "&Help", 0));
        menuSpecial->setTitle(QApplication::translate("Main", "&Special", 0));
        menuView->setTitle(QApplication::translate("Main", "&View", 0));
        menuConfig->setTitle(QApplication::translate("Main", "&Config", 0));
        menuActions->setTitle(QApplication::translate("Main", "A&ctions", 0));
        cacheUsage->setText(QApplication::translate("Main", "0 bytes used", 0));
        syncStatus->setText(QString());
        chainStatus->setText(QApplication::translate("Main", "#0", 0));
        blockCount->setText(QApplication::translate("Main", "1 block", 0));
        balance->setText(QApplication::translate("Main", "0 wei", 0));
        peerCount->setText(QApplication::translate("Main", "0 peers", 0));
        mineStatus->setText(QString());
        dockWidget_3->setWindowTitle(QApplication::translate("Main", "Network", 0));
        toolBar->setWindowTitle(QApplication::translate("Main", "toolBar", 0));
        dockWidget_7->setWindowTitle(QApplication::translate("Main", "Owned Accounts", 0));
        dockWidget_12->setWindowTitle(QApplication::translate("Main", "Blockchain Download", 0));
        dockWidget_13->setWindowTitle(QApplication::translate("Main", "Nodes", 0));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALETHZERO_H
