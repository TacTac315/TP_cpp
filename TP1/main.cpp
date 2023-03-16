#include <iostream>
#include "Polygone.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include "TriangleEquilateral.hpp"
using namespace std;

int main()
{
    // Cercle n'est psa un polygone
    // Creer les destructeurs
    Rectangle R;
    Carre C(10);
    TriangleEquilateral T(5);

    R.ModifierLongeurCote(4, 5);
    cout << "Perimètre du rectangle : " << R.perimetre() << endl;
    R.afficherCaracteristiques();

    cout << "Perimètre du carré: " << C.perimetre() << endl;
    C.afficherCaracteristiques();

    cout << "Perimètre du triangle: " << T.perimetre() << endl;
    T.afficherCaracteristiques();

    return 0;
}