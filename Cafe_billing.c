//In this first project we will be making a simple cafe menu and billing system using c program.
//This will help us to understand the basic concept like loops, functions, switch case.

#include "stdio.h" //This is a header file which contains the input and output (printf,scanf) function.

int main(){
    //we will first make points on what this program will do.
    //1. We will make cafe menu.
    //2. We will also add prise to it
    //3. We will take input from user and then calculate the total bill.
    //4. The user can add item as much as he want to.

    int choice, quantity;
    char y ;
    float total = 0.0;
    printf("\033[0;32mWellcome to Cafe De Minar\033[0m :) \n");
    printf("---------------------------\n");
    printf("\033[0;31mMenu: \033[0m\n");
    printf("\033[0;36m1. Chai - Rs. 10\033[0m\n");
    printf("\033[0;36m2. Coffee - Rs. 20\033[0m\n");
    printf("\033[0;36m3. Sandwich - Rs. 30\033[0m\n");
    printf("\033[0;36m4. Chole Bhature - Rs. 40\033[0m\n");
    printf("\033[0;36m5. Puri Bhaji - Rs. 50\033[0m\n");
    printf("\033[0;31m6. Exit\033[0m\n");
    printf("==========================\n");
    int bill=0;
    do{
        printf("Choice a number to proceed?: \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case 1:
                printf("You  have chosen Chai.\n");
                printf("Enter the quantity: ");
                scanf("%d",&quantity);
                total += quantity * 10;
                printf("Total so far: Rs. %.2f\n", total);
            break;
        case 2:
            printf("\nYou have chosen Coffee\n");
            printf("Enter the quantity: ");
            scanf("%d",&quantity);
            total += quantity * 20;
            printf("Total so far: Rs. %.2f\n", total);
            break;
        case 3:
            printf("\nYou have chosen Sandwich\n");
            printf("Enter the quantity: ");
            scanf("%d",&quantity);
            total += quantity * 30;
            printf("Total so far: Rs. %.2f\n", total);
            break;  
        case 4:
            printf("\nYou have chosen Chole Bhature\n");
            printf("Enter the quantity: ");
            scanf("%d",&quantity);
            total += quantity * 40;
            printf("Total so far: Rs. %.2f\n", total);
            break;
        case 5:
            printf("\nYou have chosen Puri Bhaji\n");
            printf("Enter the quantity: ");
            scanf("%d",&quantity);
            total += quantity * 50;
            printf("Total so far: Rs. %.2f\n", total);
            break;
        case 6:
            printf("\nThank you for visiting Cafe De Minar!\n");
            printf("Your total bill is: Rs. %.2f\n", total);
            return 0;
            break;
        default:
            printf("\n\033[0;31mInvalid choice! Please try again.\033[0m\n");
            break;
        }
    }while(choice != 6);
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &y);
    if (y == 'y' || y == 'Y') {
        main(); 
    } else {
        printf("\032[0;31mThank you for visiting Cafe De Minar!\032[0m\n");
        printf("\033[0;31mYour total bill is: Rs. %.2f\n\033[0m", total);
        return 0; 
}
}

//We can use color by using ANSI escape codes.
//\033[0;32m is used to set the text color to green.
//\033[0;31m is used to set the text color to red.
//\033[0;36m is used to set the text color to cyan.
//\033[0m is used to reset the text color to default.
