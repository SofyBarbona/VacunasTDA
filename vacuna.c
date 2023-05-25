#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ciudadano.h"
#include "vacuna.h"

struct VacunaEst{
    char nombre[20];
    char lote[10];
};
char* getNombreV(VacunaP vac){
    return vac->nombre;
}
void mostrarVacuna(VacunaP vac){
    printf("\nEl nombre de la vacuna es: %s\n",vac->nombre);
    printf("El lote es: %s\n",vac->lote);
}
void cargarLote(VacunaP vac, int t){
    char caracteres[] = "qwertyuiopasdfghjklzxcvbnm0123456789";
    int aleatorio;

    for(int i=0;i<t;i++){
        aleatorio = rand() % strlen(caracteres);
        vac->lote[i]=caracteres[aleatorio];
    }
    vac->lote[t]='\0';
}
VacunaP cargarVacunaPT(){
    VacunaP vac = malloc(sizeof(struct VacunaEst));

    printf("\nIngrese el nombre de la vacuna\n");
    fflush(stdin);
    gets(vac->nombre);

    cargarLote(vac, 10);

    return vac;
}
