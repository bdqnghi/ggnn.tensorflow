int main()
{
	int m=0,i,n,t;
	int x[100];
	double c[1000];
	double sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{	
		int a=1,b=2;
		sum=0;
		scanf("%d",&x[i]);
		for(n=0;n<x[i];n++)
		{
			c[n]=b/(a*1.0);
			t=a;
			a=b;
			b=t+b;
			sum=sum+c[n];
		}
		printf("%.3lf\n",sum);
	}
	
	return 0;
}