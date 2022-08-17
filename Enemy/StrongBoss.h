//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_STRONGBOSS_H
#define LOD_CPP_STRONGBOSS_H


#include "Boss.h"
#include <string>

class StrongBoss:public Boss {
protected:
    std::string m_bossJmeno;
    float m_bossDamage;
    float m_bossExtraDamage;
    float m_bossHealth;
    float m_bossArmor;
    //Itemy m_itemDrop;
    float m_coinDrop;
public:
    StrongBoss(float bossDamage, float bossExtraDamage, float bossHealth, float bossArmor, float coinDrop); //not sure tady
    float getAttack();
    void reincarnation();

    //not sure jestli potreba
    float getBossDamage();
    float getBossExtraDamage();
    std::string getBossJmeno();
    float getBossHealth();
    float getBossArmor();
    //Itemy getBossItemDrop();
};


#endif //LOD_CPP_STRONGBOSS_H
