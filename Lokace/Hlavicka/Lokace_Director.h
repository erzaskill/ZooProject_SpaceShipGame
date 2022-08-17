//
// Created by Martin Šulc on 05.05.2021.
//

#ifndef LOD_CPP_LOKACE_DIRECTOR_H
#define LOD_CPP_LOKACE_DIRECTOR_H


#include "Lokace_Builder.h"
#include "Lokace.h"

class Lokace_Director {
    Lokace_Builder* m_builder;
public:
    Lokace_Director(Lokace_Builder* builder);
    void setBuilder(Lokace_Builder* builder);
    Lokace* constructLokace();

};


#endif //LOD_CPP_LOKACE_DIRECTOR_H
