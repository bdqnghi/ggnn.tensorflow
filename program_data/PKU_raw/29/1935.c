int main()
{
	int m,i,j,n[100],x=2,y=1;
	double a[100],b[100],s;
	scanf("%d",&m);
	a[1]=x*1.00/y;
	s=a[1];
	for(i=1;i<=m;i++)
	{	
		scanf("%d",&n[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<n[i];j++)
		{
			x=x+y;
			y=x-y;
			a[j+1]=x*1.00/y;
			s=s+a[j+1];
		}
		b[i]=s;
		x=2;
		y=1;
		s=a[1];
	}
	for(i=1;i<=m;i++)
	{
		printf("%.3f\n",b[i]);
	}
	return 0;
}