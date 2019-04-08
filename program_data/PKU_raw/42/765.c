void main()
{  
   long m,j,i,n,*p,*q,*head;
   scanf("%ld",&n);
   p=(long*)malloc(100000*sizeof(long int));
   for(i=0;i<n;i++,p++)
   {
       scanf("%ld",p);
   }
   int k;
   scanf("%ld",&k);
   p=p-n;
   j=0;
   for(i=0;i<n;i++,p++)
   {
   	if(*p!=k&&j!=1)
   	    {
		 j=1;
   		 printf("%ld",*p);
   	     }
          
    else if(*p!=k)
         {
                   printf(" %ld",*p);
          }   
   }
   }