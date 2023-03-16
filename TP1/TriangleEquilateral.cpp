#include "TriangleEquilateral.hpp"
#include <iostream>
using namespace std;

TriangleEquilateral::TriangleEquilateral() : Polygone(3)
{
}

TriangleEquilateral::TriangleEquilateral(int lgcote) : Polygone(3)
{
    m_lgcote = lgcote;
}

TriangleEquilateral::~TriangleEquilateral()
{
}

int TriangleEquilateral::GetCote()
{
    return m_lgcote;
}

void TriangleEquilateral::SetCote(int lgcote)
{
    m_lgcote = lgcote;
}

int TriangleEquilateral::perimetre()
{
    return 3 * m_lgcote;
}

void TriangleEquilateral::afficherCaracteristiques()
{
    cout<<"Triangle rectangle de côté "<<m_lgcote<<endl;
}