void main()
{
	int num[300]={0},n,i,a[300]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("%d",num[0]);
	a[num[0]]=1;
	for (i=1;i<n;i++)
		if (a[num[i]]==0)
		{
			printf(",%d",num[i]);
			a[num[i]]=1;
		}
	printf("\n");
}