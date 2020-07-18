#include<stdio.h>
#define num 3
struct competencia{
    char nombre[20];
    char pais[20];
    char num_medalla;
}atleta[num];

int main(){
    char nombres[num][20]={"pablito",
                            "gonza",
                            "dario"};
    char de_onde[num][20]={"colombia",
                            "chile",
                            "puerto rico"};
    char num_med[num]={6,10,4};
    char mayor = 0, aux = 0;
    char i=0,k=0,j[20]={0},l[20]={0};
    for(i=0;i<num;i++){
        while(nombres[i][j[i]]!='\0')j[i]++;
        while(de_onde[i][l[i]]!='\0')l[i]++;
        atleta[i].num_medalla=num_med[i];
        
    }
    mayor=atleta[0].num_medalla;
    for (i=0;i<num;i++){
        for(k=0;k<j[i];k++)atleta[i].nombre[k]=nombres[i][k];
        for(k=0;k<l[i];k++)atleta[i].pais[k]=de_onde[i][k];
        if (mayor<atleta[i].num_medalla){
            mayor=atleta[i].num_medalla;
            aux=i;
        }
    }
    printf("el medallista es\t%s",atleta[aux].nombre);
    printf("\npais:\t\t\t%s",atleta[aux].pais);
    printf("\nmedallas ganadas\t%d\n",atleta[aux].num_medalla);
    return 0;
}