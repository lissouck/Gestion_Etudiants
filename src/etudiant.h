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

/* === Prototypes des fonctions === */

void enregistrerEtudiant(Etudiant etudiants[], int *n);
void afficherEtudiants(Etudiant etudiants[], int n);
void afficherUnEtudiant(Etudiant e);

int rechercherParMatricule(Etudiant etudiants[], int n, int matricule);
int rechercheDichotomique(Etudiant etudiants[], int n, int matricule);

void supprimerEtudiant(Etudiant etudiants[], int *n);
void modifierEtudiant(Etudiant etudiants[], int n);

void trierParNom(Etudiant etudiants[], int n);
void trierParFiliere(Etudiant etudiants[], int n);

int calculerAge(Etudiant e);

#endif