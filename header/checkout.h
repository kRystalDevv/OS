int isFiler()
{
	int chfiler = 0;
	printf("\n\tAre you a filer?\nPress 1: Yes\nPress 2: No\nChoose: ");
	scanf("%d", &chfiler);
	if(chfiler == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int taxcalc(int price) {
  int tax = 0;
  if(isFiler() == 1)
  {
  	tax = price * 0.03;
  }
  else
  {
  	tax = price * 0.06;
  }
  printf("\n\nYour total price excluding tax is: %d", price);
  price += tax;
  printf("\nItna Tex Nikal -> %d", tax);
  return price;
}

int priceHandler(int pricing)
{
  int price = 0, aftertax = 0;
  price = pricing;
  aftertax += taxcalc(price);
  printf("\nYour Total is -> %d", aftertax);
  return aftertax;
}


