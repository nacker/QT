#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTimer>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QPushButton *btn;
    QLineEdit *num1, *num2;
    QLabel *label;

    QTimer *time1;

private slots:
    void add();

    void on_time();
};

#endif // DIALOG_H
