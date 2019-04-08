int a[2000],b[2000],t[2000],s[2000];
int n;
void init()
{
	int i,k,j;
	memset(t,0,sizeof(t));
	memset(s,0,sizeof(s));
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+n);
}
void work()
{
	int i,k=0,j,ans=0,x,y;
	for (i=0;i<n;i++)
	{
		x=-1;
		for (j=0;j<n;j++)
			if (a[i]>b[j]&&b[j]>x&&s[j]==0)
			{
				y=j;
				x=b[j];
			}
		if (x!=-1)
		{
			s[y]=1;
			t[i]=1;
			ans+=200;
		}
	}
	for (i=0;i<n;i++)if (t[i]==0)
	{
		x=-1;
		for (j=0;j<n;j++)
			if (a[i]==b[j]&&s[j]==0)
			x=j;
		if (x!=-1)
			s[x]=1;else ans-=200;
	}
	
	printf("%d\n",ans);
}
int main()
{
	while (scanf("%d",&n)&&n)
	{
		init();
		work();
	}
}