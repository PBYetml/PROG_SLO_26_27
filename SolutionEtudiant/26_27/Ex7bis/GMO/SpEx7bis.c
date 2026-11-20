//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercise 7
// Nom du fichier 		: Exercise_7.sln
// Date de création 	: 29.09.2026
//
// Auteur 				: GMO (Gabriel Moura Oliveira)
//
// Description          : Contient les fonction des tests de l'Ex7bis
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 
#include <math.h>	// Librairie standard pour faire des math
#include "SpEx7bis.h"	// Librairie des déclaration des fonction ci-dessous


// Fonction d'affichage NB '*'
void FtestA(char v_NBetoile)
{
	char v_i = 0; // Ittération de la boucle for

	// Si il y a des '*' a affiché
	if (v_NBetoile != 0)
	{
		// Affiche Nb '*'
		for (v_i = 0; v_i < v_NBetoile; v_i++)
		{
			printf("*");
		}
		printf("\n");	// Retourne a la ligne
	}
	else
	{
		// Affcihe rien
		printf(" ");
	}
}

// Fonction de convertion angle degrés en angle radian
double FtestB(double v_AngleDegre)
{
	return (v_AngleDegre * PI) / 180; // Renvois l'angle en radian
}

// Fonction de convertion Binair en décimal 
long BinToDec(char *pChainBin)
{
	long v_Dec = 0;		// Prend la valeur convertie en décimal
	char v_Control = 0; // Itération de contrôle et de convertion

	// Contrôle qu'il n'y a que 16bits
	pChainBin += 16;
	if (*pChainBin != 0)
	{
		// Trop de bits
		return -1;
	}

	// Reviens à l'addresse de la case 0 du tableau
	pChainBin -= 16;

	// Contrôle qu'il y a que des 1 et des 0 dans le 16 bits
	for (v_Control = 0; v_Control < 16; v_Control++)
	{
		// Si le caractère de la case actuel du tableau est différent de 0 et de 1
		if ((*pChainBin != '0') && (*pChainBin != '1'))
		{
			// C'est un bug
			return -2;
		}
		pChainBin++; // Chage de case du tableau
	}

	// Convertie la valeur binaire en valeur décimal
	pChainBin -= 16;	// Va à l'addresse de la case 0 du tableau
	for (v_Control = 15; v_Control >= 0; v_Control--)
	{
		// Contrôle si la case actuelle a un 1
		if (*pChainBin == '1')
		{
			v_Dec += pow(2 , v_Control); // Ajoute à la somme de puissance de 2
		}
		pChainBin++;	// Change de case du tableau (adresse)
	}

	return v_Dec;	// Retourne la valeur décimal convertie
}
