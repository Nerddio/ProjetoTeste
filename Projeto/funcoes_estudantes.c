#include <stdio.h>  //printf
#include <stdlib.h> //dynamic memory allocation
#include <locale.h>
#include <string.h>
#include <ctype.h>

#include "constantes.h"
#include "funcoes_auxiliares.h"
#include "estruturas.h"
#include "menus.h"



void criarEstudante(tipoEstudante vetor_estudantes[])
{

    int escolha;


    for(int i = 0; i < 20; i++)
    {

        // SE A POSIÇÃO i JÁ ESTIVER PREENCHIDA, SALTA PARA A PROXIMA

        for(int j = 1; j < 20; j++)     //COMPARA COM AS RESTANTES POSIÇÕES DO VETOR DE ESTUDANTE E VERIFICA SE SE O NUMERO É IGUAL
        {

            printf("\n\nInsira o nome do estudante: \n");
            scanf("%[^\n]", &vetor_estudantes[i].nome);

            do
            {

                printf("\nInsira o número do estudante: ");
                scanf("%d", &vetor_estudantes[i].numero);

                if(isalpha(vetor_estudantes[i].numero))
                {

                    printf("\n\nPor favor introduza um número!");

                }
                else if(vetor_estudantes[i].numero == vetor_estudantes[j].numero)
                {

                    printf("\n\nNúmero de estudante já utilizado. Por favor, introduza outro.");

                }

            }
            while(vetor_estudantes[i].numero == vetor_estudantes[j].numero);

            do
            {

                printf("\n\nInsira o tipo de estudante:\nPressione:\n\n1 - Normal;\n2 - Trabalhador;\n3 - Extraordinário;\n\nEscolha: ");
                scanf("%d", &escolha);

                switch(escolha)
                {

                case 1:
                    vetor_estudantes[i].tipo = 1;
                    break;

                case 2:
                    vetor_estudantes[i].tipo = 2;
                    break;

                case 3:
                    vetor_estudantes[i].tipo = 3;
                    break;

                default:
                    printf("\nPor favor introduza um número entre 1 e 3!");
                }

            }
            while(escolha < 1 || escolha > 3);


            do{

                printf("\n\nInsira o regime do estudante:\nPressione:\n\n1 - Diurno;\n2 - Pós-laboral;\n\nEscolha: ");
                scanf("%d", &escolha);

                switch(escolha)
                {

                case 1:
                    vetor_estudantes[i].regime = 1;
                    break;

                case 2:
                    vetor_estudantes[i].regime = 2;
                    break;

                default:
                    printf("\nPor favor introduza um número entre 1 e 2!");
                }

            }while(escolha < 1 || escolha > 2);


            do{

                printf("\n\nInsira o turno do estudante:\nPressione:\n\n1 - PL1;\n2 - PL2;\n\nEscolha: ");
                scanf("%d", &escolha);

                switch(escolha)
                {

                case 1:
                    vetor_estudantes[i].turno = 1;
                    break;

                case 2:
                    vetor_estudantes[i].turno = 2;
                    break;

                default:
                    printf("\nPor favor introduza um número entre 1 e 2!");
                }

            }while(escolha < 1 || escolha > 2);


            printf("\n\nO estudante %s foi adicionado à lista de estudantes!\n", vetor_estudantes[i].nome);

            break;

        }

        break;
    }

    menuEstudantes(vetor_estudantes);

}



void alterarEstudante(tipoEstudante vetor_estudantes[]){

    int numero;

    char *escolha;



    for(int i = 0; i < 20; i++){

        printf("\n\nInsira o número do estudante cujos dados pretende alterar: ");
        scanf("%d", &numero);

        if(numero == vetor_estudantes[i].numero){

            printf("\n\t\t\t\t\t\tDADOS DO ESTUDANTE\n\n\n")

            printf("Nome do estudante: %s", vetor_estudantes[i].nome);
            printf("\nNúmero do estudante: %d", vetor_estudantes[i].numero);


            switch(vetor_estudantes[i].tipo){

                case 1:
                    printf("\nTipo do estudante: Normal");
                    break;

                case 2:
                    printf("\nTipo do estudante: Trabalhador");
                    break;

                case 3:
                    printf("\nTipo do estudante: Extraordinário");
                    break;

            }

            switch(vetor_estudantes[i].regime){

                case 1:
                    printf("\nTipo do estudante: Diurno");
                    break;

                case 2:
                    printf("\nTipo do estudante: Pós-laboral");
                    break;

            }

            switch(vetor_estudantes[i].turno){

                case 1:
                    printf("\nTipo do estudante: PL1");
                    break;

                case 2:
                    printf("\nTipo do estudante: PL2");
                    break;

            }

            printf("\n\n\nQual dado pretende alterar?\n(Nome, Número, Tipo, Regime, Turno)\n\nEscolha: ");
            scanf("%s",&escolha);

            if(strcmp(tolower(escolha), "nome") == 0){

                printf("Insira o novo nome do estudante: ");
                scanf("%[^\n]", &vetor_estudantes[i].nome);

            }else if(strcmp(tolower(escolha), "número") == 0){

                printf("Insira o novo número do estudante: ");
                scanf("%d", &vetor_estudantes[i].numero);

            }else if(strcmp(tolower(escolha), "tipo") == 0){

                printf("Insira o novo tipo do estudante: ");
                scanf("%d", &vetor_estudantes[i].tipo);

            }else if(strcmp(tolower(escolha), "regime") == 0){

                printf("Insira o novo regime do estudante: ");
                scanf("%d", &vetor_estudantes[i].regime);

            }else if(strcmp(tolower(escolha), "turno") == 0){

                printf("Insira o novo turno do estudante: ");
                scanf("%d", &vetor_estudantes[i].turno);

            }


        }


    }




}
