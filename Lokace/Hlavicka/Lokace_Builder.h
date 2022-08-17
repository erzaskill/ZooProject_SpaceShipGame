//
// Created by Martin Šulc on 05.05.2021.
//

#ifndef LOD_CPP_LOKACE_BUILDER_H
#define LOD_CPP_LOKACE_BUILDER_H


#include "Lokace.h"

class Lokace_Builder {
protected:
    Lokace* m_lokace;
public:
    Lokace_Builder();
    void createNewLokace();
    virtual void setobsahLokace()=0;
    Lokace* getlokace();

};


#endif //LOD_CPP_LOKACE_BUILDER_H
