int main()
{
	int d,m,n,i,j,a[9][9],b[9][9];
	scanf("%d%d",&m,&n);
	
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	a[4][4]=m;


	
	
	for(d=1;d<=n;d++)
	{
		if(d%2==1)
		{		
			for(i=0;i<9;i++)
			{
		         for(j=0;j<9;j++)
				 {

				      if(a[i][j]!=0)
					  {
					       b[i-1][j-1]+=a[i][j];
		                   b[i-1][j]+=a[i][j];
					       b[i-1][j+1]+=a[i][j];
					       b[i][j-1]+=a[i][j];
					       b[i][j+1]+=a[i][j];
				           b[i+1][j-1]+=a[i][j];
				           b[i+1][j]+=a[i][j];
					       b[i+1][j+1]=+a[i][j];
					       b[i][j]+=a[i][j]*2;
                           a[i][j]=0;
					  }
				 }
			}
		}
	
	else
		{
			for(i=0;i<9;i++)
			{
		         for(j=0;j<9;j++)
				 {

				      if(b[i][j]!=0)
					  {
					       a[i-1][j-1]+=b[i][j];
		                   a[i-1][j]+=b[i][j];
					       a[i-1][j+1]+=b[i][j];
					       a[i][j-1]+=b[i][j];
					       a[i][j+1]+=b[i][j];
				           a[i+1][j-1]+=b[i][j];
				           a[i+1][j]+=b[i][j];
					       a[i+1][j+1]+=b[i][j];
					       a[i][j]+=b[i][j]*2;
                           b[i][j]+=0;
					  }
				 }
			}

		}

	}

	
	
	
	
	
	
	if(n%2==1)
	{
			for(i=0;i<9;i++)
			{
		         for(j=0;j<8;j++)
				 {
			        printf("%d ",b[i][j]);
				 }
				 printf("%d\n",b[i][8]);
				
			
			}	

	}
	else
	{
			for(i=0;i<9;i++)
			{
		         for(j=0;j<8;j++)
				 {
			        printf("%d ",a[i][j]);
				 }
				 printf("%d\n",a[i][8]);
			}

	}
	
	return 0;
}