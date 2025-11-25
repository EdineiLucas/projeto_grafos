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

    //imprimir_grafo(g);

    printf("lista de materia:\n");
    for (int i = 0; i<max_vertices; ++i){
        printf("Nome:%s ID:%d Periodo:%d\n", m[i].nome, m[i].ID, m[i].per);
    }

    int alvo = 0;
    printf("insira o codigo da meteria desejada:");
    scanf("%d", &alvo);
    materias *alv = busca_nome(alvo);
    printf("\nColetando precedentes de %d/%s\n", alvo, alv->nome);
    coleta_precedentes(g, alvo);
    printf("Total de precedentes encontrados: %d\n", count);
    imprime_precedentes();

    zera_materias(materias_pre);
    libera_vertices(g);
    return 0;
}