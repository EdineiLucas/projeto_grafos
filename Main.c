#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"
#include "grafo.h"

int main (){

    Grafo * g = inicializa_Grafo();
    for (int i = 51; i>=0; i--){
        g = insere_vertice(g, m[i].ID);
    }

    insere(g);

    imprimir_grafo(g);

    int alvo = 14104;
    materias *alv = busca_nome(alvo);
    printf("\nColetando precedentes de %d/%s\n", alvo, alv->nome);
    coleta_precedentes(g, alvo);
    printf("Total de precedentes encontrados: %d\n", count);
    imprime_precedentes();

    zera_materias(materias_pre);
    libera_vertices(g);
    return 0;
}