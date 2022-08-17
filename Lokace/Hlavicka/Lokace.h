//
// Created by Martin Šulc on 05.05.2021.
//

#ifndef LOD_CPP_LOKACE_H
#define LOD_CPP_LOKACE_H


#include <string>
#include <vector>
#include "../../Pozice.h"
#include "../../Enemy/Enemy.h"
#include "../../Special_misto_v_lokaci/SpecialMisto.h"

class Lokace {
    std::string m_jmeno;
    std::string m_lore;
    Pozice m_pozice;
    std::vector <SpecialMisto*> m_misto;
public:
    Lokace();
    void setJmeno(std::string jmeno);
    std::string getJmeno();
    void setPozice(float x, float y);
    float getPoziceX();
    float getPoziceY();
    void setLore(std::string lore);
    std::string getLore();
    void pridejMisto(SpecialMisto* specialMisto);
    void odeberMisto(SpecialMisto* specialMisto);



};


#endif //LOD_CPP_LOKACE_H
