int main()
{
	int n,a[300],i=0,j,b[300]={0},m=0;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	b[0]=a[0];
	i=1;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) break;
			if(j==i-1&&a[i]!=a[j]) b[++m]=a[i];
		}
	}
	printf("%d",b[0]);
	for(i=1;i<m+1;i++)
		printf(",%d",b[i]);
	return 0;
}