#include "Cellule.hpp"
template<typename T>
Cellule <T>::Cellule()
{   
    m_data = 0;
    m_suivant = nullptr;
}
template<typename T>
Cellule <T>::Cellule(T data)
{
    m_data = data;
    m_suivant = nullptr;
}

template<typename T>
Cellule <T>::~Cellule()
{    
}

template<typename T>
T Cellule<T>::getData()
{
    return m_data;
}

template<typename T>
File<T>::File()
{
    m_tete = nullptr;
    m_queue = nullptr;
    m_nbElements = 0;
}

template<typename T>
File<T>::~File()
{
    while(m_tete != nullptr)
    {
        defiler();
    }
}

template<typename T>
void File<T>::enfiler(T data)
{
    Cellule * newCellule = new Cellule(data);
    if(estVide())
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

template<typename T>
void File<T>::defiler()
{
    if(estVide())
    {
        cout<<"La file est vide"<<endl;
    }
    else
    {
        Cellule *aux = m_tete;
        m_tete = m_tete->m_suivant;
        delete aux;
        m_nbElements--;
    }
}

template<typename T>
