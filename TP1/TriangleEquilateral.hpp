#include "Polygone.hpp"
#ifndef DEF_TRIANGLEEQUILATERAL
#define DEF_TRIANGLEEQUILATERAL

class TriangleEquilateral : public Polygone
{
    public:
    //Constructeur
    TriangleEquilateral();
    TriangleEquilateral(int lgcote);
    //Destructeur
    ~TriangleEquilateral();

    //Methodes
    int GetCote();
    void SetCote(int lgcote);
    int perimetre();

private:

int m_lgcote;
    
};
#endif