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
        
        int n,i,j,m,win,pmax,qmax;
        scanf("%d",&n);
        if(n==0) break;
     
        int* q=(int*)malloc(n*sizeof(int));
        int* p=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {scanf("%d",&q[i]);}
        for(i=0;i<n;i++)
        {scanf("%d",&p[i]);}
        f(p,n);
        f(q,n);
        
        i=0;j=0;
        win=0;
        pmax=n-1;
        qmax=n-1;
        m=n;
         for(;m>=1;m--)
        {
              if(q[i]>p[j])
              {
                   win++;
                   i++;
                   j++;
              }
              else if(q[i]==p[j])
              {
                   if(q[qmax]>p[pmax])
                   {
                       win++;
                       qmax--;
                       pmax--;
                   }
                  else
                   {
                       if(q[i]<p[pmax]) win--;
                       pmax--;
                       i++;
                   }
                  
                   
              }
              else if(q[i]<p[j])
              {
                  win--;
                  i++;
                  pmax--;
              }
        } 
      printf("%d\n",win*200);
      free(p);free(q); 
      }
}
