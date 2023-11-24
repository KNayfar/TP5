/*ce programme permet de lire un mot et une phrase et etudier l'occurence de cet mot dans la phrase*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char phrase[200];
    char mot[200];
    char T[100][200]; //tableau pour stocker les mots
    int i, j=0, k = 0, nb = 0;

    // Contrôle de saisie
    do {
        printf("Entrer une phrase non vide :\n");
        gets(phrase);
    } while (!(strlen(phrase) > 0));

    do {
        printf("Entrer un mot :\n");
        gets(mot);
    } while (!(strlen(mot) > 0));

    // Conversion en majuscules
    for (i = 0; i < strlen(mot); i++) {
        mot[i] = toupper(mot[i]);
    }

    for (i = 0; i < strlen(phrase); i++) {
        phrase[i] = toupper(phrase[i]);
    }

    // Décomposition de la phrase
    for (i = 0; i <= strlen(phrase); i++) {
        if (phrase[i] == ' ' || phrase[i] == '\0') {
            strncpy(T[k], phrase + j, i - j);
            T[k][i - j] = '\0';
            k++;
            j = i + 1;
        }
    }

    // Étudier l'occurrence du mot dans la phrase
    for (i = 0; i < k; i++) {
        if (strcmp(T[i], mot) == 0) {
            nb++;
        }
    }

    // Affichage du nombre d'occurrences
    printf("Le mot '%s' apparait %d fois dans la phrase.\n", mot, nb);
}
