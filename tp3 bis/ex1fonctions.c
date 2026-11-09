#include <stdio.h>



int main(void){
    int taille = 0;
    printf("saisir une taille");
    scanf("%d", &taille);
    if(taille <= 5 || taille >= 10){
        printf("taille invalide \n");
        return;
    }
    int largeur = taille * taille;
    int hauteur_totale = 3 * taille - 1;
    char img[100][100];
}