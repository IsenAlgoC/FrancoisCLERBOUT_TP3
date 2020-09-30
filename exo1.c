#include <stdlib.h>
#include <stdio.h>
#define carre(x) (x)*(x)

//void carret (int x) {
//	int resultat = x * x;
//}


int main() {
	int Nb = 5;

	printf("Le carre de %d est %d", Nb, carre(Nb));
	//En affichant le carre(Nb+1), on obtient 11 si Nb=5, 9 si Nb=4, 7 si Nb=3...
	//L'erreur vient du manque de parenthèses dans la "macro", cela implique que l'ordinateur réalise d'abord la multiplication entre 1 et Nb puis additionne à ce produit la somme de Nb et 1

	return(EXIT_SUCCESS);
}