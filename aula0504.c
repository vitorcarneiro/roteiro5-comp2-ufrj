/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Implementacao da funcao GerarDigitosVerificadoresRg e ValidarRg utilizando strings

$Author$
$Date$
$Log$

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "aula0504.h"

tipoErros
GerarDigitosVerificadoresRg(char *rg8, char *dv)
{
    unsigned short indice, somaDigitos;
	unsigned char rg[COMPRIMENTO_RG];	
 
	if(rg8 == NULL)
		return argumentoInvalido;

	for(indice = 0; indice < COMPRIMENTO_RG - 1; indice++)
	{
		if (rg8[indice] < '0' || rg8[indice] > '9') /* erro se algum caracter nao for numero */
			return digitoInvalido;
		
		rg[indice] = rg8[indice] - '0' - '\0'; /* converte string em caracter */
	}	

	for(indice = somaDigitos = 0; indice < COMPRIMENTO_RG - 1; indice++)
		somaDigitos += (indice + 2) * rg[indice];
	

	if(somaDigitos % 11 == 0 || somaDigitos % 11 == 1)
		rg[indice] = (unsigned char) 0;

	else
		rg[indice] = (unsigned char) (11 - (somaDigitos % 11));

	*dv = rg[8] + '0';
	
	return ok;
}

tipoErros
ValidarRg (char *rg)
{
	char rgParaValidar[COMPRIMENTO_RG], dv;
	unsigned short indice;
	tipoErros codigoRetorno;
	
	if (rg == NULL)
		return argumentoInvalido;

	for (indice = 0; indice < COMPRIMENTO_RG - 1; indice++)
		rgParaValidar[indice] = rg[indice];

	rgParaValidar[8] = '\0';

	codigoRetorno = GerarDigitosVerificadoresRg(&rgParaValidar[0], &dv);
	if (codigoRetorno != ok)
		return codigoRetorno;
	
	if (rg[8] != dv)
		return digitoVerificadorInvalido;

	return ok;
}

/* $RCSfile$ */
