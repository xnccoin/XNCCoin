/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frmEntry;
    QGridLayout *gridLayout;
    QValidatedLineEdit *payTo;
    QLabel *lblLabel;
    QValidatedLineEdit *addAsLabel;
    QLabel *lblAmount;
    QHBoxLayout *horizontalLayout;
    BitcoinAmountField *payAmount;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *lblPayTo;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QString::fromUtf8("SendCoinsEntry"));
        SendCoinsEntry->resize(825, 150);
        SendCoinsEntry->setMinimumSize(QSize(825, 150));
        SendCoinsEntry->setMaximumSize(QSize(825, 150));
        SendCoinsEntry->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(SendCoinsEntry);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frmEntry = new QFrame(SendCoinsEntry);
        frmEntry->setObjectName(QString::fromUtf8("frmEntry"));
        frmEntry->setMinimumSize(QSize(808, 150));
        frmEntry->setMaximumSize(QSize(825, 150));
        gridLayout = new QGridLayout(frmEntry);
        gridLayout->setContentsMargins(20, 20, 20, 20);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        payTo = new QValidatedLineEdit(frmEntry);
        payTo->setObjectName(QString::fromUtf8("payTo"));
        payTo->setMinimumSize(QSize(0, 30));
        payTo->setMaxLength(34);

        gridLayout->addWidget(payTo, 0, 1, 1, 1);

        lblLabel = new QLabel(frmEntry);
        lblLabel->setObjectName(QString::fromUtf8("lblLabel"));
        lblLabel->setMinimumSize(QSize(140, 30));

        gridLayout->addWidget(lblLabel, 1, 0, 1, 1);

        addAsLabel = new QValidatedLineEdit(frmEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));
        addAsLabel->setEnabled(true);
        addAsLabel->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        lblAmount = new QLabel(frmEntry);
        lblAmount->setObjectName(QString::fromUtf8("lblAmount"));
        lblAmount->setMinimumSize(QSize(140, 30));

        gridLayout->addWidget(lblAmount, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        payAmount = new BitcoinAmountField(frmEntry);
        payAmount->setObjectName(QString::fromUtf8("payAmount"));
        payAmount->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(payAmount);

        addressBookButton = new QToolButton(frmEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        addressBookButton->setMinimumSize(QSize(70, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        horizontalLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(frmEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        pasteButton->setMinimumSize(QSize(70, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        horizontalLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(frmEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(70, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        horizontalLayout->addWidget(deleteButton);

        horizontalLayout->setStretch(0, 1);

        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        lblPayTo = new QLabel(frmEntry);
        lblPayTo->setObjectName(QString::fromUtf8("lblPayTo"));
        lblPayTo->setMinimumSize(QSize(140, 30));

        gridLayout->addWidget(lblPayTo, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frmEntry);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

#ifndef QT_NO_SHORTCUT
        lblLabel->setBuddy(addAsLabel);
        lblAmount->setBuddy(payAmount);
        lblPayTo->setBuddy(payTo);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to  (e.g. 4Zo1ga6xuKuQ7JV7M9rGDoxdbYwV5zgQJ5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblLabel->setText(QApplication::translate("SendCoinsEntry", "LABEL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblAmount->setText(QApplication::translate("SendCoinsEntry", "AMOUNT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        lblPayTo->setText(QApplication::translate("SendCoinsEntry", "PAY TO", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SendCoinsEntry);
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
