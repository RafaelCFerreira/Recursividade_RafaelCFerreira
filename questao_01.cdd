//#1 
#include <stdio.h>
int expo(int n,int e);
int main(){
    int n, e, value;
    printf("Entre com número:\n");
    scanf("%d", &n);
    printf("Entre com expoente:\n");
    scanf("%d", &e);
    value = expo(n, e);
    printf("O valor de %d elevado a %d é %d", n, e, value);
    return 0;
}

int expo(int n, int e){
    int value=1;
    if(e == 0){
        value=1;
    }
    else{
        value = n * expo(n, e - 1);
    }
    return value;
}
