
int n,m;
int ans,k;
int a[10001],b[10001];

int main()
{
	int i;
	while (cin>>n && n!=0)
	{
		for(i=1;i<=n;i++) cin>>a[i];
		for(i=1;i<=n;i++) cin>>b[i];
		ans=-1000000000;
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);

		for (m=0;m<n;m++)
		{
			k=-200*m;
			for (i=m+1;i<=n;i++)
				if (a[i]>b[i-m]) k+=200;
				else if (a[i]<b[i-m]) k-=200;
			if (k>ans) ans=k;
		}
		cout<<ans<<endl;
	}
	return 0;
}
