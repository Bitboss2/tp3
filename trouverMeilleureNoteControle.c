#include <stdio.h>
#include "exercice1.h"

int trouverMeilleureNoteControle(int tab[100][100], int numcontrole, int nbeleves){
    int meilleure_note = 0;
    for (int i = 0; i < nbeleves; i++)
    {
        if(meilleure_note < tab[i][numcontrole]){
            meilleure_note = tab[i][numcontrole];
        }
    }
    return meilleure_note;
}

