void main()
{
	int i,j,n;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{if(a[i]==a[0])continue;
	printf(",%d",a[i]);
		for(j=i+1;j<n;j++)
		if(a[j]==a[i])
	       a[j]=a[0];
	}
}