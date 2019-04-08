int main()
{
	int x[5][5],max[5],min[5],i,j,t,k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		t=0;
		for(j=0;j<5;j++)
		{
			if(x[i][j]>t)
				t=x[i][j];
		}
		max[i]=t;
	}
	for(i=0;i<5;i++)
	{
		t=x[0][i];
		for(j=0;j<5;j++)
		{
			if(x[j][i]<t)
				t=x[j][i];
		}
		min[i]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(x[i][j]==max[i]&&x[i][j]==min[j])
			{
				k=1;
				printf("%d %d %d",i+1,j+1,x[i][j]);
			}
		}
	}
	if(k==0)
		printf("not found");
	return 0;
}
