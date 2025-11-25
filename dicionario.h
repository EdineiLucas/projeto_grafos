#ifndef __DICIONARIO_H__
#define __DICIONARIO_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VERTICES 52

typedef struct nome{
    int ID;
    const char *nome;
    int per;
}materias;

extern const materias m[MAX_VERTICES];

materias * busca_nome (int x);

#endif