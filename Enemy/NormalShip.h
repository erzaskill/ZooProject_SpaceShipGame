//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_NORMALSHIP_H
#define LOD_CPP_NORMALSHIP_H


class NormalShip {
public:
    virtual	float getAttack() = 0.0;
    NormalShip(){}
    virtual ~NormalShip(){};
};


#endif //LOD_CPP_NORMALSHIP_H
