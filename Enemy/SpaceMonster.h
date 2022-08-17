//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_SPACEMONSTER_H
#define LOD_CPP_SPACEMONSTER_H


class SpaceMonster {
public:
    virtual	float getAttack() = 0.0;
    SpaceMonster(){}
    virtual ~SpaceMonster(){};
};


#endif //LOD_CPP_SPACEMONSTER_H
