//
// Created by skajl on 2021-05-07.
//

#include "StrongSpaceMonster.h"
#include <string>

StrongSpaceMonster::StrongSpaceMonster(float monstersDamage, float monstersExtraDamage, float monstersHealth, float monstersArmor, float coinDrop) {
    m_monstersDamage = monstersDamage;
    m_monstersExtraDamage = monstersExtraDamage;
    m_monstersHealth = monstersHealth;
    m_monstersArmor = monstersArmor;
    m_coinDrop = coinDrop;
}
float StrongSpaceMonster::getAttack(){
    return m_monstersDamage+m_monstersExtraDamage;
}


//netusim jestli je tohle potreba
float StrongSpaceMonster::getMonstersDamage(){
    return m_monstersDamage;
}
float StrongSpaceMonster::getMonstersExtraDamage(){
    return m_monstersExtraDamage;
}
float StrongSpaceMonster::getMonstersHealth(){
    return m_monstersHealth;
}
float StrongSpaceMonster::getMonstersArmor(){
    return m_monstersArmor;
}
std::string StrongSpaceMonster::getMonstersJmeno(){
    return m_monstersJmeno;
}
/*Itemy StrongSpaceMonster::getMonstersItemDrop(){
    return m_itemDrop;
}*/