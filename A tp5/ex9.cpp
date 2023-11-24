/*ce programme permet de lire un tableau de chaine de caractere et l'afficher ensuite apres avoirsupprimer
les caractéres non alphabétique  de chaque chaine du tableau*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n,i,j,k;
    
	// Contrôle de saisie
    do {
        printf("donner le nombre de chaines à saisir :\n");
        scanf("%d",&n);
    } while ( n<5 || n>20 );
    
    //declaration du tableau
    char T[n][100];
    
    //replissage du tableau
    for(i=0;i<n;i++){
    	printf("saisir la chaine N%d :\n",i+1);fflush(stdin);
    	gets(T[i]);
	}
	
    //suppression des caracteres non alphabetique
    for(i = 0; i < n; i++){
        for(j = 0; T[i][j]; j++){
            if (!isalpha(T[i][j])) {
                for(k = j; T[i][k]; k++){
                    T[i][k] = T[i][k+1];
                }
                j--;
            }
        }
    }
	
	//affichage
	for (i=0;i<n;i++){
		printf("%d	%s\n",i,T[i]);
	}
}

