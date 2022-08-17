//
// Created by skajl on 2021-05-07.
//

#include "WeakSpaceMonster.h"
#include <string>

WeakSpaceMonster::WeakSpaceMonster(float monstersDamage, float monstersHealth, float monstersArmor, float coinDrop) {
    m_monstersDamage = monstersDamage;
    m_monstersHealth = monstersHealth;
    m_monstersArmor = monstersArmor;
    m_coinDrop = coinDrop;
}
float WeakSpaceMonster::getAttack(){
    return m_monstersDamage;
}


//netusim jestli je tohle potreba
float WeakSpaceMonster::getMonstersDamage(){
    return m_monstersDamage;
}
float WeakSpaceMonster::getMonstersHealth(){
    return m_monstersHealth;
}
float WeakSpaceMonster::getMonstersArmor(){
    return m_monstersArmor;
}
std::string WeakSpaceMonster::getMonstersJmeno(){
    return m_monstersJmeno;
}
/*Itemy WeakSpaceMonster::getMonstersItemDrop(){
    return m_itemDrop;
}*/