/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Programa de testes para funcao ValidarRg com strings recebendo um unico argumento

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
#define FALTA_PONTO_OU_TRACO                        3
#define FUNCAO_RETORNOU_ERRO				        4
#define DIGITO_ERRADO					            5

#define NUMERO_ARGUMENTOS				            2

int
main (int argc, char *argv[])
{
	char rg[COMPRIMENTO_RG];
	unsigned indice, indicePrint;
	tipoErros codigoRetorno;

	if(argc != NUMERO_ARGUMENTOS)
	{
        printf("Digite todo RG como um unico argumento.\n");
        printf("Uso: %s <D1><D2>.<D3><D4><D5>.<D6><D7><D8>-<D9>\n", argv[0]);
        printf("\n");
        printf("Necessario ponto (\".\") depois do segundo e quinto digito do RG\n");
		printf("Necessario traco (\"-\") depois do setimo digito do RG\n");
		printf("Formato: XX.XXX.XXX-X\n");
		exit (NUMERO_ARGUMENTOS_INVALIDO);
	}

    if(strlen(argv[1]) != COMPRIMENTO_RG + 3)
	{
		printf("Comprimento do RG invalido (%lu digito%s\n", strlen(argv[1]), strlen(argv[1]) == 1 ? ")." : "s).");
		printf("O RG deve conter apenas 9 digitos com pontos (\".\") e traco (\"-\"), totalizando em 12 digitos.\n");
        printf("\n");
        printf("Necessario ponto (\".\") depois do segundo e quinto digito do RG\n");
		printf("Necessario traco (\"-\") depois do setimo digito do RG\n");
		printf("Formato: XX.XXX.XXX-X\n");
		exit (COMPRIMENTO_ARGUMENTO_INVALIDO);
	}
	
    for (indice = indicePrint = 0; indicePrint < COMPRIMENTO_RG + 4; indicePrint++)
	{
		if (indicePrint == 2 || indicePrint == 6)
		{
			if(argv[1][indicePrint] != '.')
			{
                printf("Necessario ponto (\".\") depois do segundo e quinto digito do RG\n");
                printf("\n");
                printf("E tambem necessita traco (\"-\") depois do oitavo digito do RG\n");
	            printf("Formato: XX.XXX.XXX-X\n");
				exit(FALTA_PONTO_OU_TRACO);
			}
		
			indicePrint++;
		}

        if (indicePrint == 10)
		{
			if (argv[1][indicePrint] != '-')
			{
                printf("Necessario traco (\"-\") depois do oitavo digito do RG\n");
                printf("\n");
				printf("E tambem necessita ponto (\".\") depois do segundo e quinto digito do RG\n");
	            printf("Formato: XX.XXX.XXX-X\n");
				exit (FALTA_PONTO_OU_TRACO);
			}

			indicePrint++;
		}

		rg[indice] = argv[1][indicePrint];
        indice++;
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
