#include <iostream>
#include "Polygone.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include "TriangleEquilateral.hpp"
#include "Cellule.hpp"
#define NB_ELEMENTS 5
using namespace std;
Figure **tabFigure = new Figure *[NB_ELEMENTS];
File<Figure *> fileFigure;

int main()
{
    tabFigure[0] = new Carre(10);
    tabFigure[1] = new TriangleEquilateral(5);
    tabFigure[2] = new Cercle(2);
    tabFigure[3] = new Rectangle(5, 10);
    tabFigure[4] = new Cercle(8, "rouge");
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

    cout<<"Test de la file"<<endl;
    fileFigure.enfiler(new Carre(10));
    fileFigure.enfiler(tabFigure[1]);
    fileFigure.enfiler(tabFigure[2]);
    fileFigure.enfiler(tabFigure[3]);
    fileFigure.enfiler(tabFigure[4]);
    fileFigure.afficherFile();
    return 0;
}