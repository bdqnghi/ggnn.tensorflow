main()
{  
    int reverse(int n);
    int X;
    int R;
    int i;
    for(i=0;i<=5;i++)
    {
    scanf("%d",&X);
    R=reverse(X);
    printf("%d\n",R);
    }
}      

 int reverse(int n) 
{
   int r=0,q,N;
   if(n>0)
   {
          while(n>0)
    {
       q=n%10;
       r=r*10+q;
       n=n/10;    
    }
    return(r);
   }
   if(n<0)
   {
          while(n<0)
     {   
       N=0-n; 
       q=N%10;
       r=r*10+q;
       N=N/10;
       n=0-N;      
     } 
   return(-r);
    }
    if(n==0)
    return(n);  
}

