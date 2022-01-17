/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Programa de testes para funcao ValidarRg com strings

$Author$
$Date$
$Log$

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula0504.h"

#define OK						                    0
#define NUMERO_ARGUMENTOS_INVALIDO			        1
#define COMPRIMENTO_ARGUMENTO_INVALIDO			    2
#define FUNCAO_RETORNOU_ERRO				        3
#define DIGITO_ERRADO					            4

#define NUMERO_ARGUMENTOS				            COMPRIMENTO_RG + 1

int
main (int argc, char *argv[])
{
	char rg[COMPRIMENTO_RG + 1];
	unsigned indice;
	tipoErros codigoRetorno;

	if(argc != NUMERO_ARGUMENTOS)
	{
		printf("Digite cada digito do RG como um unico argumento (9 digitos).\n");
		printf("Foi digitado %i digito%c\n", argc - 1, (argc - 1) == 1 ? ' ' : 's');
		printf("Uso: %s <D1> <D2> <D3> <D4> <D5> <D6> <D7> <D8> <D9>\n", argv[0]);
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}
	
	for(indice = 1; indice < NUMERO_ARGUMENTOS; indice++)
	{	
		if(strlen(argv[indice]) != 1)
		{
			printf("Comprimento do digito %u invalido.\n", indice - 1);
			exit(COMPRIMENTO_ARGUMENTO_INVALIDO);
		}

		rg[indice - 1] = argv[indice][0] - '\0';
	}
    rg[9] = '\0';
	
	codigoRetorno = ValidarRg(&rg[0]);
	if(codigoRetorno != digitoVerificadorInvalido && codigoRetorno != ok)
	{
        printf ("Funcao ValidarRg retornou erro: %i\n", codigoRetorno);
        printf ("Digite apenas numeros para cada digito do RG.\n");
		exit(FUNCAO_RETORNOU_ERRO);
	}

	if(codigoRetorno == digitoVerificadorInvalido)
	{
		printf("RG: ");
		for(indice = 0; indice <= COMPRIMENTO_RG - 1; indice++)
		{
			if(indice == 2 || indice == 5)
				printf(".");

			if(indice == 8)
				printf("-");

			printf("%c", rg[indice]);
		}
		printf(" - invalido.\n");	
		
		exit(DIGITO_ERRADO);
	}

	if(codigoRetorno == ok)	
	{
		printf("RG: ");
		for(indice = 0; indice <= COMPRIMENTO_RG - 1; indice++)
		{
			if (indice == 2 || indice == 5)
				printf(".");

			if (indice == 8)
				printf("-");

			printf("%c", rg[indice]);
		}
		printf(" - valido\n");	
	}
	
	return OK;
}	

/* $RCSfile$ */
