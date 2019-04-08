int sum,n,a[105][105],flag2[105],min1[105],min2[105];
void f(int x);
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=0;
		f(n);
		cout<<sum<<endl;
	}
	
	return 0;
}
void f(int x)
{
	if(x==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
	}
	if(x==1)
	{
	}
	else
	{
		for(int i=0;i<x;i++)
		{
			flag2[i]=0;
			min1[i]=0;
			min2[i]=0;
		}
		for(int i=0;i<x;i++)
		{
			min1[i]=a[i][0];
			for(int j=0;j<x;j++)
			{
				if(a[i][j]<min1[i])
				min1[i]=a[i][j];
			}
		}
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<x;j++)
			{
				if(a[i][j]-min1[i]>=0)
				{
					a[i][j]=a[i][j]-min1[i];
					if(a[i][j]==0)
					{
						flag2[j]=1;
					}
				}
			}
		}
		for(int j=0;j<x;j++)
		{
			if(flag2[j]==0)
			{
				min2[j]=a[0][j];
				for(int i=0;i<x;i++)
				{
					if(a[i][j]<min2[j])
					min2[j]=a[i][j];
				}
			}
		}
		for(int j=0;j<x;j++)
		{
			if(flag2[j]==0)
			{
				for(int i=0;i<x;i++)
				{
					if(a[i][j]-min2[j]>=0)
					{
						a[i][j]=a[i][j]-min2[j];
					}
				}
			}
		}
		sum=sum+a[1][1];
		for(int i=0;i<x;i++)
		{
			for(int j=1;j<x-1;j++)
			{
				a[i][j]=a[i][j+1];
			}
		}
		for(int j=0;j<x-1;j++)
		{
			for(int i=1;i<x-1;i++)
			{
				a[i][j]=a[i+1][j];
			}
		}
		f(x-1);
	}
}
