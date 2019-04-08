void main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	for(i=3;i<=n;i=i++)
	{
		scanf("%d",&c);
		if(c>=a)
		{
			b=a;
			a=c;
		}
		else if(a>c&&c>b)
			b=c;
	}
	printf("%d\n%d",a,b);
}





