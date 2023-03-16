#include <iostream>
#include "Polygone.hpp"
#include "Rectangle.hpp"
using namespace std;

int main()
{
    Rectangle R;
    R.ModifierLongeurCote(4,5);
    cout<<"Perimètre : "<<R.perimetre()<<endl;
    R.afficherCaracteristiques();
    return 0;
}