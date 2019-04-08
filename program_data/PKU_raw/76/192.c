int main(){
	int n,a[50000][2],i,j,x,y;
	double b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	x=a[0][0];
	y=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]<x)
			{
				x=a[i][j];
			}
			if(a[i][j]>y)
			{
				y=a[i][j];
			}
		}
	}
	b=1.0*x+0.5;
	int s=0,z=0;
	for(i=x;i<y;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b>1.0*a[j][0]&&b<1.0*a[j][1])
			{
				s=s+1;
			}
			
		}
		b=b+1;
		if(s==0)
		{
			z=z+1;
		}
		s=0;
	}
	
	if(z==0)
	{
		printf("%d %d\n",x,y);
	}
	else
	{
		printf("no\n");
	}

	return 0;
}