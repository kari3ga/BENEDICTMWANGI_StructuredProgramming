#include <stdio.h>
#include <string.h>



    int login();
    void check_balance();
    void deposit(float amount);
    void withdraw(float amount);

     float account_balance = 1500.00;



int login(){
    char correct_pin[]= "1234";
    char entered_pin[10];
    int max_attempts =3;
    int attempts =0;



    printf("===ATM LOGIN===\n");

    while (attempts < max_attempts){
         printf("Enter pin:");
         scanf("%s", entered_pin);

          if (strcmp(entered_pin, correct_pin) == 0) {
            printf("Pin Correct!\n");
            return 1;

         }else{
             attempts++;
             int remaining = max_attempts-attempts;

             if(remaining > 0){
                printf("Wrong Pin! %d attempts left.\n", remaining);
             }else{
                 printf("No attempts left.\n");

             }
         }

    }

     return 0;

}


void check_balance(){
     printf("Your Account Balance is: Ksh. %.2f\n", account_balance);
}


void deposit(float amount){
    if (amount>0){
        account_balance += amount;
        printf("Amount deposited: Ksh. %.2f\n", amount);
        printf("New Balance: Ksh. %.2f\n", account_balance);

    }else{
        printf("ERROR\n");
    }
}


void withdraw(float amount){
    if(amount <=0){
        printf("ERROR!");

    }else if(amount >account_balance ){
        printf("INSUFICIENT FUNDS!");

    }else{
        account_balance -=amount;
        printf("Amount withdrawn: Ksh. %.2f\n", amount);
        printf("Account balance is: Ksh. %.2f\n", account_balance);
    }
}

int main()
{



    int result = login();

    if(result == 1){

        int choice;
        float amount;

      do{

        printf("\n===ATM MENU===\n");
        printf("1. Balance Inquiry\n");
        printf("2.Deposit\n");
        printf("3.Withdraw\n");
        printf("4.Exit\n");

        printf("\nSelect an option:");
        scanf("%d", &choice);


        switch(choice){
            case 1:
                check_balance();
                break;


            case 2:
                printf("\nEnter  amount to deposit:");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 3:
                 printf("\nEnter  amount to withdraw:");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("\nSession has ended. THANK YOU!");
                break;

            default:
                printf("\nInvalid Option");

        }

        if (choice != 4){
            printf("\nPress Enter to continue");
            getchar();
            getchar();

        }

      }while(choice !=4);

    }else{
        printf("\nToo many attempts. Account locked!\n");



    }

    return 0;

}





