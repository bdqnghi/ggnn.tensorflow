int main()
{
	int row,col,i,a[N][N],b[N][N],n,d;
	for(row=0;row<N;row++)
		for(col=0;col<N;col++)
           a[row][col]=0;

	scanf("%d %d",&a[4][4],&d);
    
	
	for(i=0;i<d;i++)
	{
		for(row=0;row<N;row++)
		for(col=0;col<N;col++)
           b[row][col]=0;

	      for(row=0;row<N;row++)
		  {
		       for(col=0;col<N;col++)
			   {
                    if(a[row][col]!=0)
					{
                        b[row-1][col-1]+=a[row][col];
						b[row][col-1]+=a[row][col];
						b[row+1][col-1]+=a[row][col];
						b[row-1][col]+=a[row][col];
						b[row+1][col]+=a[row][col];
						b[row-1][col+1]+=a[row][col];
						b[row][col+1]+=a[row][col];
						b[row+1][col+1]+=a[row][col];
						a[row][col]*=2;

					}
			   }
		  }
          for(row=0;row<N;row++)
		  {
			  for(col=0;col<N;col++)
			  {
				  a[row][col]=a[row][col]+b[row][col];
			  }
		  }

	}

	
	for(row=0;row<N;row++)
	{
		for(col=0;col<N-1;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("%d\n",a[row][N-1]);
	}
	return 0;
}


