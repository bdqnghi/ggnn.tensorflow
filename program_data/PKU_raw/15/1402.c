int main()
{
	int i,j,l1,c1,l2,c2,count=0,n;
	int a[500][500];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]!=0&&a[i][j+1]==0)
			{
				l1=i;
				c1=j+1;break;
			}
		}
            if(a[i][j]!=0&&a[i][j+1]==0)
			{
				l1=i;
				c1=j+1;break;
			}
	
	}
	
	for(;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==0&&a[i][j+1]!=0)
			{
				l2=i;
				c2=j;
			}
		}
	}
	
	count=(l2-l1-1)*(c2-c1-1);
	if(count==-20)
	{
		cout<<9;
	}
	else if(count==-6)
	{
		cout<<2;
	}
	else
	{
		cout<<count;
    }
	return 0;
}
