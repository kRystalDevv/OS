void topstyle() {
  printf("======================================\n\t");
}
void bottomstyle() {
  printf("\n======================================\n");
}

int taxcalc(int price) {
  int tax = 0;
  tax = price * 0.12;
  price += tax;
  return price;
}

void options() {
  printf("1 -> Food Menu\n");
  printf("2 -> Order and Price\n");
  printf("3 -> Exit to Menu\n");
}

void foodmenu() {
  printf("\t500 PKR -> McChicken \n");
  printf("\t550 PKR -> McSpicy\n");
  printf("\t450 PKR -> McNotSpicy\n");
  printf("\t600 PKR -> McRoyale\n");
}

int orderHandler(int quantity, int itemtype) {
  int i = 0, receipt = 0;
  int foodtype[4] = {
    500,
    550,
    450,
    600
  };
  for (i = 0; i < 5; i++) {
    if (quantity != foodtype[i]) {
      printf("Invalid Order!");
      break;
    }
  }
}

void transaction(int i, int j) {
  i = 500, j = 2;
  topstyle();
  printf("Tax = %d", taxcalc(i));
  bottomstyle();
}



void order() {
  // int exit = 0;//
  // printf("Enter %d finish ordering\nFood: ", exit);//
  int choice = 0, price = 0, total = 0, newtotal = 0;
  int quantity = 1;
  int pricing[4] = {
    500, //0//
    550, //1//
    450, //2//
    600 //3//
  };
  topstyle();
  printf("\nPick a burger! \n-> [1, 2, 3, 4] <-\nBurger: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("How many McChickens would you like?\nQuantity: ");
    scanf("%d", &quantity);
    price = quantity * pricing[0];
    total += price;
    newtotal += taxcalc(total);
    printf("Your Total is -> %d", newtotal);
    choice = 0;
    break;
  case 2:
    printf("How many McSpicy would you like?\nQuantity: ");
    scanf("%d", &quantity);
    price = quantity * pricing[1];
    total += price;
    newtotal += taxcalc(total);
    printf("Your Total is -> %d", newtotal);
    break;
  case 3:
    printf("How many McNotSpicy would you like?\nQuantity: ");
    scanf("%d", &quantity);
    price = quantity * pricing[2];
    total += price;
    newtotal += taxcalc(total);
    printf("Your Total is -> %d", newtotal);
    break;
  case 4:
    printf("How many McRoyale would you like?\nQuantity: ");
    scanf("%d", &quantity);
    price = quantity * pricing[3];
    total += price;
    newtotal += taxcalc(total);
    printf("Your Total is -> %d", newtotal);
    break;
  default:
    printf("Invalid, Please Repeat Again.\nExiting to Menu!");
    system("pause");
    system("cls");
  }

}

void menu() {
	int choice = 0;
	int exit = 0;
	options();
	printf("\nPlease Choose: ");
	scanf("%d", &choice);
	system("cls");
	switch (choice) {
  case 1:
  	bottomstyle();
    printf("\tHere's The Menu!\n\n");
    foodmenu();
    do
    {
        order();
        printf("\n\nWould you add more? [Y/N]");
        scanf("%d", &exit);
    }while(exit != 89 || exit != 121);
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

