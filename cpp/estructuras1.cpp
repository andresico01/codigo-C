#include<stdio.h>
//#define num 2


struct corredor{
    char nombre[20];
    char edad;
    char club[20];
}atletas;

int main (){
    char i=0,k=0,j=0,l=0,vec[]="franco",ed=41,clu[]="las ovejitas";
    //for (k=0;k<=i;k++){
    while(vec[k]!='\0')k++;
    while(clu[i]!='\0')i++;    
    for(j=0;j<k;j++)atletas.nombre[j]=vec[j];
    atletas.edad=ed;
    for(l=0;l<i;l++)atletas.club[l]=clu[l];
    printf("\nnombre:\t");
    for(j=0;j<k;j++)printf("%c",atletas.nombre[j]);
    printf("\n edad:\t%d",atletas.edad=ed);
    printf("\n club:\t");     
    for(j=0;j<i;j++)printf("%c",atletas.club[j]);
    if (atletas.edad<19){
        printf("\njuvenil");
    }
    if(atletas.edad<41){
         printf("\nseñor");
    }
    else printf("\nveterano");
    printf("\n");
    return 0;
}