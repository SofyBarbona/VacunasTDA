#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ciudadano.h"
#include "vacuna.h"
#define DOSIS 5

struct CiudadanoEst{
    char NombreApellido[30];
    int nroCiudadano;
    VacunaP vacunas[DOSIS];
};
void buscarVacuna(CiudadanoP ciu){
    char auxNombreV[30];
    printf("\nIngrese el nombre de la vacuna a buscar\n");
    fflush(stdin);
    gets(auxNombreV);

    int pos = -2;
    for(int i=0;i<DOSIS;i++){
            if(strcmp(getNombreV(ciu->vacunas[i]),auxNombreV)==0){
                pos=i;
                i=6;
            }
    }

    if(pos!=-2){
        printf("\nEsta en la posicion: %d\n",pos);
    }else{
        printf("\nNo se ha encontrado ninguna vacuna\n");
    }

}
void mostrarCiudadano(CiudadanoP ciu){
    printf("\nEl nombre y apellido es: %s\n",ciu->NombreApellido);
    printf("El numero de ciudadano es: %d\n",ciu->nroCiudadano);
    for(int i=0;i<DOSIS;i++){
        mostrarVacuna(ciu->vacunas[i]);
    }
}
CiudadanoP cargarCiudadanoPT(){
    CiudadanoP ciu = malloc(sizeof(struct CiudadanoEst));
    printf("\nIngrese el nombre y apellido\n");
    fflush(stdin);
    gets(ciu->NombreApellido);

    ciu->nroCiudadano=100000+rand()%900000;

    for(int i=0;i<DOSIS;i++){
        ciu->vacunas[i]=cargarVacunaPT();
    }

    return ciu;
}
