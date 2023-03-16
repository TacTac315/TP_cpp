#ifndef DEF_FIGURE
#define DEF_FIGURE

class Figure
{
public:
    //fonctions virtuelles pures
    virtual int perimetre()=0;
    virtual void afficherCaracteristiques()=0;
};

#endif