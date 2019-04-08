int main()
{
	int a,b,c,d,n,i=3;
	scanf("%d",&n);
    scanf("%d %d",&a,&b);
	if(a<b)
	{
		d=a;
		a=b;
		b=d;
	}
    while(i<=n)
	{
		scanf("%d",&c);
		if(c>a)
		{
			b=a;
			a=c;
		}
		else if(c>b&&a>c)
		{
			b=c;
		}
        i++;
	}
	printf("%d\n%d\n",a,b);
	return 0;
}