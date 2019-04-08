int main()
{
    int m,n,i,j;
    int c[100][100];
    scanf("%d %d",&m,&n);
    
        
    for(i=1;i<=m;i++)
                    {
                                   for(j=1;j<=n;j++)
                                   {  
                                   scanf("%d",&(c[i][j]));
                                   }
                     }
                     if((i==0)||(j==0)||(i==m+1)||(j==n+1))
                     {
							c[i][j]=0;
					}
     for(i=1;i<=m;i++)
	 {
			for(j=1;j<=n;j++)
			{                
                    
                    
						if((c[i][j]>=c[i-1][j])&&(c[i][j]>=c[i][j-1])&&(c[i][j]>=c[i+1][j])&&(c[i][j]>=c[i][j+1]))
						{
						  printf("%d %d\n",i-1,j-1);
					    }
					
		    }
     }
   
	          
    
    return 0;
}