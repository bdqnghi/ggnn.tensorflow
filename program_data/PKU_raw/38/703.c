int main()
{
	int n,i,j;
	double b,a,B,A;
	int sz[200];
	double x[200],s[200];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(sz[i]));
		A=0;
		for(j=0;j<(sz[i]);j++)
		{
			scanf("%lf",&(x[j]));
			A+=x[j];
			
		}a=A/sz[i];//printf("%lf",a);
		B=0;
		for(j=0;j<sz[i];j++)
		{
			
			B+=(x[j]-a)*(x[j]-a);//printf("%lf",B);
		
		}	b=B/sz[i];//printf("%lf",b);
		s[i]=sqrt(b);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
return 0;
}
