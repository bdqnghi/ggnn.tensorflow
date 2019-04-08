int main()
{int i,e,array[100][100],col,row,n=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{	for(e=0;e<col;e++)
			scanf("%d",&array[i][e]);
	}
	i=0;
	while(n<col*row)
	{	for(e=0;e<col;e++)
		{	
			if(array[i][e]!=0)
			{	printf("%d\n",array[i][e]);
				array[i][e]=0;
				n++;
			}
		}
		for(e=0;e<row;e++)
		{	if(array[e][col-1-i]!=0)
			{	printf("%d\n",array[e][col-1-i]);
				array[e][col-1-i]=0;
				n++;
			}
		}
		for(e=1;e<=col;e++)
		{	if(array[row-i-1][col-e]!=0)
			{	printf("%d\n",array[row-1-i][col-e]);
				array[row-1-i][col-e]=0;
				n++;
			}
		}
		for(e=1;e<=row;e++)
		{	if(array[row-e][i]!=0)
			{	printf("%d\n",array[row-e][i]);
				array[row-e][i]=0;
				n++;
			}
		}
		i++;

	}
	return 0;
}