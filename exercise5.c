#include <stdio.h>
#include <stdlib.h>

 // Loop with calculation - Chapter 4 Exercise 4.11
int main()
{
  int sum = 0;

  for (int i=1; i<=100; ++i)
   {
       if(i%7 == 0){
            printf("%d\n", i);
        sum = sum + i;
       }
   }
  printf("\nSum of all multiples of 7 (1 to 100) is : %d\n",sum);
    return 0;
}
