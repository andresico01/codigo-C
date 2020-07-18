#include<stdio.h>
#define n 2
struct empresa{
    char nombre[20];
    double salario;
    char cargo[20];
}empleado[n];

int main(){    
    char j=0,k[10]={0},i[10]={0},l=0;
    double sal[n]={2000000,4000000};
    char car[n][20]={"gerente",
                     "el de los bolis"};
    char nom[n][20]={"juancho",
                     "milan"};
    for (j=0;j<n;j++){
        while(car[j][k[j]]!='\0')k[j]++;
        while(nom[j][i[j]]!='\0')i[j]++;
        empleado[j].salario=sal[j];
    }
    printf("%d\n",k[0]);
    for (j=0;j<n;j++){
        for(l=0;l<i[j];l++)empleado[j].nombre[l]=nom[j][l];
        for(l=0;l<k[j];l++)empleado[j].cargo[l]=car[j][l];
    }
    for (j=0;j<n;j++){
        printf("\nnombre:\t%s",empleado[j].nombre);
        printf("\ncargo:\t%s",empleado[j].cargo);
        printf("\nsalario:\t%f",empleado[j].salario);
    }

    return 0;
}