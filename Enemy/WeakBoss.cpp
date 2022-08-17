//
// Created by skajl on 2021-05-07.
//

#include "WeakBoss.h"
#include <string>

WeakBoss::WeakBoss(float bossDamage, float bossHealth, float bossArmor, float coinDrop) {
    m_bossDamage = bossDamage;
    m_bossHealth = bossHealth;
    m_bossArmor = bossArmor;
    m_coinDrop = coinDrop;
}
float WeakBoss::getAttack(){
    return m_bossDamage;
}
void WeakBoss::reincarnation(){
    //TADY VUBEC NWM TEDKA - TAKZE TODO
}

//netusim jestli je tohle potreba
float WeakBoss::getBossDamage(){
    return m_bossDamage;
}
float WeakBoss::getBossHealth(){
    return m_bossHealth;
}
float WeakBoss::getBossArmor(){
    return m_bossArmor;
}
std::string WeakBoss::getBossJmeno(){
    return m_bossJmeno;
}
/*Itemy WeakBoss::getBossItemDrop(){
    return m_itemDrop;
}*/