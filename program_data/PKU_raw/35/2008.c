void main()
{
	int m,n;
	int a[8][8];
	int i,j,k;
	int max=0,min=0,row=0,col=0,num=0;

	scanf("%d,%d",&m,&n);

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=0;i<m;i++)
	{
		max=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				col=j;
			}
		}
		
		min=a[0][col];
		for(k=0;k<m;k++)
		{
			if(a[k][col]<min)
			{
				min=a[k][col];
				row=k;
			}
		}
			
		if(min==max)
		{
			num++;
			printf("%d+%d\n",row,col);
		}
	}
	if(num==0)
		printf("No");
}