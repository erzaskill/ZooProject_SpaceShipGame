//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_STRONGNORMALSHIP_H
#define LOD_CPP_STRONGNORMALSHIP_H

#include "NormalShip.h"
#include <string>

class StrongNormalShip:public NormalShip {
protected:
    std::string m_shipsJmeno;
    float m_shipsDamage;
    float m_shipsExtraDamage;
    float m_shipsHealth;
    float m_shipsArmor;
    //Itemy m_itemDrop;
    float m_coinDrop;
public:
    StrongNormalShip(float shipsDamage, float shipsExtraDamage, float shipsHealth, float shipsArmor, float coinDrop); //not sure tady
    float getAttack();

    //not sure, jestli potreba
    float getShipsDamage();
    float getShipsExtraDamage();
    std::string getShipsJmeno();
    float getShipsHealth();
    float getShipsArmor();
    //Itemy getShipsItemDrop();
};


#endif //LOD_CPP_STRONGNORMALSHIP_H
