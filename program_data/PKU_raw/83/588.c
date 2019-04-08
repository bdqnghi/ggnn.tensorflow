void main()
{
	int i,j,n;
	double x,y,GPA;
	int a[2][101];float b[101],c[101];
	scanf("%d",&n);
	for(i=0;i<=1;i++)
	
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(j=0;j<n;j++)
		{
			
			if(a[1][j]<=100&&a[1][j]>=90)
			b[j]=4.0;   
		    else if(a[1][j]<=89&&a[1][j]>=85)
				b[j]=3.7;
		    else if(a[1][j]<=84&&a[1][j]>=82)
					b[j]=3.3;
			else if(a[1][j]<=81&&a[1][j]>=78)
						b[j]=3.0;	
			else	if(a[1][j]<=77&&a[1][j]>=75)
							b[j]=2.7;					
		    else if(a[1][j]<=74&&a[1][j]>=72)
								b[j]=2.3;				
			else if(a[1][j]<=71&&a[1][j]>=68)
								b[j]=2.0;
			else if(a[1][j]<=67&&a[1][j]>=64)
								b[j]=1.5;
			else if(a[1][j]<=63&&a[1][j]>=60)
								b[j]=1.0;
			else b[j]=0;
		}
			for(j=0;j<n;j++)				
				
			c[j]=a[0][j]*b[j];x=0;y=0;
		
     	for(j=0;j<n;j++)
		{
	        x=x+c[j];y=y+a[0][j];
		}
	      	GPA=x/y;
		     printf("%.2f",GPA);
}



		

		
						
						
								
				
	                       