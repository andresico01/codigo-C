#include<iostream>

using namespace std;

void buscando(char a[], char t, char u);

int main (){
    char i=0,vec[]="4582416987";
    char y=10;
    while(vec[i]!='\0'){
        vec[i]=vec[i]-'0';
        i++;
    }
    buscando(vec,i,y);


    return 0;
}

void buscando(char a[],char t,char u){
     char j=0,i=0;
     for (j=0;j<t;j++){
         if(a[j]==u){
             i++;
         }
     }  
    if (i>0){
        printf("estamos melos");
    }
    else printf("nalgas");
}