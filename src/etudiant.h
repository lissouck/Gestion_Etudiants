#ifndef ETUDIANT_H
#define ETUDIANT_H

typedef struct {
    int matricule;
    char nom[30];
    char prenom[30];
    char date_naissance[11]; // jj/mm/aaaa
    char sexe[10];
    char departement[30];
    char filiere[30];
    char region[30];
} Etudiant;

<<<<<<< HEAD
/* === Prototypes des fonctions === */
void enregistrerEtudiant(Etudiant etudiants[], int *n);
// void enregistrerEtudiant(Etudiant etudiants[], int index);
void afficherEtudiants(Etudiant etudiants[], int n);
int dateValide(const char date[]);
void afficherUnEtudiant(Etudiant e);

int rechercherParMatricule(Etudiant etudiants[], int n, int matricule);
int rechercheDichotomique(Etudiant etudiants[], int n, int matricule);

void supprimerEtudiant(Etudiant etudiants[], int *n);
void modifierEtudiant(Etudiant etudiants[], int n);

void trierParNom(Etudiant etudiants[], int n);
void trierParFiliere(Etudiant etudiants[], int n);

int calculerAge(Etudiant e);

int comparerParNom(const void *a, const void *b);
int comparerParFiliere(const void *a, const void *b);

=======
>>>>>>> 9e04e77e11b698bc5a437806abee938ee4a83ed0
#endif