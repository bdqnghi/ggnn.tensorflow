//??????
void f(int p[],int n)
{
 int i,j,t;
 for(i=0;i<n;i++)
  {
        for(j=(i+1);j<n;j++)
         {
             if(p[j]<p[i])
             {t=p[i];p[i]=p[j];p[j]=t;}
         }
  }
}
main()
{
   
    for(;;)
    {
     int n;
    scanf("%d",&n);       
    if (n==0) break;
      int *tian=(int *)malloc(n*sizeof(int));
      int *qi=(int *)malloc(n*sizeof(int));
      for(int i=0;i<n;i++)
      {
              scanf("%d",tian+i);
      }
      for(int i=0;i<n;i++)
      {
              scanf("%d",qi+i);
      }
      f(tian,n);
      f(qi,n);
     
     
      int t=0,q=0,qmax=n-1,tmax=n-1,win=0;
      for(;n>=1;n--)
      {
              if(*(tian+t)>*(qi+q))
              {
                   win++;
                   t++;
                   q++;
              }
              else if(*(tian+t)==*(qi+q))
              {
                   if(*(tian+tmax)>*(qi+qmax))
                   {
                       win++;
                       tmax--;
                       qmax--;
                   }
                   else if(*(tian+tmax)<=*(qi+qmax))
                   {
                       if(*(tian+t)<*(qi+qmax)) win--;
                       qmax--;
                       t++;
                   }
                  
                   
              }
              else if(*(tian+t)<*(qi+q))
              {
                  win--;
                  t++;
                  qmax--;
              }
      } 
      printf("%d\n",win*200); 
    }  
    
}
