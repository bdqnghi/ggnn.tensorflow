int main()
{
	int a[5][5];
	int row,col,an,i;
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	int max,min,flag=1,k=1;
	for(row=0;row<5;row++)
	{
		for(col=0;col<5;col++)
		{
			flag=1;
			max=a[row][col];
			min=max;
			for(i=0;i<5;i++)
			{
				if(a[row][i]>max)
				{
					flag=0;
					break;
				}
				if(a[i][col]<min)
				{
					flag=0;
					break;
				}
			}
			if(flag)  
			{
				printf("%d %d %d",row+1,col+1,a[row][col]);
				k=0;
			}
		}
	}
	if(k) printf("not found");
	return 0;
}
