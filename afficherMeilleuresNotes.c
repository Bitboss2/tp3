#include <stdio.h>
#include "exercice1.h"

void afficherMeilleuresNotes(int tab[100][100], int nbeleves){
    int meilleure1 =  trouverMeilleureNoteControle(tab, 0, nbeleves);
    printf("meilleure note au controle 1 : %d \n", meilleure1);
    int meilleure2 = trouverMeilleureNoteControle(tab, 1, nbeleves);
    printf("meilleure note au controle 2 : %d \n", meilleure2);
    int meilleure3 = trouverMeilleureNoteControle(tab, 2, nbeleves);
    printf("meilleure note au controle 3 : %d \n", meilleure3);
}