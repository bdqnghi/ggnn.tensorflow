
main()
{
	int m,n,i,j;
	int num[300],mark[300];
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&m);
		num[i]=m;
		mark[i]=0;
		j=i-1;
		while((j>=0)&&(num[j]!=num[i]))
			j--;
		if(num[j]==num[i])
			mark[i]=1;
	}
	printf("%d",num[0]);
	for(i=1;i<n;++i)
		if(mark[i]==0)
			printf(",%d",num[i]);

}
