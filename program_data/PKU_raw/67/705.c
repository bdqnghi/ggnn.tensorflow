int main()
{
	int n,i,a,b,m,j;
	double c,d,biao,e,f,g,t;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	c=a*1.0000000;
	d=b*1.0000000;
	biao=d/c;
    for(i=1;i<n;i++)
	{
		scanf("%d%d",&m,&j);
	    e=m*1.0000000;
	    f=j*1.0000000;
	    g=f/e;
		t=g-biao;
		if(t>0.05) 
		{
			printf("better\n");
			continue;
		}
		if((biao-g)>0.05) 
		{
			printf("worse\n");
			continue;
		}
		printf("same\n");
	}
	return 0;
}
