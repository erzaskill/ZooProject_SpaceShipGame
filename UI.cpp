//
// Created by Martin Šulc on 08.05.2021.
//

#include "UI.h"
#include <math.h>


UI::UI() {
    vytvorLokace();
    m_hrac = new Lod("");
    nastavJmeno();
    m_hrac->vypisInfo();
    std::cout << std::endl;
    m_aktualniLokace = m_lokace.at(0);
    vypisPrikazy();
}
//vypis zakladnich prikazu
void UI::vypisPrikazy() {
    std::cout << "Vyber si:" << std::endl << "0) Informace o lokaci" <<std::endl << "1) Informace o lodi" <<
    std::endl << "2) presun na jinou planetu" << std::endl
    << "3) zmen si jmeno" << std::endl << "4) Konec hry";
    nactiVstup();

}


//Funkce na presun
void UI::presunSe() {
    int x,i=0;
    while (i!=1){
    kamDoletiLod();
    std::cout << "Vyber planetu(0-6):" << std::endl;
    std::cin >> x;

    if (x>=0 and x<7){
        double vzorecPaliva = abs((sqrt(pow(m_lokace.at(x)->getPoziceX() - m_hrac->getSouradniceX(), 2) + pow(m_lokace.at(x)->getPoziceY() - m_hrac->getSouradniceY(), 2) * 1.0)));
        if(vzorecPaliva * m_hrac->getfuelconsumption() > m_hrac->getFuel()){
            std::cout << "Paliva nebylo dostatek pro presun, proto si se ztratil nekde ve vesmiru, bohuzel tu pro tebe cesta konci";
            exit(0);
        }
        m_hrac->setSouradnice(m_lokace.at(x)->getPoziceX(),m_lokace.at(x)->getPoziceY());
        m_aktualniLokace = m_lokace.at(x);
        m_hrac->presunLod(vzorecPaliva * m_hrac->getfuelconsumption());
        std::cout << "Presun probehl bez problemu" << std::endl;


        i++;
    } else{
        std::cout << "Chyba, spatne zadany vstup"<< std::endl;
    }
    }
}
//K zakladnimu vypisu = nacti vstup; nefunguje pokud je zadanej spatnej vstup
void UI::nactiVstup() {
    int x,i=0;
    while (i!=1) {

        std::cin >> x;
        if (x == 0 or x == 1 or x == 2) {
            switch (x) {
                case 0:
                    informaceoLokaci();
                    break;
                case 1:
                    m_hrac->vypisInfo();
                    break;
                case 2:
                    presunSe();
                    break;
                case 3:
                    nastavJmeno();
                    break;
                case 4:
                    std::cout << "Konec" << std::endl;
                    exit(0);
            }

        } else {
            std::cout << "Chyba, spatne zadany vstup" << std::endl;
            break;
        }
    }
}

void UI::nastavJmeno() {
    std::cout << "Zvol si jmeno" << std::endl;
    std::string jmeno;
    std::cin >> jmeno;
    m_hrac->setJmeno(jmeno);
    std::cout << "Vitej " << jmeno << std::endl;
    std::cout << std::endl;
}

void UI::prozkoumat() {
    for (int i = 0; i < m_lokace.size(); ++i) {
        std::cout  << std::endl << i << ") " << "Planeta: " <<m_lokace.at(i)->getJmeno() << std::endl << "Souradnice: " << std::endl << "X: " <<
        m_lokace.at(i)->getPoziceX() << std::endl << "Y: " << m_lokace.at(i)->getPoziceY() << std::endl;

    }

}

void UI::vytvorLokace() {
    Lokace_Director* director = new Lokace_Director(new AviliaBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new CodaphusBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new LozionBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new OrusBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new SaterBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new UnnarsBuilder());
    m_lokace.push_back(director->constructLokace());
    director->setBuilder(new UrutaBuilder());
    m_lokace.push_back(director->constructLokace());
}

void UI::informaceoLokaci() {
    std::cout << "Aktualni lokace je: " << m_aktualniLokace->getJmeno() << std::endl << "nachazi se na souradnicich: X:" <<
    m_aktualniLokace->getPoziceX() << " Y:" << m_aktualniLokace->getPoziceY() << std::endl << "Zakladni informace: " << m_aktualniLokace->getLore() << std::endl;

}


void UI::kamDoletiLod() {
    std::cout << "Lze doletet na tyto planety: " << std::endl;
    for (int i = 0; i < m_lokace.size(); ++i) {
        double vzorecPaliva = (abs((sqrt(pow(m_lokace.at(i)->getPoziceX() - m_hrac->getSouradniceX(), 2) + pow(m_lokace.at(i)->getPoziceY() - m_hrac->getSouradniceY(), 2) * 1.0))))* m_hrac->getfuelconsumption();
        if (vzorecPaliva < m_hrac->getFuel()) {
            if (m_lokace.at(i) == m_aktualniLokace) {
                std::cout << '[' << i << ']' << m_lokace.at(i)->getJmeno() << " - zde se prave nachazite" << std::endl;
            } else {
                std::cout << '[' << i << ']' << m_lokace.at(i)->getJmeno() << " - spotreba paliva: " << vzorecPaliva << std::endl;
            }
        }else{
            std::cout << '{' << i << '}' << m_lokace.at(i)->getJmeno() << " - spotreba paliva: " << vzorecPaliva << std::endl;
        }
    } std::cout << "Cesta na planety oznacenymi [] je bezproblemova, u planet s oznacenim {} je Vas osud pouze a jenom zavisly na stesti" << std::endl;
}