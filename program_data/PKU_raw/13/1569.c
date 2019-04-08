


int main()
{
     int N,m,i,j,a[10000],t,b[10000]={0},n[10000]={0},k,p=0,x,q;
     
	 
    
         
		 scanf("%d",&m);
         for(j=0;j<m;j++)
             scanf("%d",&a[j]);
         b[0]=a[0];
         for(j=0;j<m;j++)
		{
		  p=0;
		  for(k=0;b[k]!=0;k++)
             {
			    if(a[j]==b[k])  {n[k]++;p=1;break;}
			 
			 }
           if(p==0)  {b[k]=a[j]; n[k]++;}    
        }
	    x=0;q=0;
	if(n[0]==1) printf("%d",b[0]);
		       else if(n[0]>=2)  
		       {
		           printf("%d",b[0]);
		           n[0]=0;
			   
			   }	
              
        for(j=1;b[j]!=0;j++)
	       {
		       if(n[j]==1) printf(" %d",b[j]);
		       else if(n[j]>=2)  
		       {
		           printf(" %d",b[j]);
		           n[j]=0;
			   
			   }
			   
     
	 
	          }
      

 
   return 0;
}



