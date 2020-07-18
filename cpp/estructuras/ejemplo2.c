#include<stdio.h>
#define num 3

struct salon{
    char nombre[20];
    char edad;
    float prom;
};
struct salon studien[num];

int main (){
    char i=0,j=0,k[10]={0};
    float vec[num]={4.5,2.9,3.7};
    char ed[num]={16,17,14};
    char nom[num][20]={"andres",
                         "carlos",
                         "juan"}; 
    for(i=0;i<num;i++){
        while(nom[i][k[i]]!='\0')k[i]++;

    }
    for(i=0;i<num;i++){
        studien[i].edad=ed[i];
        studien[i].prom=vec[i];
        for(j=0;j<k[i];j++){
            studien[i].nombre[j]=nom[i][j];
        }
        //while(getchar()!='\n');   // vacia buffer
    }
    for (i=0;i<num;i++){
        printf("\nedad:\t%d",studien[i].edad);
        printf("\npromedio:\t%f",studien[i].prom);
        printf("\nnombre:\t%s",studien[i].nombre);
    }


    return 0;
}
