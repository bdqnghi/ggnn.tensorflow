void order(int a[],int n)
{
	int i=0,j=0;
	int t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void print(int a[],int n,int b[],int m)
{
	int i=0,j=0;
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
	while(j<m-1)
	{
		printf("%d ",b[j]);
		j++;
	}
	printf("%d",b[m-1]);
}
void main()
{
	void order(int a[],int n);
	void print(int a[],int n,int b[],int m);
	int x[20],y[20];
	int n,m,i=0,j=0;
	scanf("%d%d",&n,&m);
	while(i<n)
	{
		scanf("%d",&x[i]);
		i++;
	}
	while(j<m)
	{
		scanf("%d",&y[j]);
		j++;
	}
	order(x,n);
	order(y,m);
	print(x,n,y,m);
}


