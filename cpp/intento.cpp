#include<iostream>

using namespace std;

int main(){
  char a[]="PNDRES",b[]="tu chamaco",i=0,j=0,k=0;
   
   while(a[i]!='\0')i++;  
   
   printf("%c\n",a[0]);
  if(a[0]=='A'){ 
    for(j=0;j<i;j++){
       if(a[j]<91 && a[j]>64){
         a[j]=a[j]+32;        
       }   
    }
    std::cout<<a;
    }else std::cout<<"siga intyentado";
  return 0;
}
