#include "Cercle.hpp"
#include <iostream>
using namespace std;

Cercle::Cercle() : Coloriable("blanc")
{
    m_rayon=0;
    addFig();

}

Cercle::Cercle(int rayon) : Coloriable("blanc")
{
    m_rayon=rayon;
    addFig();
}

Cercle::Cercle(int rayon, string couleur) : Coloriable(couleur)
{
    m_rayon=rayon;
    addFig();
}

Cercle::~Cercle()
{
    subFig();
}

int Cercle::GetRayon()
{
    return m_rayon;
}

void Cercle::SetRayon(int rayon)
{
    m_rayon=rayon;
}

int Cercle::perimetre()
{
    return 2*3.14*m_rayon;
}

void Cercle::afficherCaracteristiques()
{
    cout<<"Cercle de rayon : "<<m_rayon<<endl;
    cout<<"Cercle de couleur : "<<getCouleur()<<endl;
}

