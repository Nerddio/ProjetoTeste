#include <stdio.h>
#include <stdlib.h>

#include "menus.h"
#include "funcoes_auxiliares.h"
#include "funcoes_estudantes.h"
#include "estruturas.h"


void menuPrincipal(tipoEstudante vetor_estudantes[]){

    printf("\n\t\t\t\t\t\tMENU PRINCIPAL\n\n\n");

    printf("\t(1) Menu de Estudantes\n\n\n");

    printf("\t(2) Criar treino\n\n\n");

    printf("\t(3) Menu de Perguntas\n\n\n");

    int escolha = lerInteiro("Utilize os números para navegar pelos menus!", 1, 3);


    switch(escolha){

        case 1:
            menuEstudantes(vetor_estudantes);
            break;

        case 2:
            menuTreinos();
            break;

        case 3:
            menuPerguntas();
            break;

        }


}

void menuEstudantes(tipoEstudante vetor_estudantes[]){

    printf("\n\t\t\t\t\t\tMENU ESTUDANTES\n\n\n");

    printf("\t(1) Inserir Estudante\n\n\n");

    printf("\t(2) Alterar Estudante\n\n\n");

    printf("\t(3) Consultar Estudante\n\n\n");

    printf("\t(4) Listar Estudantes\n\n\n");

    int escolha = lerInteiro("Utilize os números para navegar pelos menus!", 1, 4);


    switch(escolha){

        case 1:
            criarEstudante(vetor_estudantes);
            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        }


}



void menuPerguntas(){

    printf("\n\t\t\t\t\t\tMENU PERGUNTAS\n\n\n");

    printf("\t(1) Inserir pergunta\n\n\n");

    printf("\t(2) Alterar pergunta\n\n\n");

    printf("\t(3) Consultar pergunta\n\n\n");

    printf("\t(4) Listar perguntas\n\n\n");

//    escolha = lerInteiro("Utilize os números para navegar pelos menus!", 1, 4);


//    switch(escolha){
//
//        case 1:
//            break;
//
//        case 2:
//
//            break;

//        case 3:
//            menuPerguntas();
//            break;

//        case 4:
//
//            break;
//
//        }


}



void menuTreinos(){

    printf("\n\t\t\t\t\t\tMENU TREINOS\n\n\n");

    printf("\t(1) Criar Treino\n\n\n");

    printf("\t(2) Realizar Treino\n\n\n");

    printf("\t(3) Consultar Treino\n\n\n");

    printf("\t(4) Listar Treinos\n\n\n");

    int escolha = lerInteiro("Utilize os números para navegar pelos menus!", 1, 4);


    switch(escolha){

        case 1:
            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        }


}
