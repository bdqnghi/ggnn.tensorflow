int main()
{
	int i,j,a[100][100],k,r,c,row,col,s,a1,a2,t;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	s=0;
	t=row*col;
	a1=0;
	a2=0;
	r=0;
	c=0;
	for(k=0;k<=100;k++)
	{
		for(c=a2;c<col;c++)
		{
			printf("%d\n",a[r][c]);
			s++;
			if(s==t)
			{
				return 0;
            }
		}
		col--;
		c--;
		a1++;
		for(r=a1;r<row;r++)
		{
			printf("%d\n",a[r][c]);
			s++;	
			if(s==t)
			{
				return 0;
            }
		}
		row--;
		r--;
		for(c=col-1;c>=a2;c--)
		{
			printf("%d\n",a[r][c]);
			s++;	
			if(s==t)
			{
				return 0;
            }
		}
		c++;
		for(r=row-1;r>=a1;r--)
		{
			printf("%d\n",a[r][c]);
			s++;		
			if(s==t)
			{
				return 0;
            }
		}
		r++;
		a2++;
	}
}