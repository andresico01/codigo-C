#include<stdio.h>
#include<stdlib.h>
#define num_f 3
#define num_c 7

struct node{
    char nombre[num_c];
    char edad;
    double numero_cuenta;
    node *siguiente;
};
void ingresa_cliente(node *&frente,node *&fin,char nom[num_c],char age, double cuenta);
void sacar_clientes(node *&frente, node *&fin, char nom[num_c],char &age, double &cuenta);
bool cola_vacia(node *frente);
int main(){
    char nombres[num_f][num_c]={"fabio","andres","rey"};
    double codigo[num_f]={782465,254687,254689},cod=0;
    char edad [num_f]={23,24,52};
    char vec_sal[num_c],ed=0;
    char i=0, k=0;
    node *frente=NULL;
    node *fin=NULL;
    for(i=0;i<num_f;i++)ingresa_cliente(frente,fin,nombres[i],edad[i],codigo[i]);
    printf("\n\n"); 
    while(frente!=NULL){
        sacar_clientes(frente,fin,vec_sal,ed,cod);
        printf("%s\t %d\t %f\n",vec_sal,ed,cod);
        
    }
    return 0;
}
void ingresa_cliente(node *&frente,node *&fin,char nom[num_c],char age, double cuenta){
    node *new_nodo = new node();
    char i=0;
    for(i=0;i<num_c;i++)new_nodo->nombre[i]=nom[i];
    new_nodo->edad=age;
    new_nodo->numero_cuenta=cuenta;
    new_nodo->siguiente=NULL;

    if(cola_vacia(frente)){
        frente=new_nodo;
    }else fin->siguiente=new_nodo;
    fin = new_nodo;
   printf("%s\t %d\t%f\n",new_nodo->nombre,new_nodo->edad,new_nodo->numero_cuenta);
}
void sacar_clientes(node *&frente, node *&fin, char nom[num_c],char &age, double &cuenta){
    cuenta=frente->numero_cuenta;
    age=frente->edad;
    for(int i=0;i<num_c;i++)nom[i]=frente->nombre[i];
    node *aux=frente;
    if(frente==fin){
        fin=NULL;
        frente=NULL;
    }else frente=frente->siguiente;
    delete aux;


}
bool cola_vacia(node *frente){
    return (frente==NULL)? true : false;
}
    

    

