#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "menus.h"
#include "funcoes_auxiliares.h"
#include "constantes.h"
#include "estruturas.h"





int main()
{

    tipoEstudante vetor_estudantes[20];

    setlocale(LC_ALL,"");

    menuPrincipal(vetor_estudantes);


    return 0;


}
