#include "Figure.hpp"
#ifndef DEF_CERCLE
#define DEF_CIRCLE

class Cercle : public Figure
{
public:
//Constructeurs
Cercle();
Cercle(int rayon);
//Destructeur
~Cercle();

//Methodes
int GetRayon();
void SetRayon(int rayon);
int perimetre();
void afficherCaracteristiques();

private:

int m_rayon;
};



#endif