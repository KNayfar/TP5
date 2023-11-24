/*ce programme permet de lire une ligne de texte,afficher sa longuer,afficher le nombre 
de repetition de e dans cette chaine,afficher toute la phrase sans changer son contenu
et afficher toute la phrase à rebours*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    
	char ch1[201];
    char c;			//declaration d'une variable intermediaire
    int i, j = 0;	//declaration des compteurs

    do {
        printf("Entrer une chaine ne dépassant pas 200 caractères :\n");
        gets(ch1);
    } while (strlen(ch1) > 200);

    printf("La longueur de %s est %d \n", ch1, strlen(ch1));

    for (i = 0; i < strlen(ch1); i++) {
        if (ch1[i] == 'e') {
            j++;
        }
    }
    printf("Le nombre de répétitions de 'e' dans %s est %d \n", ch1, j);		//affichage du nombre de repetition de e

    printf("Chaine originale : %s \n", ch1);		//affichage de la chaine originale

    for (i = 0, j = strlen(ch1) - 1; i < j; i++, j--) {
        c = ch1[i];
        ch1[i] = ch1[j];
        ch1[j] = c;
    }
    printf("Chaine renversée : %s\n", ch1);			//affichage de la chaine à rebours
}
