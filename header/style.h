int darkMode = 1;

int cF(darkMode)
{
	if(darkMode == 1)
	{
		system("color 07");
		return 0;
	}
	else if(darkMode == 0)
	{
		system("color F0");
		return 0;
	}
}
