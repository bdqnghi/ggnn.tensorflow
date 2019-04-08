int main()
{
	int n,m,i,j,k;
	int yao[300][300];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
		{
           scanf("%d",&yao[i][j]);
		}
	}
  for(i=n;i<300;i++)
	{
        for(j=0;j<300;j++)
		{
           yao[i][j]=00;
		}
	}
  
	for(k=0;k<=n+m-2;k++)
	{   
		
		

		  for(i=0;i<=k;i++)
		  {
			 if(yao[i][k-i]!=00)
			 {
			   printf("%d\n",yao[i][k-i]);
			 }
		  }
	
	
		


	}
	return 0;
}