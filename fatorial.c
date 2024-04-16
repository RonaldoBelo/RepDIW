#include<stdio.h>

int main(){

    int n, b;

    scanf("%d", &n);
    b=n;

    for(int i=n-1; i>0; i--){

        b=b*i;

    }
    printf("%d", b);
}
