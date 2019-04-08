int main()
{
	int m,n,area[9][9]={0},area1[9][9]={0};
	scanf("%d%d",&m,&n);
	area[4][4]=m;
	int i,j;

	for(int t=0;t<n;t++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
		     area1[i][j]=area[i][j];
			} 
		}
	
	    for(i=0;i<9;i++)
		{
		     for(j=0;j<9;j++)
			 {
				 if(area[i][j]!=0)
				 {
					 area1[i-1][j-1]+=area[i][j];
			         area1[i-1][j]+=area[i][j];
			         area1[i-1][j+1]+=area[i][j];
		           	 area1[i][j-1]+=area[i][j];
		         	 area1[i][j]+=area[i][j];
		        	 area1[i][j+1]+=area[i][j];
		        	 area1[i+1][j-1]+=area[i][j];
			         area1[i+1][j]+=area[i][j];
			         area1[i+1][j+1]+=area[i][j];
					 
				 }
			 }
		}
		
		
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
		     area[i][j]=area1[i][j];
			} 
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
		{
			
			printf("%d ",area[i][j]);
		}
		printf("%d\n",area[i][8]);
	}
	
	return 0;
}
