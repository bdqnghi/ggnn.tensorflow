int main()
{
     int t,n,m,i,a[100][100],j,k,sum;
     cin>>t;
     int (*p)[100];
     for(i=0;i<t;i++)
     {
         sum=0;
         cin>>n>>m;
         for(j=0;j<n;j++)
         {
              for(k=0;k<m;k++)
                   cin>>a[j][k];
         }
         p=a;
         if(n==1||m==1||m==2||n==2)
         {
              for(j=0;j<n;j++)
              {
                  for(k=0;k<m;k++)
                       sum=sum+*(*(p+j)+k);
               }
          }
          else
          {
               for(k=0;k<m;k++)
               {
                      sum=sum+*(*(p)+k)+*(*(p+n-1)+k);
               }
               for(j=1;j<n-1;j++)
               {
                      sum=sum+*(*(p+j)+0)+*(*(p+j)+m-1);
                }
           }
          cout<<sum<<endl;
       }
     return 0;
}