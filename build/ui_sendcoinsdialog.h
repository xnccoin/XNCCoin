/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frmBanner;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *hLayoutHeader1;
    QLabel *labelCoinControlFeatures;
    QSpacerItem *horizontalSpacerCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QPushButton *pushButtonCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QGridLayout *gridLayout;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlBytes;
    QLabel *labelCoinControlQuantity;
    QLabel *lblSemiColon11;
    QLabel *labelCoinControlBytesText;
    QLabel *lblSemiColon12;
    QGridLayout *gridLayout_2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlPriority;
    QLabel *labelCoinControlPriorityText;
    QLabel *labelCoinControlAmount;
    QLabel *lblSemiColon21;
    QLabel *lblSemiColon22;
    QGridLayout *gridLayout_3;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QLabel *labelCoinControlFeeText;
    QLabel *lblSemiColon31;
    QLabel *lblSemiColon32;
    QGridLayout *gridLayout_4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlChange;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *lblSemiColon41;
    QLabel *lblSemiColon42;
    QHBoxLayout *hLayoutHeader3;
    QLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QCheckBox *checkBoxCoinControlChange;
    QSpacerItem *verticalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *clearButton;
    QFrame *frmBalance;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendButton;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QString::fromUtf8("SendCoinsDialog"));
        SendCoinsDialog->resize(825, 550);
        SendCoinsDialog->setMinimumSize(QSize(825, 550));
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        frmBanner = new QFrame(SendCoinsDialog);
        frmBanner->setObjectName(QString::fromUtf8("frmBanner"));
        frmBanner->setMinimumSize(QSize(825, 180));
        frmBanner->setMaximumSize(QSize(825, 180));

        verticalLayout->addWidget(frmBanner);

        frameCoinControl = new QFrame(SendCoinsDialog);
        frameCoinControl->setObjectName(QString::fromUtf8("frameCoinControl"));
        frameCoinControl->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMinimumSize(QSize(825, 180));
        frameCoinControl->setMaximumSize(QSize(825, 180));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
        verticalLayoutCoinControl2->setSpacing(0);
        verticalLayoutCoinControl2->setObjectName(QString::fromUtf8("verticalLayoutCoinControl2"));
        verticalLayoutCoinControl2->setContentsMargins(50, 20, 35, 20);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayoutCoinControl2->addItem(verticalSpacer_2);

        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QString::fromUtf8("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(0, 0, -1, -1);
        hLayoutHeader1 = new QHBoxLayout();
        hLayoutHeader1->setSpacing(8);
        hLayoutHeader1->setObjectName(QString::fromUtf8("hLayoutHeader1"));
        hLayoutHeader1->setContentsMargins(-1, -1, -1, 10);
        labelCoinControlFeatures = new QLabel(frameCoinControl);
        labelCoinControlFeatures->setObjectName(QString::fromUtf8("labelCoinControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlFeatures->setFont(font);

        hLayoutHeader1->addWidget(labelCoinControlFeatures);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutHeader1->addItem(horizontalSpacerCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName(QString::fromUtf8("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        hLayoutHeader1->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName(QString::fromUtf8("labelCoinControlInsuffFunds"));
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setMargin(5);

        hLayoutHeader1->addWidget(labelCoinControlInsuffFunds);

        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName(QString::fromUtf8("pushButtonCoinControl"));
        pushButtonCoinControl->setMinimumSize(QSize(150, 30));

        hLayoutHeader1->addWidget(pushButtonCoinControl);


        verticalLayoutCoinControl->addLayout(hLayoutHeader1);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName(QString::fromUtf8("widgetCoinControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy2);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl5->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 18);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(7);
        gridLayout->setContentsMargins(0, 0, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QString::fromUtf8("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setFont(font);
        labelCoinControlQuantityText->setMargin(0);

        gridLayout->addWidget(labelCoinControlQuantityText, 0, 0, 1, 1);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QString::fromUtf8("labelCoinControlBytes"));
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelCoinControlBytes, 1, 2, 1, 1);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QString::fromUtf8("labelCoinControlQuantity"));
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelCoinControlQuantity, 0, 2, 1, 1);

        lblSemiColon11 = new QLabel(widgetCoinControl);
        lblSemiColon11->setObjectName(QString::fromUtf8("lblSemiColon11"));

        gridLayout->addWidget(lblSemiColon11, 0, 1, 1, 1);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QString::fromUtf8("labelCoinControlBytesText"));
        labelCoinControlBytesText->setFont(font);

        gridLayout->addWidget(labelCoinControlBytesText, 1, 0, 1, 1);

        lblSemiColon12 = new QLabel(widgetCoinControl);
        lblSemiColon12->setObjectName(QString::fromUtf8("lblSemiColon12"));
        lblSemiColon12->setFont(font);

        gridLayout->addWidget(lblSemiColon12, 1, 1, 1, 1);

        gridLayout->setColumnStretch(2, 1);

        horizontalLayoutCoinControl3->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(7);
        gridLayout_2->setContentsMargins(6, 0, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QString::fromUtf8("labelCoinControlAmountText"));
        labelCoinControlAmountText->setFont(font);
        labelCoinControlAmountText->setMargin(0);

        gridLayout_2->addWidget(labelCoinControlAmountText, 0, 0, 1, 1);

        labelCoinControlPriority = new QLabel(widgetCoinControl);
        labelCoinControlPriority->setObjectName(QString::fromUtf8("labelCoinControlPriority"));
        labelCoinControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelCoinControlPriority, 1, 2, 1, 1);

        labelCoinControlPriorityText = new QLabel(widgetCoinControl);
        labelCoinControlPriorityText->setObjectName(QString::fromUtf8("labelCoinControlPriorityText"));
        labelCoinControlPriorityText->setFont(font);

        gridLayout_2->addWidget(labelCoinControlPriorityText, 1, 0, 1, 1);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QString::fromUtf8("labelCoinControlAmount"));
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelCoinControlAmount, 0, 2, 1, 1);

        lblSemiColon21 = new QLabel(widgetCoinControl);
        lblSemiColon21->setObjectName(QString::fromUtf8("lblSemiColon21"));
        lblSemiColon21->setFont(font);

        gridLayout_2->addWidget(lblSemiColon21, 0, 1, 1, 1);

        lblSemiColon22 = new QLabel(widgetCoinControl);
        lblSemiColon22->setObjectName(QString::fromUtf8("lblSemiColon22"));
        lblSemiColon22->setFont(font);

        gridLayout_2->addWidget(lblSemiColon22, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(2, 1);

        horizontalLayoutCoinControl3->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(7);
        gridLayout_3->setContentsMargins(6, 0, 6, -1);
        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QString::fromUtf8("labelCoinControlFee"));
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelCoinControlFee, 0, 2, 1, 1);

        labelCoinControlLowOutputText = new QLabel(widgetCoinControl);
        labelCoinControlLowOutputText->setObjectName(QString::fromUtf8("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setFont(font);

        gridLayout_3->addWidget(labelCoinControlLowOutputText, 1, 0, 1, 1);

        labelCoinControlLowOutput = new QLabel(widgetCoinControl);
        labelCoinControlLowOutput->setObjectName(QString::fromUtf8("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelCoinControlLowOutput, 1, 2, 1, 1);

        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QString::fromUtf8("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font);
        labelCoinControlFeeText->setMargin(0);

        gridLayout_3->addWidget(labelCoinControlFeeText, 0, 0, 1, 1);

        lblSemiColon31 = new QLabel(widgetCoinControl);
        lblSemiColon31->setObjectName(QString::fromUtf8("lblSemiColon31"));
        lblSemiColon31->setFont(font);

        gridLayout_3->addWidget(lblSemiColon31, 0, 1, 1, 1);

        lblSemiColon32 = new QLabel(widgetCoinControl);
        lblSemiColon32->setObjectName(QString::fromUtf8("lblSemiColon32"));
        lblSemiColon32->setFont(font);

        gridLayout_3->addWidget(lblSemiColon32, 1, 1, 1, 1);

        gridLayout_3->setColumnStretch(2, 1);

        horizontalLayoutCoinControl3->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(10);
        gridLayout_4->setVerticalSpacing(7);
        gridLayout_4->setContentsMargins(6, 0, 0, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QString::fromUtf8("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font);
        labelCoinControlAfterFeeText->setMargin(0);

        gridLayout_4->addWidget(labelCoinControlAfterFeeText, 0, 0, 1, 1);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QString::fromUtf8("labelCoinControlChange"));
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(labelCoinControlChange, 1, 2, 1, 1);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QString::fromUtf8("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(labelCoinControlAfterFee, 0, 2, 1, 1);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QString::fromUtf8("labelCoinControlChangeText"));
        labelCoinControlChangeText->setFont(font);

        gridLayout_4->addWidget(labelCoinControlChangeText, 1, 0, 1, 1);

        lblSemiColon41 = new QLabel(widgetCoinControl);
        lblSemiColon41->setObjectName(QString::fromUtf8("lblSemiColon41"));
        lblSemiColon41->setFont(font);

        gridLayout_4->addWidget(lblSemiColon41, 0, 1, 1, 1);

        lblSemiColon42 = new QLabel(widgetCoinControl);
        lblSemiColon42->setObjectName(QString::fromUtf8("lblSemiColon42"));
        lblSemiColon42->setFont(font);

        gridLayout_4->addWidget(lblSemiColon42, 1, 1, 1, 1);

        gridLayout_4->setColumnStretch(2, 1);

        horizontalLayoutCoinControl3->addLayout(gridLayout_4);

        horizontalLayoutCoinControl3->setStretch(0, 1);
        horizontalLayoutCoinControl3->setStretch(1, 1);
        horizontalLayoutCoinControl3->setStretch(2, 1);
        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        hLayoutHeader3 = new QHBoxLayout();
        hLayoutHeader3->setSpacing(15);
        hLayoutHeader3->setObjectName(QString::fromUtf8("hLayoutHeader3"));
        hLayoutHeader3->setContentsMargins(-1, 0, 0, -1);
        lineEditCoinControlChange = new QLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName(QString::fromUtf8("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy3);
        lineEditCoinControlChange->setMinimumSize(QSize(0, 30));
        lineEditCoinControlChange->setMaximumSize(QSize(16777215, 30));

        hLayoutHeader3->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName(QString::fromUtf8("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy4);
        labelCoinControlChangeLabel->setMinimumSize(QSize(50, 30));
        QFont font1;
        font1.setPointSize(12);
        labelCoinControlChangeLabel->setFont(font1);

        hLayoutHeader3->addWidget(labelCoinControlChangeLabel);

        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName(QString::fromUtf8("checkBoxCoinControlChange"));
        checkBoxCoinControlChange->setMinimumSize(QSize(150, 30));
        checkBoxCoinControlChange->setMaximumSize(QSize(16777215, 30));
        checkBoxCoinControlChange->setLayoutDirection(Qt::RightToLeft);

        hLayoutHeader3->addWidget(checkBoxCoinControlChange);

        hLayoutHeader3->setStretch(0, 1);

        verticalLayoutCoinControl->addLayout(hLayoutHeader3);

        verticalLayoutCoinControl->setStretch(1, 1);

        verticalLayoutCoinControl2->addLayout(verticalLayoutCoinControl);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayoutCoinControl2->addItem(verticalSpacer_3);


        verticalLayout->addWidget(frameCoinControl);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(825, 0));
        scrollArea->setMaximumSize(QSize(825, 16777215));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 825, 90));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        entries = new QVBoxLayout();
        entries->setSpacing(0);
        entries->setObjectName(QString::fromUtf8("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 30, 37, 30);
        addButton = new QPushButton(SendCoinsDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(130, 40));
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        clearButton = new QPushButton(SendCoinsDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy5);
        clearButton->setMinimumSize(QSize(130, 40));
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        frmBalance = new QFrame(SendCoinsDialog);
        frmBalance->setObjectName(QString::fromUtf8("frmBalance"));
        horizontalLayout_2 = new QHBoxLayout(frmBalance);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelBalance = new QLabel(frmBalance);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        labelBalance->setMinimumSize(QSize(210, 20));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy6);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout->addWidget(frmBalance);

        sendButton = new QPushButton(SendCoinsDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setMinimumSize(QSize(200, 40));
        sendButton->setDefault(true);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendCoinsDialog);

        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", 0, QApplication::UnicodeUTF8));
        labelCoinControlFeatures->setText(QApplication::translate("SendCoinsDialog", "Coin Control Features", 0, QApplication::UnicodeUTF8));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("SendCoinsDialog", "automatically selected", 0, QApplication::UnicodeUTF8));
        labelCoinControlInsuffFunds->setText(QApplication::translate("SendCoinsDialog", "Insufficient funds!", 0, QApplication::UnicodeUTF8));
        pushButtonCoinControl->setText(QApplication::translate("SendCoinsDialog", "INPUTS", 0, QApplication::UnicodeUTF8));
        labelCoinControlQuantityText->setText(QApplication::translate("SendCoinsDialog", "Quantity", 0, QApplication::UnicodeUTF8));
        labelCoinControlBytes->setText(QApplication::translate("SendCoinsDialog", "0", 0, QApplication::UnicodeUTF8));
        labelCoinControlQuantity->setText(QApplication::translate("SendCoinsDialog", "0", 0, QApplication::UnicodeUTF8));
        lblSemiColon11->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        labelCoinControlBytesText->setText(QApplication::translate("SendCoinsDialog", "Bytes", 0, QApplication::UnicodeUTF8));
        lblSemiColon12->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        labelCoinControlAmountText->setText(QApplication::translate("SendCoinsDialog", "Amount", 0, QApplication::UnicodeUTF8));
        labelCoinControlPriority->setText(QApplication::translate("SendCoinsDialog", "medium", 0, QApplication::UnicodeUTF8));
        labelCoinControlPriorityText->setText(QApplication::translate("SendCoinsDialog", "Priority", 0, QApplication::UnicodeUTF8));
        labelCoinControlAmount->setText(QApplication::translate("SendCoinsDialog", "0.00 XNC", 0, QApplication::UnicodeUTF8));
        lblSemiColon21->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        lblSemiColon22->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        labelCoinControlFee->setText(QApplication::translate("SendCoinsDialog", "0.00 XNC", 0, QApplication::UnicodeUTF8));
        labelCoinControlLowOutputText->setText(QApplication::translate("SendCoinsDialog", "Low Output", 0, QApplication::UnicodeUTF8));
        labelCoinControlLowOutput->setText(QApplication::translate("SendCoinsDialog", "no", 0, QApplication::UnicodeUTF8));
        labelCoinControlFeeText->setText(QApplication::translate("SendCoinsDialog", "Fee", 0, QApplication::UnicodeUTF8));
        lblSemiColon31->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        lblSemiColon32->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        labelCoinControlAfterFeeText->setText(QApplication::translate("SendCoinsDialog", "After Fee", 0, QApplication::UnicodeUTF8));
        labelCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "0.00 XNC", 0, QApplication::UnicodeUTF8));
        labelCoinControlAfterFee->setText(QApplication::translate("SendCoinsDialog", "0.00 XNC", 0, QApplication::UnicodeUTF8));
        labelCoinControlChangeText->setText(QApplication::translate("SendCoinsDialog", "Change", 0, QApplication::UnicodeUTF8));
        lblSemiColon41->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        lblSemiColon42->setText(QApplication::translate("SendCoinsDialog", ":", 0, QApplication::UnicodeUTF8));
        checkBoxCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "custom change address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("SendCoinsDialog", "Add &Recipient", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", 0, QApplication::UnicodeUTF8));
        labelBalance->setText(QApplication::translate("SendCoinsDialog", "Balance: 88888888.888888 XNC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCoinsDialog", "Confirm the send action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCoinsDialog", "SEND XNC", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
