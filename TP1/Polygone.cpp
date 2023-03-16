#include "Polygone.hpp"
#include <iostream>
using namespace std;
// Constructeur

Polygone::Polygone(int nbCotes)
{
    m_nbCotes = nbCotes;
}

// Destructeur
Polygone::~Polygone()
{
}

// Methodes

void Polygone::afficherCaracteristiques()
{
    cout << "Le polygone a " << m_nbCotes << "cotés" << endl;
}