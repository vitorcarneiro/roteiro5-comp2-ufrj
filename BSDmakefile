# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2021/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Vitor Carneiro Silva de Oliveira
# Descricao: Arquivo de dependencias para FreeBSD

# $Author$
# $Date$
# $Log$

OS = `uname -s`

CC = gcc

.ifdef CLANG
CC = clang
.endif

LD = $(CC)

DIALETO = ansi
STANDARD = -ansi

.ifdef C89
DIALETO = c89
STANDARD = -std=c89
.elif C90
DIALETO = c90
STANDARD = -std=c90
.elif C99
DIALETO = c99
STANDARD = -std=c99
.elif C11
DIALETO = c11
STANDARD = -std=c11
.endif

CFLAGS = -Wall $(STANDARD)
LFLAGS = -Wall

# \/ OBJS MACROS\/ --------------------------------------------------------------------------------
# -- Roteiro 1 \/ ---------------------------------------------------------------------------------
AULA01 = aula0101 aula0102 aula0103

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
# -- Roteiro 1 /\ ---------------------------------------------------------------------------------

# -- Roteiro 2 \/ ---------------------------------------------------------------------------------
AULA02 = aula0202a aula0202b aula0202c aula0202d

AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o
# -- Roteiro 2 /\ ---------------------------------------------------------------------------------

# -- Roteiro 3 \/ ---------------------------------------------------------------------------------
AULA03 = aula0302a aula0302b aula0302c aula0302d

AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o
# -- Roteiro 3 /\ ---------------------------------------------------------------------------------

# -- Roteiro 4 \/ ---------------------------------------------------------------------------------
AULA04 = aula0402a aula0402b aula0402c aula0402d aula0404a aula0404b aula0404c aula0404d aula0404e

AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o

AULA0404AOBJS = aula0403a.o aula0404.o libmatematicarecursao.a
AULA0404BOBJS = aula0403b.o aula0404.o libmatematicadowhile.a
AULA0404COBJS = aula0403c.o aula0404.o libmatematicafor.a
AULA0404DOBJS = aula0403d.o aula0404.o libmatematicawhile.a

AULA0404EOBJS = aula0403e.o aula0404.o libmatematicafor.a
# -- Roteiro 4 /\ ---------------------------------------------------------------------------------
# /\ OBJS MACROS/\ --------------------------------------------------------------------------------


# \/ LIBS MACROS\/ --------------------------------------------------------------------------------
# -- Roteiros 2 - 3 - 4 \/ ------------------------------------------------------------------------
LIBMATEMATICARECURSAOOBJS = aula0201a.o aula0301a.o aula0401a.o aula0403a.o
LIBMATEMATICADOWHILEOBJS = aula0201b.o aula0301b.o aula0401b.o aula0403b.o
LIBMATEMATICAFOROBJS = aula0201c.o aula0301c.o aula0401c.o aula0403c.o
LIBMATEMATICAWHILEOBJS = aula0201d.o aula0301d.o aula0401d.o aula0403d.o
# -- Roteiro 2 - 3 - 4 /\ ------------------------------------------------------------------------
# /\ LIBS MACROS/\ --------------------------------------------------------------------------------


EXECS = aula0101\
		aula0102\
		aula0103\
		aula0202a\
		aula0202b\
		aula0202c\
		aula0202d\
		aula0302a\
		aula0302b\
		aula0302c\
		aula0302d\
		aula0402a\
		aula0402b\
		aula0402c\
		aula0402d\
		aula0404a\
		aula0404b\
		aula0404c\
		aula0404d\
		aula0404e


LIBS =	libmatematicarecursao.a\
	libmatematicadowhile.a\
	libmatematicafor.a\
	libmatematicawhile.a\
	libmonitor.a\
	libbase.a

ALL = $(EXECS) $(LIBS)

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

# -- Roteiro 1 \/ ----------------------------------------------------------------------------------
aula01: $(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 1 /\ ---------------------------------------------------------------------------------


# -- Roteiro 2 \/ ----------------------------------------------------------------------------------
aula02: $(AULA02)

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


libmatematicarecursao.a: $(LIBMATEMATICARECURSAOOBJS)
	ar -r -c $@ $(LIBMATEMATICARECURSAOOBJS)

libmatematicadowhile.a: $(LIBMATEMATICADOWHILEOBJS)
	ar -r -c $@ $(LIBMATEMATICADOWHILEOBJS)

libmatematicafor.a: $(LIBMATEMATICAFOROBJS)
	ar -r -c $@ $(LIBMATEMATICAFOROBJS)

libmatematicawhile.a: $(LIBMATEMATICAWHILEOBJS)
	ar -r -c $@ $(LIBMATEMATICAWHILEOBJS)
# -- Roteiro 2 /\ ---------------------------------------------------------------------------------


# -- Roteiro 3 \/ ----------------------------------------------------------------------------------
aula03: $(AULA03)

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

	
aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 3 /\ ---------------------------------------------------------------------------------


# -- Roteiro 4 \/ ----------------------------------------------------------------------------------
aula04: $(AULA04)

aula0402a: $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402b: $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402c: $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0402d: $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


aula0404a: $(AULA0404AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404AOBJS) -L. -lmatematicarecursao
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404b: $(AULA0404BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404BOBJS) -L. -lmatematicadowhile
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404c: $(AULA0404COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404COBJS) -L. -lmatematicafor
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)

aula0404d: $(AULA0404DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404DOBJS) -L. -lmatematicawhile
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)


aula0404e: $(AULA0404EOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0404EOBJS) -lm
	cp -f $@ $@-$(OS)-$(CC)-$(DIALETO)
# -- Roteiro 4 /\ ---------------------------------------------------------------------------------

.PHONY: clean clean-all clean-objs clean-freebsd clean-linux clean-gcc clean-clang clean-ansi clean-c89 clean-c90 clean-c99 clean-c11

clean:
	rm -f *.o $(ALL) *.core

clean-all:
	rm -f *.o $(ALL) *-FreeBSD-* *-Linux-* *.core

clean-objs:
	rm -f *.o *.core

clean-freebsd:
	rm -f *.o $(ALL) *-FreeBSD-* *.core

clean-linux:
	rm -f *.o $(ALL) *-Linux-* *.core

clean-gcc:
	rm -f *.o $(ALL) *-gcc-* *.core

clean-clang:
	rm -f *.o $(ALL) *-clang-* *.core

clean-ansi:
	rm -f *.o $(ALL) *-ansi *.core

clean-c89:
	rm -f *.o $(ALL) *-c89 *.core

clean-c90:
	rm -f *.o $(ALL) *-c90 *.core

clean-c99:
	rm -f *.o $(ALL) *-c99 *.core

clean-c11:
	rm -f *.o $(ALL) *-c11 *.core

# $RCSfile$
