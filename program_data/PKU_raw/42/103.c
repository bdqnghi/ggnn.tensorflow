int main()
{
	int n,i,j,k,count,sign,x;
	int a[100001];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	count = 0;
	for(j = 1,k = 0; j <= n; j++)
	{	
		if(a[j] != x)
		{	
			k++;
		    a[k] = a[j];
		}
		else
			count++;
	}
	sign = 0;
	for(j = 1; j <= n - count; j++)
	{	
		if(a[j] != x)
		{	
			if(sign == 0)
			{	
				cout << a[j];
				sign++;
			}
			else
				cout << " " <<a[j];
		}
	}
	return 0;
}