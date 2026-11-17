//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exos3
// Nom du fichier 		: Exos3
// Date de création 	: xx.xx.2016
// Date de modification : 06.10.2026
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes

const short	VMAX = 10000;	//constante 16 bits signée
const short	VMIN = -10000;	//constante 16 bits signée
const double PI = 3.14159;	//constante réel 64 bits

// ----------------------------------
int main(void)
{
	// Déclarations locales des variables
	// sans affectation
	
	double surface;		//réel de 64 bits
	double rayon;		//réel de 64 bits
	char lettre;		//caractère

	// ----------------------------------
	// Déclarations avec initialisation
	
	short tension = VMAX;				//16 bits signé prenant la valeur de VMAX
	unsigned long bigVal = 12345678;	//32 bits non signé 

	// ----------------------------------
	// Déclaration d'un type énuméré

	enum e_TypeFigure { cercle, ellipse, carre, rectangle, triangle };		//énumération avec les mot clés dans l'ordre (0,1,2,3,4)

	// ----------------------------------
	// Affectations pour obtenir le résultat demandé
	
	tension = 9500;
	bigVal = 12345678;
	lettre = 'B';
	enum e_TypeFigure figure = carre;						//carre vaut 2
	rayon = 8.5;
	surface = PI * rayon * rayon;

	// ----------------------------------
	// Affichages pour controle
	printf("Tension = %d \n", tension);
	printf("BigVal =  %lu \n", bigVal);
	printf("Lettre  =  %c \n", lettre);
	printf("Figure =  %d \n", figure);
	printf("Rayon =  %f Surface =  %f \n", rayon, surface);

	// ----------------------------------
  return(0);
}
