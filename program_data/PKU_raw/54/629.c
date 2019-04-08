void main()
{
	int min(int n,int k);
    
	int n,k;
	scanf("%d%d", &n,&k);
	
	printf("%d",min(n,k));
}
int min(int n, int k)
{
	int i,number=n+k,c=1,j;
 	 for(i=0;number%(n-1)!=0;i++)
		  {
			c=c+1;
			number=n*c+k;				
		  }
   for(i=n-1;i>0;i--)
   
		  {
			  number=number/(n-1)+number+k;
			  if(i==1)
				  goto stop;
			  if(number%(n-1)!=0)
			  {
				  for(j=0;number%(n-1)!=0;j++)
			   {
		  	    c=c+1;
		  	    number=n*c+k;	
			   }  
				  i=n;
 			  }
		
		  }
	    
        
	
				
stop:	return number;
}

