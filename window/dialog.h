#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QPushButton *btn;

private slots:
    void btnClick();

};


#endif // DIALOG_H
