#include <stdio.h>
#include "exercice2.h"

void afficher_menu(void){
    printf("\nDistributeur de billets\n");
    printf("1. Retirer de l'argent\n");
    printf("0. Quitter\n");
}

int saisir_montant(void){
    int montant = 0;

    printf("montant a retirer : ");
    scanf("%d", &montant);

    return montant;
}

int montant_valide(int montant){

    if(montant > 0 && montant <= 1000 && montant % 5 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void calcul_billets(int montant){

    int billet50 = montant / 50;
    montant = montant % 50;

    int billet20 = montant / 20;
    montant = montant % 20;

    int billet10 = montant / 10;
    montant = montant % 10;

    int billet5 = montant / 5;

    printf("billets de 50 euros : %d\n", billet50);
    printf("billets de 20 euros : %d\n", billet20);
    printf("billets de 10 euros : %d\n", billet10);
    printf("billets de 5 euros : %d\n", billet5);
}
