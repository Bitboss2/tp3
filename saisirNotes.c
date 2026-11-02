#include <stdio.h>
#include "exercice1.h"

void saisirNotes(int tabeleves[100][100],int nbeleves){
    for(int i = 0; i<nbeleves; i++){
        int note1 = 0;
        int note2 = 0;
        int note3 = 0;
        debut:
        printf("entrez la note de l'eleve entre 0 et 20 %d", &i+1);
        printf("note controle 1");
        scanf("%d", &note1);
        if(0 <= note1 < 20)
        {
            tabeleves[i+1][1] = note1;
        }
        else{
            printf("note invalide car pas comprise entre 0 et 20");
            goto debut;
        }
        
        
        printf("note controle 2");
        scanf("%d", &note2);
        if(0 <= note2 < 20)
        {
            tabeleves[i+1][1] = note2;
        }
        else{
            printf("note invalide car pas comprise entre 0 et 20");
            goto debut;
        }
        
        
        printf("note controle 3");
        scanf("%d", &note3);
        if(0 <= note3 < 20)
        {
            tabeleves[i+1][1] = note3;
        }
        else{
            printf("note invalide car pas comprise entre 0 et 20");
            goto debut;
        }

    }
}