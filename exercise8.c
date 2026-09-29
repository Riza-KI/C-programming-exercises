#include <stdio.h>
#include <stdlib.h>

 //Interactive console program - Chapter 4 Exercise 4.28
int main()
{
 int choice;
  float hours, rate, pay;

   do {
   printf("\nWeekly Pay Calculator\n");
   printf("1 - Manager\n");
   printf("2 - Hourly Worker\n");
   printf("3 - Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

        switch (choice) {

    case 1:

        printf("Enter manager's weekly salary: ");
        scanf("%f", &pay);
         printf("Manager's weekly pay: %.2f\n", pay);
     break;

    case 2:

    printf("Enter hours worked: ");
    scanf("%f", &hours);
    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    pay = hours * rate;

 printf("Hourly worker's weekly pay: %.2f\n", pay);

break;

    case 3:
  printf("Exiting program.\n");
   break;

  default:
printf("Invalid choice.\n");

        }

    }
    while (choice != 3);
    return 0;
}
