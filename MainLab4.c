#include <stdio.h>
#include <stdlib.h>

//#include "archivo_de_estructura.h"
#include "Lab4.h"

void crearArchivo(FILE *nombreArchivo){
	nombreArchivo = fopen("archivoSecuencial.txt","w");
	char secuencia[100];
	scanf("%s",&secuencia);
	fprintf(nombreArchivo,"%s",secuencia);
	
	fclose(nombreArchivo);
}

void imprimir(Arbol *tree){
    if(tree != NULL){
        printf("%i-",tree->dato);
        imprimir(tree->hizq);
        imprimir(tree->hder);
    }
}

int main(){
    FILE *archivoCodigo;
    crearArchivo(archivoCodigo);
 //   char secuencia[100];
    archivoCodigo = fopen("archivoSecuencial.txt","r");
    //fscanf(archivoCodigo,"%s",secuencia);
    //printf("%s\n",secuencia);
    Arbol *arbolPrincipal = creaArbolArchivo("archivoSecuencial.txt");

    fclose(archivoCodigo);
    //printf("\nHOLA");
    imprimir(arbolPrincipal);


    return 0;
}