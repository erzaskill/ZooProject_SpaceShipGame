//
// Created by Martin Šulc on 07.05.2021.
//

#ifndef LOD_CPP_AVILIABUILDER_H
#define LOD_CPP_AVILIABUILDER_H

#include "../Hlavicka/Lokace_Builder.h"

class AviliaBuilder: public Lokace_Builder {
public:
    void setobsahLokace() override;
};


#endif //LOD_CPP_AVILIABUILDER_H
