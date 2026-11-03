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
