int main()
{   
    int n;cin>>n;
    int m=n;
    int t=n;
    while(m>0)
    {int a[100][100];
    n=t;
     m=m-1;
     for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     cin>>a[i][j];
     int sum=0;
     while(n>1)
     {
     for(int i=0;i<n;i++)
     {int hmin=a[i][0];
     for(int j=0;j<n;j++)
     {
             if(a[i][j]<hmin) hmin=a[i][j];
      }
      
            for(int j=0;j<n;j++)
            a[i][j]-=hmin;
      }
       for(int i=0;i<n;i++)
     {int lmin=a[0][i];
     for(int j=0;j<n;j++)
     {
             if(a[j][i]<lmin) lmin=a[j][i];
     }
            for(int j=0;j<n;j++)
            a[j][i]-=lmin;   //guiling
      }
      sum+=a[1][1];
      for(int i=0;i<n;i++)  
      for(int j=1;j<n-1;j++)
      a[i][j]=a[i][j+1]  ;
     for(int i=0;i<n-1;i++)  
      for(int j=1;j<n-1;j++) 
      a[j][i]=a[j+1][i];
      n=n-1;
      }
      cout<<sum<<endl;
      }
      return 0;
      }
