int main()
{
    int n,a,b,c,d,e,f,g;
	int z[50000][2];
	int x[1000];
    scanf("%d",&n);
	e=0;
	for(a=0;a<=n-1;a++)
	{
		scanf("%d",&z[a][0]);
		scanf("%d",&z[a][1]);
	}
	for(b=0;b<=n-2;b++)
	{
		for(a=0;a<=n-2-b;a++)
		{
        if (z[a][0]>z[a+1][0])
		{
			c=z[a][0];
			d=z[a][1];
			z[a][0]=z[a+1][0];
			z[a][1]=z[a+1][1];
			z[a+1][0]=c;
			z[a+1][1]=d;
		}
		}
	}
    for(a=1;a<=n-1;a++)
	{
		x[0]=0;
		for(b=0;b<=a-1;b++)
		{
            if (z[b][1]>=z[a][0]) x[0]+=1;
		}
		if (x[0]==0) e=1;
	}
	if (e==1)
	{
		printf("no");
		return 0;
	}
	f=z[0][0];
	g=z[0][1];
	for(a=0;a<=n-1;a++)
	{
        if (g<z[a][1]) g=z[a][1];
	}
	printf("%d %d",f,g);
	return 0;
}