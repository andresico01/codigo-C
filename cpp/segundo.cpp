#include<iostream>

using namespace std;

int main(){
  char a[]="mi chamaco",b[]="mi chamaco",i=0,j=0,k=0;
   
   while(a[i]!='\0'){
        a[i]=a[i]-32;
        i++;  
   }
   while(b[k]!='\0'){
        b[k]=b[k]-32;
        k++;
   }
   printf("%c\t",b[1]);
  /* if(k==i){
      k=0;
       for(j=0;j<i;j++){
          if(a[j]==b[j])k++;  
      }
   }
   
   printf("%d\n",i);
   printf("%d\n",k);
   if (k+1==i){
      cout<<"estamos melos"<<endl;  
   }else cout<<"nalgas"<<endl;
*/
  return 0;
}
