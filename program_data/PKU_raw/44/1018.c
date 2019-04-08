void main()
{
	int a[6],i,sum;
	for(i=0;i<6;i++)
    {
		scanf("%d",&a[i]);
	}
	int f(int x);
	for(i=0;i<6;i++)
	{
		sum=f(a[i]);
		printf("%d\n",sum);
	}
}
int f(int x)
{
	int sum,g(int y);
	if(x>0)
		sum=g(x);
	if(x==0)
		sum=0;
	if(x<0)
		sum=-g(-x);
	return(sum);
}
int g(int y)
{
	int a[5],sum=0,i,n;
    for(i=0;i<5;i++)
	{
		a[i]=y%10;
		y=y/10;
	}
	for(i=4;i>=0;i--)
	{
		if(a[i]==0)continue;
		else 
		{
			n=i;
			break;
		}
	}
	for(i=0;i<=n;i++)
		sum=sum*10+a[i];
	return(sum);
}