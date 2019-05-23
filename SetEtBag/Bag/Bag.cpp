#include "Bag.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#define TAILLE_MAX 100

using namespace std;

// Retourne "true" ou "false", permet de savoir si Bag est vide ou pas 
bool bagVide(Bag unBag){
	if(unBag.nbElements == 0){
		return(true);
	}
	else{
		return(false);
	}

}
//Retourne si un élément appartient à l'emsemble
bool appartient(Bag unBag, int unElement){
	int i;
	for (i = 0; i < unBag.nbElements; i++)
	{
		if (unBag.elements[i] == unElement){
			return(true);
		}
		else{
			return(false);
		}
	}
}

// Affiche le contenu de l'emsemble Bag
void afficherBag(Bag unBag){
	int i;
	cout << "" << endl;
	for(i = 0; i < unBag.nbElements; i++){
		cout << unBag.elements[i] << endl;
	}
	cout << "" << endl;
}



// Retourne la frequence d'éléments de Bag
int frequence(Bag unBag , int unElement){
	int frequence = 0;
	int i;
	for(i=0;i<unBag.nbElements;i++)
	{
		if (unBag.elements[i] == unElement){
		frequence = frequence +1 ;
		}	
	}
	return(frequence);
}
// Retourne la taille de l'emsemble Bag
int obtenirTaille(Bag unBag){
	cout<< "L'emsemble Bag contient : "<< unBag.nbElements << "elements" <<  endl;
	cout<< " "<< endl;
	return unBag.nbElements;
}


// Ajouter un element dans Bag
Bag ajouter(Bag unBag, int unePosition , int unElement){
	int i;

	if((unBag.nbElements < TAILLE_MAX) && (unePosition > 0) && (unePosition <= unBag.nbElements+1)){
		for(i = unBag.nbElements; i >= unePosition; i--){
			unBag.elements[i] = unBag.elements[i-1];
		}

		unBag.elements[unePosition-1] = unElement; 
		unBag.nbElements = unBag.nbElements+1; 

		return(unBag);
	}
	else{
		cout << "Erreur dans le programme lors de l'ajout !" << endl;
		return(unBag);
	}
}


// Supprime un element dans bag 
Bag enlever(Bag unBag, int unePosition){
	int i;

	//Si l'élément à supprimer est à la première position
	for(i = unePosition-1 ; i != obtenirTaille(unBag) ; i++){
		unBag.elements[i] = unBag.elements[i+1];
	}
	unBag.nbElements = unBag.nbElements-1;
	return(unBag);
}
