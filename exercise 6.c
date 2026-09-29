#include <stdio.h>
#include <stdlib.h>

 //Loop with user input - Chapter 4 Exercise 4.9
int main()
{
  int numberOfValues = 0;
  int currentValue = 0;
  int total = 0;
  float average;

 printf("Enter number of Values : ");
 scanf("%d", &numberOfValues);


 for (int i = 1; i <= numberOfValues; ++i) {
  printf("Enter value %d: ", i);
  scanf("%d", &currentValue);
 total = total + currentValue;
}

if (numberOfValues > 0)
    {
 average = total / numberOfValues;

   printf("Sum = %d\n", total);
   printf("Average = %.2f\n", average);

} else {
    printf("No values were entered\n");
}

return 0;
}


