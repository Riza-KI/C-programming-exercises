#include <stdio.h>
#include <stdlib.h>

 //Loop with Decision Chapter 4 Exercise 4.22
int main()
{
    int passes = 0;
   int failures = 0;

   for (int student = 1; student <= 5; ++student) {
   int result = 0;
   printf("Enter result for student %d (1=pass, 2=fail): ", student);
    scanf("%d", &result);


   if (result == 1) {
   passes = passes + 1;
 }
 else {
  failures = failures + 1;
 }
  }

 printf("\n--- Exam Results ---\n");
 printf("Passed: %d\n", passes);
 printf("Failed: %d\n", failures);

 if (passes > 3) {
 printf("\nBonus to instructor!\n");
}



    return 0;
}
