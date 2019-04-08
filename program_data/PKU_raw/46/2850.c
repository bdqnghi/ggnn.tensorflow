int main()
{
	int row,col,i,j,array[101][101],count=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&array[i][j]);
		int num=row+col-1;
		for(i=1;i<=num;i++)
		{
			if(count==row*col)
				break;
			else
				switch(i%4)
				{
				case 1:
					{
						for(j=i/4;j<col-i/4;j++)
						{
							printf("%d\n",array[i/4][j]);
							count+=1;
						}
						break;
					}
				case 2:
					{
						for(j=i/4+1;j<row-i/4;j++)
						{
							printf("%d\n",array[j][col-i/4-1]);
							count+=1;
						}
						break;
					}
				case 3:
					{
						for(j=col-2-i/4;j>=i/4;j--)
						{
							printf("%d\n",array[row-1-i/4][j]);
							count+=1;
						}
						break;
					}
				case 0:
					{
						for(j=row-1-i/4;j>=i/4;j--)
						{
							printf("%d\n",array[j][i/4-1]);
							count+=1;
						}
						break;
					}
				}
			}
		return 0;
}





