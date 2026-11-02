#include <stdio.h>

float calculerMoyenneEleve(int tableau[100][100],int indiceleve){
    int addnotes = tableau[indiceleve][1] + tableau[indiceleve][2] + tableau[indiceleve][3];
    float moyenne_eleve = addnotes / 3 ;
    return moyenne_eleve;
}
