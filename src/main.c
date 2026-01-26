#include <stdio.h>
#include "etudiant.h"

#define MAX 200
/* === Prototypes des fonctions === */

void enregistrerEtudiant(Etudiant etudiants[], int index);
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

int main() {

    Etudiant etudiants[MAX];
    int n = 0, choix;

    printf("Nombre d'etudiants au depart : ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nEtudiant %d\n", i + 1);
        printf("Matricule : ");
        scanf("%d", &etudiants[i].matricule);
        getchar();
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        getchar();
        printf("Prenom : ");
        scanf("%s", etudiants[i].prenom);
        getchar();
        printf("Date naissance (jj/mm/aaaa) : ");
        scanf("%s", etudiants[i].date_naissance);
        getchar();
        printf("Sexe : ");
        scanf("%s", etudiants[i].sexe);
        getchar();
        printf("Departement : ");
        scanf("%s", etudiants[i].departement);
        getchar();
        printf("Filiere : ");
        scanf("%s", etudiants[i].filiere);
        getchar();
        printf("Region : ");
        scanf("%s", etudiants[i].region);
        getchar();
    }

    do {
        printf("\n1-Enregistrer\n2-Modifier\n3-Rechercher\n4-Supprimer\n");
        printf("5-Trier Nom\n6-Recherche Dichotomique\n7-Age\n8-Trier Filiere\n9-Afficher\n0-Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1: enregistrerEtudiant(etudiants, &n); break;
            case 2: modifierEtudiant(etudiants, n); break;
            case 3: {
                int m;
                printf("Matricule : ");
                scanf("%d", &m);
                getchar();
                int i = rechercherParMatricule(etudiants, n, m);
                if (i != -1) afficherUnEtudiant(etudiants[i]);
                else printf("Non trouve\n");
                break;
            }
            case 4: supprimerEtudiant(etudiants, &n); break;
            case 5: trierParNom(etudiants, n); break;
            case 6: {
                int m;
                printf("Matricule : ");
                scanf("%d", &m);
                getchar();
                int i = rechercheDichotomique(etudiants, n, m);
                if (i != -1) afficherUnEtudiant(etudiants[i]);
                else printf("Non trouve\n");
                break;
            }
            case 7: {
                int m;
                printf("Matricule : ");
                scanf("%d", &m);
                getchar();
                int i = rechercherParMatricule(etudiants, n, m);
                if (i != -1)
                    printf("Age : %d ans\n", calculerAge(etudiants[i]));
                break;
            }
            case 8: trierParFiliere(etudiants, n); break;
            case 9: afficherEtudiants(etudiants, n); break;
        }

    } while (choix != 0);

    return 0;
}