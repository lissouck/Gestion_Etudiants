#include <stdio.h>
#include "etudiant.h"

void enregistrerEtudiant(Etudiant etudiants[], int *n) {
    int dateValide(const char date[]) {
    int j, m, a;

    if (sscanf(date, "%d/%d/%d", &j, &m, &a) != 3)
        return 0;

    if (a < 1900 || a > 2025)
        return 0;

    if (m < 1 || m > 12)
        return 0;

    if (j < 1 || j > 31)
        return 0;

    if ((m == 4 || m == 6 || m == 9 || m == 11) && j > 30)
        return 0;

    if (m == 2) {
        int bissextile = (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0));
        if (j > (bissextile ? 29 : 28))
            return 0;
    }

    return 1;
}

void enregistrerEtudiant(Etudiant etudiants[], int index) {
    printf("\n--- Enregistrement de l'etudiant %d ---\n", index + 1);

    printf("Matricule : ");
    scanf("%d", &etudiants[index].matricule);
    getchar(); // vider le buffer

    printf("Nom et prenoms : ");
    fgets(etudiants[index].nom, sizeof(etudiants[index].nom), stdin);
    nettoyerFinLigne(etudiants[index].nom);

    do {
        printf("Date de naissance (jj/mm/aaaa) : ");
        fgets(etudiants[index].date_naissance,
              sizeof(etudiants[index].date_naissance), stdin);
        nettoyerFinLigne(etudiants[index].date_naissance);

        if (!dateValide(etudiants[index].date_naissance))
            printf(" Date incorrecte veuillez reessayez.\n");

    } while (!dateValide(etudiants[index].date_naissance));

    printf("Sexe : ");
    fgets(etudiants[index].sexe, sizeof(etudiants[index].sexe), stdin);
    nettoyerFinLigne(etudiants[index].sexe);

    printf("Departement : ");
    fgets(etudiants[index].departement,
          sizeof(etudiants[index].departement), stdin);
    nettoyerFinLigne(etudiants[index].departement);

    printf("Filiere : ");
    fgets(etudiants[index].filiere,
          sizeof(etudiants[index].filiere), stdin);
    nettoyerFinLigne(etudiants[index].filiere);

    printf("Region : ");
    fgets(etudiants[index].region,
          sizeof(etudiants[index].region), stdin);
    nettoyerFinLigne(etudiants[index].region);
}

    printf("[emma doit coder]\n");
}

void afficherEtudiants(Etudiant etudiants[], int n) {
    // Emma
    printf("[emma doit coder]\n");
}

int rechercherParMatricule(Etudiant etudiants[], int n, int matricule) {
    // Innocent
    return -1;
}

void supprimerEtudiant(Etudiant etudiants[], int *n) {
    // Innocent
}

void modifierEtudiant(Etudiant *e) {
    // Meldeke
}

void trierParNom(Etudiant etudiants[], int n) {
    // Mbotto
}

void trierParFiliere(Etudiant etudiants[], int n) {
    // Mbotto
}

int rechercheDichotomique(Etudiant etudiants[], int n, int matricule) {
    // Innocent
    return -1;
}

int calculerAge(Etudiant e) {
    // Meldeke
    return 0;
}