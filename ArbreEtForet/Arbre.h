/* Définition de la structure */

typedef struct noeud{
	int Etiquette;
	struct noeud *fg;
	struct noeud *fd;
}noeud;
typedef noeud *Arbre;

/* Consiste à initialiser l'Arbre */
void initialiser(Arbre *A);
//VALIDE

/* Retourne si l'Arbre est vide ou pas */
int arbreVide(Arbre A);
//VALIDE

/* Consiste à créer l'Arbre*/
Arbre creerArbre( int element);
//VALIDE
