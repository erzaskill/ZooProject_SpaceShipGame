//
// Created by Martin Šulc on 07.05.2021.
//

#ifndef LOD_CPP_LOZIONBUILDER_H
#define LOD_CPP_LOZIONBUILDER_H

#include "../Hlavicka/Lokace_Builder.h"

class LozionBuilder: public Lokace_Builder {
public:
    void setobsahLokace() override;
};


#endif //LOD_CPP_LOZIONBUILDER_H
