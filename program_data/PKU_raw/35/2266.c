void main()
{
	int hen,lie,i,j,m,n,count=0;
	int a[10][10],temp[10][10];
	scanf("%d,%d\n",&hen,&lie);
	for(i=0;i<hen;i++)
	  for(j=0;j<lie;j++)
		  scanf("%d",&a[i][j]);
	for(i=0;i<hen;i++)
	  for(j=0;j<lie;j++)
		  temp[i][j]=0;
	for(i=0;i<hen;i++)
	{
		for(j=0;j<lie;j++)
		{
			for(m=0;m<lie;m++)
			{
				if(a[i][j]<a[i][m])
					temp[i][j]=1;
			}
			for(n=0;n<hen;n++)
			{
				if(a[i][j]>a[n][j])
					temp[i][j]=1;
			}
		}
	}
	for(i=0;i<hen;i++)
	{
		for(j=0;j<lie;j++)
		{
			if(temp[i][j]==0)
			{
				count=1;
				printf("%d+%d",i,j);
			}
		}
	}
	if(count==0)
		printf("No");
}



