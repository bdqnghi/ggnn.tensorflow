
main()
{
      int n,t,i,j,h,k,b[25],a[25];
      k=1;
           t=n-1;
           scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      b[i]=1;
      for(i=n-2;i>=0;i--)
      {
                         for(j=i+1;j<n;j++)
                         {
                                          
                                         if(a[i]>=a[j])
                                         {
                                                       t=j;
                                                       b[i]=b[j]+1;
                                         
                                         for(h=j;h<n;h++)
                                         {
                                                       if(a[i]>=a[h]&&b[h]>b[t])
                                                       {
                                                       b[i]=b[h]+1;
                                                                                                             t=h;
                                                       }
                                                       
                                         
                                        
                                         }
                                                       if(k<b[i])
                                                       {
                                                               k=b[i];
                                                                                                                      
                                                       }
                                                        break;
                                         }
                         }
      }
      printf("%d",k);
      
}