void main()
{
	int f(int a[100][100],int n);
	int n,a[100][100],i,j,k,s;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			for (k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		s=f(a,n);
    	printf("%d\n",s);
	}

}

int f(int a[100][100],int n)
{
	int i,j,k,min[100],s=0;
	for (i=0;i<n;i++)
	{
		min[i]=a[i][0];
		for (j=0;j<n;j++)
		{
			if (a[i][j]<min[i])
				min[i]=a[i][j];
		}
		for (j=0;j<n;j++)
		{
			a[i][j]-=min[i];
		}
	}
	for (j=0;j<n;j++)
	{
		min[j]=a[0][j];
		for (i=0;i<n;i++)
		{
			if (a[i][j]<min[j])
				min[j]=a[i][j];
		}
		for (i=0;i<n;i++)
		{
			a[i][j]-=min[j];
		}
	}
	if (n==2)
	{
		s=a[1][1];
	}
	else 
	{
		k=a[1][1];
		for (j=1;j<n-1;j++)
			a[0][j]=a[0][j+1];
		for (i=1;i<n-1;i++)
			a[i][0]=a[i+1][0];
		for (i=1;i<n-1;i++)
			for (j=1;j<n-1;j++)
				a[i][j]=a[i+1][j+1];
		s=k+f(a,n-1);
	}
	return s;
}