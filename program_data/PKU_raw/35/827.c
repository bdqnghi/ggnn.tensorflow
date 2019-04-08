int main()
{
	int row,col,i,j,n[8][8],w,k,e;
	char a;
	scanf("%d%c%d",&row,&a,&col);
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) scanf("%d",&n[i][j]);
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) 
		{
			for(w=0;w<col;w++) 
			{
				if(n[i][j]<n[i][w])
				{
					break;
				}
				else if(w==col-1&&n[i][j]>=n[i][col-1]) 
				{
					for(e=0;e<row;e++)
					{
						if(n[i][j]>n[e][j]) break;
			            else if(e==row-1&&n[i][j]<=n[row-1][j]) 
						{
							printf("%d+%d",i,j);
							return 0;
						}
					}
				}
			}
		}
	}
	printf("No");
}


