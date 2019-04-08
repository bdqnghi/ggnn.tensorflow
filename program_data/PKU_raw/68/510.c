void main()
{
	int n,i,j,k,t,h,a,b,c,d,e,f,g;
	b=1;g=1;
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
	if (i%2==0)
	{
		printf("%d=",i);
		k=i/2;
		for(j=3;j<=k;j++)
		{
			b=1;g=1;
			if(j%2==0)continue;
			h=sqrt(j);
			for(t=2;t<=h;t++)
			{
				a=j%t;
				
				if(a==0)
				{
					b=0;
					break;
				}
			}
			
		    if(b==1)
	    	{
	    		c=i-j;
	    		d=sqrt(c);
	    		for(e=2;e<=d;e++)
	    		{
	    			if(e%2==0)continue;
	    			f=c%e;
	    			
	    			if(f==0)
	    			{
	    				g=0;
	    				break;
	    			}
	    		}
	    		if(g==1)
	    		{
	    		printf("%d+%d\n",j,c);
 		        break;
	    		}
	    	}
		}
	}
	}}


			
				