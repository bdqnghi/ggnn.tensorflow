int main()
{
	int array[6][6];
	int i,j;
    int flag1=1,tmp1,tmp2,flagx=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
    i=1;
	j=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			flag1=1;
		
			for(tmp1=1;tmp1<=5;tmp1++)
			{
				if(array[i][j]<array[i][tmp1])
					flag1=0;
			}
			for(tmp2=1;tmp2<=5;tmp2++)
			{
				if(array[i][j]>array[tmp2][j])
					flag1=0;
			}
			if(flag1==1)
			{
				printf("%d %d %d",i,j,array[i][j]);
			    flagx=1;
			}
		}
	}
	if(flagx==0)printf("not found");
	return 0;
}

	
	
	
	
	