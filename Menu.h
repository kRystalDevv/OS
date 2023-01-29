
int option = 0;
void orderBurgers();
void orderFries();
void orderDrinks();

void options() {
  printf("1 -> Burgers\n");
  printf("2 -> Fries\n");
  printf("3 -> Drink\n");
  printf("4 -> Go back\n");
  printf("5 -> Total your Order\n\n");
}


void Burgers() {
  printf("Burgers\n \n ");
  printf("\t1 - 500 PKR -> McChicken       \n");
  printf("\t2 - 550 PKR -> McSpicy         \n");
  printf("\t3 - 450 PKR -> McCrispy        \n");
  printf("\t4 - 600 PKR -> McRoyale        \n");
  printf("\t5 - Press 0 for back to Menu...\n");

  
}
void FriesMenu(){
	printf("Fries\n \n ");
	printf("\t1 - 200 PKR -> Small \n");
	printf("\t2 - 300 PKR -> Medium \n");
	printf("\t3 - 400 PKR -> Large \n");
	printf("\t4 - Press 0 for back to Menu... \n");
	
	
}

void DrinksMenu(){
	printf("\t\tDrinks\n \n ");
	printf("\t1 - 100 PKR -> Sting \n");
	printf("\t2 - 120 PKR -> Coke \n");
	printf("\t3 - 120 PKR -> Fanta \n");
    printf("\t4 - 120 PKR -> 7up \n");
    printf("\t5 - Press 0 for back to Menu... \n");
}	

void Menu(){
	printf("\nWhat would you like to order: \n");
	options();
	scanf("%d", &option);
	
	switch(option){
		case 1:
			Burgers();
			orderBurgers();
			break;
		case 2:
			FriesMenu();
			orderFries();
			break;
		case 3:
			DrinksMenu();
			orderDrinks();
			break;
		case 4:
			Welcome();
			break;	
		default:
			printf("hahaha");
			break;
	}
	
	
}

int Welcome()
{
	char msg ;
	printf("\t Hi- Welcome to Mini-Resturant... \n");
	printf("\t Would you like to place an order..? \n\t Press Y for yes, N for no!\n\n");
	scanf("%c", &msg);
	printf("\nYou have selected %c \n",msg);
	if(msg == 'y')
	{
		Menu();
	}
	else if (msg == 'n')
	{
		printf("Me Kehta hun phr sochlo\n ");
		return 0;
	}
	else 
	{
		printf("Typing Error! pls choose either y for YES or n for NO! ");
	}

	
}


void start2()
{ 	
Welcome();

}

