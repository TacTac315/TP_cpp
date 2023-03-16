#include "Cercle.hpp"
#include <iostream>
using namespace std;

Cercle::Cercle()
{
    m_rayon=0;
}

Cercle::Cercle(int rayon)
{
    m_rayon=rayon;
}

Cercle::~Cercle()
{

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
}
