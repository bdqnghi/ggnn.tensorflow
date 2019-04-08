void main()
{
	int a,i,j,no[N],judge[N]={0};
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++)
	{
		scanf("%d",&no[i]);
	}
	for(i=0;i<a;i++)
		if(judge[i]==0)
			for(j=i+1;j<a;j++)
				if(no[j]==no[i])
					judge[j]=1;
	printf("%d",no[0]);
	for(i=1;i<a;i++)
		if(judge[i]==0)
			printf(",%d",no[i]);
	printf("\n");
}