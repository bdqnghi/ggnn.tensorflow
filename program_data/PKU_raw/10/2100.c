const int maxn=30;
int h[maxn];
int f[maxn];
int main()
{
	int n;
//	freopen("readin","r",stdin);
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)scanf("%d",h+i);
	f[1]=1;
	int j;
	int max=0;
	for(i=2;i<=n;i++)
	{max=0;
		for(j=1;j<=i-1;j++)if(h[i]<=h[j])
		{
			if(max<f[j])
				max=f[j];
		}
		f[i]=max+1;
	}
	max=0;
	for(i=1;i<=n;i++)if(max<f[i])
		max=f[i];
	printf("%d\n",max);
	return 0;
}