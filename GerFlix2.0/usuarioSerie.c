#include "usuarioSerie.h"

void CrearListadoUsuariosYSeries(eUsuarioSerie misRelaciones[])
{
    int i;

    int usuario[9]= {100,100,100,100,101,101,101,102,102 };
    int serie[9]= {1,2,3,4,1,2,3,1,4};


    for(i=0; i<10; i++)
    {
        misRelaciones[i].idSerie=serie[i];
        misRelaciones[i].idUsuario=usuario[i];
    }

}
void MostrarUsuariosYSeries(eUsuarioSerie relaciones[], eUsuario users[])
{
    int i;
    int j;
    int contar=0;
    int posicionInicial = 0;
    int posicionFinal;

    for(i=posicionInicial; i<9; i++) //i para usuarios
    {
        if(relaciones[i].idUsuario == relaciones[i+1].idUsuario)
        {
            contar++;
        }
        else
        {
            posicionFinal = contar + 1;
            printf("Usuario: %d mira la(s) series:\n",relaciones[i-1].idUsuario);
            for(j=posicionInicial; j<posicionFinal; j++)
            {
                {
                    if(j+1==posicionFinal)
                    {
                        posicionInicial = posicionFinal;
                        contar++;
                    }
                    printf("%d\n",relaciones[j].idSerie);
                    continue;
                }

            }
        }



    }

}

