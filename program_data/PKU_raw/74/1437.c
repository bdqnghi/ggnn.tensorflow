int main()
{
	int m,n,i,j,k,a,b,c,d=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(a=i,b=0,c=0;a!=0;a=a/10)
		{
			b=b*10+a%10;
		}
		if(b==i)
		{
			for(j=2;j<=sqrt(b);j++)
			{
				if(b%j==0)
				{
					c=1;
					break;
				}
			}
			if(c!=1)
			{
				printf("%d",i);
				d=1;
				break;
			}
		}
	}
	if(d==0)
		printf("no\n");
	else
	{
		for(i=i+1;i<=n;i++)
	{
		for(a=i,b=0,c=0;a!=0;a=a/10)
		{
			b=b*10+a%10;
		}
		if(b==i)
		{
			for(j=2;j<=sqrt(b);j++)
			{
				if(b%j==0)
				{
					c=1;
					break;
				}
			}
			if(c!=1)
			{
				printf(",%d",i);
			}
		}
	}
	}
	return 0;
}
		
