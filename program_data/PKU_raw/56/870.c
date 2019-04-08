int main()
{
	int a,l,m,n,i;
	int c[5];
	int sum=0;
	scanf("%d",&a);
	n=log10(a);
	for(m=a,i=n;i>=0;i--)
	{
		l=pow(10,i);
		c[i]=m/l;
		m=m%l;
	}
	//printf("%d",&c[i]);
	for(i=0;i<=n;i++)
	{
		sum=sum+c[n-i]*pow(10,i);
	}
	printf("%d",sum);
	
	
	return 0;
}
