#include "set.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#define TAILLE_MAX 100

using namespace std;

Set setVide(Set unSet){
  unSet.nbElements = 0;
}
// Retourne "1" : FAUX ou "0" : VRAI , permet de savoir si le type Set est Vide
bool estVide(Set unSet){
  //Cas où le Set est vide
  if((unSet.elements == NULL) || (unSet.nbElements == 0)){
    return(true);
  }
  //Case où le Set comprend au moins un Element
  else{
    return(false);
  }
}

//Permet d'afficher le contenu d'un Set
void afficherSet(Set unSet){
	int i;
	cout << "" << endl;
	for(i = 0; i < unSet.nbElements; i++){
    if(unSet.elements[i].nb != 0){
      cout << "Element n°" << i+1 << "-> Nombre : " << unSet.elements[i].nb << endl;
    }
    if(unSet.elements[i].carac != 'z'){
      cout << "Element n°" << i+1 << "-> Caractère : " << unSet.elements[i].carac << endl;
    }
	}
}

//Permet d'obtenir la taille d'un Set donné en paramètre
int obtenirTaille(Set unSet){
  return (unSet.nbElements);
}

// Ajoute un élélment dans le type Set
Set ajouter(Element unElement, Set unSet){
  int caseOuInserer;
  unSet.nbElements = unSet.nbElements +1;
  caseOuInserer = unSet.nbElements-1;

  if(caseOuInserer <= TAILLE_MAX){
    unSet.elements[caseOuInserer] = unElement;
  }
  else{
    cout << "Le Set est déjà complet !" << endl;
  }
  return(unSet);
}

// Vérifie si un élélément appartient au type Set
bool appartient(Set unSet, int unNb, char unChar){
  int i;
  bool verification = false;

  int compteur = 0;

  for(i = 0; i < unSet.nbElements;i++){
    if((unSet.elements[i].nb == unNb) || (unSet.elements[i].carac == unChar)){
      compteur++;
    }
  }

  if(compteur >= 1){
    cout << "Un Element a été trouvé, traitement en cours . . ." << endl;
    verification = true;
  }
  else{
    verification = false;
  }
  return(verification);
}

// Cherche l'Element donné en paramètre, si celui-ci est trouvé alors il est supprimé
Set enlever(Set unSet, Element unElement){
  int i, j, unNb, unChar;
  int indice = 0;

  unNb = unElement.nb;
  unChar = unElement.carac;

  for(i = 0; i < unSet.nbElements;i++){
    if((unSet.elements[i].nb == unNb) || (unSet.elements[i].carac == unChar)){
      indice = i;
      for(j = indice ; j !=  unSet.nbElements; j++){
		      unSet.elements[j] = unSet.elements[j+1];
	    }
	    unSet.nbElements = unSet.nbElements-1;
      i = unSet.nbElements+1;// Sortir de la boucle
    }
  }
  return(unSet);
}