#include <stdio.h>

void remplir_tableau(char tab[100][100]){
    for(int i = 0; i < 100; i++){
        for(int g = 0; g < 100; g++){
            tab[i][g] = ' ';
        }
    }
}

void pointe_etoile(char tab[100][100], int centrale, int taille, int largeur){
    for(int i = 0; i < taille; i++){
        int gauche = centrale - i;
        int droite = centrale + i;
        tab[i][gauche] = 'A';
        tab[i][droite] = 'A';
        for(int g = gauche + 1; g < droite; g++){
            tab[i][g] = 'S';
        }
          if(i == taille-1){
            for(int g = 0; g < gauche; g++){
            tab[i][g] = '_';
            }
             for(int g = droite + 1; g < largeur; g++){
            tab[i][g] = '_';
            }

           }
    }

}

void corps_etoile(char tab[100][100], int taille, int largeur){
    for(int i = 0; i < taille; i++){
        int ligne = taille + i;
        int gauche = i;
        int droite = largeur - 1 - i;
        tab[ligne][gauche] = '.';
        tab[ligne][droite] = '.';
        for(int g = gauche + 1; g < droite; g++){
            tab[ligne][g] = 'S';
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

    int indice_colonne_centrale = largeur / 2;

    pointe_etoile(img, indice_colonne_centrale, taille, largeur);
    corps_etoile(img, taille, largeur);

    for(int i = 0; i< hauteur_totale; i++){
        for(int g = 0; g<largeur; g++){
            printf("%c", img[i][g]);
        }
        printf("\n");
    }

    
}