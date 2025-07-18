//Hello everyone in this project i will be going to show you how you can change 
//The color of text in terminal using c language and we will use ANSI escap codes.

#include"stdio.h"

int main()
{
    int choice;
    char str[100];
    printf("Enter a text to change the color: ");
    scanf("%s", str);
    do
    {
        printf("Coloe changing using c program\n");
        printf("------------------------------\n");
        printf("1.Red\n");
        printf("2.Green\n");
        printf("3.Yellow\n");
        printf("4.Blue\n");
        printf("5.Cyan\n");
        printf("6.Magenta\n");
        printf("7.White\n");
        printf("8.Reset\n");
        printf("9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\033[31m%s\033[0m\n", str);
                break;
            case 2:
                printf("\033[32m%s\033[0m\n", str);
                break;
            case 3:
                printf("\033[33m%s\033[0m\n", str);
                break;
            case 4:
                printf("\033[34m%s\033[0m\n", str);
                break;
            case 5:
                printf("\033[36m%s\033[0m\n", str);
                break;
            case 6:
                printf("\033[35m%s\033[0m\n", str);
                break;
            case 7:
                printf("\033[37m%s\033[0m\n", str);
                break;
            case 8:
                printf("\033[0m%s\033[0m\n", str);
                break;
            case 9:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("\033[0;31mInvalid choice! Please try again.\033[0m\n");
                break;
        }
    }while(choice != 9);
}

//Note: The ANSI escape codes may not work in all terminal emulators,
//and the appearance of colors may vary depending on the terminal settings.
//Make sure to test this in a terminal that supports ANSI escape codes.