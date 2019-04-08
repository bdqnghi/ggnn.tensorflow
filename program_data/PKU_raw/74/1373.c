int main()
{
	int p1(int x);
    int p2(int y);
	int m,n,i,j,k=0;
	scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
	{
		if (p1(i)==1&&p2(i)==0)
		{	
			printf("%d",i);k=1;break;
		}
	}
		if(k==0)printf("no");
	for(j=i+1;j<=n;j++)
	{
		if(p1(j)==1&&p2(j)==0)
			{printf(",%d",j);}
	}
	printf("\n");
	return 0;
}
int p1(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
int p2(int y)
{
    int a[100],i,j;
	for(i=0;;i++)
	{
		a[i]=y%10;
		y=y/10;
		if(y==0)break;
	}
	for(j=0;j<=i/2;j++)
	{
		if(a[j]!=a[i-j])return 1;
	}
	return 0;
}
