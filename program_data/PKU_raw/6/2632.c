int main()
{
   int k;
   cin>>k;
   for(int i=1;i<=k;i++)
    {
      int m,n;
      cin>>m>>n;
      int a[m][n];
      int (*p)[n]=a;
      for(int x=0;x<m;x++)
        for(int y=0;y<n;y++)
          cin>>*(*(p+x)+y);
      int sum=0;
      for(int y=0;y<n;y++)
        sum+=*(*(p)+y);
      for(int x=1;x<m;x++)
        sum+=*(*(p+x)+n-1);
      for(int y=n-2;y>=0;y--)
        sum+=*(*(p+m-1)+y);
      for(int x=m-2;x>=1;x--)
        sum+=*(*(p+x));
      cout<<sum<<endl;      
     
     
     
     }
   
   
   
   

 return 0;
 }
