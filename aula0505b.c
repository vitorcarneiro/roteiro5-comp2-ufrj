/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Programa de testes para funcao GerarDigitosVerificadoresRg utilizando uma string como unico argumento

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
#define FALTA_PONTO                        		    3
#define FUNCAO_RETORNOU_ERRO				        4

#define NUMERO_ARGUMENTOS				            2

int
main (int argc, char *argv[])
{
	char rg8[8], dv;
	unsigned indice, indicePrint;
	tipoErros codigoRetorno;

	if(argc != NUMERO_ARGUMENTOS)
	{
		printf("Digite cada digito do RG (sem o digito verificador) como um unico argumento (8 digitos).\n");
		printf("Foi digitado %i digito%c\n", argc - 1, (argc - 1) == 1 ? ' ' : 's');
		printf("Uso: %s <D1><D2>.<D3><D4><D5>.<D6><D7><D8>\n", argv[0]);
        printf("Formato: XX.XXX.XXX\n");

		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}

    if(strlen(argv[1]) != COMPRIMENTO_RG + 1)
	{
		printf("Comprimento do RG invalido (%lu digito%s\n", strlen(argv[1]), strlen(argv[1]) == 1 ? ")." : "s).");
		printf("O RG sem o digito verificador deve conter apenas 8 digitos com pontos(\".\"), totalizando em 10 digitos...\n");
		printf("Necessario ponto (\".\") depois do segundo e quinto digito do RG\n");
		printf("Formato: XX.XXX.XXX\n");
		exit (COMPRIMENTO_ARGUMENTO_INVALIDO);
	}

    for (indice = indicePrint = 0; indicePrint < COMPRIMENTO_RG + 1; indicePrint++)
	{
		if (indicePrint == 2 || indicePrint == 6)
		{
			if(argv[1][indicePrint] != '.')
			{
                printf("Necessario ponto (\".\") depois do segundo e quinto digito do RG\n");
	            printf("Formato: XX.XXX.XXX\n");
				exit (FALTA_PONTO);
			}
		
			indicePrint++;
		}

		rg8[indice] = argv[1][indicePrint] - '\0';
        indice++;
	}
    rg8[8] = '\0';
    
	codigoRetorno = GerarDigitosVerificadoresRg(&rg8[0], &dv);
	if(codigoRetorno != ok)
	{
		printf("Funcao GerarDigitosVerificadoresRg retornou erro: %i\n", codigoRetorno);
		printf("Digite apenas numeros para cada digito do RG.\n");
		exit (FUNCAO_RETORNOU_ERRO);
	}

	printf ("RG: ");
	for(indice = 0; indice <= COMPRIMENTO_RG - 1; indice++)
	{
		if(indice == 2 || indice == 5)
			printf (".");

        printf ("%c", rg8[indice]);
	}
    printf("-%c\n", dv);

	return OK;
}	

/* $RCSfile$ */
