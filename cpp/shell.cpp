#include<iostream>

using namespace std;

void intercambio(char &x,char &f);
void ordenacionshell(char a[], char n);

int main (){
  char vec[]="4569204589721534568715469871236481568142163458531256634326354";
  char i=0,k=0;
  while(vec[i]!='\0'){
    vec[i]=vec[i]-'0';
    i++;
  }
  
  ordenacionshell(vec,i);
  for(k=0;k<i;k++){
    printf("%d\t",vec[k]);
  }

  return 0;
}

void ordenacionshell(char a[], char n){
    int salto=0,i=0,j=0,k=0;
    salto = n/2;
    while(salto>0){
       for(i=salto;i<n;i++){
         j=i-salto;
         while(j>=0){
           k=j+salto;
           if (a[j]<=a[k]){
             j=-1;
           }
           else{
             intercambio(a[j],a[k]);
             j-=salto;
           }
         }
       }
       salto=salto/2;

    }

}
void intercambio(char &x,char &f){
   char aux=0;
   aux=x;
   x=f;
   f=aux;

}