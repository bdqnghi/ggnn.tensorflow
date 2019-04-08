int main()
{
	int time[1001] = {0};
	char x[10000] , ch;
	int tem[1001] , max = 0 , count = 1 , len;
	int come[1001] , go[1001];
    int i , j;
	cin.getline( x , 10000 , '\n');
	len = strlen(x);
	for(i =0; i<= 1000;i++) time[i] = 0;
	for (i = 0 ; i <= len - 1 ; i++)
	{
		if (x[i] == ',')
		{
			tem[count] = i;
			count++;
		}
		tem[count] = len;
		tem[0] = -1;
	}
	for (i = 1 ; i <= count ; i++)
	{
		if ((tem[i] - tem[i - 1]) == 2)
		{
			come[i] = x[tem[i] - 1] - 48;
		}
		if ((tem[i] - tem[i - 1]) == 3)
		{
			come[i] = x[tem[i] - 1] - 48 + 10 * (x[tem[i] - 2] - 48);
		}
		if ((tem[i] - tem[i - 1]) == 4)
		{
			come[i] = x[tem[i] - 1] - 48 + 10 * (x[tem[i] - 2] -48) + 100 * (x[tem[i] - 3] - 48);
		}
	}
	for (i = 1 ; i <= count -1 ; i++)
	{
		cin >> go[i] >> ch;
	}
	cin >> go[count];
	for (i = 1 ; i <= count ; i++)
	{
		for (j = come[i] ; j < go[i] ; j++)
		{
			time[j]++;
		}
	}
	for (i = 0 ; i <= 999 ; i++)
	{
		if (time[i] > max)
		{
			max = time[i];
		}
	}
	cout << count << ' ' << max << endl;
	return 0;
}
