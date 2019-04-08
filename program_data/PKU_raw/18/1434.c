
void f1(int n,int a[100][100])
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		int x=a[i][0],j;
		for(j=1;j<=n-1;j++)
			if(x>a[i][j]) x=a[i][j];
		if(x>0)
			for(j=0;j<=n-1;j++)
				a[i][j]-=x;
	}
	for(i=0;i<=n-1;i++)
	{
		int x=a[0][i],j;
		for(j=1;j<=n-1;j++)
			if(x>a[j][i]) x=a[j][i];
		if(x>0)
			for(j=0;j<=n-1;j++)
				a[j][i]-=x;
	}
}

void f2(int n,int a[100][100])
{
	int i,j;
	for(i=1;i<=n-2;i++)
	{
		a[0][i]=a[0][i+1];
		a[i][0]=a[i+1][0];
	}
	for(i=1;i<=n-2;i++)
		for(j=1;j<=n-2;j++)
			a[i][j]=a[i+1][j+1];
}

int loop(int n,int a[100][100])
{
	f1(n,a);
	int x=a[1][1];

	if(n==2) return a[1][1];
	else
	{
		f2(n,a);
		return x+loop(n-1,a);
	}
}

void main(void)
{
	int t,n;
	scanf("%d",&n);
	for(t=1;t<=n;t++)
	{
		int a[100][100],i,j;
		for(i=0;i<=n-1;i++)
			for(j=0;j<=n-1;j++)
				scanf("%d",&a[i][j]);

		printf("%d\n",loop(n,a));
	}
}