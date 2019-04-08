int f1(int x);
int f2(int x);
void main()
{
	int m,n,i,t=0,a[100],j;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(f1(i)&&f2(i))
		{
			a[t]=i;
			t++;
		}
	if(t==0)
		printf("no");
	else

		for(j=0;j<t;j++)
		{
			printf("%d",a[j]);
			if(j<t-1)
				printf(",");
		}
}
int f1(int x)
{
	int n=0,y;
	y=x;
	while(y>0)
	{
		n=n*10+y%10;
		y=y/10;
	}
	if(x==n)
		return 1;
	else return 0;
}
int f2(int x)
{
	int i=2;
	while(x%i!=0&&i<=sqrt(x))
		i++;
	if(i>sqrt(x))
		return 1;
	else return 0;
}
