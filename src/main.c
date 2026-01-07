#include <stdio.h>
#include "etudiant.h"

#define MAX 100

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
            case 2: 
                // modifierEtudiant(&etudiants[0]); // test temporaire
                printf("Option réservée à Meldeke\n");
                break;
            case 3: printf("Option réservée à Innocent\n"); break;
            case 4: printf("Option réservée à Innocent\n"); break;
            case 5: printf("Option réservée à Mboto\n"); break;
            case 6: printf("Option réservée à Innocent\n"); break;
            case 7: printf("Option réservée à Meldeke\n"); break;
            case 8: printf("Option réservée à Mboto\n"); break;
            case 9: afficherEtudiants(etudiants, n); break;
            case 0: printf("Fin du programme.\n"); break;
            default: printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}