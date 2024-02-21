#ifndef LOMAKE2_H
#define LOMAKE2_H

#include <QDialog>

namespace Ui {
class lomake2;
}

class lomake2 : public QDialog
{
    Q_OBJECT

public:
    explicit lomake2(QWidget *parent = nullptr);
    ~lomake2();

    void setNimiPaavalikosta(const QString &newNimiPaavalikosta);

    QString getSukunimi() const;

private slots:
    void on_btnTallennaSukunimi_clicked();

private:
    Ui::lomake2 *ui;
    QString nimiPaavalikosta;       // muuttuja nimeä varten, tehdään sille setteri
    QString sukunimi="anonymous";   // luodaan muuttuja mainwindowhin lähettämistä varten
    void closeEvent(QCloseEvent *e);    // tämä metodi luodaan jos halutaan määrittää mitä tapahtuu kun lomake suljetaan

signals:                            // tämä lisätty itse
    void sukunimiOnTallennettu();

};

#endif // LOMAKE2_H
