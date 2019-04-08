int main()
{
	int n,m,a,b,i,t;
	a=b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		if(m>=a)
		{
			b=a;
			a=m;
		}
		else if((m<a)&&(m>=b))
		{
			b=m;
		}
	}
	printf("%d\n%d",a,b);
	return 0;
}