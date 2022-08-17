//
// Created by Otakar on 04.05.2021.
//

#ifndef PROJEKT_ZOO_LOD_H
#define PROJEKT_ZOO_LOD_H
#include <string>
#include <iostream>
#include <vector>
#include "Pozice.h"
#include "Items/Items.h"


class Lod {
    std::string m_jmeno;
    float m_damage=0;
    float m_health;
    float m_armor;
    float m_fuel;
    float m_coins;
    float m_fuelconsumption;
    Pozice m_pozice;
    std::vector<Items*>items;
    std::vector<Items*>sloty;

public:
    Lod(std::string jmeno);
    void presunLod(double fuel);
    void vypisInfo();
    float getDamage();
    float getHelth();
    float getArmor();
    float getCoins();
    float getFuel();
    float getSouradniceX();
    float getSouradniceY();
    void pouziUpgrade();
    void pridejDoInventare();
    void setJmeno(std::string name);
    void addHealth(float health);
    void addDamage(float damage);
    void addArmor(float armor);
    void addFuel(float fuel);
    void setSouradnice(float x, float y);
    void useBooster();
    void odeberUpgrade();
    float getfuelconsumption();



};


#endif //PROJEKT_ZOO_LOD_H
