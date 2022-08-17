//
// Created by Martin Šulc on 05.05.2021.
//

#include <iostream>
#include "Lokace_Builder.h"

Lokace_Builder::Lokace_Builder() {
    m_lokace = nullptr;
}

void Lokace_Builder::createNewLokace() {
    m_lokace = new Lokace();
}

Lokace *Lokace_Builder::getlokace() {
    return m_lokace;
}
