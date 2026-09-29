#include <stdio.h>
#include <stdlib.h>

  //Decisions - Chapter 2 Exercise 2.18
int main()
{
   int highestRainfall = 0;
   int currentRainfall = 0;

  printf("Enter the highest rainfall ever recorded (mm): ");
  scanf("%d", &highestRainfall);

  printf("Enter the rainfall in the current year (mm): ");
  scanf("%d", &currentRainfall);


  if (currentRainfall > highestRainfall)
    {
    printf("\nThe current rainfall (%dmm) exceeds the highest recorded rainfall(%dmm)!\n",
currentRainfall, highestRainfall);

  highestRainfall = currentRainfall;
   printf("New highest rainfall recorded (mm): %d\n", highestRainfall);
 }
 else {
    printf("\nThe current rainfall (%dmm) does not exceed the highest recorded rainfall (%dmm).\n",
currentRainfall, highestRainfall);
}
    return 0;
}
