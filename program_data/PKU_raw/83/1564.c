void main()
{
	int n,i,f[100],g[100],sum;
	float c,b,d,e;
	scanf("%d\n",&n);
	sum=0;
	c=0;
	
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&f[i]);
		sum=sum+f[i];
	}

	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&g[i]);
		if(g[i]>=90)
			b=4.0;
		else if(g[i]>=85)
			b=3.7;
		else if(g[i]>=82)
			b=3.3;
		else if(g[i]>=78)
			b=3.0;
		else if(g[i]>=75)
			b=2.7;
		else if(g[i]>=72)
			b=2.3;
		else if(g[i]>=68)
			b=2.0;
		else if(g[i]>=64)
			b=1.5;
		else if(g[i]>=60)
			b=1.0;
		else
			b=0;
        
		d=b*f[i];

		c=c+d;
	}

	e=c/sum;
	printf("%.2f\n",e);
}



