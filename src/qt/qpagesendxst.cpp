#include "qpagesendxst.h"

QPageSendXNC::QPageSendXNC(QWidget *parent) :
    QStealthPage(parent)
{
    sendCoinsPage = new SendCoinsDialog(this);
    sendCoinsPage->setGeometry(0, 0, SC_PAGE_WIDTH, SC_PAGE_HEIGHT);
    sendCoinsPage->showNormal();
}

void QPageSendXNC::setModel(WalletModel *model)
{
    sendCoinsPage->setModel(model);
}

void QPageSendXNC::showOutOfSyncWarning(bool fShow)
{
    sendCoinsPage->showOutOfSyncWarning(fShow);
}

