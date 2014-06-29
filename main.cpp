#include <stdio.h>

int main()
{
 unsigned long int k;
 int n, i=1;

 while(scanf("%d",&n) != EOF)
 {
   if(!n)
   {
     printf("Instancia %d\n1\n\n",i++);
     scanf("%d",&n);
     continue;
   }

    k = n;
    while(n > 2)
    {
      k*=--n;
      while(!(k%10)) k/=10;
      k %= 100000;
    }

     printf("Instancia %d\n%d\n\n",i++,k%10);
  }
  return 0;
}

