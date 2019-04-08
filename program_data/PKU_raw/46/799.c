void main()
{
	int row,col,a[100][100],b[100][100],time=0;
	int i,j,way;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
			}
		for(i=0;i<100;i++)
			for(j=0;j<100;j++)
				b[i][j]=1;
		i=-1;
		j=-1;
		way=0;
		while(time<row*col)
		{
			if(way==0)
			{
				for(i=i+1,j=j+1;j<col&&b[i][j]!=0;j++) 
				{printf("%d\n",a[i][j]);
				 b[i][j]=0;
				 time++;
				}
					
				way=1;	
				
			}
			if(way==1)
			{
				for(j=j-1,i=i+1;(b[i][j]!=0)&&(i<row);i++)
				{
					
					printf("%d\n",a[i][j]);
					b[i][j]=0;
					time++;
					
				}
                way=2;
			}
			if(way==2)
			{
				for(i=i-1,j=j-1;b[i][j]!=0&&j>=0;j--)
				{
					
					printf("%d\n",a[i][j]);
					b[i][j]=0;
					time++;
					
				}
                 way=3;
			}
			if(way==3)
			{
				for(i=i-1,j=j+1;b[i][j]!=0&&i>=0;i--)
				{
					printf("%d\n",a[i][j]);
					b[i][j]=0;
					time++;
				}
                 way=0;
			}
			
		}           
}
