/*ce programme permet de lire une ligne de texte et enlever toutes les apparitions de e 
en tassant les elements restant */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    
	char ch1[201];
    int i, j = 0;	//declaration des compteurs

    do {
        printf("Entrer une chaine ne dépassant pas 200 caractères :\n");
        gets(ch1);
    } while (strlen(ch1) > 200);

    for (i = 0; i < strlen(ch1); i++) {
        if (ch1[i] == 'e') {
            for(j=i;j< strlen(ch1);j++){
            	ch1[j]=ch1[j+1];
			}
        }
    }

    printf("Chaine finalle : %s\n", ch1);			//affichage de la chaine après modification
}
