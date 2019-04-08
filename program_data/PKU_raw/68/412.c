void main()
{
	int n,i,i1,j,j1,k,a,p;
	double m,m1;
	scanf("%d",&n);
	for(a=6;a<=n;a=a+2)
	{
		for(i=3;i<=a;)
		{
			i1=i;
			m=sqrt(i);
			for(p=3;p<=m;p=p+2)
			{
				if(i%p==0)
					i=i/p;
			}
			if(i==i1)
			{	
				j=j1=a-i;
				m1=sqrt(j);
				for(k=3;k<=m1;k=k+2)
				{
					if(j%k==0)
					j=j/k;
				}
				if(j==j1)
					{printf("%d=%d+%d\n",a,i,j);break;}
				else i=i+2;
			}
			else i=i1+2;
		}
	}
}