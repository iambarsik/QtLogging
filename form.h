#ifndef FORM_H
#define FORM_H

#include <QWidget>

#include "qlogging.h"

QT_BEGIN_NAMESPACE
namespace Ui { class form; }
QT_END_NAMESPACE

class form : public QWidget
{
    Q_OBJECT

public:
    form(QWidget *parent = nullptr);
    ~form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::form *ui;

    loggingQ log;
};
#endif // FORM_H
