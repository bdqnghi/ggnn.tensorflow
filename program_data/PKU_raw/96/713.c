int main()
{
	char num[100];
	cin >> num;
	// division???????????number[i]??num[i],denominator[i]??????
	int division = 0, number[100], denominator[100], dinominator[100], rest = 0, i, j, mark;
	for (i = 0; i < 100; i++)        
	{
		if (num[i] != '\0')  // ??????????????????????
		{
			number[i] = num[i] - '0';
		}
		else
		{
			break;
		} 
	}               // ??????i - 1?
	if (i == 1)
	{
		cout << "0" << endl << number[0];
	}
	else if ((i == 2) && (number[0] == 1) && (number[1] <= 2))
	{
		cout << "0" << endl << number[0] * 10 + number[1];
	}
	
	else
	{
	rest = number[0];
	for (j = 1; j <= i - 1; j++)   // ???????1??????division???99??denominator????
	{
		division = number[j] + rest * 10; 
		denominator[j] = division / 13;
		rest = division % 13;
	}
	for (j = 1; j <= i - 1; j++)
	{
		if (denominator[j] != 0)  //???????????0??
		{
			mark = j;
			break;
		}
	}
	for (j = mark; j <= i - 1; j++)
	{
		cout << denominator[j];
	}
	cout << endl;
	cout << rest;
	}
	return 0;
}