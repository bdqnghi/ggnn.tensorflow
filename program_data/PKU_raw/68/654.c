void main()
{
	int k,x,y,t,m;
	scanf("%d",&t);
	for(m=6;m<=t;m=m+2)
	{
    for(x=3;x<=m/2;x=x+2)
	{
	    for(k=2;k<=sqrt(x)+1;k++)
		{
			if(x%k==0) break;
		}
		if(k>sqrt(x))
		{
            y=m-x;
	        for(k=2;k<=sqrt(y)+1;k++)
			{
				if(y%k==0) break;
			}
		    if(k>sqrt(y)) break;
		
		}
	}
	printf("%d=%d+%d\n",m,x,y);
	}
}
    
