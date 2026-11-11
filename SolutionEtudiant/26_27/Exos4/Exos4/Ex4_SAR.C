//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 4
// Nom du fichier 		: Ex4_SAR
// Date de création 	: xx.xx.2016
// Date de modification : 29.09.2026
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf


int main(void)
{
	// Déclaration cas A

	short A1;			// "short" = entier signé sur 16 bits (de -32768 à 32767)
	short A2;			// idem
	short ResA1;		// 16 bits : trop petit pour contenir 200000
	long  ResA2;		// "long" = 32 bits : assez grand pour 200000


	// Déclaration cas B

	unsigned short ValB;		// "unsigned short" = entier non signé sur 16 bits (0 à 65535)
	unsigned char HighValB;		// "unsigned char" = 8 bits (0 à 255) : un seul byte
	unsigned char LowValB;		// idem

	// Déclaration cas C

	unsigned short C1;			// 16 bits non signé
	unsigned short C2;			// idem
	unsigned short ResC;		// idem, pour stocker le résultat OU / ET

	// Déclaration cas D

	short D1;			// 16 bits signé (2 octets)
	short D2;			// idem
	short ResD1;		// résultat de la division
	short ResD2;		// reste de la division

	//
	
	A1 = 400;			// valeurs attribuées
	A2 = 500;			// -
	ValB = 0x1234;		// 0x = écriture en hexadécimal
	C1 = 0x5555;		// en binaire : 0101 0101 0101 0101
	C2 = 0x0F0F;		// en binaire : 0000 1111 0000 1111
	D1 = 1325;			// -
	D2 = 7;				// -

	// Traitement cas A
	printf("Traitement cas A \n");

	ResA1 = A1 * A2;			// 400 * 500 = 200000, mais ça ne tient pas dans 16 bits
	// -> le résultat est coupé : on obtient 3392
	printf("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA1);		// %d = afficher un nombre entier

	ResA2 = (long)A1 * A2;		// (long) force le calcul sur 32 bits -> 200000 tient
	printf("ResA2 = A1 * A2 soit  %d * %d = %ld \n", A1, A2, ResA2);	// %ld = afficher un "long"

	// Traitement cas B
	printf("Traitement cas B \n");

	HighValB = ValB >> 8;		// ">> 8" décale les bits de 8 vers la droite : 0x1234 devient 0x12
	LowValB = ValB & 0x00FF;	// "& 0x00FF" garde seulement les 8 bits de droite : 0x1234 devient 0x34
	printf("ValB  %x HighValB = %2x LowValB = %x \n", ValB, HighValB, LowValB);	// %x = afficher en hexadécimal

	// Traitement cas C
	printf("Traitement cas C \n");

	ResC = C1 | C2;				// "|" = OU bit à bit : le bit vaut 1 si l'un OU l'autre vaut 1
	// 0101 0101 | 0000 1111 = 0101 1111 -> 0x5F
	printf("ResC = %x  OU %04X =  %04x \n", C1, C2, ResC);		// %04x = hexadécimal sur 4 chiffres (avec des 0 devant)

	ResC = C1 & C2;				// "&" = ET bit à bit : le bit vaut 1 seulement si les DEUX valent 1
	// 0101 0101 & 0000 1111 = 0000 0101 -> 0x05
	printf("ResC = %x  ET %04X =  %04x \n", C1, C2, ResC);


	// Traitement cas D
	printf("Traitement cas D \n");

	ResD1 = D1 / D2;			// "/" = division entière : 1325 / 7 = 189 (on ignore les décimales)
	ResD2 = D1 % D2;			// "%" = modulo = le reste de la division : 1325 - (189 * 7) = 2
	printf("Division de %4d par %4d = %4d Reste = %4d \n", D1, D2, ResD1, ResD2);	// %4d = nombre sur 4 caractères de large

	return(0);					// fin du programme, tout s'est bien passé

}
