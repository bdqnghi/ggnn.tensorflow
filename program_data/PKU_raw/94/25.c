int main()
{
	int a[501] = { 0 };
	int i , n , j , flag , max;
	cin >> n;
	max = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> j;
		if (j > max) 
			max = j;
		if (j % 2 == 1)
			a[j] ++;
	}
	flag = 1;
	for (i = 1; i <= max; i += 2)
		if (a[i] != 0)
			if (flag == 1)
			{
				flag = 0;
				cout << i;
			}
			else
			cout << "," << i;
	cout << endl;
	
	return 0;
}