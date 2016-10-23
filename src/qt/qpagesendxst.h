#ifndef QPAGESENDXNC_H
#define QPAGESENDXNC_H

#include "qstealthpage.h"
#include "qhoverbutton.h"
#include "sendcoinsdialog.h"
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>

class QPageSendXNC : public QStealthPage
{
    Q_OBJECT
public:
    explicit QPageSendXNC(QWidget *parent = 0);

    void setModel(WalletModel *model);
    void showOutOfSyncWarning(bool fShow);

public:
    SendCoinsDialog *sendCoinsPage;
};

#endif // QPAGESENDXNC_H
