#include <stdio.h>
int main (void)
{
    int choice = 0;
    printf("Pick a number:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Your food item: French fries\nIts price:Rs 99");
            break;
        case 2:
            printf("Your food item: Pizza\nIts price:Rs 239");
            break;
        case 3:
            printf("Your food item: Burger\nIts price:Rs 129");
            break;
        case 4:
            printf("Your food item: Sandwich\nIts price:Rs 149");
            break;
        case 5:
            printf("Your food item: Pasta\nIts price:Rs 179");
            break;
        default : printf("Invalid Choice:");
    }


}
