int main()
{
	int num[15][15]={0},doub[15]={0},i,j,k,w[15]={0},row;
	for(i=0;i<15;i++)
	{
		for(j=0;j<20;j++)
		{
			scanf("%d",&num[i][j]);
			if(num[i][j]==-1)
				break;
			if(num[i][j]==0)
			{
				w[i]=j;
				break;
			}
		}
		if(num[i][0]==-1)
		{
			row=i;
			break;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<w[i];j++)
		{
			for(k=0;k<w[i];k++)
			{
				if(num[i][k]==2*num[i][j])
				{
					doub[i]++;
				}
			}
		}
		printf("%d\n",doub[i]);
	}
	return 0;
}