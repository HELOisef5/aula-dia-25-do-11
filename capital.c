#include<stdio.h>
int main(){
    float c;
    float t;
    int m; 
    int i;
    float mont=0;
    printf("Qual o eu capital?");
    scanf("%f", &c);
    printf("Qual a taxa mensal");
    scanf("%f", &t);
    printf("Qual o mes?");
    scanf("%d", &m);
        
    for(i=1; i<=m; i++){
        mont= c+t;

        printf("%d mont: %f \n",i, mont);
    } 


}