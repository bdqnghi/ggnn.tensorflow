
void main()
{
	int row=0,line=0;
	int scores[8][8];
	int i=0,j=0;
	int maxline=0,minrow=0;
	int count=0;
	int i1=0;
	scanf("%d,%d",&row,&line);
	for(i=0;i<row;i++)
	{
		for(j=0;j<line;j++)
		{
			scanf("%d",&scores[i][j]);
		}
	}
	for(i=0;i<row-1;i++)
	{
		for(j=0;j<line-1;j++)
		{
			if(scores[i][maxline]<scores[i][j+1])
			{
				maxline=j+1;
			}
		}			//?????????maxline
		for(i1=0;i1<row-1;i1++)
		{		
			if(scores[minrow][maxline]>scores[i1+1][maxline])  
			{
				minrow=i1+1;
			}			
		}					//?????????
		if(i==minrow)
		{
			printf("%d+%d\n",minrow,maxline);
			count++;
		}
	}
	if(count==0)
	{
		printf("No\n");
	}
	return 0;
}
