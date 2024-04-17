#include <stdio.h>
    int main(){
    int a, b, c;

    puts("Digite o primeiro numero: ");
        scanf("%d", &a);
    puts("Digite o segundo numero: ");
        scanf("%d", &b);
    puts("Digite o terceiro numero: ");
        scanf("%d", &c);

    if((a<b+c)&&(b<a+c)&&(c<a+b)){
        if((a==b)&&(b==c)){
            puts("Os numeros formam um triangulo equilatero.");
        }
        if((a!=b)&&(b!=c)&&(a!=c)){
            puts("Os numeros formam um triangulo escaleno.");
        }
        if(((a!=b)&&(b==c))||((a==b)&&(b!=c))||((a!=b)&&(a==c))){
            puts("Os numeros formam um triangulo isoceles.");
        }
    }else{
        puts("Os numeros nao formam um triangulo.");
    }
}
