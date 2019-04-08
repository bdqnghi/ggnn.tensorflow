
int d[100],a[100];
int i,j,k,n,ans;

int main()
{
	cin>>n;
	a[0]=1000000000;
	for (i=1;i<=n;++i)
		cin>>a[i];
	d[0]=0;
	ans=0;
	for (i=1;i<=n;++i)
	{
		d[i]=1;
		for (j=0;j<i;++j)
			if (a[i]<=a[j]&&d[j]+1>d[i])
				d[i]=d[j]+1;
		if (d[i]>ans)
			ans=d[i];
	}
	printf("%d\n",ans);
	return 0;
}