int main()
{
	int i,j,n,max,f[26],g[26];
	/*g[i]???i??????*/
	/*f[i]????i?????????????????*/
	/*f[k]=max{f[i]:k+1<=j<=n&&g[i]<=g[k]}*/
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&g[i]);
		f[i]=0;
	}
	f[n]=1;
	for (i=n-1;i>=1;i--)
	{
		max=0;
		for (j=i+1;j<=n;j++)
			if ((g[j]<=g[i])&&(f[j]>max))
				max=f[j];
		f[i]=max+1;
	}
	max=0;
	for (i=1;i<=n;i++)
		if (f[i]>max)
			max=f[i];
	printf("%d\n",max);
	return 0;
}
