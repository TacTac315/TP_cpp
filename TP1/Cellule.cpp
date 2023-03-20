#include "Cellule.hpp"
template<typename T>
Cellule <T>::Cellule()
{   
    m_data = 0;
}
template<typename T>
Cellule <T>::Cellule(T data)
{
    m_data = data;
}

template<typename T>
Cellule <T>::~Cellule()
{    
}