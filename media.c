# include <stdio.h>
# define N 5
int n[N],i,suma,media;

void operacion (int a[N])
{
   for (i=0;i<N;i++)
   {
       suma=suma+a[i];
       media=suma/N;
   }
   printf("\nLa media de los numeros introducidos es: %d\n\n",media);
}

int main (void)
{
    for (i=0;i<N;i++)
    {
      printf("\nIntroduzca el número %d: ",i+1);
      scanf("%d",&n[i]);
    }
    operacion (n);
}