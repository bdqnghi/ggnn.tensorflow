int main()
{
   int m,n;
   cin>>m>>n;
   int a[m][n];
   for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
       cin>>a[i][j];
   int sum=0;
   while(1)
   {
    if(sum==m+n-1) break;
    else if(sum<=n-1)
      {
       for(int i=0;i<=sum;i++)
         {
          if(i>m-1) break;
          cout<<a[i][sum-i]<<endl;
          }
         sum++;
       }
    else
      {
       for(int i=sum+1-n;i<=sum;i++)
         {
          if(i>m-1) break;
          cout<<a[i][sum-i]<<endl;
         }
       sum++;
       }
    }
 
 
 

 return 0;
 }
