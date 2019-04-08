int main()
{
	char a[100];
	int j, n, i, k = 0;
	a[0] = 2;
	for(i = 1; i < 100; i++)
		a[i] = 0;
	cin >> n;
	if(n == 0)
		cout << "1" <<endl;
	else
	{for(j = 0; j < n - 1;j++)
	{
		int flag = 1;
	    for(i = 0; i < 100; i++)
		{
			if(flag)
			{
				if((a[i] - 0) * 2 < 10)
					a[i] = (a[i] - 0) * 2;
				else
				{
					a[i] = ((a[i] - 0) * 2) % 10 ;
					flag = 0;
				}
			}
			else 
			{
				if(((a[i] - 0) * 2 + 1) < 10)
				{
					a[i] = (a[i] - 0) * 2 + 1;
					flag = 1;
				}
				else
				{
					a[i] = ((a[i] - 0) * 2 )% 10 + 1;
					flag = 0;
				}
			}
		}
	}
	 for(i = 99; i >= 0; i--)
	 {
		 if(a[i] != 0)
			 k = 1;
		 if(k)
			 cout << a[i] - '0' + 48;
	 }
	}
	return 0;
}
