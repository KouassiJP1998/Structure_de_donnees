#include "Arbre.h"
#include <stdio.h>
#include <stdlib.h>


/* Consiste à initialiser l'Arbre */
void initialiser(Arbre *A){
	*A == NULL ;
}

/* Retourne si l'Arbre est vide ou pas */
int arbreVide(Arbre A){
	if (A = NULL)
	{
		return 1;
	}
	else{
		return 0;
	}
}

/* Consiste à créer l'Arbre*/
Arbre creerArbre( int element){
	Arbre A;
	A = malloc(sizeof(noeud));
	A -> Etiquette = element;
	A-> fg = NULL;
	A-> fd = NULL;
	return (A);
}

