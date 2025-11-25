#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

extern int max_vertices;
extern int materias_pre[MAX_VERTICES];
extern int count;

typedef struct aresta{
    int id_vizinho;
    int peso;
    struct aresta * proximo;
}Aresta;

typedef struct grafo{
    int ID;
    struct grafo * prox;
    Aresta * prim_vizinho;
}Grafo;

Grafo* inicializa_Grafo();

Grafo* busca_vertice (Grafo * g, int x);

void busca_aresta(Grafo *G, int id_saida, int id_destino);

Grafo* insere_vertice(Grafo * G, int x);

void insere_aresta_direcionada(Grafo * g, int id_saida, int id_destino, int peso);

void imprimir_grafo(Grafo * G);

void libera_arestas(Aresta * e);

void libera_vertices(Grafo * v);

void zera_materias(int vis[]);

void imprime_precedentes();

int contem_id(int arr[], int len, int id);

void coleta_precedentes(Grafo *G, int id_inicial);

void insere(Grafo * g);