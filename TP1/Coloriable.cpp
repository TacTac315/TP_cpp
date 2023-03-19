#include <string>
#include "Coloriable.hpp"
using namespace std;

Coloriable::Coloriable(string coul)
{
    m_couleur=coul;
}
string Coloriable::getCouleur()
{
    return m_couleur;
}
void Coloriable::setCouleur(string coul)
{
    m_couleur=coul;
}

