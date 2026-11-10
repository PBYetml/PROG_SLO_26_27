//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercise 7
// Nom du fichier 		: Exercise_7.sln
// Date de création 	: 29.09.2026
//
// Auteur 				: GMO (Gabriel Moura Oliveira)
//
// Description          : Permet d'afficher un triangle sur un nombre x de ligne
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include "Ex7.h"


// -----------------------------------

int main(void)
{
	// Variable local

	int v_Ligne = 0;	// Nombre de ligne

	printf("Choisir combien de ligne :"); // Indique à l'utilisateur combien de ligne a affiché

	scanf_s("%d", &v_Ligne); // Prend le nombre de ligne voulu

	// Vérification si le nombre est entre 0 et 15
	if((v_Ligne < 0) || (v_Ligne > 15))
	{
		v_Ligne = 15;
		// Indique le nombre max de ligne 
		printf("Ligne max : 15 ligne. \n");
	}

	// Affiche le triangle DH
	AffTriangleAngleDH_GMO(v_Ligne);

	return(0); // Fin du programme
}

void AffTriangleAngleDH_GMO(char v_Nbligne)
{
	// Variable local
	char v_i;					// Iteration de la boucle for
	char v_Vide	= 0;			// Variable pour le nombre de case vide
	char v_LigneCree = 0;		// Ligne créer

	while(v_LigneCree <= v_Nbligne)
	{
		for(v_i = 0; v_i < v_Nbligne; v_i++)
		{
			// Si le caractère a affiché est un caractère vide 
			if(v_Vide > v_i)
			{
				printf(" "); // Affiche un caractère vide
			}
			else
			{
				printf("*"); // Affiche un caractère étoile
			}
		}
		printf("\n"); // Saut à la ligne suivante

		v_Vide++;		// Augment le nb de case vide
		v_LigneCree++;	// Augment l'indication de ligne créé
	}
}