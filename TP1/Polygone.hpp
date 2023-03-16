#include "Figure.hpp"
#ifndef DEF_POLYGONE
#define DEF_POLYGONE

class Polygone : public Figure // polygone hérite de figure
{
public:
    // constructeur
    Polygone(int nbCotes);
    void afficherCaracteristiques();
    //Destructeur
    ~Polygone();

private:
    // Attributs
    int m_nbCotes;
};

#endif