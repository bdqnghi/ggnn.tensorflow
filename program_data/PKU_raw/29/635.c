int main()
{
	int a=2,b=1,e,m,n,i,j;
	double c[100];
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		c[i] = 0.0 ;
		for(j=0;j<n;j++)
		{
			c[i]=c[i]+1.0*a/b;
			//printf("?????:%d/%d",a,b);
			e=a;
			a=a+b;
			b=e;
		}
		a=2;
		b=1;
	//	printf("%.3lf",c[i]);
	}
	for(i=0;i<m-1;i++)
	{
		printf("%.3lf\n",c[i]);
	}
	printf("%.3lf",c[i]);	
return 0;
}
