#include "Figure.hpp"
#include "Coloriable.hpp"
#ifndef DEF_CERCLE
#define DEF_CIRCLE

class Cercle : public Figure, public Coloriable
{
public:
//Constructeurs
Cercle();
Cercle(int rayon);
Cercle (int rayon, string couleur);
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