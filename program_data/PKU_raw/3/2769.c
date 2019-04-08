int a[70000]={0};
int main()
{
	int n,k,c[1001],i;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) 
	{
		scanf("%d",&c[i]);
		a[c[i]+32768]=1;
	}
	for (i=1;i<=n;i++)
	{
		if (a[c[i]+32768]&&a[k-c[i]+32768]) break;
	}
	if (i<n) printf("yes");
	 else printf("no"); 
} 