/*----------------------------------------------------------------------------------
 Nom du projet 		: Exo 7
 Nom du fichier 		: Exo 7
 Date de création 	: 11.11.26
 Date de modification : 11.11.26

 Auteur 				: TCK (Tyuze_)

----------------------------------------------------------------------------------*/

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s


int InVar = 5;
int Temp= 0;
int main(void)
{   
	printf("Number Between [0 & 15]: \n" );

	scanf_s("%d", &InVar);
//	printf("%d\n",InVar);  // to check value was recieved
	Temp = (InVar - 1) ;
	for (short ii = 0; ii <= InVar; ii++)
	{

		for (short spaces = ii; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (short stars = ii; stars >= 0; stars--)
		{
			printf("*");
		}

		printf("\n");
		
	}

	printf("%d\n", Temp);

}
