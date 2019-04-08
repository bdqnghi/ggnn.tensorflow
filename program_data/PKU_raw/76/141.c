int main()
{
   int n,i,j,k,m,M,a[100000][2];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]); 
    }
	for(j=0;j<n;j++)
	{ 
      for(i=0;i<n-j;i++)
      {
		  if(a[i][0]>a[n-1-j][0])
		  { 
			m=a[n-1-j][0];
			a[n-1-j][0]=a[i][0];
			a[i][0]=m;
			M=a[n-1-j][1];
			a[n-1-j][1]=a[i][1];
			a[i][1]=M; 
		  } 
	  }
	 }
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(a[i][0]<=a[i-j][1])
			{
				break; 
			} 
			
		} 
		if(j==i+1)
			{
				printf("no");
				break; 
			} 
	} 
	if(i==n)
	{
	     for(j=0;j<n;j++)
	    { 
          for(k=0;k<n-j;k++)
          {
		      if(a[k][1]>a[n-j-1][1])
		      { 
			    m=a[n-j-1][1];
			    a[n-j-1][1]=a[k][1];
			    a[k][1]=m;
			
		      } 
	      }
	     }
	printf("%d %d",a[0][0],a[n-1][1]);	
	} 
		return 0; 

} 