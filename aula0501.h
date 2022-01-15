/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Prototipo funcao GerarDigitosVerificadoresRg

$Author$
$Date$
$Log$

*/

#ifndef _AULA0501_
#define _AULA0501_				"@(#)aula0501.h $Revision$"

#define COMPRIMENTO_RG			9

typedef enum
{
	ok,
	argumentoInvalido,
	digitoInvalido,
	digitoVerificadorInvalido
} tipoErros;

typedef unsigned char byte;

tipoErros
GerarDigitosVerificadoresRg(byte[COMPRIMENTO_RG - 1] /* entrada/saida */);

tipoErros
ValidarRg(byte[COMPRIMENTO_RG] /* entrada */);

#endif

/* $RCSfile$ */
