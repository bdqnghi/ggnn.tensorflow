int main()
{
	int n,i,j,k,l,m,s;
	cin>>n;
	int max1=0,max2=0,min1=n,min2=n;
	int a[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				if(max1<i)
				{
					max1=i;
				}
				if(max2<j)
				{
					max2=j;
				}
				if(min1>i)
				{
					min1=i;
				}
				if(min2>j)
					{min2=j;}
			}
		}
	}
	s=(max1-min1-1)*(max2-min2-1);
	cout<<s;
	return 0;
}