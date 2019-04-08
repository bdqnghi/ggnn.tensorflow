int main()
{
	int year1, year2, mon1, mon2, date1, date2;
	scanf("%d %d %d", &year1, &mon1, &date1);
    scanf("%d %d %d", &year2, &mon2, &date2);
	int y[3000]={0};
	int n, i;
	n=year2-year1;
	y[0]=year1;
	for(i=0;i<=n;i++)
	{
	     if((y[i] % 4 == 0 && y[i] % 100 != 0) || (y[i] % 400 == 0))//runnian
		 {
             y[i+1]=y[i]+1;
			 y[i]=366;
         }
		 else
		 {
			 y[i+1]=y[i]+1;
			 y[i]=365;
		 }
	
	}
	int sum=0;
	if(n>=2)
	{for(i=1;i<n;i++)
	  sum=sum+y[i];
	}

   
		   if(mon2==1)
		   { 
		   if(mon1==1)sum=date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=date2-1+sum+y[0]-31-date1;
		  
			   if(mon1==3)sum=date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=date2-1+sum+y[0]-334-date1;
		    if(y[0]==366)
			{if(mon2>mon1)sum=sum+1;}
		   }
           if(mon2==2)
		   {
		       if(mon1==1)sum=31+date2-1+sum+y[0]-date1;
		       if(mon1==2)sum=31+date2-1+sum+y[0]-31-date1;
		       
			   if(mon1==3)sum=31+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=31+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=31+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=31+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=31+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=31+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=31+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=31+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=31+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=31+date2-1+sum+y[0]-334-date1;
			  if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}
		   
		   }
           if(mon2==3)
		   {
		      if(mon1==1)sum=59+date2-1+sum+y[0]-date1;
		        if(mon1==2)sum=59+date2-1+sum+y[0]-31-date1;
		      
			   if(mon1==3)sum=59+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=59+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=59+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=59+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=59+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=59+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=59+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=59+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=59+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=59+date2-1+sum+y[0]-334-date1;
			  if(y[0]==366)
			 {if(mon2>mon1)sum=sum+1;}
		   

		   }
 
	       if(mon2==4)
		   {
		      if(mon1==1)sum=89+date2-1+sum+y[0]-date1;
		       if(mon1==2)sum=89+date2-1+sum+y[0]-31-date1;
		      
			   if(mon1==3)sum=89+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=89+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=89+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=89+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=89+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=89+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=89+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=89+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=89+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=89+date2-1+sum+y[0]-334-date1;
			  if(y[0]==366)
			 {if(mon2>mon1)sum=sum+1;}
		   }

           if(mon2==5)
		   {
		   if(mon1==1)sum=120+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=120+date2-1+sum+y[0]-31-date1;
		   
			   if(mon1==3)sum=120+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=120+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=120+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=120+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=120+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=120+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=120+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=120+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=120+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=120+date2-1+sum+y[0]-334-date1;
		       if(y[0]==366)
			   {if(mon2>mon1)sum=sum+1;}
		   
		   
		   }
           if(mon2==6)
		   {
		   if(mon1==1)sum=150+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=150+date2-1+sum+y[0]-31-date1;
		  
			   if(mon1==3)sum=150+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=150+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=150+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=150+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=150+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=150+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=150+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=150+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=150+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=150+date2-1+sum+y[0]-334-date1;
		      if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}
		   
		   }

           if(mon2==7)
		   {
		   if(mon1==1)sum=181+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=181+date2-1+sum+y[0]-31-date1;
		   
			   if(mon1==3)sum=181+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=181+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=181+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=181+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=181+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=181+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=181+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=181+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=181+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=181+date2-1+sum+y[0]-334-date1;
		   if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}
		   }
           if(mon2==8)
		   {
		   if(mon1==1)sum=212+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=212+date2-1+sum+y[0]-31-date1;
		   
			   if(mon1==3)sum=212+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=212+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=212+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=212+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=212+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=212+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=212+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=212+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=212+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=212+date2-1+sum+y[0]-334-date1;
		  if(y[0]==366)
			 {if(mon2>mon1)sum=sum+1;}
		   }
          if(mon2==9)
		  {
		   if(mon1==1)sum=242+date2+sum+y[0]-date1;
		   if(mon1==2)sum=242+date2-1+sum+y[0]-31-date1;
		  
			   if(mon1==3)sum=242+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=242+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=242+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=242+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=242+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=242+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=242+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=242+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=242+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=242+date2-1+sum+y[0]-334-date1;
		  if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}
		  
		  }
          if(mon2==10)
		  {
		   if(mon1==1)sum=273+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=273+date2-1+sum+y[0]-31-date1;
		   
			   if(mon1==3)sum=273+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=273+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=273+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=273+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=273+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=273+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=273+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=273+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=273+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=273+date2-1+sum+y[0]-334-date1;
		   if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}

		  }
          if(mon2==11)
		  {
		   if(mon1==1)sum=303+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=303+date2-1+sum+y[0]-31-date1;
		  
			   if(mon1==3)sum=303+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=303+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=303+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=303+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=303+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=303+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=303+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=303+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=303+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=303+date2-1+sum+y[0]-334-date1;
		   if(y[0]==366)
			  {if(mon2>mon1)sum=sum+1;}

		  }
          if(mon2==12)
		  {
		   if(mon1==1)sum=334+date2-1+sum+y[0]-date1;
		   if(mon1==2)sum=334+date2-1+sum+y[0]-31-date1;
		  
			   if(mon1==3)sum=334+date2-1+sum+y[0]-59-date1;
	           if(mon1==4)sum=334+date2-1+sum+y[0]-89-date1;
               if(mon1==5)sum=334+date2-1+sum+y[0]-120-date1; 
               if(mon1==6)sum=334+date2-1+sum+y[0]-150-date1; 
               if(mon1==7)sum=334+date2-1+sum+y[0]-181-date1; 
               if(mon1==8)sum=334+date2-1+sum+y[0]-212-date1;
               if(mon1==9)sum=334+date2-1+sum+y[0]-242-date1;
               if(mon1==10)sum=334+date2-1+sum+y[0]-273-date1;
		       if(mon1==11)sum=334+date2-1+sum+y[0]-303-date1;
               if(mon1==12)sum=334+date2-1+sum+y[0]-334-date1;
		       if(y[0]==366)
			   {if(mon2>mon1)sum=sum+1;}
		  }
		
		  
     if(y[n]==366)
	 {if(mon2>mon1)sum=sum+1;}
	
	
	if(n==0)sum=sum-y[0];
	printf("%d\n", sum+1);
	return 0;


}		
