#include <stdio.h>
#include "exercice1.h"

float calculerMoyenneGenerale(int tab[100][100],int effectifclasse){
    float somme = 0;
    for(int i = 0; i < effectifclasse; i++){
        somme = somme + calculerMoyenneEleve(tab, i);
    }

    float moyenne = somme / effectifclasse;
    return moyenne;
}