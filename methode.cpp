#include <iostream>
#include <string>
using namespace std;

class Personnage
{
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
};

/*
    Voici quelques actions réalisables avec notre personnage :

recevoirDegats  : le personnage prend un certain nombre de dégâts et donc perd de la vie.

attaquer  : le personnage attaque un autre personnage avec son arme. 
        Il inflige autant de dégâts que son arme le lui permet (c'est-à-dire degatsArme  ).

boirePotionDeVie  : le personnage boit une potion de vie et regagne
         un certain nombre de points de vie.

changerArme  : le personnage récupère une nouvelle arme plus puissante.
         On change le nom de l'arme et les dégâts qui vont avec.

estVivant  : renvoie true si le personnage est toujours vivant
         (il possède plus que 0 point de vie), sinon renvoie false  .
*/