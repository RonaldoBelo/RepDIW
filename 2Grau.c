#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, delta, x1, x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b, 2)-4*a*c;
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    if(delta<0){
        printf("%.1f Nao existem raizes", delta);
    }
    else{
        printf("%.1f %.1f %.1f", delta, x1, x2);
    }
}
