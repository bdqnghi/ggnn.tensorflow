int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int a[100][100];
	int i,t;
	int count=0;
	for(i=0;i<row;i++)
	{
		for(t=0;t<col;t++)
		{
			scanf("%d",&a[i][t]);
		}
	}
	
	int k=0,j=0,m=0;
	if(row%2==0)
	{
	for(k=0;k<=(row/2-1);k++)
	{
		for(j=k;j<=(col-1-k);j++)
		{
			printf("%d\n",a[k][j]);
			count++;
		}
		if(count==row*col)
			break;
		for(m=k+1;m<=row-2-k;m++)
		{
			printf("%d\n",a[m][col-1-k]);
			count++;
		}
			if(count==row*col)
			break;

		for(j=col-1-k;j>=k;j--)
		{
			printf("%d\n",a[row-1-k][j]);
			count++;
		}		
		    if(count==row*col)
			break;
		for(m=row-2-k;m>=k+1;m--)
		{
			printf("%d\n",a[m][k]);
			count++;

		}
			if(count==row*col)
			break;
	}
	}
	else
	{
	
		row=row-1;
		for(k=0;k<=row/2;k++)
		{
		for(j=k;j<=col-1-k;j++)
		{
			printf("%d\n",a[k][j]);
			count++;
		}
			if(count==(row+1)*col)
			{
				break;
			}
		for(m=k+1;m<=row-k-1;m++)
		{
			printf("%d\n",a[m][col-1-k]);
			count++;
		}			
		    if(count==(row+1)*col)
			{
				break;
			}
		for(j=col-1-k;j>=k;j--)
		{
			printf("%d\n",a[row-k][j]);
			count++;
		}			
		    if(count==(row+1)*col)
			{
				break;
			}
		for(m=row-1-k;m>=k+1;m--)
		{
			printf("%d\n",a[m][k]);
			count++;
		}
			if(count==(row+1)*col)
			{
				break;
			}
		}
	}

	return 0;
}

