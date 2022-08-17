//
// Created by Otakar on 09.05.2021.
//

#include "Booster.h"

Booster::Booster(float damage, float cena, float health, float armor) {
    m_damage = damage;
    m_cena = cena;
    m_armor = armor;
    m_health = health;
    m_jmeno = "";
}

float Booster::getDamage() {
    return m_damage;
}

float Booster::getCena() {
    return m_cena;
}

float Booster::getArmor() {
    return m_armor;
}

float Booster::getHealth() {
    return m_health;
}

void Booster::setName(std::string jmeno) {
    m_jmeno = jmeno;
}

void Booster::printInfo() {
    std::cout << "Staty Predmetu" << std::endl << "Armor: " << m_armor << std::endl << "Health: " << m_health << std::endl << std::endl << "Damage: " << m_damage << std::endl << "Cena: " << m_cena << std::endl;
}
