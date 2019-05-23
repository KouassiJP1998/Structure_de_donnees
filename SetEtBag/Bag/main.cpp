#include "Bag.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	int i,tailleBag,taille;
	Bag monBag;

	//Déclaration d'un Vecteur vide
	monBag.nbElements = 0;

	//Verification de estVide (doit renvoyer true)
	if(bagVide(monBag) == true){
		cout << "L'emsemble Bag est vide (initialement) , verification correcte de 'bagVide()'" <<endl;
			cout<< " "<< endl;
	}
	else{
		cout << "Erreur dans la vérification n°1" << endl;
		cout<< " "<< endl;
	}

	//L'emsemnle Bag va contenir n elements
	cout << "Combien de cases souhaitez-vous que cet emsemble contienne ?" << endl;
    cin >> monBag.nbElements;
	
	//Vérification : 	frequence()
	cout<< "Appel de 'frequence()' & vérification . . ."<< endl;
	cout<< "L'emsemble Bag contient : " << monBag.nbElements << " elements" << endl;
	cout<< " "<< endl;
	tailleBag = obtenirTaille(monBag);
	


	//L'utilisateur va saisir manuellement les 10 valeurs
	for (i=0 ; i < tailleBag ; i++){
		cout << "Saisir une valeur pour la case " << i+1 << " ." <<endl;
		cin >> monBag.elements[i];
	}



	//Seconde vérification de estVide (doit renvoyer false)
	if(bagVide(monBag) == true){
		cout << "Erreur dans la vérification n°2" << endl;
		cout << " " << endl;
	}
	else{
		cout << "L'emsemble Bag n'est pas vide (complété précédement), vérification correcte de 'bagVide()'" <<endl;
		cout<< " "<< endl;
	}

	//Affichage
	cout << "Affichage du contenu de l'emsemble : " << endl;
	afficherBag(monBag);
	system("pause");
	system("clear"); //Effacer l'affichage des instructions précédente dans la console

	//Vérifiaction :frequence()
	int element;
	cout << "Donner l'élément dont vous souhaitez connaitre la Fréquence " << endl;
    cin >> element;
    taille = frequence(monBag , element);
    cout << "La Fréquence est " << taille << " " << endl;

    //Vérification appartient()
    int autreElement;
    cout << "Donner l'élément dont vous souhaitez savoir s'il appartient ou non à l'emsemble " << endl;
    cin >> autreElement;
    if(appartient(monBag, autreElement) == true){
		cout << "L'élément saisi appartient à l'emsemble" <<endl;
			cout<< " "<< endl;
	}
	else{
		cout << "Erreur dans la vérification n°1" << endl;
		cout<< " "<< endl;
	}






	//Vérification : ajout()
	int maPosition;
	int monElement;

	cout << "Saisissez un nouvel élément à ajouter : " << endl;
    cin >> monElement;


	cout << "A quelle position souhaitez vous insérer ce nouvel élément ?" << endl;
    cin >> maPosition;
	
	monBag = ajouter(monBag, maPosition ,monElement);

	//Affichage de l'emsemble : Vérification de l'Element ajouté
	cout << "Affichage de l'emsemble après l'ajout" << endl;
	afficherBag(monBag);
	cout << "Taille de l'emsemble : " << obtenirTaille(monBag) << endl;
	cout << "" << endl;


	//Vérification de : enlever()
	cout << "A quelle position souhaitez vous enlever la valeur ? (verification enlever() )" << endl;
    cin >> maPosition;
	monBag = enlever(monBag , maPosition);
	afficherBag(monBag);
	cout<< "L'emsemble Bag contient : "<< monBag.nbElements << " elements" << endl;

 }