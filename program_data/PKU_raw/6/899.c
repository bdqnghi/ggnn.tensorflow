void m(int,int);
main()
{
	int a,b,c,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d%d",&b,&c);
		m(b,c);
	}
}
void m(int q,int w)
{
	int a,i,j;
	long sum;
	sum=0;
	for(i=1;i<=q;i++)
	{
		for(j=1;j<=w;j++)
		{
			scanf("%d",&a);
			if(i==1||j==1||i==q||j==w)
			{
				sum+=a;
			}
		}
	}
	printf("%ld\n",sum);
}
