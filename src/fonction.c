<<<<<<< HEAD
    #include <stdio.h>
    #include "etudiant.h"

    void enregistrerEtudiant(Etudiant etudiants[], int *n) {
        int dateValide(const char date[]) {
        int j, m, a;
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "etudiant.h"

void enregistrerEtudiant(Etudiant etudiants[], int *n) {
   
}
int dateValide(const char date[]) {
    int j, m, a;
>>>>>>> 9e04e77e11b698bc5a437806abee938ee4a83ed0

        if (sscanf(date, "%d/%d/%d", &j, &m, &a) != 3)
            return 0;
<<<<<<< HEAD

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
=======
        }
    return 1; // date valide
    } 
void nettoyerFinLigne(char *chaine) {
    size_t len = strlen(chaine);
    if (len > 0 && chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }
}

void enregistrerEtudiant(Etudiant etudiants[], int *n) {
    int index = *n;
>>>>>>> 9e04e77e11b698bc5a437806abee938ee4a83ed0

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
    (*n)++;
}


<<<<<<< HEAD
int rechercherParMatricule(Etudiant etudiants[], int n, int matricule) {
    for (int i = 0; i < n; i++)
        if (etudiants[i].matricule == matricule)
            return i;
    return -1;
}

=======
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

<<<<<<< HEAD

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


 
=======
>>>>>>> 0a4352356ceb754dd8fb05dbe30c3f6a1f75a9f7
void modifierEtudiant(Etudiant *e) {
    int mat;
    printf("Matricule a modifier : ");
    scanf("%d", &mat);
    getchar();
    Etudiant etudiants[100];
    int n;

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

//Fonction pour comparer(Tri alphabétique) le nom de 02 étudiants
int comparerParNom(const void *a, const void *b){
    const Etudiant *e1 = a;
    const Etudiant *e2 = b;
    return strcmp(e1->nom, e2->nom);
}

//Fonction pour comparer(Tri alphabétique) la filière de 02 étudiants
int comparerParFiliere(const void *a, const void *b){
    const Etudiant *e1 = a;
    const Etudiant *e2 = b;
    return strcmp(e1->filiere, e2->filiere);
}

void trierParNom(Etudiant etudiants[], int n){

    //Tri par nom uniquement
    qsort(etudiants, n, sizeof(Etudiant), comparerParNom);

    //Affichage des noms par ordre alphabétique
    printf("Affichage par ordre alphabétique\n");
    printf("+-----+-----------+-------------------------------------+------------+-------------------+\n");
    printf("|  N° | MATRICULE |           NOM ET PRENOM(S)          |    SEXE    | DATE DE NAISSANCE |\n");
    printf("+-----+-----------+-------------------------------------+------------+-------------------+\n");
    
    for(int i = 0; i < n; i++){

        //Assemblage pour former le nom complet i.e nom + prénom
        char nom_complet[60];
        snprintf(nom_complet, sizeof(nom_complet), "%s %s", etudiants[i].nom, etudiants[i].prenom);
        
        //Affichage formaté
       printf("| %3d | %-9d | %-35s | %-10s | %-17s | %-23s |\n",
       i+1, etudiants[i].matricule, nom_complet, etudiants[i].sexe,
       etudiants[i].date_naissance, etudiants[i].filiere);
    }
    printf("+-----+-----------+-------------------------------------+------------+-------------------+\n");
}

void trierParFiliere(Etudiant etudiants[], int n){
    //Tri par filière
    qsort(etudiants, n, sizeof(Etudiant), comparerParFiliere);

    //Affichage des noms des étudiants par ordre de filiere
    printf("Liste triée par filiere\n");
    printf("+-----+-----------+-------------------------------------+------------+-------------------+-------------------------+\n");
    printf("|  N° | MATRICULE |             NOM ET PRENOM(S)        |    SEXE    | DATE DE NAISSANCE |        FILIERE          |\n");
    printf("+-----+-----------+-------------------------------------+------------+-------------------+-------------------------+\n");
    
    for(int i = 0; i < n; i++){

        //Assemblage pour former le nom complet i.e nom + prénom
        char nom_complet[60];
        snprintf(nom_complet, sizeof(nom_complet), "%s %s", etudiants[i].nom, etudiants[i].prenom);
        
        //Affichage formaté
        printf("| %3d | %-9d | %-35s | %-10s | %-17s | %3d |\n",
       i+1, etudiants[i].matricule, nom_complet, etudiants[i].sexe,
       etudiants[i].date_naissance, calculerAge(etudiants[i]));
    }
    printf("+-----+-----------+-------------------------------------+------------+-------------------+-------------------------+\n");
}
int rechercheDichotomique(Etudiant etudiants[], int n, int matricule) {
     qsort(etudiants, n, sizeof(Etudiant), comparerParMatricule());

    int g = 0, d = n - 1;
    while (g <= d) {
        int m = (g + d) / 2;
        if (etudiants[m].matricule == matricule) return m;
        if (etudiants[m].matricule < matricule) g = m + 1;
        else d = m - 1;
    }
    return -1;
}

     
int calculerAge(Etudiant e) {
    int j, m, a;
    if (sscanf(e.date_naissance, "%d/%d/%d", &j, &m, &a) != 3)
        return -1;
        
        time_t t = time(NULL);
    struct tm *now = localtime(&t);

    int age = (now->tm_year + 1900) - a;

    // Ajustement si l'anniversaire n'est pas encore passé cette année
    if ((now->tm_mon + 1) < m || ((now->tm_mon + 1) == m && now->tm_mday < j)) {
        age--;
    }

    return age;
}
>>>>>>> 9e04e77e11b698bc5a437806abee938ee4a83ed0
