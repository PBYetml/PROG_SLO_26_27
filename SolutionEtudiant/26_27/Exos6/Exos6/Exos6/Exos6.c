//-----------------------------------------------------------------------------------//
// Nom du projet         : Exercice 6
// Nom du fichier        : Exos6
// Date de création      : 20.10.2026
// Date de modification  : 20.10.2026
//
// Auteur                : SAR (Siméon Augsburger)
//                        
// Version               : 1.0
//
// Description           : Exercice de révision (chapitres 1 à 6) mettant en oeuvre
//                         des sélections, des boucles et des affichages formatés.
//
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>  // pour usage printf et scanf

int main(void)
{
    // Affichage initial demandé (une seule fois au lancement)
    printf("Exercice 6 : SAR GFR\n");

    // Déclaration des variables
    char choix;                 // pour stocker le choix du menu (A, B ou Q)
    int ValA;                   // valeur entrée pour le test A
    int ValB;                   // valeur entrée pour le test B
    int i;                      // variable de boucle

    // Variables spécifiques pour le Test B
    short ValB1;                // variable de type short
    double ValB2;               // variable de type double

    // Boucle principale du menu
    do
    {
        printf("Test A ou B, Q pour Quitter \n");

        // Lecture du choix utilisateur
        scanf(" %c", &choix);

        // Sélection selon le choix de l'utilisateur
        switch (choix)
        {
        case 'A':
        case 'a':
            printf("TestA: entrez un nombre entre 1 et 9 \n");
            scanf("%d", &ValA);

            // Si ValA est négatif
            if (ValA < 0)
            {
                printf("TestA: ValA est negatif !\n");
            }
            // Si ValA vaut 0
            else if (ValA == 0)
            {
                ValA = 1;
                printf("TestA: ValA forcee a 1\n");
                printf("%d ", ValA);
                printf("*\n");
            }
            // Si ValA est plus grand que 9
            else
            {
                if (ValA > 9)
                {
                    ValA = 9;
                    printf("TestA: ValA limitee a 9 !\n");
                }

                // Affichage de la valeur suivie du nombre d'étoiles correspondant
                printf("%d ", ValA);
                for (i = 0; i < ValA; i++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 'B':
        case 'b':
            printf("TestB: entrez une valeur entre 0 et 9 \n");
            scanf("%d", &ValB);

            // Contrôle de la valeur de ValB (doit être comprise entre 0 et 9)
            if (ValB < 0 || ValB > 9)
            {
                printf("TestB: ValB n'est pas entre 0 et 9 !\n");
            }
            else
            {
                // Boucle variant de 0 à ValB - 1
                for (i = 0; i < ValB; i++)
                {
                    ValB1 = 100 + 10 * i;
                    ValB2 = (double)ValB1 / 10000.0;

                    printf("TestB: i = %d ValB1 = %d ValB2 = %f \n", i, ValB1, ValB2);
                }
            }
            break;

        case 'Q':
        case 'q':
            // Quitter le programme
            break;

        default:
            printf("Choix invalide, veuillez reessayer.\n");
            break;
        }

    } while (choix != 'Q' && choix != 'q');

    return(0);                  // fin du programme, tout s'est bien passé
}