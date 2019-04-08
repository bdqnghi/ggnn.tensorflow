void sort(int a[],int n);
main()
{
      int n,i,j,k,t,money,r,qwf,qws,tjf,tjs;
      int win=0,lose=0;
      int tj[1001],qw[1001];
      for(r=0;;r++)
      {
      scanf("%d",&n);
      if(n==0)
          goto label;
      for(i=0;i<n;i++)
          scanf("%d",&tj[i]);
      for(i=0;i<n;i++)
          scanf("%d",&qw[i]);
      sort(tj,n);
      sort(qw,n);
      qwf=0;qws=n-1;
      tjf=0;tjs=n-1;
      for(i=0;i<n;i++)
      {
          if(tj[tjf]>qw[qwf])
          {
               win++;
               tjf++;
               qwf++;              
          }
          else if(tj[tjs]>qw[qws])
          {
               win++;
               tjs--;
               qws--;              
          }
          else
          {
               if(tj[tjs]!=qw[qwf])
                   lose++;
               qwf++;
               tjs--;
          }            
      }
      money=(win-lose)*200;
      printf("%d\n",money);
      win=0;
      lose=0;      
      }      
      label:;
      
}

void sort(int a[],int n)
{
     int i,j,k,t;
     for(i=0;i<n-1;i++)
     {
          k=i;
          for(j=i+1;j<n;j++)
          {
               if(a[j]>a[k])
                    k=j;
               else if(a[j]==a[k]) 
                    continue;            
          }
          t=a[k];
          a[k]=a[i];
          a[i]=t;             
     }
}
