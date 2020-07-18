#include<stdio.h>
#include<stdlib.h>
struct cliente
{   char vec[77];
    char edad;
};

struct node{
    char dato;
    //cliente cliente;
    node *siguiente; 
};
void insertar_cola(node *&frente, node *&fin, char valor);
void sacar_cola(node *&frente, node *&fin, char &valor);

bool cola_vacia(node *frente);
int main(){
    node *frente=NULL;
    node *fin=NULL;
    char i=0,k=0, vec[]="andres",dato=0,opcion=0;
    while (vec[i]!='\0')i++;
 do{opcion++;
    switch (opcion){
        case 1: 
            for(k=0;k<i;k++)insertar_cola(frente,fin,vec[k]);
            printf("\n");
            break;
            
        case 2:    while(frente!=NULL){
                    sacar_cola(frente,fin,dato);
                    printf("%c ",dato);
                    }
                    break;
        case 3 : break;
    }
 }while(opcion !=3);
    printf("\n");
    return 0;
}
void insertar_cola(node *&frente, node *&fin, char valor){

    node *new_node= new node();

    new_node->dato=valor;
    new_node->siguiente=NULL;
    if(cola_vacia(frente)){
        frente=new_node;
    }else fin->siguiente=new_node;
    fin=new_node;
    printf("%c \t",new_node->dato);
}
void sacar_cola(node *&frente, node *&fin, char &valor){
    valor=frente->dato;
    node *aux= frente;
    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }else frente = frente->siguiente;
    delete aux;
    
}
bool cola_vacia(node *frente){
    /*if(frente==NULL){
        return true;
    }else return false;*/
    return (frente==NULL)? true:false;
}