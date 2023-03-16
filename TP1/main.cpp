#include <iostream>
#include "Polygone.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include "TriangleEquilateral.hpp"
#include "Cercle.hpp"
#define NB_ELEMENTS 3
using namespace std;

Figure **tabFigure = new Figure *[NB_ELEMENTS];

int main()
{
    Carre C(10);
    TriangleEquilateral T(5);
    Cercle Ce(2);

    tabFigure[0] = new Carre(10);
    tabFigure[1] = new TriangleEquilateral(5);
    tabFigure[2] = new Cercle(2);

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
    delete[] tabFigure;

    return 0;
}