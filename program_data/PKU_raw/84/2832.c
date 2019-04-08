int main()
{
	int a,b,i,n,m=0,p=0;
	scanf("%d",&a);
	scanf("%d",&b);
	m=b;
	for(i=2;i<=a;i++)
	{
		scanf("%d",&n);
	
		if (n>m)
		{
			p=m;
		    m=n;
		}if(n>p&&n<m)
		{
			p=n;
			m=m;
		}if(n<p)
		{
			p=p;
			m=m;
		}
	}	printf("%d\n",m);
	
     printf("%d\n",p);
	return 0;
}