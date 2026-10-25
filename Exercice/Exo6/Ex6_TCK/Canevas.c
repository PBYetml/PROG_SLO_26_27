//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: x.x
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>

void TestA(int ValA)
{
    int i;

    // trop grand
    if (ValA > 9)   // si ValA bigger than 9 force it to 9 
    {
        ValA = 9;
        printf("TestA: ValA limitee a 9 !\n");
    }

    // cas 0
    if (ValA == 0) // if ValA is equal (== comparaison) then put it to one
    {
        ValA = 1;
        printf("TestA: ValA forcee a 1 !\n");
    }

    // positif
    if (ValA > 0)
    {
        printf("%d ", ValA); // show the chosen number

        for (i = 0; i < ValA; i++) // as long as i is smaller than ValA increment it and print a *
        {
            printf("*");
        }

        printf("\n"); // new line  
    }
    else
    {
        printf("TestA: ValA est negatif !\n"); // bundeled all other option (even letters because not specified & simpler)
    }
}


void TestB(int ValB)
{
    int i;
    short int ValB1;
    double ValB2;

    // controle entre 0 et 9
    if ((ValB < 0) || (ValB > 9)) // (ValB < 0) OR (ValB > 9)
    {
        printf("TestB: ValB n'est pas entre 0 et 9 !\n");
    }
    else
    {
        for (i = 0; i < ValB; i++)
        {
            ValB1 = 100 + 10 * i;

            // cast sinon la division se fait en entier
            ValB2 = (double)ValB1 / 10000;

            printf("TestB: i = %d ValB1 = %hd ValB2 = %.6f\n",
                i, ValB1, ValB2);
        }
    }
}


int main(void)
{
    int ValA;
    int ValB;

    printf("Exercice 6 : Clark Tristan\n");


    // ----- TEST A -----

    printf("Donner ValA : ");
    scanf_s("%d", &ValA);   // demande l'utulisateur une valeur pointer vers ValA

    TestA(ValA);


    // ----- TEST B -----

    printf("Donner ValB : ");
    scanf_s("%d", &ValB);

    TestB(ValB);


    return 0;
}
