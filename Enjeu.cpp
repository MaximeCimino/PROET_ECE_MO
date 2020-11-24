//
// Created by Maxime CIMINO on 11/24/20.
//

#include <iostream>
#include "Enjeu.h"

Enjeu::Enjeu():m_carte(nullptr){

}
void Enjeu::init(Carte const* carte){
    m_carte = carte;
}

Carte const* Enjeu::getEnjeu()const{
    return m_carte;
}

void Enjeu::display() const{
    m_carte->displayAll();
}

void Enjeu::clear(){
    m_carte = nullptr
}