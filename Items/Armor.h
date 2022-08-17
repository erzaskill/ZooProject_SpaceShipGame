//
// Created by Otakar on 09.05.2021.
//

#ifndef LOD_CPP_ARMOR_H
#define LOD_CPP_ARMOR_H
#include "Items.h"


class Armor: public Items  {
public:
    Armor(float armor, float health, float cena);
    float getArmor();
    float getHealth();
    float getCena();
    void printInfo();
    void setName(std::string jmeno);

};


#endif //LOD_CPP_ARMOR_H
