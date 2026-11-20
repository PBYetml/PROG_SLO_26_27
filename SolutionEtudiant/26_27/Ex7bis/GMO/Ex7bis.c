//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercise 7
// Nom du fichier 		: Exercise_7.sln
// Date de création 	: 29.09.2026
//
// Auteur 				: GMO (Gabriel Moura Oliveira)
//
// Description          : Ex7 bis
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf et scanf_s
#include <stdint.h> // uniformation du type entier 
#include <math.h>	// Librairie standard pour faire des math
#include "SpEx7bis.h"	// Libraire des test


// -----------------------------------

int main(void)
{
	// Variable local
	char v_Clavier = 0;		// Variable de l'écture du choix de test
	int v_ValA = 0;			// Valeur du test A
	double v_ValB = 0.0;	// Valeur du test B
	char t_ValBin[40];		// Tableau de chains de caractère pour le test C


	// Début du programme
	while (v_Clavier != 'Q')
	{
		// Demande quel test a faire
		printf("Test A, B ou C, Q pour Quitter \n");

		//Récupère le test voulu
		scanf_s("%c", &v_Clavier, 1);
		
		//Si l'utilisateur veut faire un test
		if (v_Clavier != 'Q')
		{
			// Selon le test séléctionné
			switch (v_Clavier)
			{
				// Test A
				case 'A':

					//Demande un nombre entre 1 et 15
					printf("Test A: entrez un nombre entre 1 et 15\n");

					// Récuprère le nombre voulu
					scanf_s("%d", &v_ValA);

					// Si le nombre est plus grand ou égal à 1
					if (v_ValA >= 1)
					{
						// Si le nombre est plus grand que 15
						if (v_ValA > 15)
						{
							// Limite le nombre à 15
							v_ValA = 15;

							printf("Nombre limite a 15.\n");
						}

						//Affiche Nb '*' selon le nombre voulu
						FtestA(v_ValA);
					}
					else
					{
						// Indique que le nombre doit être plus grand ou égal à 1
						printf("Nombre plus grand ou egal 1 obligatoire!\n");
					}
					break; // Fin du test A

				// Test B
				case 'B':

					// Demande l'angle voulu
					printf("Test B: entrez un angle entre 0 a 90 degres\n");

					// Récupère l'angle
					scanf_s("%lf", &v_ValB);

					// Si l'angle donné est inférieur à 0° ou supérieur de 90° 
					if ((v_ValB < 0) || (v_ValB > 90))
					{
						// Indique que l'angle est hors limite
						printf("Angle hors limite\n");
					}
					else
					{
						// Affiche l'angle en degrés, en radian et le sinus de l'angle
						printf("Angle en degres = %2.2f Angle en radian = %1.4f Sinus = %1.5f\n", v_ValB, FtestB(v_ValB), sin(FtestB(v_ValB)));
					}
					break;	// Fin du test B

				// Test C
				case 'C':

					//Demande la valeur binaire voulu
					printf("Test C: entrez un nombre binaire de max 16 bits\n");

					//Récuper la valeur binair
					scanf_s("%s", &t_ValBin, 40);

					// Affiche le résutat de la fonction BinToDec
					printf("Resultat : DEC : %d HEX : %X \n", BinToDec(t_ValBin), BinToDec(t_ValBin));
					
					break;	// Fin du test C

				default:
					// Indique que le test voulu est invalide
					printf("Test invalide\n");
					break;
			}
		}
	}

	// God bye :)
	printf("Goodbye World. :)");

	return(0); // Fin du programme
}