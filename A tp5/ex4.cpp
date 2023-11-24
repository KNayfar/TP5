/*ce programme permet de lire une chaine de caract�res ,de supprimer tous les caract�res autre que
alphab�tiques,de construire une chaine RES constitu� par les consonnes MAJUSCULES suivies de toutes
les voyelles MAJUSCULES suivie de toutes le consonnes minuscule suivie de toutes les voyelles minuscules
en conservant l'ordre d'apparition de ces lettres dans la chaine mere*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch[200];
    char CMaj[100]= "";    // Initialisation des cha�nes � une cha�ne vide
    char VMaj[100]= "";
    char Cmin[100]= "";
    char Vmin[100]= "";
    char RES[400]= "";
    int i,j; // D�claration du compteur

    // Contr�le de saisie
    do {
        printf("Entrer une chaine ne d�passant pas 200 caract�res :\n");
        gets(ch);
    } while (strlen(ch) >= 200);

	//supprimer tous les caract�res autres que les alphab�tiques
    for (i = 0; i < strlen(ch); i++) {
        if (!isalpha(ch[i])) {
            for(j=i;j< strlen(ch);j++){
            	ch[j]=ch[j+1];
			}
        }
    }

    // D�composer la cha�ne ch
    for (i = 0; i < strlen(ch); i++) {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'y' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'Y') {
            if (isupper(ch[i])) {
                strncat(VMaj, &ch[i],1);
            } else {
                strncat(Vmin, &ch[i],1);
            }
        } else {
            if (isupper(ch[i])) {
                strncat(CMaj, &ch[i],1);
            } else {
                strncat(Cmin, &ch[i],1);
            }
        }
    }

    // Construction de la cha�ne finale
    strcpy(RES, CMaj);
    strcat(RES, VMaj);
    strcat(RES, Cmin);
    strcat(RES, Vmin);
    printf("La chaine finale est %s", RES);
}

