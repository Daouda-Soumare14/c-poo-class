#include <iostream>
#include <string>
using namespace std;

class Personnage
{
    // les methodes 
    // en POO on prefere placer les methodes avant les attrubuts
    void recevoirDegats(int nbrDegats)
    {

    }

    void attaquer(Personnage &cible)
    {

    }

    void boirePossionDeVie(int quantitePossion)
    {

    }

    int changerArme(string nomNouvelleArme, int degatsNouvelleArme)
    {

    }

    bool estVivant()
    {

    }

    // les attributs
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatsArme;
};

/*
    Un objet est bel et bien un mix de variables (les attributs) et de fonctions
     (les méthodes). La plupart du temps, les méthodes lisent et modifient les attributs
     de l'objet pour le faire évoluer. Un objet est au final un petit système intelligent
     et autonome, capable de surveiller tout seul son bon fonctionnement.


*/