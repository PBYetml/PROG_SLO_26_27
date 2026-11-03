//-----------------------------------------------------------------------------------//
// Project Name 		: Demo26_27
// File name 			: demo.c
// Date de cr�ation     : 29.09.2025
// Date de modification : 29.09.2026
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: 1.5
//
// Description          : demo pour SLO1 26-27
//						  -> librairie standardisée : stdio - stdint - stdbool
//						  -> librairie personnel 
//						  -> types Entier - Reel - Enumération
//						  -> define - constante - variable 
//					      -> instruction - opérande - opérateur
//						  -> condition - itération
//						  -> 
// 
// Remarques			:         
//----------------------------------------------------------------------------------//

//-- librairie standard --// 
#include <stdio.h>			// lib pour les entr�e - sortie (console - lecture clavier)
#include <stdint.h>			// lib pour le entier normalis� 
#include <stdbool.h>	// lib pour le type bool 
	// pour la gestion des chaine de caract�re

//-- librairie perso --// 
#include "demo.h"

//-- d�finition --// 
#define ANNEES "26-27"
#define VERSION 1.1

const float version = 1.1; 


//-- constante gloable --//


//-- déclaration type énumération -- 
enum demo { OUVERTURE,  FERMETURE = 10, ARRET , STOP = 12344556789L};


//----------------------------------------------------------------------------------//
//-- nom fct : main
//-- param�tre entr�e : -
//-- param�tre sortie : - 
//-- param�tre IN-OUT : - 
//-- description : programme principal 
//----------------------------------------------------------------------------------//
void main()
{
	//-- variables --//
	//--- Entier Standard 
	//--- Sign� (+/-) ->				// possibilité de mettre le mot :  "signed" devant le type
	char tension; 						// 1 octet -> en lien avec des les caractère ASCII
	short Rtot = 0, R1 = 0, R2 = 0; 	// 2 octets 
	int index = 0, exemple3 = 1; 					// 4 octets -> int ou long - /!\ en lien avec soit le uC/uP le compilateur / OS			
	long long exemple = 2; 				// 8 octets 

	//--- Non sign� (+) 
	unsigned char exemple1_s; 			// 1 octet -> en lien avec des les caractère ASCII
	unsigned short puissance = 0; 		// 2 octets 
	unsigned int resistance; 			// 4 octets - int ou long - /!\ en lien avec soit le uC/uP le compilateur / OS			
	unsigned long long exemple_s; 		// 8 octets 

	//--- Entier Notrmalis� -> librairie ???
	//--- Sign� (+/-)
	int8_t 	exemple1_std;		// 1 octet
	int16_t exemple2_std;		// 2 octets 
	int32_t exemple3_std;		// 4 octets			
	int64_t exemple4_std;		// 8 octets 

	//--- Non sign� (+) 
	uint8_t 	exemple1N_std = 100;		// 1 octet -> cast
	exemple1N_std = (uint8_t)100;
	uint16_t	exemple2n_std;		// 2 octets 
	uint32_t	exemple3n_std;		// 4 octets			
	uint64_t	exemple4n_std;	// 1 octet

	//--- autre(s)
	//-- bool 
	bool exempleb; 

	//--- variable de type enum 
	enum demo maVariable = OUVERTURE;

	couleur_enum maVariabl2 = 5;

	//--- Réel 
	float exemplef1 = 3.14; 	// 4 octets 
	double exemplef2; 			// 8 octets 
	
	printf("%d", sizeof(STOP));

	printf("valeur enumeration : %d", maVariabl2);

	//-- opérateur mathématique 
	exemple3 = exemple3 + exemple;
	exemple3 = exemple3 - exemple;
	exemple3 = exemple3 * exemple;
	exemple3 = exemple3 / exemple;
	exemple3 = exemple3 % exemple;

	//-- opérateur mathématique -> attention aux propriétés des opérateurs 
	Rtot = (R1 + R2) / (R1 * R2);

	//-- opérateur logique -> bit à bit 
	exemple3 = exemple3 & exemple; //ET
	exemple3 = exemple3 | exemple;//OU 
	exemple3 = exemple3 ^ exemple;   //XOR
	exemple3 = ~exemple3; //INVERSEUR 

	//-- opérateur de décalage
	exemple3 = exemple3 << 1;  // à gauche -> multiplication par 2 
	exemple3 = exemple3 >> 2;  // à gauche -> division par 2 

	//-- opréateur relationnels (condition)
	if (exemple3 && exemple) {} //ET
	if (exemple3 || exemple) {} // OU 

	//-- condtion - selection
	if (exemple3 == exemple) {}  //-> égalité
	if (exemple3 != exemple) {} //-> inégalité 
	if (exemple3 > exemple) {}	// plus grand
	if (exemple3 >= exemple) {} // plus grand ou égal
	if (exemple3 < exemple) {}  // plus petit 
	if (exemple3 <=  exemple) {}  // plus petit 

	//-- condition vrai-faux 
	if(exemple3 == exemple)
	{ }
	else
	{}

	//-- condition vrai-faux 
	//-- plusieurs tests 
	if ((exemple3 == exemple) && (exemple3 != exemple))
	{}
	else
	{}

	//-- condition vrai-faux 
	//-- if imbriqué 
	if ((exemple3 == exemple))
	{}
	else if (exemple3 != exemple)
	{}
	else if (exemple3 <= exemple)
	{}
	else
	{
		if (exemple3 == exemple)
		{}
	}

	//-- condition -> machine d'état 
	switch (maVariable)
	{
		case OUVERTURE : 

			break; 
		case FERMETURE :
			break; 


		case ARRET: 
		case STOP: 

			break; 

		default : 
			break; 

	}
	//-- itérations 

	///while 
	// -> pour rester dans la boucle -> condition vrai sortir -> condition fausse
	while (index > 0) {}

	//-- boucle sans fin
	while (1) {} 
	while (3.14) {}
	while ('a') {}
	while (1000) {}

	while (0) {}


	//do while 
	do
	{
	} while (index > 0);

	//-- compteur --
	//for ( déclaration ; condition-> true pour rester dans la boucle ; opération (instrution) sur une variable
	for (index = 10, R1 = 10 ; index > 0; index--)
	{
	}

	//for sans fin
	for (; ; ) {}





}

//-- exemple avec la loi d'ohm 
//--- U = R*i -> i = U/R 

//-- addition de resistance en série 
//--- Rtot = R1 + R2 + R3... 

//-- mise en parallèle de résistance 
//--- Rtot = (R1 + R2)/(R1 * R2)  






	
















	//--> info user 
	//printf("Code demo - SLO - %s - %2.1f \n", ANNEES, VERSION);

	//--> message user -> info taille 
	/*printf("\n-> taille d'un booleen %d [o]", );
	printf("\n-> taille du tableau multidimension : %d [o]", );*/


	//--d�finition d'un type enum�ration -> e_machineEtat -> locale --// 
					  //ETAT1 = 0, ETAT2 = 20, ETAT3 = 21
	

	//-- utilisation d'une �num�ration globale -> e_FORME --// 
	

	//-- d�claration structure --// 
	//-- local //-- type //-- variable 
	


	// -- type		//-- variable 
	

								//led R, G, B, lum, nb



	// -- gestion union 
 

					  //MSB - LSB



	//-- lecture �criture --// 


	//-- passage par r�f�rence --//


	//-- MAJ de la variable enum


	//--- Reel 
	//-> taille 4 octets
 

	// cast implcite -> entier -> reel
        // _m => metre 

	//-> taille 8 octets 


	// -> pour tester 10 case -> soit < 10 ou <= 9
	// -> remplir un tableau en partant de la lettre 'A'


		// -> Ox41 correspond au 'A'	(voir table ASCII) 

		
		// -> affichage de chaque caract�re 


	// -> exemple de r�cuperation d'une valeur d'un tableau 


	// -> exemple d'un 



	//-- une imstruction  est compos� d'op�randes (variable) et d'op�rateur (signe) --//
	//-- cast => (type)variable 


	//-- attention au cast implicite


	//-- appel de fct 
	//--> calcul perimetre ccercle 


	//--> calcul d'une moyenne


	//-> message user 
 
	
	//--> perim�tre 


	//--> moyenne


	//-- condition -> expression


	//-- condition prioritaire 
	

		//-- condition secondaire 
		//

	

	//-- machine �tat --//

		//-- instruction 1... 
		//-- instruction 2... 
		

	
		//-- instruction 1... 
		//-- instruction 2... 




	//-- it�ration  --// 

	//--> 1 contion  -> 2 execution si vrai 
	//-- boucle infinie 
	



	//-- au minium une fois dans la boucle


			
	//-- pour les compteur --> connait le nombre d'it�ration
	//-- boucle � l'infini --// 
	


	//->1) initialisation plusieurs variables 2) condition 3) 
	





















