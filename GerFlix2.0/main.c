#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"
/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    //printf("Pablo Barroso\n");
    eSerie ArrayDeSeries[5];
    eUsuario ArrayDeUsers[3];
    eUsuarioSerie ArrayDeRelacion[9];

    CrearListadoSeries(ArrayDeSeries, 5);
    MostrarSeries(ArrayDeSeries, 5);
    printf("\n");
    CrearListadoDeTresUsuarios(ArrayDeUsers);
    MostrarUsers(ArrayDeUsers, 3);
    CrearListadoUsuariosYSeries(ArrayDeRelacion);
    MostrarUsuariosYSeries(ArrayDeRelacion, ArrayDeUsers);

    return 0;
}

