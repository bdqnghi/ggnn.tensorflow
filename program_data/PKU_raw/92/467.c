int main()
{
    int n,s,tmp; 
    for(s=0;s<100;s++)
    {
           scanf("%d",&n);
           if(n==0)  break;
           int a[1000],b[1000];
           int i,j,k,r;
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           for(i=0;i<n;i++)
           scanf("%d",&b[i]);
           for(j=n-1;j>0;j--)
           {
                      for(r=0;r<j;r++)
                      {
                                      if(a[r]>a[r+1])
                                      {
                                                     tmp=a[r+1];
                                                     a[r+1]=a[r];
                                                     a[r]=tmp;
                                      }
                                      if(b[r]>b[r+1])
                                      {
                                                     tmp=b[r+1];
                                                     b[r+1]=b[r];
                                                     b[r]=tmp;
                                      }
                      }
           }
           int m=0;
           for(i=0;i<n;i++)
           {
                           if(a[i]>b[i]) m++;
                           if(a[i]<b[i]) 
                           {
                                         m--;
                                         for(j=n-1;j>i;j--)
                                         b[j]=b[j-1];
                                         continue;
                           }
                           if(a[i]==b[i])
                           {
                                         for(k=n-1;k>i;k--)
                                         {
                                                           if(a[k]>b[k])
                                                           {m++;n--;continue;}
                                                           else
                                                           {
                                                                        if(a[i]==a[k]) continue;
                                                                        m--;
                                                                        for(r=k;r>i;r--)
                                                                        b[r]=b[r-1];
                                                                        n=k+1;
                                                                        break;
                                                           }
                                         }
                           }
           }
      
           printf("%d\n",200*m);
    }
    getchar();
    getchar();
}