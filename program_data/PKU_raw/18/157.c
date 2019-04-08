int main()
{
	int n,i,j,k,a[100][100],p,min,sum=0;
	cin>>n;
	for(p=1;p<=n;p++)
	{
		for(i=0;i<=n-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(k=1;k<=n-1;k++)
		{
			
		for(i=0;i<=n-1;i++)
		{
			min=a[i][0];
			for(j=k;j<=n-1;j++)
			{
				if(a[i][j]<min)
				{min=a[i][j];}
			}
			
				for(j=0;j<=n-1;j++)
				{
					a[i][j]=a[i][j]-min;
				}
			
		}

		for(j=0;j<=n-1;j++)
		{
			min=a[0][j];
			for(i=k;i<=n-1;i++)
			{
				if(a[i][j]<min)
				{min=a[i][j];}
			}
			for(i=0;i<=n-1;i++)
			{
				
					a[i][j]=a[i][j]-min;
				
			}
		}
		sum=sum+a[k][k];
		}
		cout<<sum<<endl;
		sum=0;
	}
	
	return 0;
}

		
