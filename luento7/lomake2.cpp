#include "lomake2.h"
#include "ui_lomake2.h"

lomake2::lomake2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::lomake2)
{
    ui->setupUi(this);
}

lomake2::~lomake2()
{
    delete ui;
}

void lomake2::setNimiPaavalikosta(const QString &newNimiPaavalikosta)
{
    nimiPaavalikosta = newNimiPaavalikosta;
    ui->lblEtunimi->setText("Etunimesi on " +newNimiPaavalikosta);
}

void lomake2::on_btnTallennaSukunimi_clicked()
{
    sukunimi = ui->txtSukunimi->text(); // luetaan sukunimi muuttujaan
    emit sukunimiOnTallennettu();       // lähetetään signaali, että nyt on tallennettu sukunimi
    //this->close();                    // sulje modaali-ikkuna
}

void lomake2::closeEvent(QCloseEvent *e)
{
    sukunimi = ui->txtSukunimi->text(); // luetaan sukunimi muuttujaan
    emit sukunimiOnTallennettu();       // lähetetään signaali, että nyt on tallennettu sukunimi
    // eli vaikka me poistuttaisiin ikkunasta ennen tallenna-napin painamista, se silti lukee tekstin ja tallentaa + emittaa signaalin

}

QString lomake2::getSukunimi() const
{
    return sukunimi;
}

