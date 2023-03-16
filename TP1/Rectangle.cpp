#include "Rectangle.hpp"
#include <iostream>
// Constructeur

Rectangle::Rectangle() : Polygone(4)
{
}

Rectangle::Rectangle(int largeur, int hauteur) : Polygone(4)
{
    m_hauteur = hauteur;
    m_largeur = largeur;
}

int Rectangle::GetLargeur()
{
    return m_largeur;
}

int Rectangle::GetHauteur()
{
    return m_hauteur;
}