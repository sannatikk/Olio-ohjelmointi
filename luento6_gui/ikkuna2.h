#ifndef IKKUNA2_H
#define IKKUNA2_H

#include <QDialog>

namespace Ui {
class Ikkuna2;
}

class Ikkuna2 : public QDialog
{
    Q_OBJECT

public:
    explicit Ikkuna2(QWidget *parent = nullptr);
    ~Ikkuna2();
    void setEtunimi (QString en);   // muuttuja etunimeä varten, huom täytyy laittaa public jotta main window voi käyttää sitä
    void setSukunimi (QString sn);

private:
    Ui::Ikkuna2 *ui;
};

#endif // IKKUNA2_H
