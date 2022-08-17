//
// Created by Martin Šulc on 05.05.2021.
//

#include "Lokace.h"

Lokace::Lokace() {
    m_jmeno = "";
    m_pozice.x = 0;
    m_pozice.y = 0;
}

void Lokace::setJmeno(std::string jmeno) {
    m_jmeno = jmeno;
}

std::string Lokace::getJmeno() {
    return m_jmeno;
}

void Lokace::setPozice(float x, float y) {
    m_pozice.x = x;
    m_pozice.y = y;
}

float Lokace::getPoziceX() {
    return m_pozice.x;
}

float Lokace::getPoziceY(){
    return m_pozice.y;
}

void Lokace::pridejMisto(SpecialMisto *specialMisto) {
    m_misto.push_back(specialMisto);
}

void Lokace::odeberMisto(SpecialMisto* specialMisto) {//az budou hotovy mista

}

void Lokace::setLore(std::string lore) {
    m_lore = lore;
}

std::string Lokace::getLore() {
    return m_lore;
}

