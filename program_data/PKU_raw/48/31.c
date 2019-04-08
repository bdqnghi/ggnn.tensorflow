void main()
{
	int m,n,a[11][11]={0},b[10][10]={0},i,j,k;
	scanf("%d%d",&m,&n);
	a[5][5]=m;
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
			
				b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
		
			}

		}
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				a[i][j]=b[i][j];
	}
	 for(i=1;i<=9;i++)
	 
		 for(j=1;j<=9;j++)
        {
			 if(j<9)
			 {
			 
				 printf("%d ",a[i][j]);
			 }
			 else if(i!=9) printf("%d\n",a[i][j]);
			 else printf("%d",a[i][j]);
		 }


}
 
