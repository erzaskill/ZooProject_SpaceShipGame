//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_WEAKSPACEMONSTER_H
#define LOD_CPP_WEAKSPACEMONSTER_H

#include "SpaceMonster.h"
#include <string>

class WeakSpaceMonster:public SpaceMonster {
protected:
    std::string m_monstersJmeno;
    float m_monstersDamage;
    float m_monstersHealth;
    float m_monstersArmor;
    //Itemy m_itemDrop;
    float m_coinDrop;
public:
    WeakSpaceMonster(float monstersDamage, float monstersHealth, float monstersArmor, float coinDrop); //not sure tady
    float getAttack();

    //not sure jestli potreba
    float getMonstersDamage();
    std::string getMonstersJmeno();
    float getMonstersHealth();
    float getMonstersArmor();
    //Itemy getMonstersItemDrop();
};


#endif //LOD_CPP_WEAKSPACEMONSTER_H
