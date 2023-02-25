void cF(darkMode)
{
	if(darkMode == 0)
	{
		system("color F0"); //color white//

	}
	else if(darkMode == 1)
	{
		system("color 07"); //color black//
	}
	else if(darkMode == 2)
	{
		system("color 4e"); //color white//
	}
	else if(darkMode == 3)
	{
		system("color fc"); //color white//
	}
	
}

colorModeSwitcher()
{
	clearScreen();
	int selection = 0;
	char themes[4][20] = {"Light Mode", "Dark Mode", "Mc Donald Theme", "Pennywise Theme"};
	printf("\t\tColor Changing Menu :D\n");
	printf("Your available color choices are from 1 to 4...\n");
	printf(" 1 = Light Mode (Default)\n 2 = Dark Mode\n 3 = McDonald Theme\n 4 = Pennywise Theme\n");
	printf("To proceed with the change, Insert the number correnspoding with your theme!\n\nChoice: ");
	scanf("%d", &selection);
	selection -= 1;
	if(selection == 0)
	{
		printf("Excellet Choice!\nYou have selected %s. \nThe theme has been applied, if it doesn't work, Restart the program!\n\n", themes[selection]);
	}
	else if(selection == 1)
	{
		printf("Excellet Choice!\nYou have selected %s. \nThe theme has been applied, if it doesn't work, Restart the program!\n\n", themes[selection]);
	}
	else if(selection == 2)
	{
		printf("Excellet Choice!\nYou have selected %s. \nThe theme has been applied, if it doesn't work, Restart the program!\n\n", themes[selection]);
	}
	else if(selection == 3)
	{
		printf("Excellet Choice!\nYou have selected %s. \nThe theme has been applied, if it doesn't work, Restart the program!\n\n", themes[selection]);
	}
	else
	{
		printf("Man why? Now suffer and repeat again?\n");
	}
	darkMode = selection;
	pause();
	run();
	
}

void clearScreen()
{
	system("cls"); //widely used, clears screen//
}

void pause()
{
	system("pause"); //stops you
}
