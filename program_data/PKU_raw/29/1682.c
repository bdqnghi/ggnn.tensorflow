int main()
{
	int a,n,i,m,b,c;
	float sum;
	scanf("%d\n",&m);
	for(i=1;i<=m;i++)
	{	
		scanf("%d\n",&n);
		sum=0;
		b=1;
		c=1;
		for(a=1;a<=n;a++)
		{	
			b=b+c;
			c=b-c;
			sum=sum+(double)(b)/(double)(c);
		}
		printf("%.3f\n",sum);
	}
	return 0;
}