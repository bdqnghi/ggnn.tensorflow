int main()
{
	int a[5][5];
	int i,j,k,col;
	int flag[5];
	int finding;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		finding=a[i][0];
		col=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>finding)
			{
				finding=a[i][j];
				col=j;
			}
		}
		flag[i]=1;
		for(k=0;k<5;k++)
		{
			if(a[k][col]<finding)
			{
				flag[i]=0;
				break;
			}
		}
		if(flag[i]==1)
		{
			printf("%d %d %d",i+1,col+1,finding);
		}
	}
	if(flag[0]==0&&flag[1]==0&&flag[2]==0&&flag[3]==0&&flag[4]==0)
		printf("not found");
	
	return 0;
}


   