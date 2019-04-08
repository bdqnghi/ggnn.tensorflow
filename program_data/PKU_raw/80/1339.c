void main()
{
	int a,b,c,x,y,z,sum1=0,sum2=0,t=0,u=0,m=0,n=0,final;
		scanf("%d %d %d\n%d %d %d",&a,&b,&c,&x,&y,&z);
	   
loop1: m=m+1;
	        	if(m==a)
			       t=t;
		       else
			   {
	             if(m%4==0)
					{
		              if(m%100!=0)
					  {t=t+1;goto loop1;}
		              else   
						{
						  if(m%400==0)
						  {t=t+1;goto loop1;}
						  else goto loop1;
						}
					}
				 else goto loop1;
				}
		 
		  
	  
	  
loop2: n=n+1;
	             if(n==x)
		            u=u;
				else
				{
					if(n%4==0)
					{
						if(n%100!=0)
						{u=u+1;goto loop2;}
						else
							{
							 if(n%400==0)
							{u=u+1;goto loop2;}
							 else goto loop2;
							}
					}
	  
	              else goto loop2;
				}
	 sum1=(a-1)*365+t;
	 sum2=(x-1)*365+u;
switch(b)
	 {
	 case 1:sum1=sum1+0 ;break;
     case 2:sum1=sum1+31 ;break;
	 case 3:sum1=sum1+59 ;break;
	 case 4:sum1=sum1+90 ;break;
	 case 5:sum1=sum1+120 ;break;
	 case 6:sum1=sum1+151; break;
	 case 7:sum1=sum1+181; break;
	 case 8:sum1=sum1+212; break;
	 case 9:sum1=sum1+243; break;
	 case 10:sum1=sum1+273; break;
	 case 11:sum1=sum1+304; break;
	 case 12:sum1=sum1+334; break;
	 }

switch(y)
	 {
	 case 1:sum2=sum2+0; break;
     case 2:sum2=sum2+31; break;
	 case 3:sum2=sum2+59; break;
	 case 4:sum2=sum2+90; break;
	 case 5:sum2=sum2+120; break;
	 case 6:sum2=sum2+151; break;
	 case 7:sum2=sum2+181; break;
	 case 8:sum2=sum2+212; break;
	 case 9:sum2=sum2+243; break;
	 case 10:sum2=sum2+273; break;
	 case 11:sum2=sum2+304; break;
	 case 12:sum2=sum2+334; break;
	 }
if(a%4==0)
	  {
		  if(a%100!=0)
		  {
			  if(b>2)
				  sum1=sum1+1;
			  else sum1=sum1;
		  }
		  else if(m%400==0)
		   {
			  if(b>2)
				  sum1=sum1+1;
			  else sum1=sum1;
		  };
	}
if(x%4==0)
	  {
		  if(x%100!=0)
		  {
			  if(y>2)
				  sum2=sum2+1;
			 
		  };
		  if(x%400==0)
		   {
			  if(y>2)
				  sum2=sum2+1;
			  else sum2=sum2;
		  };
	}
		  sum1=sum1+c;
		  sum2=sum2+z;

final=sum2-sum1;
printf("\n%d",final);
}