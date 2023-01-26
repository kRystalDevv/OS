#include <stdio.h>
void topstyle(); //styping top//
void bottomstyle(); //styling bottom//
void menu(); //menu 1, 2, 3//
void foodmenu(); //food items//
void options(); //
int order();
void transaction(int i, int j);
int taxcalc(int price);
void priceHandler(int quantity, int pricing);
int orderHandler(int quantity, int itemtype);


int main()
{
  menu();
  return 0;
}

void topstyle() {
  printf("======================================\n\t");
}
void bottomstyle() {
  printf("\n======================================\n");
}

void menu() {
	int choice = 0;
	char exit = 0;
	options();
	printf("\nPlease Choose: ");
	scanf("%d", &choice);
	system("cls");
	switch (choice) {
  case 1:
  	bottomstyle();
    printf("\tHere's The Menu!\n\n");
    foodmenu();
    order();
    break;

  case 2:
    printf("Showing your Order!\n");
    transaction(1, 2);
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

void foodmenu() {
  printf("\t500 PKR -> McChicken \n");
  printf("\t550 PKR -> McSpicy\n");
  printf("\t450 PKR -> McNotSpicy\n");
  printf("\t600 PKR -> McRoyale\n");
}

void options() {
  printf("1 -> Food Menu\n");
  printf("2 -> Order and Price\n");
  printf("3 -> Exit to Menu\n");
}

int order() {
  // int exit = 0;//
  // printf("Enter %d finish ordering\nFood: ", exit);//
  int choice = 0, price = 0, total = 0, newtotal = 0;
  int quantity = 0;
  int pricing[4] = {
    500, //0//
    550, //1//
    450, //2//
    600 //3//
  };
  topstyle();
  printf("\n\tPick a burger! \n\t-> [1, 2, 3, 4] <-\n\nBurger: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("How many McChickens would you like?\nQuantity: ");
    scanf("%d", &quantity);
    if((orderHandler(quantity, pricing[choice])) == 1)
    {
      return 1;
    }
    else
    {
      priceHandler(quantity, pricing[0]);
      choice = 0;
    }
    break;
  case 2:
    printf("How many McSpicy would you like?\nQuantity: ");
    scanf("%d", &quantity);
    if((orderHandler(quantity, pricing[choice])) == 1)
    {
      return 1;
    }
    else
    {
      priceHandler(quantity, pricing[1]);
      choice = 0;
    }
    break;
  case 3:
    printf("How many McNotSpicy would you like?\nQuantity: ");
    scanf("%d", &quantity);
    if((orderHandler(quantity, pricing[choice])) == 1)
    {
      return 1;
    }
    else
    {
      priceHandler(quantity, pricing[2]);
      choice = 0;
    }
    break;
  case 4:
    printf("How many McRoyale would you like?\nQuantity: ");
    scanf("%d", &quantity);
    if((orderHandler(quantity, pricing[choice])) == 1)
    {
      return 1;
    }
    else
    {
      priceHandler(quantity, pricing[3]);
      choice = 0;
    }
    break;
  default:
    printf("Invalid, Please Repeat Again.\nExiting to Menu!");
    system("cls");
    return 0;
  }

}

void transaction(int i, int j) {
  i = 500, j = 2;
  topstyle();
  printf("Tax = %d", taxcalc(i));
  bottomstyle();
}

int taxcalc(int price) {
  int tax = 0;
  tax = price * 0.03;
  price += tax;
  topstyle();
  printf("Tax -> %d\n", tax);
  return price;
}

void priceHandler(int quantity, int pricing)
{
  int price = 0, temp = 0, aftertax = 0;
  price = quantity * pricing;
  temp = price;
  aftertax += taxcalc(temp);
  printf("Your Total is -> %d", aftertax);
  return aftertax;
}

int orderHandler(int quantity, int itemtype) {
  int i = 0, receipt = 0;
  int foodtype[4] = {
    500,
    550,
    450,
    600
  };
    if(quantity <= 0)
    {
      system("cls");
      system("color 4");
        printf("\t\t\tWARNING!\n\n");
        printf("\t->Quantity can't be less than or equal to 0<-\n\n\t\t==Terminating Order!==\n\n\t");
        system("pause");
        return 1;
    }
    else
    {
        return 0;
    }
  for (i = 0; i < 5; i++) {
    if (itemtype != foodtype[i]) {
      printf("Invalid Order!");
      break;
    }
    else
    {
    	return 0;
	}
  }
}