#include<iostream>

using namespace std;

int main(){
  char vec[]={5,3,8,1,4,6,7};
  char j=0,k=0,i=0,min=0,aux=0;
    
  while(vec[k]!='\0')k++;
  
 for (j=0;j < k;j++){
      min = j;
      for(i = j+1;i < k;i++){
         if (vec[i] < vec[min]){
            min = i;
         }
      }
     aux = vec[j];
     vec[j] = vec[min];
     vec[min] = aux;
  }
    
  for(i=0;i<k;i++)printf("%d\t",vec[i]);
   

  return 0;
}
