#include<stdio.h>

int expoente_a (int n1, char a);
int expoente_b (int n2, char b);

int main ()
{
  int numero, contador_a, contador_b;
  char a = 'a', b = 'b';

  printf ("Digite o expoente de (a) e (b):");
  scanf ("%d", &numero);
  for (contador_a = 0; contador_a < numero; contador_a++)
    {
      printf ("%c", expoente_a (numero, a));
    }
  for (contador_b = 0; contador_b < numero; contador_b++)
    {
      printf ("%c", expoente_b (numero, b));
    }

  return 0;
}

int expoente_a (int n1, char a)
{
  if (n1 > 0)
    {
      return expoente_a (n1 - 1, a);
    }
}

int expoente_b (int n2, char b)
{
  if (n2 > 0)
    {
      return expoente_b (n2 - 1, b);
    }
}


