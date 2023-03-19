#include <iostream>
#include "Polygone.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include "TriangleEquilateral.hpp"
#define NB_ELEMENTS 4
using namespace std;

Figure **tabFigure = new Figure *[NB_ELEMENTS];
int main()
{
    tabFigure[0] = new Carre(10);
    tabFigure[1] = new TriangleEquilateral(5);
    tabFigure[2] = new Cercle(2);
    tabFigure[3] = new Rectangle(5, 10);
    cout<<"Il y a "<<tabFigure[0]->m_nbFig<<" figures au total"<<endl; //On utilise notre carré pour accéder à la variable de classe Figure
    for (int i = 0; i < NB_ELEMENTS; ++i)
    {
        cout<<"Element n"<<i<<" :"<<endl;
        tabFigure[i]->afficherCaracteristiques();
        tabFigure[i]->perimetre();
    }

    for (int i = 0; i < NB_ELEMENTS; ++i)
    {
        delete tabFigure[i];
    }
    cout<<"Il y a "<<tabFigure[0]->m_nbFig<<" figures au total"<<endl;
    delete[] tabFigure;
    return 0;
}