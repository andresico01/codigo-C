#include<iostream>

using namespace std;

void intercambio(char &t,char &y);
void rapido(char a[],int prim, int seg);

int main (){
char vec[]="45692045897215345687154698712";
  char i=0,k=0;
  while(vec[i]!='\0'){
    vec[i]=vec[i]-'0';
    i++;
  }
  
  rapido(vec,0,i-1);
  for(k=0;k<i;k++){
    printf("%d\t",vec[k]);
  }
    return 0;
}

void rapido(char a[],int prim, int seg){
    char i=0,j=0,cent=0,pivod=0;
    cent =(prim+seg)/2;
    pivod=a[cent];
    i=prim;
    j=seg;
    do{
        while(a[i]<pivod)i++;
        while(a[j]>pivod)j--;
        if (i<=j){
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(prim<j){
        rapido(a,prim,j);
    }
    if(i<seg){
        rapido(a,i,seg);
    }
}
void intercambio(char &t,char &y){
    char aux=0;
    aux=t;
    t=y;
    y=aux;
}