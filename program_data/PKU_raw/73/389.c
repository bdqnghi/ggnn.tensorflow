int main()
{
	int a[5][5],b[5][1],c[1][5];
	int i,j,max,min,leap=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		b[i][0]=0;
		for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				b[i][0]=j;
			}
		}
	}
	for(j=0;j<5;j++)
	{
		min=a[0][j];
		c[0][j]=0;
		for(i=1;i<5;i++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				c[0][j]=i;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[i][0]==j&&c[0][j]==i)
			{
				leap=1;
				printf("%d %d %d",i+1,j+1,a[i][j]);
				break;
			}
		}
	}
	if(leap==0)
	printf("not found");
}