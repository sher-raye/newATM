#include <stdio.h>
#include <stdlib.h>

float amount=10000; // Global Variables
int withdraw; // Global Variables
char ch;
int deposit;
int Quit;

void transaction( void );

int main( void )
{

  int pin ;
  printf("Please enter pin: ");
  fflush( stdout );
  scanf("%d", &pin);
  printf( "\n" );

  while ( pin != 1520 )
  {
    printf("Invalid input\n");
    printf("Please enter pin again: ");
    fflush( stdout );
    scanf("%d", &pin);
    printf( "\n" );
  }

 printf("You can now continue...\n\n");  //continues

  transaction();
  return 0;
}

void transaction( void )
{

    int choice, exit_loop = 0, inner_loop = 1;

    while( exit_loop == 0 )
    {

        printf("********************************************************************\n");
        printf("****************Welcome to NEWBORN BANK ATM Services****************\n");
		printf("***************         SELECT OPTIONS             *****************\n");
		printf("********************************************************************\n");
		printf("\t\t[1] Check Balance\n");
		printf("\t\t[2] Withdraw Cash\n");
		printf("\t\t[3] Deposit Cash\n");
		printf("\t\t[4] Quit\n");
		printf("\n********************************************************************\n");
		printf("\t\tEnter your number: ");
          fflush( stdout );
		scanf("%d", &choice);
          printf( "\n" );

  switch(choice)
       {

           //im trying to use function call in the switch statement
      case 1:
      printf("\nYOUR BALANCE ON YOUR ACCOUNT IS: %f\n\n", amount);
      break;

     case 2: //how do i call the function in the switch statement for withdraw

        while( inner_loop == 1 )
        {
        printf("Please enter amount to withdraw: ");
        fflush( stdout );
        scanf("%d", &withdraw);
        printf( "\n" );


        if (withdraw % 100 != 0)
		{
		printf("ENTER THE AMOUNT IN MULTIPLES OF 100.\n\n");
		}
		else if (amount<500)
	    {
	     printf("INSUFFICENT BALANCE LESS THAN 500$\n\n");
              inner_loop = 0;
     	}
        else if(withdraw>amount)
		{
        printf("There is insuffient Balance in account.\n\n");
              inner_loop = 0;
          }
	    else
		{
				amount = amount - withdraw;
				printf("COLLECT CASH BELOW\n");
				printf("YOUR BALANCE IS: %f\n\n", amount);
                    inner_loop = 0;
		}
         }    /* while( inner_loop == 1 ) */
         break;

    case 3: //do to function call the global varibles


    printf("Please enter amount to deposit: ");
    fflush( stdout );
    scanf("%d", &deposit);
    printf( "\n" );
   amount = deposit + amount; //calculate new balance on account

    printf("Thank you for depositing, new balance is: %f\n\n", amount);
    break;

    case 4:
    	printf("**THANKS FOR USING OUR ATM SERVICE**\n");
         return;

       default:
			printf("INVALID NUMBER.\n\n");
    }
    //im trying to use a do-while to ask user for another transaction
    do{

   printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n'|| transaction == 'N')
k = 1;
} while (!k);
printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}




   /*printf("Do you want to do Another Transactions (y/n): ");
            fflush( stdout );
		  ch=( char )getchar();
            printf( "\n" );

		  if(ch=='y' || ch=='Y')
		  {
		  }
		  else if(ch=='n' || ch=='N')
		  {
		  	printf("-------THANKS FOR USING OUR ATM SERVICE-------\n");
                 exit_loop = 1;
		  }
		  else{
		  	printf("Invalid Input\n");
                 exit_loop = 1;
		  }
    }    /* while( exit_loop == 0 ) */
    return;
}




