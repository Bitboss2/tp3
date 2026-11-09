#include <stdio.h>
#include "exercice1.h"

int main(void){
    int taille = 0;
    printf("saisir une taille");
    scanf("%d", &taille);
    if(taille < 5 || taille > 10){
        printf("taille invalide \n");
        return 1;
    }
    int largeur = taille * taille;
    int hauteur_totale = 3 * taille - 1;
    char img[100][100];
    remplir_tableau(img);

    int indice_colonne_centrale = largeur / 2;

    pointe_etoile(img, indice_colonne_centrale, taille, largeur);
    corps_etoile(img, taille, largeur);
    jambes_etoile(img, taille, largeur);

    for(int i = 0; i< hauteur_totale; i++){
        for(int g = 0; g<largeur; g++){
            printf("%c", img[i][g]);
        }
        printf("\n");
    }

    
}