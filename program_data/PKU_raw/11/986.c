int main()
{
	int i, year, month, day, n = 0;
	cin >> year >> month >> day;
	int pin[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int run[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year % 4 == 0 && year % 100 !=  0) || year % 400 == 0)
	{
		if(month >= 2)
		{
			for(i = 0; i <= month - 2; i++)
			{
		    	n = n + run[i];
			}
			n = n + day;
		}
		if(month == 1)
		{
			n = day;
		}
	}		 
	else
	{
		if(month >= 2)
		{
			for(i = 0; i <= month - 2; i++)
			{
		    	n = n + pin[i];
			}
			n = n + day;
		}
		if(month == 1)
		{
			n = day;
		}		
	}
	cout << n << endl;
	return 0;
}