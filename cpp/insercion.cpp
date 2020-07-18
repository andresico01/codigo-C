#include<iostream>

using namespace std;


int main(){
 
 char pos=0,aux=0, j=0,i=0,k=0;
 
 char vec[]={1,4,6,8,2,4,6};
   
   while(vec[k]!='\0')k++;
   
   for(j=0;j<k;j++){
      pos=j;
      aux=vec[j]; 
      while((pos > 0) && (aux < vec[pos-1])){
        vec[pos]=vec[pos-1];
        pos--;
      }
      vec[pos]=aux;
   }

   for (j=0;j<k;j++)printf("%d\t",vec[j]);

  return 0;
}
