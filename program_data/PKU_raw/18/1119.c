void jian(int a[100][100],int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
				min=a[i][j];
		}
		if(min!=0)
		{
			for(j=0;j<n;j++)
		    a[i][j]-=min;
		}
	}
		for(i=0;i<n;i++)
	{
		min=a[0][i];
		for(j=0;j<n;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];
		}
		if(min!=0)
		{
			for(j=0;j<n;j++)
		    a[j][i]-=min;
		}
	}
}
	void move(int a[100][100],int n)
	{
		int i,j;
		if(n>2)
		{
			for(i=1;i<(n-1);i++)
				for(j=0;j<n;j++)
					a[i][j]=a[i+1][j];
			for(i=1;i<(n-1);i++)
				for(j=0;j<(n-1);j++)
					a[j][i]=a[j][i+1];
		for(i=0;i<n;i++)
		{a[n-1][i]='\0';a[i][n-1]='\0';}
		}
		
	}
int main()
{
	int n,i,j,k,a[100][100]={'\0'},sum,n1;
	cin>>n;
	for(k=0;k<n;k++)
	{
		sum=0;n1=n;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		while(n1>1)
		{
		jian(a,n1);
		sum+=a[1][1];
		move(a,n1);
		n1--;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}