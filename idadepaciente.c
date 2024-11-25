#include<stdio.h>
int main(){
    int n;
    int i;
    int idade, velho;
    velho = 0;
    printf("Qual a quantidade de pacientes?");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        printf("Qual a idade do paciente?");
        scanf("%d", &idade);

            
        if(velho<idade){ 
            velho = idade;
        }

    }
    printf("%d", velho);

}
   

