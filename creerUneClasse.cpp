#include <iostream>
#include <string>
using namespace std;


class Personnage // creer un personnage de jeu de role
{
    // les "m_" devant les noms de variable est pour indiquer que c'est une variable membre (attribut)
    // il est impossible d'initialiser les attribut ici
    int m_vie; 
    int m_mana; // le niveau de magie
    string m_nomArme;
    int m_degatsArme;
}; // n'oublier pas le point virgule a la fin

/*
    La chose essentielle à retenir : on utilise des attributs
     pour représenter la notion d'appartenance. On dit qu'un 
     Personnage a une vie, un niveau de magie, une arme.

    Lorsque vous repérez une relation d'appartenance, il y a de
     fortes chances qu'un attribut soit la solution à adopter.
*/





/*
    Souvenez-vous de cette règle très importante :
     il faut que le nom de vos classes commence 
     toujours par une lettre majuscule ! Bien que 
     ce ne soit pas obligatoire (le compilateur ne 
     hurlera pas si vous commencez par une minuscule),
     cela vous sera très utile par la suite pour différencier
      les noms des classes des noms des objets.
*/