#include "exercice1.h"
#include <stdio.h>

int main(void){
    int choix;
    int eleve;
    int notessaisies = 0;
    int nbeleves = 0;
    int notes[100][100] = {0};

    debut:
    afficherMenu();
    printf("\n choix : ");
    choix = lireChoix();

    if(choix == 1){
        nbeleves = saisirNombreEleves();
        notessaisies = 0;
        goto debut;
    }

    else if(choix == 2){
        if(nbeleves > 0){
            saisirNotes(notes, nbeleves);
            notessaisies = 1;
        }
        else{
            printf("il faut d'abord saisir le nombre d'eleves !!!\n");
        }
        goto debut;
    }

    else if(choix == 3){
        if(notessaisies == 1){
            afficherNotes(notes, nbeleves);
        }
        else{
            printf("il faut d'abord saisir les notes !!\n");
        }
        goto debut;
    }

     else if(choix == 4){
        if(notessaisies == 1){
            printf("entrez le numero eleve : ");
            scanf("%d", &eleve);

            if(eleve >= 1 && eleve <= nbeleves){
                float moyenne = calculerMoyenneEleve(notes, eleve - 1);
                printf("Moyenne de l'eleve : %.2f\n", moyenne);
            }
            else{
                printf("Eleve invalide\n");
            }
        }
        else{
            printf("il faut d'abord saisir les notes\n");
        }
        goto debut;
    }

    else if(choix == 5){
        if(notessaisies == 1){
            float moyenne = calculerMoyenneGenerale(notes, nbeleves);
            printf("yoyenne generale : %.2f\n", moyenne);
        }
        else{
            printf("il faut d'abord saisir les notes\n");
        }
        goto debut;
    }

    else if(choix == 6){
        if(notessaisies == 1){
            afficherMeilleuresNotes(notes, nbeleves);
        }
        else{
            printf("il faut d'abord saisir les notes\n");
        }
        goto debut;
    }
    else if(choix == 0){
        return 0;
    }
    else{
        printf("choix invalide\n");
        goto debut;
    }
}

