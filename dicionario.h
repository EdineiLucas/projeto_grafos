#ifndef __DICIONARIO_H__
#define __DICIONARIO_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VERTICES 52

typedef struct nome{
    int ID;
    const char *nome;
}materias;

const materias m[MAX_VERTICES] = {
    {.ID = 14064, .nome = "CI"},
    {.ID = 14065, .nome = "GAAL"},
    {.ID = 14066, .nome = "ICC"},
    {.ID = 14067, .nome = "INGI"},
    {.ID = 14068, .nome = "AP"},
    {.ID = 14069, .nome = "CVV"},
    {.ID = 14071, .nome = "AL"},
    {.ID = 14072, .nome = "INGII"},
    {.ID = 14073, .nome = "SD"},
    {.ID = 14074, .nome = "MD"},
    {.ID = 14075, .nome = "AEDS"},
    {.ID = 14078, .nome = "ACI"},
    {.ID = 14076, .nome = "FC"},
    {.ID = 14079, .nome = "IG"},
    {.ID = 14077, .nome = "Metodologia"},
    {.ID = 14085, .nome = "AN"},
    {.ID = 14083, .nome = "ACII"},
    {.ID = 14081, .nome = "FM"},
    {.ID = 14082, .nome = "PE"},
    {.ID = 14084, .nome = "POO"},
    {.ID = 14080, .nome = "BO"},
    {.ID = 14090, .nome = "WEB"},
    {.ID = 14088, .nome = "ES"},
    {.ID = 14086, .nome = "OSA"},
    {.ID = 14087, .nome = "PO"},
    {.ID = 14091, .nome = "PAA"},
    {.ID = 14089, .nome = "SO"},
    {.ID = 14096, .nome = "AG"},
    {.ID = 14093, .nome = "APS"},
    {.ID = 14092, .nome = "BDI"},
    {.ID = 14094, .nome = "PDP"},
    {.ID = 14095, .nome = "SB"},
    {.ID = 14102, .nome = "CPA"},
    {.ID = 14098, .nome = "CG"},
    {.ID = 14097, .nome = "BDII"},
    {.ID = 14101, .nome = "LFA"},
    {.ID = 14100, .nome = "Redes"},
    {.ID = 14099, .nome = "SistDist"},
    {.ID = 14104, .nome = "Compiladores"},
    {.ID = 14106, .nome = "GP"},
    {.ID = 14103, .nome = "IA"},
    {.ID = 14105, .nome = "PDI"},
    {.ID = 14108, .nome = "Empr"},
    {.ID = 14107, .nome = "IES"},
    {.ID = 14110, .nome = "TCC"},
    {.ID = 14109, .nome = "SI"},
    {.ID = 14111, .nome = "ADM"},
    {.ID = 14112, .nome = "OptatiaI"},
    {.ID = 14113, .nome = "OptatiaII"},
    {.ID = 14114, .nome = "OptatiaIII"},
    {.ID = 14115, .nome = "OptatiaIV"}, 
    {.ID = 14116, .nome = "OptatiaV"}
};

materias * busca_nome (int x){
    materias *mat = (materias*)malloc(sizeof(materias));
    for (int i = 0; i<MAX_VERTICES; i++){
        if (m[i].ID == x){
            mat->ID = m[i].ID;
            mat->nome = m[i].nome;
            return mat;
        }
    }
}

#endif