
int main()
{
	int n,i,r1,r2,refer=0;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int *sz2=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		sz[i]=1;
		sz2[i]=0;
	}
	while(1)
	{
		scanf("%d %d",&r1,&r2);
		if(r1==0 && r2==0)
		{
			break;
		}
		if(r1!=r2)
		{
			sz[r2]++;
			sz2[r1]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]==n && sz2[i]==0)
		{
			printf("%d",i);
			refer=1;
		}
	}
	if(refer==0)
	{
		printf("NOT FOUND");
	}
	free(sz);
	free(sz2);
	return 0;
}
