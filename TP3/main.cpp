#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

void Exo1()
{
    vector<float> V1;
    vector<float> V2;
    cout << "V1:" << endl;
    for (int i = 0; i < 10; i++)
    {
        V1.push_back((float)i / 10);
        cout << V1[i] << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        V2.push_back((V1[i]));
    }
    for (int i = 1; i < V2.size() / 2; i++)
    {
        V2.pop_back();
    }
    cout << "V2:" << endl;
    for (int i = 0; i < V2.size(); i++)
    {
        cout << V2[i] << endl;
    }
}

void Exo2()
{
    list<char> L1;
    list<char> L2;
    list<char>::iterator it;
    cout << "L1:" << endl;

    for (int i = 0; i < 10; i++)
    {
        L1.push_back('a' + i);
        cout << L1.back() << endl;
    }
    L2 = L1;

    while (L2.size() > L1.size() / 2)
    {
        L2.pop_back();
    }
    cout << "L2:" << endl;
    for (it = L2.begin(); it != L2.end(); it++)
    {
        cout << *it << endl;
    }
}

void Exo3()
{
    set<string> Classe;
    set<string>::iterator it;
    set<string>::iterator aux;
    Classe.insert("Antonin");
    Classe.insert("Jeremy");
    Classe.insert("Claudia");
    Classe.insert("Allan");
    Classe.insert("Moad");
    Classe.insert("Penaldo");
    Classe.insert("Pessi");
    cout << "Il y a " << Classe.size() << " élèves dans la classe" << endl;
    cout << "Un set trie automatiquement les éléments" << endl;
    for (it = Classe.begin(); it != Classe.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "Nous suprimons les deux premiers élèves" << endl;
    int compteur = 0;
    it = Classe.begin();
    while (compteur < 2)
    {
        aux = it;
        it++;
        Classe.erase(aux);
        compteur++;
    }
    cout << "Il y a " << Classe.size() << " élèves dans la classe" << endl;
    for (it = Classe.begin(); it != Classe.end(); it++)
    {
        cout << *it << endl;
    }
}

void Exo4()
{
    map<string, int> Classe;
    map<string, int>::iterator it;
    Classe["Antonin"] = 618744580;
    Classe["Jeremy"] = 518744581;
    Classe["Claudia"] = 618744582;
    Classe["Allan"] = 618744583;
    Classe["Moad"] = 618744584;
    Classe["Penaldo"] = 518744585;
    Classe["Pessi"] = 518744586;
    cout << "Il y a " << Classe.size() << " élèves dans la classe" << endl;
    cout << "Nom ; Numéro" << endl;
    for (it = Classe.begin(); it != Classe.end(); it++)
    {
        cout << it->first << " ; " << it->second << endl;
    }
    cout <<"Nous supprimons tous les eleves dont le numero commence par 5" << endl;
    it = Classe.begin();
    while (it != Classe.end())
    {
        if (it->second / 100000000 == 5)
        {
            Classe.erase(it++);
        }
        else
        {
            it++;
        }
    }
    cout << "Il y a " << Classe.size() << " élèves dans la classe" << endl;
    cout << "Nom ; Numéro" << endl;
    for (it = Classe.begin(); it != Classe.end(); it++)
    {
        ;
        cout << it->first << " ; " << it->second << endl;
    }
}

int main(int argc, char **argv)
{
    Exo4();
    return 0;
}
