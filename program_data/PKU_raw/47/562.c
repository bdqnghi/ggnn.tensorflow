int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		a[i]=x;
	}
	int *pi=a;
	int *pj=a+n;
	int t;
	for(;pi<pj;pi++,pj--)
	{
		t=*pi;
		*pi=*pj;
		*pj=t;
	}
	for(int k=1;k<n;k++)
	{
		printf("%d ",a[k]);
	}
         printf("%d",a[n]);
	return 0;
}
