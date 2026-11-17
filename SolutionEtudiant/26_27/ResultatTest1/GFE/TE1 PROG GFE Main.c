//-----------------------------------------------------------------------------------//
// Nom du projet 		: TE1 Prog
// Nom du fichier 		: TE1 PROG GFE Main.c
// Date de création 	: 27.10.2026
// Date de modification : 27.10.2026
//
// Auteur 				: GFE (Guillaume Favre)
//                        
//
// Description          : Exercice 5 TE1 Prog
//
//
// Remarques :            
//
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes
// -----------------------------------


int Cutoflnfo(unsigned long varE)
{
	char Tension;
	unsigned char Puissance;
	char Courant;
	unsigned char Resistance;

	Tension = varE & 0xFF000000;
	Courant = varE & 0x00FF0000;
	Puissance = varE & 0x0000FF00;
	Resistance = varE & 0x000000FF;
	
	return(0);
}