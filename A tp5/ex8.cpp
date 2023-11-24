/*ce programme permet de lire une chaine de caractères et supprimer 
les succesion d'un caractére afin de garder un seul */

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
	
    //supprimer les caractéres succesifs
    i = 0;
    while (ch[i]) {
        if (ch[i] == ch[i + 1]) {
            for(j = i + 1; ch[j]; j++){
                ch[j] = ch[j + 1];
            }
        } else {
            i++;
        }
    }

	printf("La chaine finale est :%s", ch);
}

