int main()
{
	int k,i,j,row,col;
    scanf("%d%d",&row,&col);
    int array[100][100];
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&(array[i][j]));
		}
	}
	for(k=0;k<=row/2 && k<=col/2;k++)
	{


			for(j=k;j<=col-1-k;j++)
			{
				printf("%d\n",array[k][j]);
			}

		
			for(i=k+1;i<=row-k-1;i++)
			{
				printf("%d\n",array[i][col-1-k]);
			}
		
		

			if(row-1-k<=k) 
				break;
			for(j=col-k-2;j>=k;j--)
			{
				printf("%d\n",array[row-1-k][j]);
			}

			if (col-k-1<=k)
				break;
		
			for(i=row-2-k;i>k;i--)
			{
				printf("%d\n",array[i][k]);
			}
		
  }
	return 0;
}
