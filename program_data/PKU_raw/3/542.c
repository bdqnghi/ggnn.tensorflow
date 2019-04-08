void main()
{
	int n,k;
	int a[1001];
	int i,j;
	int flag=0;

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n&&flag==0;i++)
		for(j=0;j<n&&flag==0;j++)
		{
			if(j>i&&a[i]+a[j]==k)
			{
				printf("yes\n");
				flag=1;
			}
		}
	if(flag==0)
		printf("no");
}