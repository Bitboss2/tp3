
#ifndef exercice1
#define exercice1

void afficherMenu(void);
int lireChoix(void);
int saisirNombreEleves(void);
void saisirNotes(int tabeleves[100][100], int nbeleves);
void afficherNotes(int tab[100][100], int nbeleves);
float calculerMoyenneEleve(int tableau[100][100], int indiceleve);
float calculerMoyenneGenerale(int tab[100][100], int effectifclasse);
int trouverMeilleureNoteControle(int tab[100][100], int numcontrole, int nbeleves);
void afficherMeilleuresNotes(int tab[100][100], int nbeleves);

#endif