int main()
{
	int j=0,k=0,l=0,m=0,n,p=0,q=0;
	scanf("%d",&n);
	while(n-100>=0)
	{
		n=n-100;
		j++;
	}
	while(n-50>=0)
	{
		n=n-50;
		k++;
	}
	while(n-20>=0)
	{
		n=n-20;
		l++;
	}
	while(n-10>=0)
	{
		n=n-10;
		m++;
	}
	while(n-5>=0)
	{
		n=n-5;
		q++;
	}
	while(n-1>=0)
	{
		n=n-1;
		p++;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",j,k,l,m,q,p);
	return 0;
}
