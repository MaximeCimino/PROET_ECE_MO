//
// Created by Maxime CIMINO on 11/18/20.
//

#ifndef PROET_ECE_MON_CARTE_H
#define PROET_ECE_MON_CARTE_H

#include <iostream>
#include <string>

Class Carte{
protected:    // Class carte est une classe mere
    std::string m_nom;
    unsigned int m_id;
    char m_description;
    unsigned int m_prix;

public:
    Carte();
    Carte(std::string nom, unsigned int id, char description, unsigned int prix);
    virtual ~Carte();
    virtual void init(std::string nom, unsigned int id, char description, unsigned int prix);
    virtual void initFichier(std::ifstream & fichier);
    unsigned int getID() const;
    char getdescription() const;
    unsigned getPrix() const;
    virtual void dispalyAll() const = 0;
    virtual void dispalyNom() const = 0;
    virtual void dispalyJeu() const = 0;
};

#endif //PROET_ECE_MON_CARTE_H
