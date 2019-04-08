int main ()
{
	int n, m = 0, i, j = 0, flag = 0, flag1 = 1;
	int result[1001] = {1};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= 1000; j++)
		{
			if (flag == 0) result[j] = result[j] * 2;
			if (flag == 1) {result[j] = result[j] * 2 + 1; flag = 0;}
			if (result[j] >= 10)
			{
				result[j] = result[j] - 10;
				flag = 1;
			}
		}
	}

	for (i = 1000; i >= 0; i--)
	{
		if (result[i] == 0 && flag1 == 1)
		{ continue;}
		else 
		{	
			flag1 = 0;
			cout << result[i];
		}
		  
	}
	
return 0;

}