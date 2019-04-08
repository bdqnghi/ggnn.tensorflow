void main()
{
	int n,i,j;
	int num[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&num[i]);
	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
			if(num[i]==num[j])
			{
				num[i]=0;
				break;
			}
	printf("%d",num[0]);
	for(i=1;i<n;i++)
		if (num[i]!=0)
			printf(",%d",num[i]);
}