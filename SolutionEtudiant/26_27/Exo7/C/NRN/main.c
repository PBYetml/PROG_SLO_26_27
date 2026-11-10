#include "NRN.h"

void main(){
    int starCount = 0;
    int maxStar = 0;
    printf("Number of star: ");
    scanf("%d", &maxStar);
    starCount = AffTriangleAngleDB_NRN(maxStar);
    printf("\n Number of star printed: %d", starCount);
    return;
}