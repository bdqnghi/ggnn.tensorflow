void main()
{
	int n,i,a[512],j;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				j++;
				break;
			}
		}
		if(a[i]!=a[j-1])
			printf(",%d",a[i]);
	}
	
}
