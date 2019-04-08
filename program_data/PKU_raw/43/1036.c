int main()
{
	int n,a=3,b=2,c,d=0,e=3,f,g=0;
	scanf("%d",&n);
	while (a<=n/2)
	{
		b=2;
		d=0;
		while(b<a)
		{
			c=a%b;
			if(c==0)
			{
				break;}
			else
			{
				d=d+1;
			}
			b=b+1;
		}
		if(d==a-2)
		{
			e=3;
			g=0;
			while(e<n-a)
			{
				f=(n-a)%e;
				if(f==0)
				{
					break;
				}
				else
				{
					g=g+1;
				}
				e=e+1;
			}
			if(g==n-a-3)
			{
				printf("%d %d\n",a,n-a);
			}
		}
		a=a+1;
	}
	return 0;
}