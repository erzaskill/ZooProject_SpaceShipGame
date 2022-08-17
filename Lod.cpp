//
// Created by Otakar on 04.05.2021.
//

#include "Lod.h"
#include "UI.h"

Lod::Lod(std::string jmeno) {
    m_jmeno = jmeno;
    m_pozice.x = 0;
    m_pozice.y = 0;
    m_health = 1000;
    m_armor = 10;
    m_damage = 75;
    m_fuel = 15000;
    m_coins = 1200;
    m_fuelconsumption = 0.25;
}

void Lod::presunLod(double fuel) {
    m_fuel = m_fuel - fuel;
}

void Lod::vypisInfo() {
    std::cout << "Zakladni informace o lodi" << std::endl;
    std::cout << "Nazev: "<< m_jmeno << std::endl << "Zdravi: "<< m_health << std::endl << "Armor: " << m_armor << std::endl;
    std::cout << "Palivo: "<< m_fuel << std::endl << "Potencialni poskozeni: "<< m_damage << std::endl << "Penize: " << m_coins << std::endl;
}

float Lod::getDamage() {
    return m_damage;
}

float Lod::getHelth() {
    return m_health;
}

float Lod::getArmor() {
    return m_armor;
}

float Lod::getCoins() {
    return m_coins;
}

float Lod::getFuel() {
    return m_fuel;
}

float Lod::getSouradniceX() {
    return m_pozice.x;
}

float Lod::getSouradniceY() {
    return m_pozice.y;
}

void Lod::pouziUpgrade() {

}

void Lod::pridejDoInventare() {

}
void Lod::setJmeno(std::string name) {
    m_jmeno = name;
}

void Lod::setSouradnice(float x, float y) {
    m_pozice.x=x;
    m_pozice.y=y;
}


void Lod::useBooster() {

}

void Lod::odeberUpgrade() {

}

void Lod::addHealth(float health) {
    m_health += health;

}

void Lod::addDamage(float damage) {
    m_damage += damage;
}

void Lod::addArmor(float armor) {
    m_armor += armor;
}

void Lod::addFuel(float fuel) {
    m_fuel += fuel;
}

float Lod::getfuelconsumption() {
    return m_fuelconsumption;
}
