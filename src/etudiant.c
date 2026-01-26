#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "etudiant.h"

//   FONCTIONS D'AFFICHAGE

void afficherUnEtudiant(Etudiant e) {
    printf("Matricule : %d\n", e.matricule);
    printf("Nom : %s %s\n", e.nom, e.prenom);
    printf("Date naissance : %s\n", e.date_naissance);
    printf("Sexe : %s\n", e.sexe);
    printf("Departement : %s\n", e.departement);
    printf("Filiere : %s\n", e.filiere);
    printf("Region : %s\n", e.region);
}

void afficherEtudiants(Etudiant etudiants[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Etudiant %d ---\n", i + 1);
        afficherUnEtudiant(etudiants[i]);
    }
}

//  ENREGISTREMENT

void enregistrerEtudiant(Etudiant etudiants[], int *n) {
    Etudiant e;

    printf("Matricule : ");
    scanf("%d", &e.matricule);
    getchar();
    printf("Nom : ");
    scanf("%s", e.nom);
    getchar();
    printf("Prenom : ");
    scanf("%s", e.prenom);
    getchar();
    printf("Date de naissance (jj/mm/aaaa) : ");
    scanf("%s", e.date_naissance);
    getchar();
    printf("Sexe : ");
    scanf("%s", e.sexe);
    getchar();
    printf("Departement : ");
    scanf("%s", e.departement);
    getchar();
    printf("Filiere : ");
    scanf("%s", e.filiere);
    getchar();
    printf("Region : ");
    scanf("%s", e.region);
    getchar();

    etudiants[*n] = e;
    (*n)++;

    printf("Etudiant enregistre avec succes.\n");
}

//   RECHERCHE & SUPPRESSION

int rechercherParMatricule(Etudiant etudiants[], int n, int matricule) {
    for (int i = 0; i < n; i++)
        if (etudiants[i].matricule == matricule)
            return i;
    return -1;
}

int comparerParMatricule(const void *a, const void *b) {
    return ((Etudiant*)a)->matricule - ((Etudiant*)b)->matricule;
}

int rechercheDichotomique(Etudiant etudiants[], int n, int matricule) {
    qsort(etudiants, n, sizeof(Etudiant), comparerParMatricule);

    int g = 0, d = n - 1;
    while (g <= d) {
        int m = (g + d) / 2;
        if (etudiants[m].matricule == matricule) return m;
        if (etudiants[m].matricule < matricule) g = m + 1;
        else d = m - 1;
    }
    return -1;
}

void supprimerEtudiant(Etudiant etudiants[], int *n) {
    int mat;
    printf("Matricule a supprimer : ");
    scanf("%d", &mat);
    getchar();

    int idx = rechercherParMatricule(etudiants, *n, mat);
    if (idx == -1) {
        printf("Etudiant non trouve.\n");
        return;
    }

    for (int i = idx; i < *n - 1; i++)
        etudiants[i] = etudiants[i + 1];

    (*n)--;
    printf("Etudiant supprime.\n");
}

//   MODIFICATION (POINTEURS)

void modifierEtudiant(Etudiant etudiants[], int n) {
    int mat;
    printf("Matricule a modifier : ");
    scanf("%d", &mat);
    getchar();

    int idx = rechercherParMatricule(etudiants, n, mat);
    if (idx == -1) {
        printf("Etudiant non trouve.\n");
        return;
    }

    Etudiant *e = &etudiants[idx];

    printf("Nouveau nom : ");
    scanf("%s", e->nom);
    getchar();
    printf("Nouveau prenom : ");
    scanf("%s", e->prenom);
    getchar();
    printf("Nouvelle filiere : ");
    scanf("%s", e->filiere);
    getchar();

    printf("Modification effectuee.\n");
}

//   TRI 

int comparerParNom(const void *a, const void *b) {
    return strcmp(((Etudiant*)a)->nom, ((Etudiant*)b)->nom);
}

int comparerParFiliere(const void *a, const void *b) {
    return strcmp(((Etudiant*)a)->filiere, ((Etudiant*)b)->filiere);
}

void trierParNom(Etudiant etudiants[], int n) {
    qsort(etudiants, n, sizeof(Etudiant), comparerParNom);
    afficherEtudiants(etudiants, n);
}

void trierParFiliere(Etudiant etudiants[], int n) {
    qsort(etudiants, n, sizeof(Etudiant), comparerParFiliere);
    afficherEtudiants(etudiants, n);
}

//   CALCUL AGE 

int calculerAge(Etudiant e) {
    int j, m, a;
    if (sscanf(e.date_naissance, "%d/%d/%d", &j, &m, &a) != 3)
        return -1;
        
        time_t t = time(NULL);
    struct tm *now = localtime(&t);

    return (now->tm_year + 1900) - a;
}