#include "Carre.hpp"

Carre::Carre() : Rectangle()
{
    this->ModifierLongeurCote(0,0);
}

Carre::Carre(int cote) : Rectangle()
{
    this->ModifierLongeurCote(cote,cote);
}