#include <stdio.h>

int mdc();
int main()
{
    int a, b;
    printf("Entre com o valore de a:\n");
    scanf("%d", &a);
    printf("Entre com o valore de b:\n");
    scanf("%d", &b);
    printf("O MDC entre %d e %d é %d", a, b, mdc(a, b));
    return 0;
}

int mdc(int a, int b){
    int x;   
    if(b == 0){
        x =a;
    }
    else{
        x= mdc(b, a%b);
    }
    return x;
}
