int main()
{
	int n,i,k,l,p,q;
	int a[100];
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(k=1;k<=n-1;k++)
	{
		if(a[0]<a[k])
		{
			p=a[k];
			a[k]=a[0];
			a[0]=p;
		}
	}
	printf("%d\n",a[0]);
	for(l=2;l<=k;l++)
	{
		if(a[1]<a[l])
		{
			q=a[l];
			a[l]=a[1];
			a[1]=q;
		}
	}
	printf("%d\n",a[1]);
	return 0;
}