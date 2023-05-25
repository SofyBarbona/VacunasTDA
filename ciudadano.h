#ifndef CIUDADANO_H_INCLUDED
#define CIUDADANO_H_INCLUDED
//axioma
//nombreyapellido
//nroCiudadado
//vacunas[5]
struct CiudadanoEst;
typedef struct CiudadanoEst* CiudadanoP;

//PRE:
//POS:
CiudadanoP cargarCiudadanoPT();
//PRE:
//POS:
void mostrarCiudadano(CiudadanoP ciu);
//PRE:
//POS:
void buscarVacuna(CiudadanoP ciu);
#endif // CIUDADANO_H_INCLUDED
