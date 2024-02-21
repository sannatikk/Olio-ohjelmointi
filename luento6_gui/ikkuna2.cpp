#include "ikkuna2.h"
#include "ui_ikkuna2.h"

Ikkuna2::Ikkuna2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Ikkuna2)
{
    ui->setupUi(this);
}

Ikkuna2::~Ikkuna2()
{
    qDebug() << "Ikkuna2 olio tuhottu!";
    delete ui;
}

void Ikkuna2::setEtunimi(QString en)
{
    qDebug() << "setEtunimi suoritettu";
    ui->labelTerveEtunimi->setText("Mukava nähdä, " +en+ "!");  // tervehdys toiseen ikkunaan
}

void Ikkuna2::setSukunimi(QString sn)
{
    ui->labelTerveSukunimi->setText("Sukunimesi " +sn+ " on poikkeuksellisen hieno.");
}
