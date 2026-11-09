#include <stdio.h>
#include "exercice1.h"

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
    for(int i = 0; i < taille -2; i++){
        int ligne = taille + i;
        int gauche = 3*i;
        int droite = largeur - 1 - 3* i;
        for(int g = gauche + 1; g < droite; g++){
            tab[ligne][g] = 'S';
        }
        if(i == 0){
            tab[ligne][gauche] = '"';
            tab[ligne][droite] = '"';
        }
        else{
            tab[ligne][gauche] = '\'';
            tab[ligne][droite] = '\'';
            tab[ligne][gauche +1 ] = 'V';
            tab[ligne][droite - 1] = 'V';
        }
    }
}

void jambes_etoile(char tab[100][100], int taille, int largeur){
    for(int i = 0; i <= taille; i++){
        int ligne = 2 * taille -2 + i;
        int gauche = 3 * taille - 8 - i;
        int droite = largeur - 1 - gauche;
        int interieur_gauche = largeur / 2 - 2 * (i - 1);
        int interieur_droite = interieur_droite = largeur / 2 + 2 * (i - 1);
        tab[ligne][gauche] = '.';
        tab[ligne][droite] = '.';
        tab[ligne][interieur_gauche] = '"';
        tab[ligne][interieur_droite] = '"';
        if(i<2){
            for(int g = gauche +1; g<droite; g++){
                tab[ligne][g] = 'S';
            }
        }
        else {
        for(int g = gauche + 1; g < interieur_gauche; g++){
            tab[ligne][g] = 'S';
        }
        for(int g = interieur_droite + 1; g < droite; g++){
            tab[ligne][g] = 'S';
        }
            }
    }
}