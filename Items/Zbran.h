//
// Created by Otakar on 09.05.2021.
//

#ifndef LOD_CPP_ZBRAN_H
#define LOD_CPP_ZBRAN_H
#include "Items.h"


class Zbran: public Items {
public:
    Zbran(float damage, float cena);
    float getDamage() ;
    float getCena() ;
    void setName(std::string jmeno) ;
    void printInfo() ;
};


#endif //LOD_CPP_ZBRAN_H
