//
// Created by Otakar on 09.05.2021.
//

#ifndef LOD_CPP_BOOSTER_H
#define LOD_CPP_BOOSTER_H
#include "Items.h"
#include <iostream>


class Booster: public Items {
    Booster(float damage, float cena, float health,float armor);
    float getDamage();
    float getCena();
    float getArmor();
    float getHealth();
    void setName(std::string jmeno);
    void printInfo();

};


#endif //LOD_CPP_BOOSTER_H
