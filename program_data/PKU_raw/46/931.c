int main()
{
    int a[100][100];
	int row,col,i,j,h;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}
	i=0;
	j=-1;	
	for(h=0;;h++)
	{
		for(j++;j<col-h;j++)
		{
			printf("%d\n",a[i][j]);
		}
		j--;
		if(i>=row-h-1)
			break;
		for(i++;i<row-h;i++)
		{
			printf("%d\n",a[i][j]);
		}
		i--;
		if(j<h+1)
			break;
		for(j--;j>=h;j--)
		{
		    printf("%d\n",a[i][j]);
		}
		j++;
		if(i<h+2)
			break;
		for(i--;i>=h+1;i--)
		{
		    printf("%d\n",a[i][j]);
		}
		i++;
		if(j>=col-h-1)
			break;
	}


	return 0;
}

