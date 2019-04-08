int main()
{
	int n,i,j,a,b,c=0,p,q;
	scanf("%d",&n);
	for(i=5;i<=n;i++)
	{
		p=i-2;
		q=i;
		a=0;
		b=0;
		for(j=2;j<p;j++)
		{
			if(p%j==0)
			{
				a=1;
				break;
			}
		}
		for(j=2;j<q;j++)
		{
			if(q%j==0)
			{
				b=1;
				break;
			}
		}
		if(a==0&&b==0)
		{
			printf("%d %d\n",i-2,i);
			c=1;
		}
	}
	if(c==0)
	{
		printf("empty");
	}
	return 0;
}