/*ce programme permet de lire deux chaines de caractères et copier la première moitié ce la premiere
chaine et la première moitié ce la deuxieme chaine dans une troisieme chaine*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char ch1[100],ch11[50];		//declaration de la chaine 1
    char ch2[100],ch22[50];		//declaration de la chaine 2
    char ch3[100];		//declaration de la chaine 3
    int i;				//declaration du compteur
    
    puts( "donnerla premiere chaine");
    gets(ch1);
    puts( "donnerla deuxieme chaine");
    gets(ch2);
	
	for(i=0;i<strlen(ch1)/2;i++){
		ch11[i]=ch1[i];
	}
	ch11[i] = '\0';  // Ajout du caractère nul à la fin de ch11
	for(i=0;i<strlen(ch2)/2;i++){
		ch22[i]=ch2[i];
	}
	ch22[i] = '\0';  // Ajout du caractère nul à la fin de ch22
	
	    // Concaténation des deux parties dans ch3
    strcpy(ch3, ch11);
    strcat(ch3, ch22);
	
	printf("la chaine finale est:%s",ch3);
}
