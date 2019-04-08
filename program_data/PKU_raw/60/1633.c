int main()
{
	int n,i,j,m=0;
	scanf("%d",&n);
	int a[10005]={0};
	for(i=3;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
			{
				a[i]=0;
				break;
			}
			if(j>=i)
				a[i]=1;
	}
	for(i=3;i<=n;i++)
	if(a[i]==1&&a[i+2]==1)
	{
		printf("%d %d\n",i,i+2);
		m=m+1;
	}
	if(m==0)
		printf("empty\n");
	return 0;
}
