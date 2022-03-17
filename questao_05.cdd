#include <stdio.h>

int mdc();
int main()
{
    int a, b, n, x;
    printf("Entre com o valore de a:\n");
    scanf("%d", &a);
    printf("Entre com o valore de b:\n");
    scanf("%d", &b);
    printf("Entre com o valor do expoente:\n");
    scanf("%d", &n);
    x = mdc(a, b, n);
    printf("Resultado %d", x);
    return 0;
}

int mdc(int a, int b, int n){
    int x;
    if(n==0){
        x= 1;
    }else{
        x= a*b*mdc(a, b, n-1);
    }
    return x;
}
