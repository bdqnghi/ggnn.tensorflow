

int main()
{
	int n;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int i,m,j,k;
	int *save;
	for(i=0;i<n;i++)
	{
		sz[i]=0;
		scanf("%d",&m);
		if(m==0)
		{
			sz[i]=60;
			continue;
		}
		save=(int*)malloc(sizeof(int)*m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&save[j]);
		}
		for(j=0;j<m;j++)
		{
			k=save[j]+3*j;
			if(k>=60)
			{
				sz[i]=60-3*j;
				break;
			}
			if(k<60 && k>=57)
			{
				sz[i]=k-3*j;
				break;
			}
		}
		if(sz[i]==0)
		{
			sz[i]=60-3*m;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",sz[i]);
	}
	free(sz);
	free(save);
	return 0;
}
