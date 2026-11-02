#include <stdio.h>
#include "exercice1.h"

int saisirNombreEleves(void){
    int nbeleves = 0;
    printf("entrez un nombre d'eleves entre 1 et 30");
    scanf("%d", &nbeleves);
    if(1<nbeleves<30){
        return nbeleves;
    }
    else{
        printf("résultat invalide");
    }
    
}