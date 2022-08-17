//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_EASYENEMYFACTORY_H
#define LOD_CPP_EASYENEMYFACTORY_H


#include "EnemyFactory.h"
#include "WeakNormalShip.h"
#include "WeakSpaceMonster.h"
#include "WeakBoss.h"

class EasyEnemyFactory:public EnemyFactory{
public:
    NormalShip* getNormalShip();
    SpaceMonster* getSpaceMonster();
    Boss* getBoss();
};


#endif //LOD_CPP_EASYENEMYFACTORY_H
