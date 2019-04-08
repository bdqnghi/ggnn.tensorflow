int main()
{
    
    int x[10],y[10],z[10];
    int i,j=1,n,p,q,k=0,m;
	double d[10][10],max;
	
    scanf("%d\n",&n);
	
    for(i=0;i<n;i++)
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	
    i=0;
    
    if(n==2)
    {
        p=i;q=j;
        max=sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j])+1.0*(z[i]-z[j])*(z[i]-z[j]));
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[p],y[p],z[p],x[q],y[q],z[q],max);
        return 0;
        
    }
    
    for(i=0;i<n;i++)
	{
	
        for(j=i+1;j<n;j++)
		{
        
			d[i][j]=sqrt(1.0*(x[i]-x[j])*(x[i]-x[j])+1.0*(y[i]-y[j])*(y[i]-y[j])+1.0*(z[i]-z[j])*(z[i]-z[j]));
		  	
		}
	   
	}
	
    max=d[0][1];
	m=n*(n-1)/2;
	
    while(k<m)
    {
	
    for(i=0;i<n;i++)
	{
		
        for(j=i+1;j<n;j++)
		{
		
            if(max<d[i][j])
			{
            
				max=d[i][j];
				p=i;
				q=j;
			 		
			}
        
		}
	   
	}
	
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[p],y[p],z[p],x[q],y[q],z[q],max);
	
    d[p][q]=0.0;
	k++;
	max=0;
	   
	}
	
    return 0;
}
