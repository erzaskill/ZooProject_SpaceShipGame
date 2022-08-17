//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_HARDENEMYFACTORY_H
#define LOD_CPP_HARDENEMYFACTORY_H


#include "EnemyFactory.h"
#include "StrongNormalShip.h"
#include "StrongSpaceMonster.h"
#include "StrongBoss.h"

class EasyEnemyFactory:public EnemyFactory{
public:
    NormalShip* getNormalShip();
    SpaceMonster* getSpaceMonster();
    Boss* getBoss();
};


#endif //LOD_CPP_HARDENEMYFACTORY_H
