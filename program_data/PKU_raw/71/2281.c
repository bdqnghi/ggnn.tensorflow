
int f(int y, int m1, int m2)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0,i;
	for(i=m1;i<=m2-1;i++)
		{
		sum=sum+a[i];
	}

		if(m1<=2 &&((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
			sum=sum+1;

		if(sum%7==0)
			return 1;
		else
			return 0;

	
}

void main()
{
	int n,y,m1,m2,m,i;
	scanf("%d",&n);

	for(i=0;i<=n-1;i++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2)
		{
			m=m1;
			m1=m2;
			m2=m;
		}
		if(f(y,m1,m2))
			printf("YES\n");
		else
			printf("NO\n");
}
}