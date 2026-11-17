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
	printf("eyo put yo nmber here yo but yo man keep tween nill and 15 yo: \n" );

	scanf_s("%d", &InVar);
	printf("%d\n",InVar);

	for (short ii = 0; ii <= InVar; ii++)
	{

		for (int spaces = ii; spaces > 0; spaces--)
		{
			printf(" ");
		}

		for (int stars = (InVar - ii); stars >= 0; stars--)
		{

			printf("*");
		}
		printf("\n");
	}
	

}
