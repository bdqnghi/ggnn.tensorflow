int main()
{
	int a[100],b,n,i,sum;
	scanf("%d",&n);
	sum=0;
	b=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	    if(sum<a[i])
		    sum=a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<sum&&b<sum&&b<a[i])
			b=a[i];
	}
	printf("%d\n%d\n",sum,b);
	return 0;
}
