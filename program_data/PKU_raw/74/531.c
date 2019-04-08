void main()
{
	int n,m,x,i,p,q,a[100],y,b[100]={0},z=0,j;
	double k;
	scanf("%d %d",&m,&n);
	for(x=m;x<=n;x++)
	{
		k=sqrt(x);
		for(i=2;i<k;i++)
		{
			if(x%i==0)
				break;
		}
		if(i>k)
			p=1;
		y=x;
		j=0;
		while(y>=1)
		{
			y=(double)y/10;
			j++;
		}
		y=x;
		for(i=0;i<j;i++)
		{
			k=pow(10,j-i-1);
			a[i]=y/k;
			y=y-a[i]*k;
		}
		for(i=0;i<j;i++)
		{
			if(a[i]!=a[j-i-1])
				break;
		}
		if(i==j)
			q=1;
		if(q==1&&p==1)
		{
			b[z]=x;
			z++;
			
		}
		p=0;q=0;
	}
	if(b[0]!=0)
	{
		for(i=0;i<z-1;i++)
			printf("%d,",b[i]);
		printf("%d\n",b[z-1]);
	}
	else printf("no\n");
}
