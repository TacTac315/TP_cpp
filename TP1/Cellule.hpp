#ifndef DEF_CELLULE
#define DEF_CELLULE
template<typename T>

class Cellule
{
friend class File;
public: 
//Constructeurs
Cellule();
Cellule(T data);
//Destructeur
~Cellule();

private:
T m_data;
};

#endif