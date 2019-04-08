void main()
{
	int n,k;
	int *p;
	scanf("%d%d",&n,&k);
	p=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	int judge=0;
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)+*(p+j)==k)
			{
				judge=1;
				break;
			}
		}
		if(judge)
			break;
	}
	if(judge)
		printf("yes");
	else
		printf("no");
}
