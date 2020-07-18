#include<stdio.h>
# define num_etapas 3


struct tiempo{
    char horas;
    char minutos;
    char segundos;
}etapas[num_etapas];

void tiempo(float T);

int main(){
    char i=0;
    float etap[num_etapas]={2.8,3.4,1.2};
    float sum=0;
    for(i=0;i<num_etapas;i++)sum+=etap[i];
    
    for(i=0;i<num_etapas;i++){
        if (i==0){
            printf("tiempo primera etapa \t");
            tiempo(etap[i]);
            printf("\n");
            }
        else if(i==1){
            printf("tiempo segunda etapa \t");
            tiempo(etap[i]);
            printf("\n");
        }
        else{
            printf("tiempo tercera etapa \t");
            tiempo(etap[i]);
        }
     }
     printf("\ntiempo total de la jodia\t");
     tiempo(sum);
    return 0;
}

void tiempo(float T){
    char i = 0, k = 0;
    char vec[num_etapas]={0};
    for(i=0;i<num_etapas;i++){
        while(k<T-1){
            k++;
        }
        
        vec[i]=T;
        T-=k;
        k=0;
        T*=60;
    }
   
    for(i=0;i<num_etapas;i++){
        if(i==0){
            printf("%d horas ",vec[i]);
        }
        else if(i==1){
            printf("%d minutos ",vec[i]);
        }
        else printf("%d segundos\n ",vec[i]);
    }
    
}