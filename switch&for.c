#include <stdio.h>

int main(){

    int op, i, a, b, q;

    printf("DIGITE 1 para imprimir numeros de 0 a 50 de 1 em 1\nDIGITE 2 para imprimir numeros de 0 a 50 de 3 em 3\nDIGITE 3 para imprimir numeros de 0 a 1024 multiplicando o anterior por 2\nDIGITE 4 para imprimir numeros de 50 a 1\nDIGITE 5 para imprimir numeros de 50 a 1 de 5 em 5\nDIGITE 6 para imprimir numeros de 1024 a 1 dividindo o anterior por 2\nDIGITE 7 para definir seu proprio intervalo\n\n");
    scanf("%d", &op);

    switch(op){

    case 1:
    for(int i=1; i<51; i++){
        printf("\nO valor de i e %d", i);}
    break;

    case 2:
    for(int i=1; i<51; i+=3){
        printf("\nO valor de i e %d", i);}
    break;

    case 3:
    for(int i=1; i<1025; i*=2){
        printf("\nO valor de i e %d", i);
    }
    break;

    case 4:
    for(int i=50; i>0; i--){
        printf("\nO valor de i e %d", i);
    }
    break;

    case 5:
    for(int i=50; i>0; i-=5){
        printf("\nO valor de i e %d", i);
    }
    break;

    case 6:
    for(int i=1024; i>0; i/=2){
        printf("\nO valor de i e %d", i);
    }
    break;

    case 7:
    puts("Digite o primeiro numero do intervalo: ");
    scanf("%d", &a);
    puts("Digite o segundo numero do intervalo: ");
    scanf("%d", &b);
    puts("Digite o intervalo: ");
    scanf("%d", &q);
    if(a<b){
        for(i=a; i<=b; i+=q){
            printf("\nO valor de i e %d", i);
        }
    }
    if(a>b){
        for(i=a; i>=b; i-=q){
            printf("\nO valor de i e %d", i);
        }
    }
    break;
    }
}
