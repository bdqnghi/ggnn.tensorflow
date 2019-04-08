void main()
{
	int n,m=6,r,x,y;
	scanf("%d",&n);
	while(m<=n)
	{
		r=3;
		while(r<=m/2)
		{
			x=2;
			while(x<=sqrt(r))
			{
				y=r%x;
				if(y!=0) x=x+1;
				else x=r;
			}
			if(x==r)
			r=r+2;
			else
			{
				x=2;
				while(x<=sqrt(m-r))
				{
					y=(m-r)%x;
					if(y!=0) x=x+1;
					else x=m-r;
				}
				if(x==m-r) r=r+2;
				else {printf("%d=%d+%d\n",m,r,m-r);r=m;}
			}
		}
		m=m+2;
	}
}