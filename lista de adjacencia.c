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

void insere_aresta_direcionada(Grafo * g, int id_saida, int id_destino, int peso){
    Grafo * v = busca_vertice(g, id_saida);
    Aresta * nova_e = (Aresta*)malloc(sizeof(Aresta));
    nova_e->id_vizinho = id_destino;
    nova_e->peso = peso;
    nova_e->proximo = v->prim_vizinho;
    v->prim_vizinho = nova_e;
    return;
}

void imprimir_grafo(Grafo * G){
    printf("Lista de adjacencia:\n");
    while(G!= NULL){
        materias * v ;
        v = busca_nome(G->ID);
        printf("%s", v->nome);
        if(G->prim_vizinho != NULL){
            printf("->");
        }
        Aresta * e = G->prim_vizinho;
        while(e != NULL){
            materias * e2 = busca_nome(e->id_vizinho); 
            printf("(%s Peso:%d)",e2->nome, e->peso);
            if(e->proximo!= NULL){
                printf("->");
            }
            e = e->proximo;
        }
        printf("\n");
        G = G->prox;
    }
}

void libera_arestas(Aresta * e){
    while (e != NULL){
        Aresta * rem = e;
        e = e->proximo;
        free(rem);
    }
    return;
}

void libera_vertices(Grafo * v){
    while (v != NULL){
        libera_arestas(v->prim_vizinho);
        Grafo *rem = v;
        v = v->prox;
        free(rem);
    }
    return;
}

int main (){

    Grafo * g = inicializa_Grafo();
    for (int i = 51; i>=0; i--){
        g = insere_vertice(g, m[i].ID);
    }

    insere_aresta_direcionada(g, 14066, 14068, 1);
    insere_aresta_direcionada(g, 14064, 14069, 1);
    insere_aresta_direcionada(g, 14064, 14076, 1);
    insere_aresta_direcionada(g, 14064, 14085, 1);
    insere_aresta_direcionada(g, 14065, 14071, 1);
    insere_aresta_direcionada(g, 14067, 14072, 1);
    insere_aresta_direcionada(g, 14068, 14075, 1);
    insere_aresta_direcionada(g, 14069, 14082, 1);
    insere_aresta_direcionada(g, 14071, 14087, 1);
    insere_aresta_direcionada(g, 14071, 14098, 1);
    insere_aresta_direcionada(g, 14071, 14105, 1);
    insere_aresta_direcionada(g, 14073, 14078, 1);
    insere_aresta_direcionada(g, 14079, 14096, 1);
    insere_aresta_direcionada(g, 14074, 14079, 1);
    insere_aresta_direcionada(g, 14074, 14091, 1);
    insere_aresta_direcionada(g, 14074, 14101, 1);
    insere_aresta_direcionada(g, 14075, 14080, 1);
    insere_aresta_direcionada(g, 14075, 14084, 1);
    insere_aresta_direcionada(g, 14075, 14086, 1);
    insere_aresta_direcionada(g, 14075, 14087, 1);
    insere_aresta_direcionada(g, 14075, 14092, 1);
    insere_aresta_direcionada(g, 14075, 14094, 1);
    insere_aresta_direcionada(g, 14075, 14098, 1);
    insere_aresta_direcionada(g, 14075, 14104, 1);
    insere_aresta_direcionada(g, 14075, 14103, 1);
    insere_aresta_direcionada(g, 14075, 14105, 1);
    insere_aresta_direcionada(g, 14076, 14081, 1);
    insere_aresta_direcionada(g, 14078, 14083, 1);
    insere_aresta_direcionada(g, 14080, 14091, 1);
    insere_aresta_direcionada(g, 14083, 14089, 1);
    insere_aresta_direcionada(g, 14084, 14088, 1);
    insere_aresta_direcionada(g, 14084, 14090, 1);
    insere_aresta_direcionada(g, 14086, 14097, 1);
    insere_aresta_direcionada(g, 14088, 14093, 1);
    insere_aresta_direcionada(g, 14089, 14095, 1);
    insere_aresta_direcionada(g, 14089, 14099, 1);
    insere_aresta_direcionada(g, 14091, 14096, 1);
    insere_aresta_direcionada(g, 14091, 14102, 1);
    insere_aresta_direcionada(g, 14092, 14097, 1);
    insere_aresta_direcionada(g, 14095, 14104, 1);
    insere_aresta_direcionada(g, 14101, 14104, 1);
    
    imprimir_grafo(g);
    
    return 0;
}