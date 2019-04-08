void main ()
{
	void exchange (int a, int b,int c[100][100]);
	int i,j,a,b,c[100][100];
	
	for (i=0;i<=4;i++)
	{
		for (j=0;j<5;j++)
		scanf("%d",&c[i][j]);
	}
	scanf ("%d %d",&a,&b);
	
	if (a<5&&a>=0&&b>=0&&b<5)
	{ exchange (a,b,c);
     for (i=0;i<=4;i++)
	 {
		for (j=0;j<4;j++)
		{
			printf("%d ",c[i][j]);
		}
                  printf ("%d",c[i][4]);
	         printf("\n"); 
	  }
                   }
   
        
    else 
		printf("error");
}
   
   void exchange (int a, int b, int c[100][100])
   {
       int j,t;
	   for (j=0;j<5;j++)
	   {
		
		   t=c[a][j];
	       c[a][j]=c[b][j];
	       c[b][j]=t;
	   }
   }
