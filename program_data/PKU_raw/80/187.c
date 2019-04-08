int main()
{
	int sy,sm,sd,ey,em,ed,i,sum=0,a=0;
	int day[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&sy,&sm,&sd);
	scanf("%d %d %d",&ey,&em,&ed);
	for(i=sy+1;i<=ey-1;i++)
		if((i%4==0&&i%100!=0)||(i%400==0))
			sum+=366;
		else sum+=365;
    if((ey%4==0&&ey%100!=0)||(ey%400==0))
		for(i=1;i<em;i++)
			if(i==2) sum+=29;
			else sum+=day[i];
	else for(i=1;i<em;i++)
	    	if(i==2) sum+=28;
			else sum+=day[i];
	if(ey!=sy)
	{
		if((sy%4==0&&sy%100!=0)||(sy%400==0))
		{
		   for(i=1;i<sm;i++)
			  if(i==2) a+=29;
			  else a+=day[i];
	    	sum=sum+366-(a+sd);
		}
	   else 
	   {
		   for(i=1;i<sm;i++)
	    	  if(i==2) a+=28;
			  else a+=day[i];
		   sum=sum+365-(a+sd);
	   }
	}
	else 
	{
		if((sy%4==0&&sy%100!=0)||(sy%400==0))
		{
		   for(i=1;i<sm;i++)
			  if(i==2) a+=29;
			  else a+=day[i];
	    	sum=sum-(a+sd);
		}
	   else 
	   {
		   for(i=1;i<sm;i++)
	    	  if(i==2) a+=28;
			  else a+=day[i];
		   sum=sum-(a+sd);
	   }
	 }
	sum+=ed;
	printf("%d\n",sum);
	return 0;
}
	
