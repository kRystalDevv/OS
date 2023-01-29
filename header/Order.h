int pricing[4] = {
    500, //0//
    550, //1//
    450, //2//
    600 //3//
	  };
	char burger[4][50] = {
	    "McChicken", //0//
	    "McSpicy  ", //1//
	    "McCrispy ", //2//
	    "McRoyale " //3//
	  };
	int nburgers = 0;
	int  price = 0, total = 0, newtotal = 0;
	int quantity = 0; 
	char ch;
  
int i = 0;
int choice = 0;
int total_products = 0;
int total_price = 0;
int priceHandler();



void orderBurgers() {
  // int exit = 0;//
  // printf("Enter %d finish ordering\nFood: ", exit);//
  	
  	printf("How many Burgers would you like?\nQuantity: ");
	scanf("%d", &nburgers);
  	
  	total_products += nburgers;
  	
  	printf("\nYou have selected %d burgers...",nburgers);
  	if(nburgers == 0)
	{
		Menu();
	
	}
	
	int selected_burgers[nburgers];
  	do
  	{
  		
  		Burgers();
  		printf("\n\tPick a choice for burger! \n\t-> [1, 2, 3, 4] <-\n\nBurger: ");
		scanf("%d", &choice);
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			selected_burgers[i] = choice - 1;
		}
		else {	
			printf("\nWrong choice....\n");
			printf("\n\tPick a choice for burger! \n\t-> [1, 2, 3, 4] <-\n\nBurger: ");
			scanf("%d", &choice);
		}
		
		i +=1;
		nburgers-=1;
  		
	  }while(nburgers != 0);
	
	
	int loop,r,o;
	printf("\nThe selected burgers are %d:  \n",sizeof(selected_burgers) / sizeof(selected_burgers[0]));
	for(loop = 0; loop < sizeof(selected_burgers) / sizeof(selected_burgers[0]); loop++)
	{
      r = selected_burgers[loop];
      printf("%d ----%s",1+r, burger[r]);
      total_price += pricing[r];
	  printf("           Rs %d\n", pricing[r]); 
	}
  	
  	printf("Would you like to order something else, or proceed to checkout..? \n press 1: checkout \n press 0: Menu...\n");
  	scanf("%d", &o);
  	
  	if( o == 1)
  	{	
  		printf("\n Your total price excluding tax is: %d", total_price);
  		priceHandler(total_price);
	  }
	else
	{	
		Menu();
	}
  	
}


