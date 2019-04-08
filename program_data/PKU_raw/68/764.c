void main()
{
	int n,k,x,m,i,a,b,c,d,e;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(m=2;m<=n;m++)
		{
			d=sqrt(m);
			for(x=2;x<=d;x++)
			{
				if(m%x==0)break;
			}
			if(x>d)
			{
				a=i-m;
				e=sqrt(a);
				for(b=2;b<=e;b++)
				{
					if(a%b==0)break;
				}
				if(b>e)
				{
					printf("%d=%d+%d\n",i,m,a);break;
				}
			}

		}
	}
}