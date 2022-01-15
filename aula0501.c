/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Implementacao da funcao GerarDigitosVerificadoresRg

$Author$
$Date$
$Log$

*/

#include <stdio.h>
#include <stdlib.h>

#include "aula0501.h"

tipoErros
GerarDigitosVerificadoresRg (byte rg [COMPRIMENTO_RG])
{
	unsigned short indice, somaDigitos;
	
	if (rg == NULL)
		return argumentoInvalido;

	for (indice = somaDigitos = 0; indice < COMPRIMENTO_RG - 1; indice++)
	{
		if (rg[indice] > 9)
			return digitoInvalido;
		
		somaDigitos += (indice + 2) * (unsigned short) rg[indice];
	}

	if (somaDigitos % 11 == 0 || somaDigitos % 11 == 1)
		rg[indice] = (byte) 0;

	else
		rg[indice] = (byte) (11 - (somaDigitos % 11));

	return ok;	
}

/* $RCSfile$ */
