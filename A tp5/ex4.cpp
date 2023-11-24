/*ce programme permet de lire une chaine de caractères ,de supprimer tous les caractères autre que
alphabétiques,de construire une chaine RES constitué par les consonnes MAJUSCULES suivies de toutes
les voyelles MAJUSCULES suivie de toutes le consonnes minuscule suivie de toutes les voyelles minuscules
en conservant l'ordre d'apparition de ces lettres dans la chaine mere*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch[200];
    char CMaj[100]= "";    // Initialisation des chaînes à une chaîne vide
    char VMaj[100]= "";
    char Cmin[100]= "";
    char Vmin[100]= "";
    char RES[400]= "";
    int i,j; // Déclaration du compteur

    // Contrôle de saisie
    do {
        printf("Entrer une chaine ne dépassant pas 200 caractères :\n");
        gets(ch);
    } while (strlen(ch) >= 200);

	//supprimer tous les caractères autres que les alphabétiques
    for (i = 0; i < strlen(ch); i++) {
        if (!isalpha(ch[i])) {
            for(j=i;j< strlen(ch);j++){
            	ch[j]=ch[j+1];
			}
        }
    }

    // Décomposer la chaîne ch
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

    // Construction de la chaîne finale
    strcpy(RES, CMaj);
    strcat(RES, VMaj);
    strcat(RES, Cmin);
    strcat(RES, Vmin);
    printf("La chaine finale est %s", RES);
}

