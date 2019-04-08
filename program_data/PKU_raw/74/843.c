void main()
{
	int m,n,a,c,d,e,p,j=0;
	scanf("%d %d",&m,&n);
	if(m%2==0)
		m=m+1;
	for(;m<=n;m=m+2)
	{
		for(a=2;m%a!=0;a=a+1);
		if(m==a)
		{
			for(p=0,e=m;e>=10;)
			{
				c=e/10;
				d=e-10*c;
				e=c;
				p=10*p+d;
			}
			p=10*p+e;
			if(p==m)
			{
				j=j+1;
				if(j==1)
					printf("%d",p);
			else
				printf(",%d",p);
			}
		}
	}
	if(j==0)
		printf("no\n");
}