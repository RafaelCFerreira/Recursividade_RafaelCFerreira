//#2 
#include <stdio.h>
#define FIBONACCI_RANGE 10

int preencherFibonacci();

int main(){
    for(int i=1; i<=FIBONACCI_RANGE; i++){
        printf("%d\n", preencherFibonacci(i));
    }
    return 0;
}

int preencherFibonacci(int i){
    
    int fibonacci;
    
    if(i==1 || i==2){
        fibonacci = 1;
    }
    else{
        fibonacci =preencherFibonacci(i -1) + preencherFibonacci(i -2);
    }
    return fibonacci;
}

