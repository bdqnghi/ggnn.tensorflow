void main()
{
    int n,i,m,j,k=0;
    double d,b[100][7]={0},a[10][3]={0},temp[7];
    char c[10][3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%lf",&a[i][j]);
    		scanf("%c",&c[i][j]);
    	}
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		d=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
    	    b[k][0]=a[i][0];
    	    b[k][1]=a[i][1];
    	    b[k][2]=a[i][2];
    	    b[k][3]=a[j][0];
    	    b[k][4]=a[j][1];
    	    b[k][5]=a[j][2];
    	    b[k][6]=d;
    	    k++;
    	}
    }
    for(i=0;i<n*(n-1)/2;i++)
    {
    	for(j=i+1;j<n*(n-1)/2;j++)
    	{
    		if(b[j][6]>b[i][6])
    		{
    			for(k=0;k<7;k++)
    			{
    			temp[k]=b[j][k];
    			}
    			for(m=j;m>i;m--)
    			{
    				for(k=0;k<7;k++)
    			    {
    			    	b[m][k]=b[m-1][k];
    			    }
    			}
    			for(k=0;k<7;k++)
    			{
    			b[i][k]=temp[k];
    			}
    			
    			
    		}
    	}
    }
    for(i=0;i<n*(n-1)/2;i++)
    printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",b[i][0],b[i][1],b[i][2],b[i][3],b[i][4],b[i][5],b[i][6]);
    			
    			
    
    		
    		
}
