#include <stdio.h>
#include <stdlib.h>

 //Basic Loops - Chapter 3 Exercise 3.24
int main()
{
printf("N\tN^2\tN^3\tN^4\n");

// Loop from 1 to 5
  for (int n = 1; n <= 5; ++n) {
    printf("%d\t%d\t%d\t%d\n", n, n * n, n * n * n, n * n * n * n);
}


    return 0;
}
