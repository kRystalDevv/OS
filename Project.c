#include <stdio.h>

void topstyle()
{
    printf("==========================\n\t");
}
void bottomstyle()
{
    printf("\n==========================");
}

int taxcalc(int price, int quantity)
{
    int tax = 0;
    tax = price * 0.12;
    price += tax;
    return price;
}

void options()
{
    printf("1 -> Food Menu\n");
    printf("2 -> Order and Price\n");
    printf("3 -> Exit to Menu\n");
}

void foodmenu()
{
    printf("500 PKR -> McChicken \n");
    printf("550 PKR -> McSpicy\n");
    printf("450 PKR -> McNotSpicy\n");
    printf("600 PKR -> McRoyale\n");
}

void transaction()
{
    int i = 500, j = 2;
    topstyle();
	printf("Tax = %d", taxcalc(i, j));
    bottomstyle();
}

void menu()
{
    int choice = 0;
    options();
    printf("\nPlease Choose: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("________________\n");
		printf("Here's The Menu!\n\n");
        foodmenu();
        break;
        case 2:
        printf("Showing your Order!\n");
        transaction();
        break;
        case 3:
        printf("Exiting back to Menu!\n");
        break;
        default:
        system("cls");
        printf("Invalid Choice- Please Pick Again!\n");
        menu();
    }
}

void order()
{
    printf("\nDo you want to continue with your order?\n");
    int exit = 9;
    printf("Enter %d finish ordering", exit);
    int choice = 0;
    int quantity = 1;
    int McChickenCounter = 0, McNotSpicy = 0, McRoyaleCounter = 0, McSpicyCounter = 0; 
    scanf("%d", &choice);
    while(choice != exit)
    {
        switch(choice)
        {
            case 1:
            printf("How many McChickens would you like?\nQuantity: ");
            scanf("%d", &quantity);
            McChickenCounter = quantity;
            choice = 0;   
        }
    }
    
}

int main()
{
    menu();
    order();
}