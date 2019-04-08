int n;
int a[1000],b[1000];
void paixu(int *p)
{
     int i,j,k;
     for(i=1;i<=n;i++)
     {
                      for(j=i+1;j<=n;j++)
                      {
                                         if(p[i]<p[j]) 
                                         {
                                                       k=p[i];
                                                       p[i]=p[j];
                                                       p[j]=k;
                                         }
                      }
     }                
}
main()
{
      int i,j,k,temp,sum,p,q;
      for(;;)
      {
             scanf("%d",&n);
             if(n==0) break;
             else
             {
                 for(i=1;i<=n;i++) scanf("%d",&a[i]);
                 for(i=1;i<=n;i++) scanf("%d",&b[i]);
                 sum=0;
                 paixu(a);
                 paixu(b);
                 for(i=1,j=1,p=n,q=n;i<=q;)
                 {
                                  if(b[i]<a[j]) 
                                  {
                                                sum+=200;
                                                i++;
                                                j++;
                                  }
                                  else
                                  {
                                      if(b[q]<a[p])
                                      {
                                                   sum+=200;
                                                   p--;
                                                   q--;
                                      }
                                      else
                                      {
                                          if(b[i]==a[p])
                                          {
                                                        i++;
                                                        p--;
                                          }
                                          else if(b[i]>a[p])
                                          {
                                               sum-=200;
                                               i++;
                                               p--;
                                          }
                                      }
                                  }
                 }
                 printf("%d\n",sum);
             }
      }
      
}
