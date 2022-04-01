#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inversor();

int main(){
    char randomWord[20];
    printf("Digite uma string: ");
    scanf("%s", randomWord);
    for(int tamanho = strlen(randomWord); tamanho!=0; tamanho--)
    {
        printf("%c", inversor(randomWord, tamanho));
    }
    printf("\n");
}

char inversor(char randomWord[], int len)
{
    if(len==1)
    {
        return randomWord[0];
    }
    else
    {
        return randomWord[len-1];
    }
}

