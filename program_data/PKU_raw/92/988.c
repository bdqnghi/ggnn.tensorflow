int main()
{
	int n,a[1000],b[1000],i,j,t,m;
	for(;;)
	{
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<n;i++)scanf("%d",&b[i]);
		
		t=0;
		for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)if(a[j]<a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}
		t=0;
		for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)if(b[j]<b[j+1]){t=b[j];b[j]=b[j+1];b[j+1]=t;}
		
		m=0;
		for(;n>0;n--)
		{
			//1 
		    if(a[0]>b[0])
		    {
			    m++;
			    for(i=0;i<n-1;i++)
			    {
				    a[i]=a[i+1];
				    b[i]=b[i+1];
			        } 
		        }
		    //2
		    else if(a[0]<b[0])
		    {			
    			m--;
    			for(i=0;i<n-1;i++)b[i]=b[i+1];
        	    }
    		//3
    		else if(a[0]==b[0]&&a[n-1]>b[n-1])
    		{
    			m++;
    		    }
    		//4
    		else if(a[0]==b[0]&&a[n-1]<=b[n-1])
    		{
    			if(a[n-1]<b[0])m--;
    			for(i=0;i<n-1;i++)b[i]=b[i+1];
    			}   
		
			}  			
        printf("%d\n",200*m);
        }

	return 0;	
    } 
