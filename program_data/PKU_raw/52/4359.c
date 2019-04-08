void main()
{
	void move(int x,int y[]);
	int i,m,n,a[100];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	for(i=1;i<=m;i++)
	{
		move(n,a);
	}
	printf("%d",a[0]);
	for(i=2;i<=n;i++)
	{
		printf(" %d",a[i-1]);
	}
}

void move(int x,int y[])
{
	int i,t;
	t=y[x-1];
	for(i=1;i<=x-1;i++)
	{
		y[x-i]=y[x-1-i];
	}
	y[0]=t;

}