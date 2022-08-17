//
// Created by skajl on 2021-05-07.
//

#include "StrongNormalShip.h"
#include <string>

StrongNormalShip::StrongNormalShip(float shipsDamage, float shipsExtraDamage, float shipsHealth, float shipsArmor, float coinDrop) {
    m_shipsDamage = shipsDamage;
    m_shipsExtraDamage = shipsExtraDamage;
    m_shipsHealth = shipsHealth;
    m_shipsArmor = shipsArmor;
    m_coinDrop = coinDrop;
}
float StrongNormalShip::getAttack(){
    return m_shipsDamage+m_shipsExtraDamage;
}


//netusim jestli je tohle potreba
float StrongNormalShip::getShipsDamage(){
    return m_shipsDamage;
}
float StrongNormalShip::getShipsExtraDamage(){
    return m_shipsDamage;
}
float StrongNormalShip::getShipsHealth(){
    return m_shipsHealth;
}
float StrongNormalShip::getShipsArmor(){
    return m_shipsArmor;
}
std::string StrongNormalShip::getShipsJmeno(){
    return m_shipsJmeno;
}
/*Itemy StrongNormalShip::getShipItemDrop(){
    return m_itemDrop;
}*/
