#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ciudadano.h"
#include "vacuna.h"

int main()
{
    srand(time(0));

    CiudadanoP ciudadano1 = cargarCiudadanoPT();
    mostrarCiudadano(ciudadano1);

    buscarVacuna(ciudadano1);

    return 0;
}
