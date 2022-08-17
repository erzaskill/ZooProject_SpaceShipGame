//
// Created by Martin Šulc on 05.05.2021.
//

#include <iostream>
#include "Lokace_Director.h"

Lokace_Director::Lokace_Director(Lokace_Builder *builder) {
    m_builder = builder;
}

void Lokace_Director::setBuilder(Lokace_Builder *builder) {
    m_builder = builder;
}

Lokace *Lokace_Director::constructLokace() {
    m_builder->createNewLokace();
    m_builder->setobsahLokace();
    return m_builder->getlokace();
}
