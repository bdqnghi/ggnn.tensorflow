int main()
{
	int n,xg[999],i;
	float a,b,c,z[999],y[999];

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&z[i],&y[i]);
	}

	a=y[0]/z[0];

	for(i=1;i<n;i++)
	{
		b=y[i]/z[i];
		c=b-a;

		if(c>0.05)
			xg[i]=1;
		if(c<=0.05&&c>=-0.05)
			xg[i]=0;
		if(c<-0.05)
			xg[i]=-1;
	}

	for(i=1;i<n;i++)
	{
		if(xg[i]==1)
			printf("better\n");
		if(xg[i]==0)
		    printf("same\n");
		if(xg[i]==-1)
		    printf("worse\n");
	}

	return 0;
}
