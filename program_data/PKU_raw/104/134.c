int main()
{
	int x,y,a[100],b[100],i,j,n=0,m=0,p=0,c[50];
	scanf("%d %d",&x,&y);
	for(i=0;i<=100;i++)
	{
		if(x%2==0)
		{
			b[n]=x;
		    n++;
		    x=x/2;
		}
	    else
		{
			b[n]=x;
		    n++;
		    x=(x-1)/2;
		}
	}
    for(i=0;i<100;i++)
	{
		if(y%2==0)
		{
			a[m]=y;
		    m++;
		    y=y/2;
		}
		else     
		{
			a[m]=y;
		    m++;
		    y=(y-1)/2;
		}
	}
		
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		if(b[i]==a[j])
		{
			c[p]=b[i];
			p++;
		}		
	printf("%d",c[0]);
	return 0;
}				
		
	
	
	
