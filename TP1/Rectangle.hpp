#include "Polygone.hpp"
#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE

class Rectangle : public Polygone //Rectangle herite de polygone
{
    public:
    //Constructeurs
    Rectangle();
    //Rectangle(int largeur, int hauteur);

    //Methodes
    int GetLargeur();
    int GetHauteur();
    Rectangle ModifierLongeurCote(int largeur, int hauteur);     

    int perimetre();
    void afficherCaracteristiques();

    private:

    int m_largeur;
    int m_hauteur;
};


#endif