void main()
{
	int a,b,i,j,e,f;
	int c[99],d[99];
	scanf("%d %d",&a,&b);
	c[0]=a;
	d[0]=b;
	for (i=0;i<=100;i++)
	{
		if (c[i]%2==0)
			c[i+1]=c[i]/2;
		else c[i+1]=(c[i]-1)/2;
		if (c[i]==1)
			break;
	}
	for (j=0;j<=100;j++)
	{
		if (d[j]%2==0)
			d[j+1]=d[j]/2;
		else d[j+1]=(d[j]-1)/2;
		if (d[j]==1)
			break;
	}
	int g=0;
	for (e=0;e<=i;e++)
	{
		for (f=0;f<=j;f++)
		{
			if (c[e]==d[f])
			{	
				printf("%d\n",c[e]);
				g=1;
			}
		}
		if (g==1)
			break;
	}

   
}