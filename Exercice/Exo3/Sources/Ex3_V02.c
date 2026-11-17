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

const long long VMAX = 10000;
const long long VMIN = -10000;
const double PI = 3.14159;
int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double Surface;
	double Rayon;
	char Lettre;
	long long Tension = VMAX;
	long long BigVal = 12345678;
	typedef enum { CERCLE, ELLIPSE, CARRE, RECTANGLE, TRIANGLE } e_TypeFigure;
	// Affectations
	// ------------
	Tension = 9500;
	BigVal = 12345678;
	Lettre = B;
	e_TypeFigure = 2;
	Rayon = 8.500;
	Surface = 226.980;
    
	// Affichages pour controle
	printf ("Tension = \n", );
 	printf ("BigVal =  \n", );
	printf ("Lettre  =  \n", );
	printf ("Figure =  \n", );
	printf ("Rayon =  Surface =  \n", );

  return(0);
}
