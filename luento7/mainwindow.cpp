#include "mainwindow.h"
#include "lomake2.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    olioLomake2 = new lomake2(this); // luodaan heti kättelyssä; jotta voidaan avata lomake 2 siitä tarvitaan dynaaminen lomake2-luokan olio, tämä on alustettu h-tiedostossa

}

MainWindow::~MainWindow()
{
    delete ui;  // tämä on luotu automaattisesti poistamaan ui-olio
}

void MainWindow::on_btnTallenna_clicked()
{
    etunimi = ui->txtEtunimi->text();                // pääikkunaolion txtetunimi-kentästä tallennetaan etunimi-muuttujaan
    ui->lblViesti->setText("Terve, " +etunimi+ "!"); // asetetaan pääikkunan lblviesti-kentän teksti
}


void MainWindow::on_btnAvaaLomake2_clicked()
{
    // järjestys: connect(olionimi, signaali(signaalinimi()), olionimi, slot(slotnimi()))
    connect(olioLomake2, SIGNAL(sukunimiOnTallennettu()), this, SLOT(slotNaytaSukunimi())); // tällä yhdistetään signaaliin

    olioLomake2->setNimiPaavalikosta(etunimi);  // lähetetään etunimi funktioon jotta se näkyy lomake2:ssa
    olioLomake2->show();                        // tällä vaihtoehdolla pystyy muokkaamaan
    //olioLomake2->open();                      // tällä vaihtoehdolla et pääse muokkaamaan pääikkunaa jos modaali-ikkuna on auki
}

void MainWindow::slotNaytaSukunimi()                        // tämä on manuaalisesti luotu slotti, alustettu h-tiedostossa; eli tämä tapahtuu vasta kun emitataan signaali jossain
{
    QString sukunimi= olioLomake2->getSukunimi();           // kutsutaan getSukunimi-funktiota ja tallennetaan paluuarvo paikalliseen sukunimi-muuttujaan
    ui->lblSukunimi->setText("Sukunimesi on "+sukunimi);    // asetetaan pääikkunan lblSukunimi-kenttään tekstiksi äsken saatu sukunimi
}

