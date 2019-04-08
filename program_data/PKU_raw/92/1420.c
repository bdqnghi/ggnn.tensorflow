
int a[2000],b[2000];
int i,j,k,n,x,y,p,q,ans;

int main()
{
	while (scanf("%d",&n),n)
	{
		for (i=0;i<n;++i)
			scanf("%d",&a[i]);
		for (i=0;i<n;++i)
			scanf("%d",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		x=0;
		y=n-1;
		p=0;
		q=n-1;
		ans=0;
		while (x<=y)
		{
			while (x<=y&&a[x]>b[p])
			{
				++ans;
				++x;
				++p;
			}
			while (x<=y&&a[y]>b[q])
			{
				++ans;
				--y;
				--q;
			}
			if (x<=y)
			{
				if (a[x]<b[q])
					--ans;
				++x;
				--q;
			}
		}
		cout<<ans*200<<endl;
	}
	return 0;
}