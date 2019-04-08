void paixu(int *a,int n)              //n?????,?????? 
{
     int i,j,t;
     for(i=0;i<n;i++)
     {
                     for(j=0;j<n-i-1;j++)
                        {
                                            if(a[j]>a[j+1])
                                            {
                                                           t=a[j];
                                                           a[j]=a[j+1];
                                                           a[j+1]=t;
                                                           }
                                                           }
                                                           }
}
main()
{
      int i,j,k,a[1000],b[1000],m,n,p,q;                     //a????????b????? 
      loop:;
      k=0;                    //k??????? 
      scanf("%d",&n);
      if(n==0)
      return 0;
      for(j=0;j<n;j++)
      scanf("%d",&a[j]);
      for(j=0;j<n;j++)
      scanf("%d",&b[j]);
      paixu(a,n);
      paixu(b,n);
      p=n;               //j???????? 
      q=0;                //q???????????? 
      for(i=0;i<n;i++)
      {
                      if(a[i]>b[q])
                      {
                                   k++;
                                   q++;
                                   continue;
                                   }
                      else if(a[i]<b[q])
                      {
                          p--;
                          k--;
                          continue;
                          }
                      else
                      {
                          if(a[n-1]>b[p-1])
                          {
                                           k++;
                                           n--;
                                           i--;
                                           p--;
                                           continue;
                                           }
                          else if(a[n-1]<b[p-1])
                          {
                               k--;
                               p--;
                               continue;
                               }
                          else
                          {
                              if(a[i]<b[p-1])
                              {
                              k--;
                              p--;
                              continue;
                              }
                              else if(a[i]==b[p-1])
                              break;
                              }
                              }
                              }
      printf("%d\n",200*k);                 
      goto loop;
      }