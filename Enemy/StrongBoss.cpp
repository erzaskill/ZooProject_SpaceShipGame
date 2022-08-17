//
// Created by skajl on 2021-05-07.
//

#include "StrongBoss.h"
#include <string>

StrongBoss::StrongBoss(float bossDamage, float bossExtraDamage, float bossHealth, float bossArmor, float coinDrop){
    m_bossDamage = bossDamage;
    m_bossExtraDamage = bossExtraDamage;
    m_bossHealth = bossHealth;
    m_bossArmor = bossArmor;
    m_coinDrop = coinDrop;
}
float StrongBoss::getAttack(){
    return m_bossDamage+m_bossExtraDamage;
}
void StrongBoss::reincarnation(){
    //TADY VUBEC NWM TEDKA - TAKZE TODO
}


//netusim jestli je tohle potreba
float StrongBoss::getBossDamage(){
    return m_bossDamage;
}
float StrongBoss::getBossHealth(){
    return m_bossHealth;
}
float StrongBoss::getBossArmor(){
    return m_bossArmor;
}
std::string StrongBoss::getBossJmeno(){
    return m_bossJmeno;
}
/*Itemy StrongBoss::getBossItemDrop(){
    return m_itemDrop;
}*/
