//
// Created by Martin Šulc on 08.05.2021.
//

#ifndef LOD_CPP_UI_H
#define LOD_CPP_UI_H


#include "Lokace/Hlavicka/Lokace.h"
#include "Lod.h"
#include "Lokace/Hlavicka/Lokace_Director.h"
#include "Lokace/Jednotlive_Buildery/AviliaBuilder.h"
#include "Lokace/Jednotlive_Buildery/CodaphusBuilder.h"
#include "Lokace/Jednotlive_Buildery/LozionBuilder.h"
#include "Lokace/Jednotlive_Buildery/OrusBuilder.h"
#include "Lokace/Jednotlive_Buildery/SaterBuilder.h"
#include "Lokace/Jednotlive_Buildery/UnnarsBuilder.h"
#include "Lokace/Jednotlive_Buildery/UrutaBuilder.h"
#include <vector>

class UI {
    Lokace* m_aktualniLokace;
    Lod* m_hrac;
    std::vector<Lokace*> m_lokace;
public:
    UI();
    void vytvorLokace();
    void vypisPrikazy();
    void prozkoumat();
    void presunSe();
    void informaceoLokaci();
    void nactiVstup();
    void nastavJmeno();
    void kamDoletiLod();
    void VzdalenostOdPlanety();

};


#endif //LOD_CPP_UI_H
