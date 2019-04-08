int main()
{
	int m,i,j,c;
	int a,b;
	double s;
	scanf("%d",&m);
	int *sz=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++)
	{
		s=0.0;
		a=2;
		b=1;
		for(j=0;j<sz[i];j++)
		{
			s+=((1.0*a)/b);
			c=a+b;
			b=a;
			a=c;
			c=0;
		}
		printf("%.3lf\n",s);
	}
	return 0;
}