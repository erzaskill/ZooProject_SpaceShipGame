//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_ENEMYFACTORY_H
#define LOD_CPP_ENEMYFACTORY_H


#include "NormalShip.h"
#include "SpaceMonster.h"
#include "Boss.h"

class EnemyFactory{
public:
    virtual NormalShip* getNormalShip() = 0;
    virtual SpaceMonster* getSpaceMonster() = 0;
    virtual Boss* getBoss() = 0;
};


#endif //LOD_CPP_ENEMYFACTORY_H
