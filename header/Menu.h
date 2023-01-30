void orderBurgers();
void orderDrinks();
void orderFries();
void cF();
void clearScreen();
int option = 0;
void run();


//tada//
void options() {
  printf("1 -> Burgers\n");
  printf("2 -> Fries\n");
  printf("3 -> Drink\n\n");
  printf("4 -> Go back\n");
  printf("5 -> Total your Order\n\n");
}

//tada//
void Burgers() {
  printf("\n\t\tBurgers\n \n ");
  printf("\t1 - 500 PKR -> McChicken       \n");
  printf("\t2 - 550 PKR -> McSpicy         \n");
  printf("\t3 - 450 PKR -> McCrispy        \n");
  printf("\t4 - 600 PKR -> McRoyale        \n\n");
  printf("\t5 - Press 0 for back to Menu...\n");

  
}
void FriesMenu(){
	printf("\n\t\tFries\n \n ");
	printf("\t1 - 200 PKR -> Small \n");
	printf("\t2 - 300 PKR -> Medium \n");
	printf("\t3 - 400 PKR -> Large \n\n");
	printf("\t4 - Press 0 for back to Menu... \n");
	
	
}

void DrinksMenu(){
	printf("\n\t\tDrinks\n \n ");
	printf("\t1 - 100 PKR -> Sting \n");
	printf("\t2 - 120 PKR -> Coke \n");
	printf("\t3 - 120 PKR -> Fanta \n");
    printf("\t4 - 120 PKR -> 7up \n\n");
    printf("\t5 - Press 0 for back to Menu... \n");
}	

void Menu(){
	b:
	clearScreen();
	printf("\nWhat would you like to order: \n");
	options(); //prints option function//
	scanf("%d", &option);
	//enters switch case and asks for different stuff//
	switch(option){
		case 1:
			clearScreen();
			Burgers(); //menu for burgers//
			orderBurgers(); //burger ordering function//
			break;
		case 2:
			clearScreen();
			FriesMenu(); //menu for fries//
			orderFries(); //fries ordering function//
			break;
		case 3:
			clearScreen();
			DrinksMenu(); //menu for drinks//
			orderDrinks(); //drink ordering function//
			break;
		case 4:
			clearScreen();
			goto b;
			break;	
		default:
			printf("hahaha");
			break;
	}
	
	
}

int Welcome() //prompts a message which asks for order placement//
{
	char msg ;
	printf("\t Hi- Welcome to Mini-Resturant... \n");
	printf("\t Would you like to place an order..? \n\t Press Y for yes, N for no!\n\n-> ");
	scanf("%c", &msg);
	printf("\nYou have selected %c \n",msg);
	if(msg == 'y' || msg == 'Y') //asks yes or no//
	{
		Menu();
	}
	else if (msg == 'n' || msg == 'N')
	{
		printf("Me Kehta hun phr sochlo\n ");
		return 0;
	}
	else 
	{
		printf("Typing Error! pls choose either y for YES or n for NO! ");
		return 0;
	}

	
}


void run()
{
	int darkMode = 0; //change value for diff color//
	cF(darkMode); //color function//
	Welcome(); 
}
