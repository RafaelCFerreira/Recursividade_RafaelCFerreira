#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inversor(char string[], int len)
{
    if(len==1)
    {
        return string[0];
    }

    else
    {

        return string[len-1];

    }
}

int main(void){
    char string[20];
    printf("Digite uma string: ");
    scanf("%s", string);

    int tamanho = strlen(string);
    for (; tamanho!=0; tamanho--)
    {
    printf("%c", inversor(string, tamanho));
    }

    printf("\n");

}
