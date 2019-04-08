int main()
{
	int a[5][5],max[5],min[5],i,j,sum=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
		max[i]=a[i][0];
		min[j]=a[0][j];
		}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>=max[i])max[i]=a[i][j];
		}
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i][j]<=min[j])
			{
				min[j]=a[i][j];
			}
		}
	}
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			if(max[i]==min[j]&&max[i]==a[i][j])
			{
				printf("%d %d %d",i+1,j+1,max[i]);
				sum++;			
			}
		if(sum==0)
			printf("not found");
		return 0;
}

