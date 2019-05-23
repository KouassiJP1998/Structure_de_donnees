#define TAILLE_MAX 100
#include <iostream>
#include <cstdlib>

struct Bag{
	int elements[TAILLE_MAX];
	int nbElements;
};

// Définition des Méthodes




// Retourne "true" ou "false", permet de savoir si Bag est vide ou pas 
bool bagVide(Bag unBag);
//VALIDE

//Retourne si un element appartient à l'emsemble
bool appartient(Bag unBag , int unElement);
//VALIDE


// Affiche le contenu de Bag
void afficherBag(Bag unBag);
//VALIDE

// Retourne la frequence d'éléments de Bag
int frequence(Bag unBag, int unElement);
//VALIDE

// Retourne la taille de l'emsemble Bag
int obtenirTaille(Bag unBag);
//VALIDE

// Ajouter un element dans Bag
Bag ajouter(Bag unBag, int unePosition , int unElement);
//VALIDE

// Supprime un element dans bag 
Bag enlever(Bag unBag, int unePosition);
//VALIDE



