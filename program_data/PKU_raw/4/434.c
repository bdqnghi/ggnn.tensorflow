int main()
{
	int row,col,i,j,x,sum,y,z;
	int a[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	i=0;
	sum=0;
	j=0;
	x=0;
	y=1;
	z=0;
	if(col>=row){
	while(1)
	{
		printf("%d\n",a[i][j]);
		i++;
		j--;
		sum++;
		if(i>=row)
		{
			if(j+row+1<col)
			{
				j=j+row+1;
				i=0;
			}
			else if(j+row+1>=col)
			{
				j=j+row-x;
				i=1+x;
				x++;
			}
		}
		else if(j<0&&i<row)
		{
			j=j+1+y;
			i=0;
			y++;
		}
		if(sum==col*row)
			break;
	}
	}
	else if(col<row)
    {
        while(1)
        {
            printf("%d\n",a[i][j]);
		    i++;
		    j--;
		    sum++;
		    if(i>=row)
		    {
			    j=col-1;
				i=i-col+1+x;
				x++;
            }
            else if(i<row&&j<0)
            {
                if(j+1+y<col)
                {
                    j=j+1+y;
                    i=0;
                    y++;
                }
                else if(j+1+y>=col)
                {
                    j=col-1;
                    i=z+1;
                    z++;
                }
            }
            if(sum==col*row)
			break;
        }
    }
	
	return 0;
}
