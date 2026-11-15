//-----------------------------------------------------------------------------------//
// Nom du projet 		: SL121_LOGA - Exercice 7
// Nom du fichier 		: canevas.c
// Date de création 	: 15.11.2026
//
// Description          : Définition de la fonction AffTriangleAngleGB (Groupe B).
//----------------------------------------------------------------------------------//

//--- librairie standard ---//
#include <stdio.h>
#include "Canevas.h"
int main(void)
{
  
    // Appel direct de la fonction avec 5
    AffTriangleAngleGB(5);

}
//--- définition de la fonction (Groupe B) ---//
int AffTriangleAngleGB(int nbEtoilesMax)
{
    int iV_ligne = 0;
    int iV_col = 0;
    int iv_totalEtoiles = 0;



    // Boucle des lignes
    for (iV_ligne = 1; iV_ligne <= nbEtoilesMax; iV_ligne++) {
        // Boucle des étoiles
        for (iV_col = 0; iV_col < iV_ligne; iV_col++) {
            printf("*");
            iv_totalEtoiles++;
        }
        printf("\n");
    }

    return iv_totalEtoiles;
}