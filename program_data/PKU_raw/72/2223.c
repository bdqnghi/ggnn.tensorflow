main()
{
	int m,n,i,j,moun[30][30]={0};
	scanf("%d%d",&m,&n);
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			scanf("%d",*(moun+i)+j);
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			if(
				*(*(moun+i)+j)>=*(*(moun+i-1)+j)
				&&*(*(moun+i)+j)>=*(*(moun+i+1)+j)
				&&*(*(moun+i)+j)>=*(*(moun+i)+j-1)
				&&*(*(moun+i)+j)>=*(*(moun+i)+j+1)
              )
			  printf("%d %d\n",i-1,j-1);
	return 0;
}