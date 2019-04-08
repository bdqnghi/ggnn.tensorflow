int main()
{
	char y[2][1000];
	int x[2][1000] , i , j , k , count[1000] = {0} , max = 0;
		
	for(k = 0; k < 2; k ++)
	{
		i = 0;
		cin >> x[k][0];
		while ((y[k][i] = cin.get()) == ',')
		{
			i ++;
			cin >> x[k][i];
		}
	}

	for(k = 0; k < 1000; k ++)
	{
		for (j = 0; j < i + 1; j ++)
			if(k >= x[0][j] && k < x[1][j])
				count[k] ++;

		if (count[k] > max)
			max = count[k];
	} 
	cout << i + 1 << " " << max << endl;

	return 0;
}