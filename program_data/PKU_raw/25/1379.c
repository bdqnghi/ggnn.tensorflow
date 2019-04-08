int main()
{
	int a[1000]={0};
	int b[1000]={0},n,c;
	a[999]=1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			a[j]*=2;
		}//????
		for (int j = 999; j >= 0; j--)
		{
			if (a[j]>9)
			{
				a[j-1]+=1;
				a[j]-=10;
			}//????
		}

	}
	for (int j = 0; j < 1000; j++)
	{
		if (a[j]!=0)
		{
			c=j;
			break;
		}
	}
	for (int i = c; i < 1000; i++)
	{
		cout << a[i];
	}
	return 0;
}