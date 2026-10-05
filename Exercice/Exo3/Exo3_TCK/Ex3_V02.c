//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 14.09.2017
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
// -----------------------------------

const int16_t VMAX = 10000;
const int16_t VMIN = -10000;
const double PI = 3.14159;

typedef enum
{
cercle,
ellipse,
carre,
rectangle,
triangle
} e_TypeFigure;

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------

	double surface;
	double rayon;
	char lettre;
	int8_t figure;
	
	int16_t tension;
	int16_t BigVal = 0x12345678; 


	// Affectations
	// ------------

	tension = VMAX - 500;
	lettre = "B";
	figure = e_TypeFigure(2);
	rayon = 8.5;
	surface = rayon * rayon * PI;


    
	// Affichages pour controle


	printf ("Tension =  \n", tension );
 	printf ("BigVal =   \n", BigVal );
	printf ("Lettre  =  \n", lettre );
	printf ("Figure = e \n", figure );
	printf ("Rayon =  Surface = \n", surface );

  return(0);
}
