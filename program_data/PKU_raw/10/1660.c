int a[36],f[36];
int max(int a,int b)
{
	if(a>b)return a;else return b;
}
int main()
{
	int k,i,j;
	int ans=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++)scanf("%d",&a[i]);
	f[0]=0;
	for(i=1;i<=k;i++)
	{
		f[i]=1;
		for(j=1;j<i;j++)
			if(a[i]<=a[j])
				f[i]=max(f[i],f[j]+1);
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
	return 0;
}