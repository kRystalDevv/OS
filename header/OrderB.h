//Set Prices for//
int pricing[4] = 
{
    500, //0//
    550, //1//
    450, //2//
    600, //3//
};
char burger[4][50] = 
{
    "McChicken    ", //0//
    "McSpicy      ", //1//
    "McCrispy     ", //2//
    "McRoyale     ", //3//
};
	  
int pricingd[4] = 
{
    100, //0//
    120, //1//
    120, //2//
    120, //3//
};
char drinks[4][50] = 
{
	"Sting     ", //0//
	"Coke      ", //1//
	"Fanta     ", //2//
	"7up       ", //3//
};

int pricingf[3] = {
    200, //0//
    300, //1//
    400, //2//
    
	  };
char fries[3][50] = {
	    "Small       ", //0//
	    "Medium      ", //1//
	    "Large       ", //2//
};
int 
total = 0,

totalb = 0,
totalf = 0,
totald = 0,

//number of items- quantity dependent//
total_products = 0,
total_productsf = 0,
total_productsd = 0,

total_price = 0,
total_pricef = 0,
total_priced = 0,

newtotal = 0,
newtotalf = 0,	
newtotald = 0,

choice = 0,
choicef = 0,
choiced = 0,

quantity = 0,
quantityf = 0,
quantityd = 0, 

//
price = 0,
pricef = 0, 
priced = 0,

//quantities of items//
nburgers = 0, 
nfries = 0,
ndrinks = 0,

f = 0, i = 0 , d = 0;
char ch, chf, chd;
int priceHandler();


void orderBurgers() {  	
  	printf("How many Burgers would you like?\nQuantity: ");
	scanf("%d", &nburgers); 
  	clearScreen();
  	total_products += nburgers;
  	printf("new burger is added, %d", total_products);
  	printf("\nYou have selected %d burgers...",nburgers);
  	if(nburgers == 0)
	{
		Menu();	
	}
	int selected_burgers[nburgers]; //stores choices of the burgers you've picked!//
  	do
  	{
  		x:
  		Burgers(); //prints burger menu//
  		printf("\n\tPick a choice for burger! \n\t-> [1, 2, 3, 4] <-\n\nBurger: ");
		scanf("%d", &choice); 
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{
			clearScreen();
			selected_burgers[i] = choice - 1;
		}
		else {
			clearScreen();
			printf("\nWrong choice....\n");
			goto x;
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
  	printf("Would you like to go to menu or proceed to checkout..? \n press 1: checkout \n press 0: Menu...\n\nChoice: ");
  	scanf("%d", &o);
  	
  	total += total_price;
  	if( o == 1)
  	{	
		clearScreen();
  		printf("\nYour total price excluding tax is: %d", total);
  		priceHandler(total);
	  }
	else
	{	i =0;
		Menu();
	}
  	
}


void orderFries() {
  // int exit = 0;//
  // printf("Enter %d finish ordering\nFood: ", exit);//
  	
  	printf("How many Packets of Fries would you like?\nQuantity: ");
	scanf("%d", &nfries);
  	clearScreen();
  	total_productsf += nfries;
  	
  	printf("\nYou have selected %d number of fries...",nfries);
  	if(nfries == 0)
	{
		Menu();
	
	}
	
	int selected_fries[nfries];
  	do
  	{
  		y:
		clearScreen(); 		
  		FriesMenu();
  		printf("\n\tPick a choice for Fries! \n\t-> [1, 2, 3, 4] <-\n\nFries: ");
		scanf("%d", &choicef);
		if (choicef == 1 || choicef == 2 || choicef == 3 || choicef == 4)
		{
			selected_fries[f] = choicef - 1;
		}
		else {	
			printf("\nWrong choice....\n");
			clearScreen();
			goto y;
		}
		
		f +=1;
		nfries-=1;
  		
	  }while(nfries != 0);
	
	
	int loopf,rf,of;
	printf("\nThe selected fries are %d:  \n",sizeof(selected_fries) / sizeof(selected_fries[0]));
	for(loopf = 0; loopf < sizeof(selected_fries) / sizeof(selected_fries[0]); loopf++)
	{
      rf = selected_fries[loopf];
      printf("%d ----%s",1+rf, fries[rf]);
      total_pricef += pricingf[rf];
	  printf("           Rs %d\n", pricingf[rf]); 
	}
  	total += total_pricef;
  	printf("Would you like to order something else, or proceed to checkout..? \n press 1: checkout \n press 0: Menu...\n\nChoice: ");
  	scanf("%d", &of);
  	
  	if( of == 1)
  	{	
		clearScreen();
  		printf("\n Your total price excluding tax is: %d", total);
  		priceHandler(total);
	  }
	else
	{	f = 0;
		Menu();
	}
  	
}


void orderDrinks() {
  // int exit = 0;//
  // printf("Enter %d finish ordering\nFood: ", exit);//
  	
  	printf("How many Drinks would you like?\nQuantity: ");
	scanf("%d", &ndrinks);
  	clearScreen();
  	total_productsd += ndrinks;
  	printf("\nYou have selected %d Drinks...",ndrinks);
  	if(ndrinks == 0)
	{
		
		Menu();
	
	}
	
	int selected_drinks[ndrinks];
  	do
  	{
  		z:
  		clearScreen();
  		DrinksMenu();
  		printf("\n\tPick a choice for Drink! \n\t-> [1, 2, 3, 4] <-\n\nDrinks: ");
		scanf("%d", &choiced);
		if (choiced == 1 || choiced == 2 || choiced == 3 || choiced == 4)
		{
			selected_drinks[d] = choiced - 1;
		}
		else {	
			printf("\nWrong choice....\n");
			printf("\n\tPick a choice for drink! \n\t-> [1, 2, 3, 4] <-\n\nDrinks: ");
			scanf("%d", &choiced);
		}
		
		d +=1;
		ndrinks-=1;
  		
	  }while(ndrinks != 0);
	
	
	int loopd,rd,od;
	printf("\nThe selected drinks are %d:  \n",sizeof(selected_drinks) / sizeof(selected_drinks[0]));
	for(loopd = 0; loopd < sizeof(selected_drinks) / sizeof(selected_drinks[0]); loopd++)
	{
      rd = selected_drinks[loopd];
      printf("%d ----%s",1+rd, drinks[rd]);
      total_priced += pricingd[rd];
	  printf("           Rs %d\n", pricingd[rd]); 
	}
  	total += total_priced;
  	printf("Would you like to order something else, or proceed to checkout..? \n press 1: checkout \n press 0: Menu...\n\nChoice: ");
  	scanf("%d", &od);
  	
  	if( od == 1)
  	{	
		clearScreen();
  		printf("\n Your total price excluding tax is: %d", total);
  		priceHandler(total);
	  }
	else
	{	d = 0;
		Menu();
	}
  	
}


