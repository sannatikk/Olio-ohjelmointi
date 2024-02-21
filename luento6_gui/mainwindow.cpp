#include "mainwindow.h"
#include "ikkuna2.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // kutsutaan ui-luokan metodia setup & this-osoitin

    ui->btnAvaaSeuraava->setDisabled(true); // estetään seuraavaan ikkunaan heti hyppääminen
}

MainWindow::~MainWindow()
{
    ui = nullptr;   // nollataan mihin pointteri osoittaa
    delete ui;      // tuhotaan pointteriolio
}

void MainWindow::on_btnTestinappi_clicked()
{
    painallustenMaara++;
    QString pM = QString::number(painallustenMaara);                           // muutetaan int QString-muotoon jotta sen voi lähettää tekstikenttään
    qDebug() << "Testinappia painettu!";                                       // debug-sanomat menevät vain application outputiin testinä
    ui->labelTestiteksti->setText("Testinappia painettu " +pM+ " kertaa!");    // päästään käsiksi ui-olion kautta! muutetaan tekstinäkymä, kun nappia on painettu
}


void MainWindow::on_btnTallenna_clicked()
{
    etunimi = ui->txtEtunimi->text();                                   // tämä lukee txt-etunimi kenttään kirjoitetun ja tallentaa jo olemassa olevaan muuttujaan
    sukunimi = ui->txtSukunimi->text();                                 // tämä lukee txt-sukunimi kenttään kirjoitetun ja tallentaa muuttujaan
    ui->labelTervehdys->setText("Moro, " +etunimi+ " " +sukunimi+ "!"); // muutetaan tervehdys-tekstikentän teksti

    ui->btnAvaaSeuraava->setDisabled(false);                            // nyt voi edetä seuraavaan ikkunaan

}


void MainWindow::on_btnAvaaSeuraava_clicked()
{
    qDebug() << "btnAvaaSeuraava painettu!";
    Ikkuna2 *olioIkkuna2 = new Ikkuna2(this);   // luodaan dynaamisesti objekti uudelle ikkunalle jotta se ei saman tien tuhoudu; kun laitetaan mainwindow parametriksi niin Ikkuna2-olio tuhoutuu myös suljettaessa pääikkunan
    olioIkkuna2->setEtunimi(etunimi);           // asetetaan etunimimuuttuja toisen ikkunan setEtunimi-funktioon
    olioIkkuna2->setSukunimi(sukunimi);         // asetetaan sukunimimuuttuja toisen ikkunan setSukunimi-funktioon

    olioIkkuna2->show();                        // show-metodi avaa ikkunan annetulla etunimellä, huom jos laitat ->open niin sitä ei macillä voi sulkea ilman että jossain päin koodia on close() :D
    // olioIkkuna2->open(); // tämä estää ekaan ikkunaan kirjoittamisen ennen kuin toka on suljettu
}

