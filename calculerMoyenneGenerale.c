#include <stdio.h>

float calculerMoyenneGenerale(int tab[100][100], int effectifclasse){
    float mgenerale = 0;
    int somme = 0;
    for(int i = 0; i<30; i++)
    {
        somme = somme + tab[i][0] + tab[i][1] + tab[i][2];
    }
    float moyenne = somme / 2;
    return moyenne;
}