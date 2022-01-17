/* 
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2021/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Vitor Carneiro Silva de Oliveira
Descricao: Prototipo da funcao GerarDigitosVerificadoresRg utilizando strings

$Author$
$Date$
$Log$

*/

#ifndef _AULA0504_
#define _AULA0504_			"@(#)aula0504.h $Revision$"

#define COMPRIMENTO_RG			9

typedef enum
{
	ok,
	argumentoInvalido,
	digitoInvalido,
    digitoVerificadorInvalido
} tipoErros;

tipoErros
GerarDigitosVerificadoresRg(char * /* entrada */, char * /* saida - DV */);

#endif

/* $RCSfile$ */
