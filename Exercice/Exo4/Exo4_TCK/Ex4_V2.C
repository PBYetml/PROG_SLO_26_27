//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
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
	char16_t A1 = 400;
	char16_t A2 = 500;
	char16_t RestA1;
	char16_t RestA2;

	// Déclaration cas B
	
	short ValB;  // not sure !
	char HighValB;
	char LowValB;
	// Déclaration cas C
	unsigned char16_t C1 = 0x5555;
	unsigned char16_t C2 = 0x0F0F;
	unsigned char16_t ResC;

	// Déclaration cas D


	// Traitement cas A
		printf ("Traitement cas A \n");

		//printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n", );
		RestA1 = A1 * A2;
		printf("ResA1 = A1 * A2 soit = %d \n", RestA1);
	

		//printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n", );
		RestA2 = A1 * A2;
		printf("RestA2" = A1 * A2 soit = %d \n", RestA1);

	// Traitement cas B
		printf ("Traitement cas B \n");

	//printf ("ValB  % HighValB = %2x LowValB = %\n", );
	
	// Traitement cas C
		printf ("Traitement cas C \n");



	//printf ("ResC = %  OU % =  % \n",);
	//printf ("ResC = %  ET % =  %0 \n",);



	// Traitement cas D

	printf ("Traitement cas D \n");

	//printf ("Division de %4d par %4d = %4d Reste = %4d \n",);

  return(0);
}
