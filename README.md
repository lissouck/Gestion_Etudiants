# Gestion des Étudiants en langage C

## Description
Ce projet consiste à développer un programme en **langage C** permettant la gestion des étudiants à l’aide d’une structure de données nommée **Etudiant**.

L’application permet d’enregistrer, modifier, supprimer, rechercher et trier les informations relatives aux étudiants via un menu interactif en ligne de commande.


---

## Structure de données

### Nom de la structure
```c
Etudiant
````

### Informations d’un étudiant

* Matricule
* Nom
* Prenom
* Date de naissance
* Sexe
* Département
* Filière
* Région d’origine

---

## Fonctionnalités principales

### Initialisation

* Saisie du **nombre d’étudiants** à la première ouverture du programme

### Menu principal

1. Enregistrer un étudiant
2. Modifier les informations d’un étudiant
3. Rechercher un étudiant par matricule
4. Supprimer un étudiant
5. Trier les étudiants par ordre alphabétique
6. Rechercher un étudiant par recherche dichotomique
7. Calculer l’âge d’un étudiant
8. Trier les étudiants par filière
9. Afficher la liste des étudiants

---

## Fonctions implémentées

### 1. Calcul de l’âge

* Calcul automatique de l’âge de l’étudiant à partir de la date de naissance

### 2. Modification des informations

* Correction des données en cas d’erreur
* Utilisation obligatoire des **pointeurs** pour accéder et modifier les champs

---

## Organisation des fichiers

```text
Gestion_Etudiants/
├── main.c
├── fonction.c
├── etudiant.h
└── README.md
```

---

## Compilation et exécution

### Compilation

```bash
gcc main.c fonction.c -o gestion_etudiants
```

### Exécution

```bash
./gestion_etudiants
```

---

## Prérequis

* Compilateur GCC
* Système Linux ou Windows (MinGW)

---

Projet réalisé dans le cadre des travaux pratiques d’**Algorithmique et Programmation en C**.

---