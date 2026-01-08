#include<string.h>

#include "etudiant.h"


int comparerParNom(const void *a, const void *b) {
    return strcmp(((Etudiant*)a)->nom, ((Etudiant*)b)->nom);
}


void trierParNom(Etudiant etudiants[], int n) {
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
        printf("| %3d | %-9d | %-35s | %-10s | %-17s |\n",i+1, etudiants[i].matricule, nom_complet, etudiants[i].sexe, etudiants[i].date_naissance);
    }
    printf("+-----+-----------+-------------------------------------+------------+-------------------+\n");

}


void trierParFiliere(Etudiant etudiants[], int n) {
    // À coder par Mboto
}