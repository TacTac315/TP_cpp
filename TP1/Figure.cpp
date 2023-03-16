#include "Figure.hpp"

int Figure::m_nbFig = 0;

void Figure::addFig()
{
    m_nbFig++;
}

void Figure::resetFig()
{
    m_nbFig=0;
}

void Figure::subFig()
{
    m_nbFig--;
}

int Figure::getFig()
{
    return m_nbFig;
}