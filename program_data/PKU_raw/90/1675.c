int f(int m,int n)
{    
     int k;
     if(m<n)
     n=m;
      
    if(m == 0)   
        return 1;
    if(n == 1)  
        return 1;
     return f(m,n-1)+f(m-n,n);
 
   
     }
     main()
     {
           int i, t,m,n;
           scanf("%d",&t);
           for(i=1;i<=t;i++)
           {
           scanf("%d %d",&m,&n);
           printf("%d\n",f(m,n));
           }
         
           return 0;
           }
           