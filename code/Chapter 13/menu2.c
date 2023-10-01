 /* menu2.c--Demonstrates using an infinite loop and the switch */
 /* statement to implement a menu system. */
 #include <stdio.h>
 #include <stdlib.h>

 #define DELAY 150000000

 int menu(void);
 void delay(void);

 int main( void )
 {
    int command = 0;
    command = menu();

    while (command != 5 )
    {
          /* Get user's selection and branch based on the input. */

          switch(command)
          {
             case 1:
                 {
                   puts("\nExecuting task A.");
                   delay();
                   break;
                 }
             case 2:
                 {
                   puts("\nExecuting task B.");
                   delay();
                   break;
                 }
             case 3:
                 {
                   puts("\nExecuting task C.");
                   delay();
                   break;
                 }
             case 4:
                 {
                   puts("\nExecuting task D.");
                   delay();
                   break;
                 }
             case 5:     /* Exit program. */
                 {
                   puts("\nExiting program now...\n");
                   break;
                 }
             default:
                 {
                   puts("\nInvalid choice, try again.");
                 }
          }  /* End of switch */
          command = menu();
     }       /* End of while  */
     return 0;
 }

 /* Displays a menu and inputs user's selection. */
 int menu(void)
 {
     int reply;

     puts("\nEnter 1 for task A.");
     puts("Enter 2 for task B.");
     puts("Enter 3 for task C.");
     puts("Enter 4 for task D.");
     puts("Enter 5 to exit program.");

     scanf("%d", &reply);

     return reply;
 }

 void delay( void )
 {
     long x;
     for( x = 0; x < DELAY; x++ )
         ;
 }
