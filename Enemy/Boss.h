//
// Created by skajl on 2021-05-07.
//

#ifndef LOD_CPP_BOSS_H
#define LOD_CPP_BOSS_H


class Boss {
public:
    virtual	float getAttack() = 0.0;
    Boss(){}
    virtual ~Boss(){};
};


#endif //LOD_CPP_BOSS_H
