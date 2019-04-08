int sz[10][10];
int main()
{
	int row,col,m=0,n=0,a=0,b;
	scanf("%d,%d",&row,&col);	
	int i,j,k;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	i=0;
	b=0;
		while(i<row)
	{
		k=0;
		for(j=1;j<=col;j++)
		{
			if(sz[i][m]<sz[i][j])
			{
			  m=j;
			}
			else
			{
				m=m;
			}
		}
		while(k<row)
		{
			if(sz[b][m]>sz[k][m])
			{
				a=0;
				break;
			}
			else
			{
				a=1;
				k++;
			}
		}
		if(a==1)
		{
			printf("%d+%d",i,m);
			break;
		}
		else
		{
		 i++;
		}
	}
		if(i==row)
		{
          printf("No");
		}
 return 0;
}

