/*ce programme permet de lire une chaine de caractères et supprimer les multiple blancs afin de garder un seul espace */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch[200];
    int i,j; // Déclaration du compteur
	
	// Contrôle de saisie
    do {
        printf("Entrer une phrase non vide :\n");
        gets(ch);
    } while (!(strlen(ch) > 0));
	
	// Supprimer les espaces successifs
    i = 0;
    while (ch[i]) {
        if (isblank(ch[i])) {
            j = i + 1;
            while (isblank(ch[j])) {
                for (int k = j; ch[k]; k++) {
                    ch[k] = ch[k + 1];
                }
            }
        }
        i++;
    }
    
	printf("La chaine finale est :%s", ch);
}

