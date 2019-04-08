


int main()
{
     int N,m,i,j,a[10000],t,b[10000]={0},n[10000]={0},k,p=0,x=0,q;
     
	 
    
         
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
	   for(k=0;b[k]!=0;k++)
	   {
	      x++;
		  if(x==1) printf("%d",b[k]);
		  else printf(" %d",b[k]); 
	   
	   } 
      

 
   return 0;
}
