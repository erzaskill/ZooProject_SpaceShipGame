//
// Created by Otakar on 09.05.2021.
//

#include "Armor.h"

Armor::Armor(float armor, float health, float cena) {
    m_armor = armor;
    m_health = health;
    m_cena = cena;
    m_damage = 0;
    m_jmeno = "";

}

float Armor::getArmor() {
    return m_armor;
}

float Armor::getHealth() {
    return m_health;
}

float Armor::getCena() {
    return m_cena;
}
void Armor::printInfo() {
    std::cout << "Staty predmetu" << std::endl << "Armor: " << m_armor << std::endl << "Health: " << m_health << std::endl << "Cena: " << m_cena << std::endl;
}

void Armor::setName(std::string jmeno) {
   m_jmeno = jmeno;
}
