void main()
{
	int sy,sm,sd,ey,em,ed,i,j,k,sum;
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        
	scanf("%d %d %d",&sy,&sm,&sd);
    scanf("%d %d %d",&ey,&em,&ed);
    sum=0;
	if (sy!=ey)
	{
		if (sy+1<=ey-1)
    	{
	    	for(i=sy+1;i<=ey-1;i++)
		    	if ((i%4==0&&i%100!=0)||(i%400==0)) sum=sum+366;
			    else sum=sum+365;
    	}
	
	    if ((sy%4==0&&sy%100!=0)||(sy%400==0))
	    {
		    if (sm<12)
			    for(j=sm+1;j<=12;j++)
				    sum=sum+a[j-1];
			sum=sum+a[sm-1]-sd+1;
    	}
	    else
    	{
            if (sm<12)
		    	for(j=sm+1;j<=12;j++)
			    	sum=sum+b[j-1];
			sum=sum+b[sm-1]-sd+1;
    	}
 	
	    if ((ey%4==0&&ey%100!=0)||(ey%400==0))
	    {
		    if (em>1)
			    for(j=1;j<=em-1;j++)
				    sum=sum+a[j-1];
			sum=sum+ed;
	    }
	    else
	    {
            if (em>1)
			    for(j=1;j<=em-1;j++)
				    sum=sum+b[j-1];
			sum=sum+ed;
    	}
	}
	else
	{
		if ((sy%4==0&&sy%100!=0)||(sy%400==0))
	    {
		    if (sm!=em)
			{
				if (sm+1<=em-1)
			        for(k=sm+1;k<=em-1;k++)
				        sum=sum+a[k-1];
			    sum=sum+a[sm-1]-sd+1;
			    sum=sum+ed;
			}
			else
				sum=sum+ed-sd+1;
    	}
	    else
    	{
            if (sm!=em)
			{
				if (sm+1<=em-1)
			        for(k=sm+1;k<=em-1;k++)
				        sum=sum+b[k-1];
			    sum=sum+b[sm-1]-sd+1;
			    sum=sum+ed;
			}
			else
				sum=sum+ed-sd+1;
    	}
	}
	printf("%d\n",sum-1);
}