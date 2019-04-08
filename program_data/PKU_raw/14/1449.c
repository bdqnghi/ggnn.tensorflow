int main()
{
	int a[99999],b[99999],c[99999],d[99999];
	int i,n,sum,s;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		d[i]=c[i]+b[i];
	}
	for (i=0;i<n;i++)
	{
		if (d[i]>=d[i+1]){
			sum=d[i];
			d[i]=d[i+1];
			d[i+1]=sum;
			s=a[i];
			a[i]=a[i+1];
			a[i+1]=s;
		}
	}
	for (i=0;i<n-1;i++)
	{
		if (d[i]>=d[i+1]){
			sum=d[i];
			d[i]=d[i+1];
			d[i+1]=sum;
			s=a[i];
			a[i]=a[i+1];
			a[i+1]=s;
		}
	}
	
	for (i=0;i<n-2;i++)
	{
		if (d[i]>=d[i+1]){
			sum=d[i];
			d[i]=d[i+1];
			d[i+1]=sum;
			s=a[i];
			a[i]=a[i+1];
			a[i+1]=s;
		}
	}
	printf("%d %d\n%d %d\n%d %d",a[n],d[n],a[n-1],d[n-1],a[n-2],d[n-2]);
	return 0;
}
