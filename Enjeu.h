//
// Created by Maxime CIMINO on 11/24/20.
//

#ifndef PROET_ECE_MON_ENJEU_H
#define PROET_ECE_MON_ENJEU_H

#include <iostream>
#include "Carte.h"

Class Enjeu{
    private:
        Carte const* m_carte;
    public:
        Enjeu();
        void init(Carte const* carte);
        Carte const* getEnjeu() const;
        void display() const;
        void clear();


};

#endif //PROET_ECE_MON_ENJEU_H
