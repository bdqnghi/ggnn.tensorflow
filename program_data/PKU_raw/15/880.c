
int main()
{
	int bian,row,col;
	int shuzu[500][500];
	int i,j,m=0,n=0;
	int sum;

	scanf("%d",&bian);
	row=bian;
	col=bian;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(shuzu[i][j]==0)
			{
				m+=1;
				break;
			}
		}
	}

	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			if(shuzu[i][j]==0)
			{
				n+=1;
				break;
			}
		}
	}

	sum=(m-2)*(n-2);
	printf("%d",sum);
	return 0;
}
