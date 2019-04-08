int main()
{
	int y,m,d,n;
	scanf("%d%d%d%d",&y,&m,&d,&n);
	if(y%4==0&&y%100!=0)
	{
		if(m==1)
			n=d;
		else if(m==2)
		    	n=31+d;
		else if(m<=8)
		{		
			n=(m-1)*30-1+m/2+d;
		
		}
		else
		{
		 if(m%2==0)
			n=(m-1)*30-1+m/2+d;
		   else 
			   n=(m-1)*30+m/2+d;
		}
	}
	if(y%400==0)
	{
       if(m==1)
			n=d;
	   else if(m==2)
	   	    	n=31+d;
       else if(m<=8)
	   {		
			n=(m-1)*30-1+m/2+d;
		
	   }
	   else
	   {
		 if(m%2==0)
			n=(m-1)*30-1+m/2+d;
		   else 
			   n=(m-1)*30+m/2+d;
	   }	
	}
	else
	{

       if(m==1)
			n=d;
	   else if(m==2)
	   	    	n=31+d;
       else if(m<=8)
	   {		
			n=(m-1)*30-2+m/2+d;
		
	   }
	   else
	   {	
		   if(m%2==0)
			n=(m-1)*30-2+m/2+d;
		   else 
			   n=(m-1)*30-1+m/2+d;
	   }
	}
	printf("%d",n);
	return 0;
}
	
