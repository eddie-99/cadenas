#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
Capture una cadena de caracteres. 
Despliegue la longitud de esta, 
cuente el numero de volcales y consonantes.
Despliegue estos resultados y 
por último convierta todas las letras mayúsculas en minúsculas y viceversa.
*/

int main(void){
	
	char vocales[5] = { 'a', 'e', 'i', 'o', 'u', '/0'};
	char nombre[30];
	int i, contVocales = 0, contConso = 0;
	
	printf("Inserte su nombre: ");
	scanf("%s", nombre);
	
	printf("********** Hola: %s **********\n", nombre);
	
	
	for (i = 0; nombre[i] != '\0'; i++){
		nombre[i] = toupper(nombre[i]);
	}
	printf("Cadena en mayusculas: %s\n", nombre);
	
	
	for (i = 0; nombre[i] != '\0'; i++){
		nombre[i] = tolower(nombre[i]);
	}
	printf("Cadena en minusculas: %s\n", nombre);
	
	
	for (i = 0; i < strlen(nombre); i++){
		if(nombre[i] == vocales[0]){
			contVocales++;
		}
		else if(nombre[i] == vocales[1]){
			contVocales++;
		}
		else if(nombre[i] == vocales[2]){
			contVocales++;
		}
		else if(nombre[i] == vocales[3]){
			contVocales++;
		}
		else if(nombre[i] == vocales[4]){
			contVocales++;
		}
		else{
			contConso++;
		}
	}
	
	
	printf("La longitud de la cadena es: %d\n", strlen(nombre));
	printf("Vocales: %d\n", contVocales);
	printf("Consonantes: %d\n", contConso);
	
	return 0;
}



