#include <stdio.h>

void remplir_tableau(char tab[100][100]){
    for(int i = 0; i < 100; i++){
        for(int g = 0; g < 100; g++){
            tab[i][g] = ' ';
        }
    }
}

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
    
    for(int i = 0; i< sizeof(img)/sizeof(img[0]); i++){
        for(int g = 0; g<sizeof(img)/sizeof(img[0]); g++){
            printf("%c", img[i][g]);
        }
    }

    
}