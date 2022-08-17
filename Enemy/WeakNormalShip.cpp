//
// Created by skajl on 2021-05-07.
//

#include "WeakNormalShip.h"
#include <string>

WeakNormalShip::WeakNormalShip(float shipsDamage, float shipsHealth, float shipsArmor, float coinDrop) {
    m_shipsDamage = shipsDamage;
    m_shipsHealth = shipsHealth;
    m_shipsArmor = shipsArmor;
    m_coinDrop = coinDrop;
}
float WeakNormalShip::getAttack(){
    return m_shipsDamage;
}


//netusim jestli je tohle potreba
float WeakNormalShip::getShipsDamage(){
    return m_shipsDamage;
}
float WeakNormalShip::getShipsHealth(){
    return m_shipsHealth;
}
float WeakNormalShip::getShipsArmor(){
    return m_shipsArmor;
}
std::string WeakNormalShip::getShipsJmeno(){
    return m_shipsJmeno;
}
/*Itemy WeakNormalShip::getShipItemDrop(){
    return m_itemDrop;
}*/