int main()
{
    int i,b,n,b1;
	scanf("%d",&n);
	int a[100];
	for(i=1;i<=n;i++)
		scanf("%d",&a[i-1]);
    b=a[0];
	b1=a[0];
	for(i=2;i<=n;i++)
	{
		if(b<a[i-1])
		{
			b1=b;
			b=a[i-1];
		}
		else if( b1<a[i-1] )
			b1 = a[i-1];
	}
	printf("%d\n%d\n",b,b1);
}