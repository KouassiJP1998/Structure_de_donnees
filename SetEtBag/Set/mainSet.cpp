#include "set.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	int i,tailleSet;
	Set monSet;

	//Déclaration d'un Vecteur vide
	setVide(monSet);

	//Verification de estVide (doit renvoyer true)
	if(estVide(monSet) == true){
		cout << "Le Set est vide (initialement) , verification correcte de 'estVide()'" <<endl;
			cout<< " "<< endl;
	}
	else{
		cout << "Erreur dans la vérification n°1" << endl;
		cout<< " "<< endl;
	}

	//Le tableau va contenir n elements
	cout << "Combien de cases souhaitez-vous que ce vecteur contienne ?" << endl;
    cin >> monSet.nbElements;

	//Vérification : 	obtenirTaille()
	cout<< "Appel de 'obtenirTaille()' & vérification . . ."<< endl;
	cout<< "Le Set contient : " << monSet.nbElements << " elements" << endl;
	cout<< " "<< endl;
	tailleSet = obtenirTaille(monSet);

char charAAjouter;
int nbAAjouter;

	bool verifAppartenir;

	for(i=0; i< monSet.nbElements; i++){
			verifAppartenir = false;
			cout << "(Laissez 0 pour rien) Saisir un nombre pour l'Element à la case " << i+1 << " ." << endl;
			cin >> nbAAjouter;

			cout << "Saisir un caractère pour l'Element à la case " << i+1 << " ." << endl;
			cin >> charAAjouter;

			verifAppartenir = appartient(monSet, nbAAjouter, charAAjouter);
			if(verifAppartenir == true){
				i--;
			}
			else{
				monSet.elements[i].nb = nbAAjouter;
				monSet.elements[i].carac = charAAjouter;
			}
}

	//Seconde vérification de estVide (doit renvoyer false)
	if(estVide(monSet) == true){
		cout << "Erreur dans la vérification n°2" << endl;
		cout << " " << endl;
	}
	else{
		cout << "Le Set n'est pas vide (complété précédement), vérification correcte de 'estVide()'" <<endl;
		cout<< " "<< endl;
	}

	//Affichage
	cout << "Affichage du contenu du Vecteur : " << endl;
	afficherSet(monSet);

	//Vérification : ajouter()
	Element monElement;

	cout << "Saisissez un nombre pour le nouvel élément à ajouter : " << endl;
  cin >> monElement.nb;
  cout << "Saisissez une caractère pour le nouvel élément à ajouter : " << endl;
  cin >> monElement.carac;

	verifAppartenir = false;
	verifAppartenir = appartient(monSet, monElement.nb, monElement.carac);
	if(verifAppartenir == false){
		monSet = ajouter(monElement, monSet);
	}
	else{
		cout << "L'element existe déjà dans le Set !" << endl;
	}

	//Affichage du Set : Vérification de l'Element inséré
	cout << "Affichage du tableau après insertion" << endl;
	afficherSet(monSet);
	cout << "Taille : " << obtenirTaille(monSet) << endl;
	cout << "" << endl;


	//Vérification de : enlever()
		cout << "Quel Element souhaitez-vous supprimer ?" << endl;
		cout << "Saisissez un nombre pour l'Element à rechercher puis supprimer : " << endl;
	  cin >> monElement.nb;
	  cout << "Saisissez désormais le caractère : " << endl;
	  cin >> monElement.carac;


		verifAppartenir = false;
		//Boucle tant que l'Element est trouvé dans le SET pour supprimer toutes les occurences et non une seule
		do{
			verifAppartenir = appartient(monSet, monElement.nb, monElement.carac);
			if(verifAppartenir == true){
				monSet = enlever(monSet,monElement);
			}
		}while(verifAppartenir == true);
	afficherSet(monSet);
	cout<< "Le vecteur contient : "<< monSet.nbElements << " elements" << endl;

	system("pause");
	return(0);
 }