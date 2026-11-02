#include <stdio.h>
#include "exercice1.h"

void afficherNotes(int tab[100][100], int nbeleves){
    printf("Tableau des notes \n");
    printf("Eleve C1 C2 C3");
    for(int i = 0; i<nbeleves; i++){
        printf("     %d  %d  %d  %d\n", i, tab[i][0], tab[i][1], tab[i][2]);
    }
}