int main()
{
	int n,i,j,k;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=0,k=0;j<i;j++)
	{
		if(a[j]==a[i])
			k++;
	}
	if(k==0)
		printf(",%d",a[i]);
	}
	printf("\n");
	return 0;

}