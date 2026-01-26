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
    
// Fonction pour enlever le '\n' final d'une chaîne
void nettoyerFinLigne(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
}

void enregistrerEtudiant(Etudiant etudiants[], int index) {
    int dateValide(const char date[]);  // prototype de validation de date

    printf("\n--- Enregistrement de l'etudiant %d ---\n", index + 1);

    // Matricule
    printf("Matricule : ");
    scanf("%d", &etudiants[index].matricule);
    getchar(); // vider le buffer

    // Nom
    printf("Nom : ");
    fgets(etudiants[index].nom, sizeof(etudiants[index].nom), stdin);
    nettoyerFinLigne(etudiants[index].nom);

    // Prénom
    printf("Prenoms : ");
    fgets(etudiants[index].prenom, sizeof(etudiants[index].prenom), stdin);
    nettoyerFinLigne(etudiants[index].prenom);

    // Date de naissance avec validation
    do {
        printf("Date de naissance (jj/mm/aaaa) : ");
        fgets(etudiants[index].date_naissance,
              sizeof(etudiants[index].date_naissance), stdin);
        nettoyerFinLigne(etudiants[index].date_naissance);

        if (!dateValide(etudiants[index].date_naissance))
            printf("Date incorrecte, veuillez reessayer.\n");

    } while (!dateValide(etudiants[index].date_naissance));

    // Sexe
    printf("Sexe : ");
    fgets(etudiants[index].sexe, sizeof(etudiants[index].sexe), stdin);
    nettoyerFinLigne(etudiants[index].sexe);

    // Département
    printf("Departement : ");
    fgets(etudiants[index].departement,
          sizeof(etudiants[index].departement), stdin);
    nettoyerFinLigne(etudiants[index].departement);

    // Filiere
    printf("Filiere : ");
    fgets(etudiants[index].filiere,
          sizeof(etudiants[index].filiere), stdin);
    nettoyerFinLigne(etudiants[index].filiere);

    // Région
    printf("Region : ");
    fgets(etudiants[index].region,
          sizeof(etudiants[index].region), stdin);
    nettoyerFinLigne(etudiants[index].region);
}


    // void enregistrerEtudiant(Etudiant etudiants[], int index) {
    //     printf("\n--- Enregistrement de l'etudiant %d ---\n", index + 1);

    //     printf("Matricule : ");
    //     scanf("%d", &etudiants[index].matricule);
    //     getchar(); // vider le buffer

    //     printf("Nom :\n ");
    //     fgets(etudiants[index].nom, sizeof(etudiants[index].nom), stdin);
    //     nettoyerFinLigne(etudiants[index].nom);
    //     printf("Prenoms :\n ");
    //     fgets(etudiants[index].nom, sizeof(etudiants[index].prenom), stdin);
    //     nettoyerFinLigne(etudiants[index].prenom);


    //     do {
    //         printf("Date de naissance (jj/mm/aaaa) : \n");
    //         fgets(etudiants[index].date_naissance,
    //             sizeof(etudiants[index].date_naissance), stdin);
    //         nettoyerFinLigne(etudiants[index].date_naissance);

    //         if (!dateValide(etudiants[index].date_naissance))
    //             printf(" Date incorrecte veuillez reessayez.\n");

    //     } while (!dateValide(etudiants[index].date_naissance));

    //     printf("Sexe : ");
    //     fgets(etudiants[index].sexe, sizeof(etudiants[index].sexe), stdin);
    //     nettoyerFinLigne(etudiants[index].sexe);

    //     printf("Departement \n: ");
    //     fgets(etudiants[index].departement,
    //         sizeof(etudiants[index].departement), stdin);
    //     nettoyerFinLigne(etudiants[index].departement);

    //     printf("Filiere : ");
    //     fgets(etudiants[index].filiere,
    //         sizeof(etudiants[index].filiere), stdin);
    //     nettoyerFinLigne(etudiants[index].filiere);

    //     printf("Region : ");
    //     fgets(etudiants[index].region,
    //         sizeof(etudiants[index].region), stdin);
    //     nettoyerFinLigne(etudiants[index].region);
    // }

    }

    
    void afficherEtudiants(Etudiant etudiants[], int n)
    {
        int i;

        if (n == 0)
        {
            printf("\nAucun etudiant a afficher.\n");
            return;
        }

        printf("\n LISTE DES ETUDIANTS ENREGISTRES \n");

        for (i = 0; i < n; i++)
        {
            printf("\nEtudiant %d\n", i + 1);
            printf("Matricule       : %d\n", etudiants[i].matricule);
            printf("Nom             : %s\n", etudiants[i].nom);
            printf("Prenom          : %s\n", etudiants[i].prenom);
            printf("Date naissance  : %s\n", etudiants[i].date_naissance);
            printf("Sexe            : %s\n", etudiants[i].sexe);
            printf("Departement     : %s\n", etudiants[i].departement);
            printf("Filiere         : %s\n", etudiants[i].filiere);
            printf("Region          : %s\n", etudiants[i].region);
        }
    }


    int rechercherParMatricule(Etudiant etudiants[], int n, int matricule) {
        // Innocent
        return -1;
    }

    void supprimerEtudiant(Etudiant etudiants[], int *n) {
        // Innocent
    }

   void modifierEtudiant(Etudiant etudiants[], int n){
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


 