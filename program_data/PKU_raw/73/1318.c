int main()
{
	int a[6][6],i,j,flag1=0,flag2=0,flag=0,x,y,k;
    for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=1;i<6;i++)
		{
			for(j=1;j<6;j++)
			{
				if(a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4]&&a[i][j]>=a[i][5]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j]&&a[i][j]<=a[5][j])
				{
					flag=-1;
					x=i;
					y=j;
				}
			}
		}
		if(flag==-1)
			printf("%d %d %d",x,y,a[x][y]);
		else
			printf("not found");
	return 0;
}