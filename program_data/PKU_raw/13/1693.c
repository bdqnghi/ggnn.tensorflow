int main()
{
	int a[20002],b[20001],n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n+1;i++)
		b[i]=0;
	a[n+1]=0;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
			if(a[i]==a[j])a[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n+1;j++)
			b[i]+=a[j];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0&&b[i]!=0)
			cout<<a[i]<<" ";
		else if(a[i]!=0&&b[i]==0)
			cout<<a[i]<<endl;
	}
	return 0;
}
