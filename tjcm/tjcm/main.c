//
//  main.c
//  tjcm
//
//  Created by Thiago Moraes on 06/09/2018.
//  Copyright © 2018 Thiago Moraes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct elemento_hash{
    int valor;
    int pos;
    struct elemento_hash *prox;
    struct elemento_hash *colisao;
}elemento;

typedef struct fila_hash{
    int ntotal;
    elemento *inicio;
    elemento *fim;
}fila;

fila *criarfila(){
    fila *temp = (fila*)malloc(sizeof(fila));
    temp->ntotal = 12;
    elemento *primeiro = (elemento*)malloc(sizeof(elemento));
    temp->inicio = primeiro;
    temp->fim = primeiro;
    primeiro->colisao = NULL;
    primeiro->pos = 0;
    primeiro->valor = 0;
    elemento *aux;
    aux = primeiro;
    
    for (int i = 1; i<=12; i++) {
        elemento *novo = (elemento*)malloc(sizeof(elemento));
        novo->pos = i;
        temp->fim->prox = novo;
        novo->prox = NULL;
        novo->valor = 0;
        temp->fim = novo;
    }
    return temp;
}








int main(int argc, const char * argv[]) {
    
    int casos, tam = 0, chaves = 0;
    scanf("%d",&casos);
    
    for (int i = 0; i < casos; i++) {
        scanf("%d %d",&tam,&chaves);
        int c[chaves];
        int j = 0;
        do {
            scanf("%d",&c[j]);
            j += 1;
        } while (j < chaves);
        //inserirhash(tam, chaves, c,  )
    }
    
    
    
    
    
    
    
    
    return 0;
}
