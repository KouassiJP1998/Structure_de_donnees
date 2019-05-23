#define TAILLE_MAX 100
#include <iostream>
#include <cstdlib>

struct Element{
		int nb;
		char carac;
};

struct Set{
	Element elements[TAILLE_MAX];
	int nbElements;
};

// Retourne "false" : FAUX ou "true" : VRAI , permet de savoir si le type Set est Vide
bool estVide(Set unSet);
//VALIDE

//Permet d'initialiser un SET à NULL
Set setVide(Set unSet);

//Permet d'afficher le contenu d'un Set
void afficherSet(Set unSet);
//VALIDE

//Permet d'obtenir la taille d'un Set donné en paramètre
int obtenirTaille(Set unSet);
//VALIDE

// Ajoute un élélment dans le type Set
Set ajouter(Element unElement, Set unSet);
//VALIDE

// Vérifie si un élélément appartient au type Set
bool appartient(Set unSet, int unNb, char unChar);
//VALIDE

// Cherche l'Element donné en paramètre, si celui-ci est trouvé alors il est supprimé
Set enlever(Set unSet, Element unElement);
//VALIDE