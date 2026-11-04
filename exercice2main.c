
#include <stdio.h>
#include "exercice2.h"

int main(void){

    int choix = 0;
    int montant = 0;
    int valide = 0;

    debut:
    afficher_menu();

    printf("choix : ");

    if(choix == 1){
        montant = saisir_montant();
        valide = montant_valide(montant);

        if(valide == 1){
            calcul_billets(montant);
        }
        else{
            printf("invalide\n");
        }

        goto debut;
    }

    else if(choix == 0){
        printf("quittez\n");
        return 0;
    }

    else{
        printf("invalide\n");
        goto debut;
    }
}
