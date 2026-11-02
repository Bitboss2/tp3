#include <stdio.h>
#include "exercice1.h"

float calculerMoyenneEleve(int tableau[100][100],int indiceleve){
    int addnotes = tableau[indiceleve][0] + tableau[indiceleve][1] + tableau[indiceleve][2];
    float moyenne_eleve = addnotes / 3.0 ;
    return moyenne_eleve;
}
