#include <iostream>

  using namespace std;
  
  int main (){
   
   char vec[]={1,4,2,8,3,7},i=0,j=0,k=0,aux;
   while (vec[k]!='\0')k++;
   for (j=0;j<k;j++){
       for(i=0;i<k;i++){
          if (vec[i]>vec[i+1]){
             aux=vec[i];
             vec[i]=vec[i+1];
             vec[i+1]=aux;
          }
         
       }
        
   }
  
 
  
  
 
   return 0;
  }
