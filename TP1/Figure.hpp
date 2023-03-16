#ifndef DEF_FIGURE
#define DEF_FIGURE

class Figure
{
public:
    // fonctions virtuelles pures
    static int m_nbFig;
    virtual int perimetre() = 0;
    virtual void afficherCaracteristiques() = 0;
    virtual ~Figure() = default; // Permet de détruire objet sans connaitre son type
    //-> Le bon destructeur est appelé par le méchanisme de fonction virtuelle
    void addFig();
    void resetFig();
    void subFig();
    int getFig();
    
};

#endif