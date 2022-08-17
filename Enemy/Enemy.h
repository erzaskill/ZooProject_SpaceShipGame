//
// Created by Martin Šulc on 05.05.2021.
//

#ifndef LOD_CPP_ENEMY_H
#define LOD_CPP_ENEMY_H


#include <string>

class Enemy {
    std::string m_jmeno;
    float m_damage;
    float m_health;
    float m_armor;
    //Itemy m_itemDrop;
    float m_coinDrop;

public:
    float getDamage();
    std::string getJmeno();
    float getHealth();
    float getArmor();
    //Itemy getItemDrop();
};


#endif //LOD_CPP_ENEMY_H
