main()
{
	int a[10000]={0},b[10000]={0},n,x,y,k=0,i;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	while(x!=0||y!=0)
	{
		a[x]++;
		b[y]++;
		scanf("%d%d",&x,&y);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0&&b[i]==(n-1))
		{
			k++;
			printf("%d\n",i);
		}
	}
	if(k==0)
		printf("NOT FOUND\n");
	return 0;
}