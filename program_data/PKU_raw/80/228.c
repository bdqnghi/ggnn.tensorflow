void main()
{
	int sy,sm,sd,ey,em,ed,d[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,m,n=0;
	scanf("%d %d %d",&sy,&sm,&sd);
	scanf("%d %d %d",&ey,&em,&ed);
	
	for (i=sy;i<=ey;i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) d[1]=29;
		else d[1]=28;
		if (sy!=ey)
		{
	    	if (i==sy) 
			{
	    		for (m=sm;m<=12;m++)
				{
	    			if (m==sm) n=n+d[m-1]-sd;
	    			else n=n+d[m-1];
				}
			}
	    	else if (i==ey) 
			{
		    	for (m=1;m<=em;m++)
				{
		    		if (m==em) n=n+ed;
		    		else n=n+d[m-1];
				}
			}
	    	else 
			{
		    	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) n=n+366;
	    		else n=n+365;
			}
		}
		else if (sy==ey)
		{
			if (sm==em) n=ed-sd;
			else if (sm!=em) 
				for (m=sm;m<=em;m++)
				{
					if (m==sm) n=n+d[m-1]-sd;
					else if (m==em) n=n+ed;
					else n=n+d[m-1];
				}
		}
	}
	printf("%d\n",n);
}