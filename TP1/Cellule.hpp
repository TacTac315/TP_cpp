#ifndef DEF_CELLULE
#define DEF_CELLULE
template <typename T>
class File;
template <typename T>
class Cellule
{
    template <typename U>
    friend class File;

public:
    Cellule()
    {
        m_data = 0;
        m_suivant = nullptr;
    }
    Cellule(T data)
    {
        m_data = data;
        m_suivant = nullptr;
    }
    ~Cellule()
    {
    }
    T getData()
    {
        return m_data;
    }

private:
    T m_data;
    Cellule<T> *m_suivant;
};

template <typename T>
class File
{
public:
    File()
    {
        m_tete = nullptr;
        m_queue = nullptr;
        m_nbElements = 0;
    }
    class Vide
    {
        public:
        Vide()
        {
            cout << "Exception La file est vide" << endl;
        }
    };
    ~File()
    {
        while (m_tete != nullptr)
        {
            defiler();
        }
    }
    void enfiler(T data)
    {
        Cellule<T> *newCellule = new Cellule<T>(data);
        if (estVide())
        {
            m_tete = newCellule;
            m_queue = newCellule;
        }
        else
        {
            m_queue->m_suivant = newCellule;
            m_queue->m_suivant->m_suivant = nullptr;
        }
        m_nbElements++;
    }
    void defiler()
    {
        if (estVide())
        {
            cout << "La file est vide" << endl;
        }
        else
        {
            Cellule<T> *aux = m_tete;
            m_tete = m_tete->m_suivant;
            delete aux;
            m_nbElements--;
        }
    }
    void afficherFile()
    {
        int counter = 0;
        if (estVide())
        {
            cout << "La file est vide" << endl;
        }
        else
        {
            Cellule<T> *aux = m_tete;
            while (aux != nullptr)
            {
                cout << "Cellule n°" << counter << " : " << aux->m_data << endl;
                aux = aux->m_suivant;
                counter++;
            }
        }
    }
    bool estVide()
    {
        if (m_tete == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getNbElements()
    {
        return m_nbElements;
    }
    T getTete()
    {
        return m_tete->getData();
    }
    T getQueue()
    {
        return m_queue->getData();
    }

private:
    Cellule<T> *m_tete;
    Cellule<T> *m_queue;
    int m_nbElements;
};

#endif