#include<stdio.h>
int main(){

    double res;
    int i;
    res=0.0;
    for(i=0;i<10;i++){
        res+=i;
    }

    printf("La Sumatoria es: %lf",res);
    
    return 0;
}