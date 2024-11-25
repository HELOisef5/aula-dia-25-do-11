#include<stdio.h>
int main(){
    int a=0;
    int b=0;
    int c=0;
    int elei;
    int i;
    char voto;
    int nulo=0;
    printf("Qual a quntidade de eleitores?");
    scanf("%d", &elei);
    for(i=1; i<=elei; i++){
        printf("Qual o seu voto?");
        scanf("%c", &voto);
        scanf("%c", &voto);
        if(voto=='a'){
            a++;
        }else if(voto=='b'){
            b++;
        }else if(voto=='c'){
            c++;
        }else {
            nulo++;
        } printf("%c",voto);
    } 
    printf("candidato A recebeu %d\n", a);
    printf("candidato B recebeu %d\n", b);
    printf("candidato C recebeu %d\n", c);
    printf("votos nulos %d\n", nulo);
}