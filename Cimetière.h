//
// Created by Maxime CIMINO on 11/21/20.
//

#ifndef PROET_ECE_MON_CIMETIÈRE_H
#define PROET_ECE_MON_CIMETIÈRE_H

#include "Carte.h"
#include <vector>
#include <ioestream>

Class Cimetiere{
private:
    std::vector <Carte const*> m_carte;

public:
    Cimetiere();
    void ajouterCarte(Carte const* carte);
    Carte const* recupererCarte();

    void clear();

};

#endif //PROET_ECE_MON_CIMETIÈRE_H
