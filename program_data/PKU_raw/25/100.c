int main()
{
	int n, i, j, count = 0;
	cin >> n;
	int a[100];
	for(i = 0; i < 99; i++)
		a[i] = -1;
	a[99] = 1;
	if(n == 0)
		cout << 1;
	else
	{
		for(i = 0; i < n; i++)
		{	
			count = 0;
			for(j = 99; j >= 0; j--)
				if(a[j] != -1)
				{
					count++;
				}
			for(j = 99; j > 99 - count; j--)
				a[j] = a[j] * 2;
			for(j = 99; j > 99 - count; j--)
			{
				if(a[j] >= 10)
				{
					a[j] = a[j] - 10;
					if(a[j - 1] == -1)
					{
						a[j - 1] = 1;
						count++;
						break;
					}
					else 
						a[j - 1] = a[j - 1] + 1; 
				}
			}
		}
	}
	for(i = 99 - count + 1; i <= 99; i++)
		cout << a[i];
	cout << endl;
	return 0;
}


		
		
	
