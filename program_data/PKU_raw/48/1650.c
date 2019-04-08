main()
{
	  int i,j,k,t,m,n,r,day,x;
	  int a[100][100],b[100][100];
	  scanf("%d%d",&r,&day);
	   m=9;n=9;
	  for(i=0;i<m;i++)
	  {
			for(j=0;j<n;j++)
			 {a[i][j]=0;b[i][j]=0;}
	  }
	  a[4][4]=r;
	  b[4][4]=r;
	  for(x=0;x<day;x++)
	  {
	  	a[0][0]=b[0][1]+b[0][0]*2+b[1][0]+b[1][1];
	  	 
	  	for(i=1;i<n-1;i++)
		{
			a[0][i]=b[1][i]+b[0][i]*2+b[0][i+1]+b[0][i-1]+b[1][i+1]+b[1][i-1];
			 
		}
		a[0][n-1]=b[0][n-2]+b[0][n-1]*2+b[1][n-1]+b[1][n-2];
	 	for(i=1;i<m-1;i++)
		{
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				a[i][j]=b[i+1][j]+b[i][j]*2+b[i-1][j]+b[i][j+1]+b[i-1][j+1]+b[i+1][j+1];
			}
			if(j!=0&&j!=n-1)
			a[i][j]=b[i][j+1]+b[i][j]*2+b[i][j-1]+b[i+1][j]+b[i-1][j]+b[i-1][j-1]+b[i-1][j+1]+b[i+1][j-1]+b[i+1][j+1];
			 
			if(j==n-1)
			{
				a[i][j]=b[i+1][j]+b[i][j]*2+b[i-1][j]+b[i][j-1]+b[i+1][n-2]+b[i-1][n-2];
				 
			}
		}
	}
	a[m-1][0]=b[m-2][0]+b[m-1][0]*2+b[m-1][1]+b[m-2][1];
	 
	for(i=1;i<n-1;i++)
	{
		a[m-1][i]=b[m-1][i+1]+b[m-1][i]*2+b[m-1][i-1] +b[m-2][i]+b[m-2][i+1]+b[m-2][i-1];
		 
	}
	a[m-1][n-1]=b[m-2][n-1]+b[m-1][n-1]*2+b[m-1][n-2]+b[m-2][n-2];
	for(i=0;i<m;i++)
	  {
			for(j=0;j<n;j++)
			 b[i][j]=a[i][j];
	  }	
	}
	for(i=0;i<m;i++)
	  {
			for(j=0;j<n;j++)
			{
				if(j==0)
			printf("%d",a[i][j]);else printf(" %d",a[i][j]); }
			printf("\n");
	  }	
}
