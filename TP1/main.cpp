#include <iostream>
#include "Polygone.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
using namespace std;

int main()
{
    //Cercle n'est psa un polygone
    //Creer les destructeurs
    Rectangle R;
    Carre C(10);
    R.ModifierLongeurCote(4,5);
    cout<<"Perimètre : "<<R.perimetre()<<endl;
    R.afficherCaracteristiques();

    cout<<"Perimètre : "<<C.perimetre()<<endl;
    C.afficherCaracteristiques();
    return 0;
}