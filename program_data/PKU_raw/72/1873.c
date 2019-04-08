int main()
{
    
   int m,n,i,j,u;
   cin>>m>>n;
   int a[m+2][n+2];
      for(i=0 ;i<m+2;i++)
       for(j=0; j<n+2;j++)
         a[i][j]=0;
     for(i=1 ;i<m+1;i++)
       for(j=1; j<n+1;j++)
         cin>>a[i][j];
       for(i=1;i<m+1;i++)
         for(j=1;j<n+1;j++)
          {if((a[i][j]>=a[i-1][j])+(a[i][j]>=a[i+1][j])+(a[i][j]>=a[i][j-1])+(a[i][j]>=a[i][j+1])==4)
            cout<<i-1<<" "<<j-1<<endl;}
        
        return 0;
        }
        