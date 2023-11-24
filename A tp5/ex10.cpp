/*ce programme permet de lire un tableau de chaine de carcteres,supprimer les caractere non numérique dans 
chaque case du tableau et afficher la somme des entiers de chaque case*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n,i,j,k,somme=0;
	// Contrôle de saisie
    do {
        printf("donner le nombre de chaines à saisir :\n");
        scanf("%d",&n);
    } while ( n<5 || n>20 );
    
    //declaration du tableau
    char T[n][100];
    
    //replissage du tableau
    for(i=0;i<n;i++){
    	do {
        printf("Entrer la chaine %d (ne dépassant pas 10 caracteres) :\n",i+1);fflush(stdin);
        gets(T[i]);
    	} while (strlen(T[i]) >10);
	}
	
	//suppression des caracteres non numerique
    for(i = 0; i < n; i++){
        for(j = 0; T[i][j]; j++){
            if (!isdigit(T[i][j])) {
                for(k = j; T[i][k]; k++){
                    T[i][k] = T[i][k+1];
                }
                j--;
            }
        }
    }
    
    //affichage
	
	for (i=0;i<n-1;i++){
		printf(" %s +",T[i]);
	}
	printf(" %s =",T[n-1]);
	
	for(i=0;i<n;i++){
		somme=somme + atoi(T[i]);
	}
	printf("%d",somme);
}

