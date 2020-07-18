#include<stdio.h>
#include<stdlib.h>

struct node{
    char dato;
    node *siguiente;
};

void agregar_pila(node *&pila,char n);
void sacar_elem(node *&pila, char &n);

int main(){
    node *pilla=NULL;
    char dato=0,i=0;
    agregar_pila(pilla,52);
    agregar_pila(pilla,45);
    agregar_pila(pilla,65);
    while (pilla!=NULL){
        sacar_elem(pilla,dato);
        printf("%d\n",dato);
    }
    return 0;
}
void agregar_pila(node *&pila,char n){
    node *nuevo_nodo = new node();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
    printf("%d\n",n);
}
void sacar_elem(node *&pila, char &n){
    node *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}