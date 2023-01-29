int taxcalc(int price) {
  int tax = 0;
  tax = price * 0.03;
  price += tax;
  printf("\nTax -> %d", tax);
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


