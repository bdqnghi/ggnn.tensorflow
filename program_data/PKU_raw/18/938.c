int main()
{
	int n, i, j, k,a[102][102],min=100000,sum=0, t;
	cin>>n;
	
	for(k=1;k<=n;k++)
	{
		sum=0;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		
		
		for(t = 0;t <= n-2; t++)
		{
			
			for(i=1;i<=n-t ;i++)
			{
				min = 100000;
				for(j=1;j<=n-t;j++)
				{
					min = min < a[i][j] ? min : a[i][j]; 
				}
				for(j=1;j<=n-t;j++)
				{
					a[i][j] = a[i][j] -  min;
				}
			}
			
			for(i=1;i<=n-t ;i++)
			{
				min = 100000;
				for(j=1;j<=n-t;j++)
				{
					min = min < a[j][i] ? min : a[j][i]; 
				}
				for(j=1;j<=n-t;j++)
				{
					a[j][i] = a[j][i] -  min;
				}
			}
			
			sum = sum+a[2][2];
			
			for(i=3;i<=n-t;i++)
			{
				a[i-1][1] = a[i][1];
				a[1][i-1] = a[1][i];
			}
			
			for(i=3;i<=n-t;i++)
			{
				for(j=3;j<=n-t;j++)
				{
					a[i-1][j-1] = a[i][j];
				}
			}
			
		}

		cout << sum<<endl;

	}
	return 0;
}
		
		
		
		
		
		
