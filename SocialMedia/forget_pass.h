#ifndef FORGET_PASS_H
#define FORGET_PASS_H

#include <QDialog>

namespace Ui {
class forget_pass;
}

class forget_pass : public QDialog
{
    Q_OBJECT

public:
    explicit forget_pass(QWidget *parent = nullptr);
    ~forget_pass();

private slots:
    void on_Cancel_btn_clicked();

    void on_Pass_btn_clicked();

private:
    Ui::forget_pass *ui;
};

#endif // FORGET_PASS_H
