/*ce programme permet de lire une chaine de caract�res et supprimer les blancs � gauche et � droite */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch[200];
    int i,j; // D�claration du compteur
	
	// Contr�le de saisie
    do {
        printf("Entrer une phrase non vide :\n");
        gets(ch);
    } while (!(strlen(ch) > 0));
	
	//supprimer tous les blancs
    for (i = 0; i < strlen(ch); i++) {
        if (isspace(ch[i])) {
            for(j=i;j<strlen(ch);j++){
            	ch[j]=ch[j+1];
			}
		}
    }

	printf("La chaine finale est :%s", ch);
}

