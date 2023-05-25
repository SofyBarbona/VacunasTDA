#ifndef VACUNA_H_INCLUDED
#define VACUNA_H_INCLUDED

//Axiomas
//Nombre
//Lote
struct VacunaEst;
typedef struct VacunaEst* VacunaP;

//PRE:
//POS:
VacunaP cargarVacunaPT();
//PRE:
//POS:
VacunaP cargarVacunaPP(char n[20],char l[10]);
//PRE:
//POS:
void mostrarVacuna(VacunaP vac);
//PRE:
//POS:
char* getNombreV(VacunaP vac);

#endif // VACUNA_H_INCLUDED
