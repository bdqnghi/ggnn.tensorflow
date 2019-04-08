int main()
{
	int m, n, i;
	double a, b, x, f[100], sum;
	scanf("%d",&m);
	while(m>0)
	{
		scanf("%d", &n);
		f[0]=2;
		f[1]=3;
		if(n==1)
			sum=2;
		else if(n==2)
		{
			sum=3.5;
		}
		else 
		{
			sum=3.5;
			for(i=2;i<n;i++)
			{
				f[i]=f[i-2]+f[i-1];
				a=f[i];
				b=f[i-1];
				x=a/b;
				sum=sum+x;
			}
		}
		m--;
		printf("%.3f\n",sum);
	}
	return 0;
} 
