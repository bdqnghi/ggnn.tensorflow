int main()
{
	int a[100001] , n , i = 1, j , k , count;
	cin >> n;
	count = n;
	for (i =1 ; i <=n ; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	i = 1;
	do 
	{
		if (a[i] == k)
		{
			for (j = i ; j <= count - 1 ; j++)
			{
				a[j] = a[j + 1];
			}
			a[count] = 0;
			count = count -1;
			i = i -1;
		}
		i++;
	}while (i <= count);
	for (i = 1 ; i <= count - 1 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[count] <<endl;
	return 0;
}
