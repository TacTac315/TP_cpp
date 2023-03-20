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
//Méthodes
T getData();
private:
T m_data;
Cellule *m_suivant;
};

template <typename T>
class File
{
    public:
    //Constructeurs
    File();
    //Destructeur
    ~File();
    //Méthodes
    void enfiler(T data);
    void defiler();
    void afficherFile();
    bool estVide();
    int getNbElements();
    T getTete();
    T getQueue();
    private:
    Cellule<T> *m_tete;
    Cellule<T> *m_queue;
    int m_nbElements;
};

#endif