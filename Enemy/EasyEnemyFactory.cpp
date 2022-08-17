//
// Created by skajl on 2021-05-07.
//

#include "EasyEnemyFactory.h"

NormalShip* EasyEnemyFactory::getNormalShip(){
    return new WeakNormalShip(10, 20, 10, 20);
}

SpaceMonster* EasyEnemyFactory::getSpaceMonster(){
    return new WeakSpaceMonster(20, 10, 5, 10);
}

Boss* EasyEnemyFactory::getBoss(){
    return new WeakBoss(40, 60, 20, 150);
}