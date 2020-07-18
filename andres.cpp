#include <iostream>

using namespace std;

int main(){
   char vec[]="oso",a[99]={0};
   char i =0, j=0,k=0,l=0;
   
   while(vec[i]!='\0')i++;
   printf("%d\n",i);
   for(j=i-1;j>=0;j--){
      a[k]=vec[j];
      if(a[k]==vec[k])l++;
      k++;
   }
   
   printf("%d\n",k);
   printf("%d\n",i);
   if(k==i) {
   cout<<a<<" sisas"<<endl;
   }else cout<<"siga intentando";
    



  return 0;
}
