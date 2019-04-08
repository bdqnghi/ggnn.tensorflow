void main()
{
	int m,n,i,j,p,q,t,x,y=0,a[8][8],b[8][8],c[8][8];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		    b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	}
    for(i=0;i<m;i++)
	{	
	    for(p=1;p<n;p++)
	    for(j=0;j<n-p;j++)
		{
		   if(b[i][j]<b[i][j+1])
		   {
               t=b[i][j];
		       b[i][j]=b[i][j+1];
		       b[i][j+1]=t;
		   }
		}
        			
	}

	for(j=0;j<n;j++)
	{	
	    for(q=1;q<m;q++)
	    for(i=0;i<m-q;i++)
		{
		   if(c[i][j]>c[i+1][j])
		   {
               t=c[i][j];
		       c[i][j]=c[i+1][j];
		       c[i+1][j]=t;
		   }
		}
        
		
			
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][0]==c[0][j])
			{x=b[i][0];break;}
		}
	}
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==x)
			{
				printf("%d+%d",i,j);
				y=1;
				break;
			}
		}
	}
	if(y==0)printf("No");
}