//
// Created by skajl on 2021-05-07.
//

#include "HardEnemyFactory.h"

NormalShip* HardEnemyFactory::getNormalShip(){
    return new StrongNormalShip(10,15, 40, 20, 40);
}

SpaceMonster* HardEnemyFactory::getSpaceMonster(){
    return new StrongSpaceMonster(20,25, 30, 15, 20);
}

Boss* HardEnemyFactory::getBoss(){
    return new StrongBoss(40,60, 100, 30, 300);
}