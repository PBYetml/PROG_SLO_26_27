//-----------------------------------------------------------------------------------//
// Nom du projet         : Exercice 5
// Nom du fichier        : Ex5_SAR
// Date de création      : xx.xx.2016
// Date de modification  : 20.10.2026
//
// Auteur                : CHR (Christian Huber)
//                         Philou (Ph. Bovey)
//
// Version               : 0.3
//
// Description           : Réalisation d'un programme en C mettant en oeuvre 
//                         des sélections, des itérations et l'affichage formaté.
//
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>  // pour usage printf et scanf

int main(void)
{
    // Déclaration des variables pour le menu et le cas A
    char choix;                 // pour stocker le choix du menu (A, B ou Q)
    int ValA;                   // valeur entrée par l'utilisateur pour le test A
    int i;                      // variable de boucle pour les itérations

    // Déclaration des variables pour le cas B
    char int8Val;               // entier signé sur 8 bits (type char)
    unsigned char uint8Val;     // entier non signé sur 8 bits (type unsigned char)
    int j;                      // variable de boucle pour le cas B

    // Boucle principale du menu
    do
    {
        printf("Test A ou B, Q pour Quitter \n");
        
        // Lecture du choix utilisateur (l'espace avant %c permet d'ignorer les retours à la ligne en cache)
        scanf(" %c", &choix);

        // Sélection selon le choix de l'utilisateur
        switch (choix)
        {
            case 'A':
            case 'a':
                printf("TestA: entrez un nombre de 1 a 9 \n");
                scanf("%d", &ValA);

                // Si ValA est plus grand que 9, on la limite à 9 et on affiche le message
                if (ValA > 9)
                {
                    ValA = 9;
                    printf("ValA limitee a 9 !\n");
                }

                // Si ValA est plus grand que 0, on exécute la boucle for de 0 à ValA - 1
                if (ValA > 0)
                {
                    for (i = 0; i < ValA; i++)
                    {
                        printf("i = %d \n", i);
                    }
                }
                break;

            case 'B':
            case 'b':
                printf("TestB: affichage val signee et non signee \n");
                
                // Initialisation des variables à 125
                int8Val = 125;
                uint8Val = 125;

                // Boucle effectuant 10 itérations
                for (j = 0; j < 10; j++)
                {
                    // Affichage avec %+3d pour forcer l'affichage du signe '+' sur le type signé
                    printf("int8Val = %+3d   uint8Val = %3d \n", int8Val, uint8Val);
                    
                    // Incrémentation de chaque variable à chaque passage
                    int8Val++;
                    uint8Val++;
                }
                break;

            case 'Q':
            case 'q':
                // Quitter le programme
                break;

            default:
                // Choix invalide
                printf("Choix invalide, veuillez reessayer.\n");
                break;
        }

    } while (choix != 'Q' && choix != 'q');

    return(0);                  // fin du programme, tout s'est bien passé
}