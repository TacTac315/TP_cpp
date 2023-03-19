#include <string>
#ifndef DEF_COLORIABLE
#define DEF_COLORIABLE
using namespace std;
class Coloriable
{
public :
Coloriable(string coul);
string getCouleur();
void setCouleur(string coul);

protected :
string m_couleur;
};


#endif