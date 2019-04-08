int main()
{
	int n,x,k,i,j,m=0;
	scanf("%d %d\n",&n,&k);
	int a[1000],b[1000];
	scanf("%d ",&a[1]);
	for(i=2;i<=n;i++)	
	{
		scanf("%d ",&a[i]);
		for(j=1;j<=i-1;j++)
		{
			b[j]=a[j]+a[i];
			if(b[j]==k) m=m+1;
		}
	}
	if(m==0)printf("no");
	else printf("yes");
	return 0;
}