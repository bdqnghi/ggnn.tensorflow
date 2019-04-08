int main()
{
    int a[1000],b[1000];
    int i,j,k,n,m,t;
    for(i=0;i<100;i++)
     {
          scanf("%d\n",&n);
          if(n==0)
           break;
          else
          {
              for(j=0;j<n;j++)
              scanf("%d",&a[j]);
              for(j=0;j<n;j++)
              scanf("%d",&b[j]);
              for(j=0;j<n;j++)     
               for(k=0;k<n-j-1;k++)
                 if(a[k]<a[k+1])
                 {
                     t=a[k];
                     a[k]=a[k+1];
                     a[k+1]=t;
                     }
               for(j=0;j<n;j++)     
               for(k=0;k<n-j-1;k++)
                 if(b[k]<b[k+1])
                 {
                     t=b[k];
                     b[k]=b[k+1];
                     b[k+1]=t;
                     }
                     
              m=0;
              for(j=n-1;j>=0;j--)
              {
                  if(a[j]>b[j])
                    m++;
                  else               
                    {
                    if(a[0]>b[0])
                     {
                        m++;
                       for(k=0;k<j;k++)
                        {
                         a[k]=a[k+1];
                        b[k]=b[k+1];
                       }
                     }
                      else
                     if(a[j]<=b[j])
                        {
                         if(a[j]!=b[0])          
                        {
                         m--;
                         for(k=0;k<j;k++)
                         b[k]=b[k+1];
                         }
                         
                    }
                     }
              }
              printf("%d\n",m*200);   
                     }
                     }
                    getchar();
                    getchar();
                    }

