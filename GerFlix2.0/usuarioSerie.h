#ifndef USUARIOSERIE_H_INCLUDED
#define USUARIOSERIE_H_INCLUDED
#include "usuario.h"

typedef struct{
    int idUsuario;
    int idSerie;
}eUsuarioSerie;


#endif // USUARIOSERIE_H_INCLUDED
void CrearListadoUsuariosYSeries(eUsuarioSerie[]);
void MostrarUsuariosYSeries(eUsuarioSerie[], eUsuario[]);
