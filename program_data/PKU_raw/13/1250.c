int main()
{
	int a[20001]={0};
	int n, i, j, k, p, num=0;
	cin >> n;
	for(i=1; i <= n; i++) 
	{
		cin >> a[i];
	}
	for(j=1; j <= n-1; j++)
	{
		for(k=j+1; k <= n; )
		{
			if(a[j] == a[k])
			{
				for(p=k; p <= n-1; p++)
				{
					a[p]=a[p+1];
				}
				n--; 
			}
			else
			{
				k++;
			}
		}
	}
	for(i=1; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[n] <<endl;
	return 0;
} 