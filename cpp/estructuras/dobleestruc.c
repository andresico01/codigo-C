#include<stdio.h>
#include<math.h>
#define num 3
struct nota{
    float notas[10];
};
struct ser{
    char nombre[20];
    char sexo[20];
    char edad;
    struct nota calificacion;
}individuo[num];

float promedio (float not[10]);

int main(){
    char i=0,k=0,o=0,j[10]={0},l[10]={0};
    float mayor=0;
    float val2[num]={0};
    float val[num][3]={4.5,2.3,5,4,2.3,4.1,2.7,4.2,3.4};
    char nom[num][20]={"juan",
                        "malu",
                        "cristian"};
    char sex[num][20]={"masculino",
                       "femenino",
                       "masculino"};
    char ed[10]={20,24,15};
    
    for (i=0;i<num;i++){
        while(nom[i][j[i]]!='\0')j[i]++;
        while(sex[i][l[i]]!='\0')l[i]++;
        individuo[i].edad=ed[i];
        
        for(k=0;k<3;k++)individuo[i].calificacion.notas[k]=val[i][k];
        for(k=0;k<j[i];k++)individuo[i].nombre[k]=nom[i][k];
        for(k=0;k<l[i];k++)individuo[i].sexo[k]=sex[i][k];
    }
    
    
    for(i=0;i<num;i++){
        printf("\nnombre:\t%s",individuo[i].nombre);
        printf("\nsexo:\t%s",individuo[i].sexo);
        printf("\nedad\t%d",individuo[i].edad);
        printf("\nnotas:\t");
        for(int y=0;y<3;y++){
            printf("%f ",individuo[i].calificacion.notas[y]);
            }
    }

    for(k=0;k<num;k++){
        printf("\nestudiente %f ",promedio(individuo[k].calificacion.notas));
        val2[k]=promedio(individuo[k].calificacion.notas);
    }
    i=0;
    for(k=0;k<num;k++){
        if(val2[k]>mayor){
            mayor=val2[k];
            i=k;
        }
    }
    printf("\nmejor promedio %f y es de %s",mayor,individuo[i].nombre);
    printf("\n");

    return 0;
}

float promedio (float not[10]){
    float sum=0,vec[num];
    char i=0,k=0;
    while(not[i]!='\0')i++;
    for(k=0;k<i;k++){
        sum+=not[k];
    }
    return sum/=i;
    
}