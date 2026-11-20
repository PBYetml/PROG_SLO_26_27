#include "NRN.h"

int AffTriangleAngleDB_NRN(int maxStar){

    int _AffTriangleAngleDH_NRN_Count = 0;

    for(int i = 0; i <= maxStar; i++){
        _AffTriangleAngleDH_NRN_Count += i;

        for(int j = maxStar; j > i; j--){
            printf(" ");
        }

        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    return _AffTriangleAngleDH_NRN_Count;
}