#include<stdio.h>
int main(){

    int n,i;
    float res=0.0;

    printf("ingrese el numero hasta donde quiera llegar:");
    scanf("%d",&n);

    for(i=2;i<n;i+=2){
        res+=i;
        printf("el resultado de la Sumatoria es :%f\n del numero Correspondiente: %d\n",res,i);
    }

    




    return 0;
}