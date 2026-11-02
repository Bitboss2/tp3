#include <stdio.h>

int trouverMeilleureNoteControle(int tab[100][100], int numcontrole){
    int meilleure_note = 0;
    for (int i = 0 ; i<30 ; i++)
    {
        if(meilleure_note > tab[i][numcontrole]){
            meilleure_note = tab[i][numcontrole];
        }
    }
    return meilleure_note;
}

