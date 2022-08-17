//
// Created by Otakar on 09.05.2021.
//

#include "Zbran.h"

Zbran::Zbran(float damage, float cena) {
    m_jmeno = "";
    m_armor = 0;
    m_cena = cena;
    m_damage = damage;
    m_health = 0;
}

float Zbran::getDamage() {
    return m_damage;
}

float Zbran::getCena() {
    return m_cena;
}

void Zbran::printInfo() {
    std::cout << "Staty Predmetu" << std::endl << "Damage: " << m_damage << std::endl << "Cena: " << m_cena << std::endl;

}

void Zbran::setName(std::string jmeno) {
    m_jmeno = jmeno;
}
