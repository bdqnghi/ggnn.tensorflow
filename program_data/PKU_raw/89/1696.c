main()
{
	int n,a[100000]={0},i,temp1,temp2,p=0;
	scanf("%d",&n);
	for(i=0;;i++)
	{
		scanf("%d%d",&temp1,&temp2);
		if(temp1==0&&temp2==0)
		{
			break;
		}
		else
		{
			a[temp1]=0;
			a[temp2]++;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==n-1)
		{
			p++;
			printf("%d\n",i);
		}
	}
	if(p==0)
	{
		printf("NOT FOUND\n");
	}
	return 0;
}