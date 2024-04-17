#include<stdio.h>

int main(){

    int n, cont;

    while(n>=0){
        cont=0;
        scanf("%d", &n);
        if(n<0){
            break;
            }
        if(n==1){
            printf("Nao primo\n");
        }else{
            for(int i=2; i<=n/2; i++){
                if(n%i==0){
                    cont++;
                }
            }
            if(cont==0){
                puts("Primo");
            }else{
                puts("Nao primo");
            }
        }
    }
}
