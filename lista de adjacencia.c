#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dicionario.h"

#define INFINITY 99999
#define MAX_VERTICES 52

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

Grafo* inicializa_Grafo(){
    return NULL;
}

Grafo* busca_vertice (Grafo * g, int x){
    while((g != NULL) && (g->ID != x)){
        g = g->prox;
    }
    return g;
}

void busca_aresta(Grafo *G, int id_saida, int id_destino){
    Grafo* p = busca_vertice(G, id_saida);
    Aresta* resp = p->prim_vizinho;
    while (resp != NULL){
        if (resp->id_vizinho == id_destino){
            printf("aresta encontrada com peso:%d\n", resp->peso);
            return;
        }
        resp = resp->proximo;
    }
     if(resp == NULL){
        printf("aresta nao encontrada!\n");
     }
     return;
}

Grafo* insere_vertice(Grafo * G, int x){
    Grafo * p = busca_vertice(G,x);
    if(p == NULL){
        p = (Grafo*)malloc(sizeof(Grafo));
        p->ID = x;
        p->prox = G;
        p ->prim_vizinho = NULL;
        G = p;
    }
    return G;
}

Grafo* insere_aresta_direcionda(Grafo *G, int id_saida, int id_destino, int peso){
    Grafo * p = busca_vertice(G,id_saida);
    Aresta * novo_vizinho = (Aresta*)malloc(sizeof(Aresta));
    novo_vizinho->id_vizinho = id_destino;
    novo_vizinho->peso = peso;
    novo_vizinho->proximo = G->prim_vizinho;
    p->prim_vizinho = novo_vizinho;
}

void imprimir_grafo(Grafo * G){
    materias * s ;
    while(G!= NULL){
        s = busca_nome(G->ID);
        printf("Materia: %s", s->nome);
        Aresta *a = G->prim_vizinho;
        while(a != NULL){
            s = busca_nome(a->id_vizinho);
            printf("->(%s Peso:%d)", s->nome, a->peso);
            if(a->proximo!= NULL){
                printf("->");
            }
            a = a->proximo;
        }
        printf("\n");
        G = G->prox;
    }
}

int main (){

    Grafo * g = inicializa_Grafo();
    for (int i = 51; i>=0; i--){
        g = insere_vertice(g, m[i].ID);
    }
    imprimir_grafo(g);
    return 0;
}