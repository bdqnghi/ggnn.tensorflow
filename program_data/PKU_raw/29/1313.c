int main()

{
	int m,i,j;
	double a[100],b[100],x=1,y=2,z;

	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		scanf("%lf",&a[i]);
	}

	for(i=0;i<m;i++)
	{
		b[i]=0;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<a[i];j++)
		{
			b[i]=b[i]+y/x;
			z=x;
			x=y;
			y=z+y;
		}
		x=1;
		y=2;
	}
		
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n",b[i]);
	}
	
		
	
	
	return 0;
}
