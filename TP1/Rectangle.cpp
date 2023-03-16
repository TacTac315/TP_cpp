#include "Rectangle.hpp"
#include <iostream>
using namespace std;
// Constructeur

Rectangle::Rectangle() : Polygone(4)
{
    m_largeur=0;
    m_hauteur=0;
}

int Rectangle::GetLargeur()
{
    return m_largeur;
}

int Rectangle::GetHauteur()
{
    return m_hauteur;
}

void Rectangle::ModifierLongeurCote(int largeur, int hauteur)
{
    m_largeur=largeur;
    m_hauteur=hauteur;
}

int Rectangle::perimetre()
{
    return 2*m_hauteur+2*m_largeur;
}

void Rectangle::afficherCaracteristiques()
{
    cout<<"Rectangle de hauteur : "<<m_hauteur<<", largeur : "<<m_largeur<<endl;
}
