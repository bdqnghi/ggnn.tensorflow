int main()
{
int a[10];
int m,n,x,i,w,k,t,r,time,ji,chu;
scanf("%d%d",&m,&n);
time=0;
ji=1;

   for(x=m;x<=n;x++)
   {  
	   
	   w=0;
	   for(i=2;i<x;i++)
		{
		  if(x%i!=0)
		  {
			  w=w+1;
			  if(w==x-2)
			  {
				                    for(k=1;k<=100;k++)
									{
					                  ji=(int)(pow(10,k));
				                        if(x/ji==0)
										{
					                	 t=k-1;
						                 break;
										}
					                  else continue;
									}
				  
				  
				                       for(r=0;r<=t;r++)
									   {
					                        chu=(int)(pow(10,r));
				                            a[r]=(x/chu)%10;
									   }
                  
				  
				                      for(r=0;r<=t;r++)
									  {
				                           if(a[r]==a[t-r])
										   {
						                      
					                          //if((time<t/2+1)&&(time>=t/2))
											  if (r==t)
											  {
												  if(time==0)
				                                  printf("%d",x);
												  if(time>=1)
													  printf(",%d",x);
													  time=time+1;
											  }//continue;
										   }
					                     else break;
									  }
			  }
				  
		  }
		  else break;
		}
	}
   if(time==0)
	   printf("no");
  
return 0;
}