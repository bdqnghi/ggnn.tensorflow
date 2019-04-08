int main()
{
	int array[100][100], i, j, row, col, num, s, k;
	scanf("%d %d",&row,&col);
	if(row>0 && row<100 && col>0 && col<100)
	{
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
				scanf("%d",&array[i][j]);
		}

		for(i=0, j=0, num=0; num<row*col; i++, j++)	//????row*col???????
		{
			for(s=j; s<=(col-j-1); s++)
			{
				printf("%d\n",array[i][s]);//???i????
				num++;
				if(num>=row*col)
					break;
			}
			if(num>=row*col)
				break;
			for(k=i+1; k<(row-i-1); k++)
			{
				printf("%d\n",array[k][col-j-1]);
				num++;			
				if(num>=row*col)
					break;
			}
			if(num>=row*col)
				break;
			for(s=col-j-1; s>j; s--)
			{
				printf("%d\n",array[row-i-1][s]);
				num++;
				if(num>=row*col)
					break;
			}
			if(num>=row*col)
				break;
			for(k=row-i-1; k>i; k--)
			{
				printf("%d\n",array[k][j]);//??????
				num++;
				if(num>=row*col)
					break;
			}
			if(num>=row*col)
				break;

		}
	}
	return 0;
}
