int main()
{
  int n,i,j,m;
   cin>>n;
  
  
 
  if(n>1&&n<100)
  {int a[n+1];
                for(i=1;i<=n;i++)  
  {
  cin>>a[i];
                 }
    for (i=1;i<=3;i++)             
        {
          for(j=1;j<=n-i;j++)
          {
            if(a[j]>=a[j+1])
            {m=a[j];
            a[j]=a[j+1];
               a[j+1]=m;}               
                           }                         
                              }                     
                  cout<<a[n]<<endl;
                  cout<<a[n-1];}                 
                                      
    return 0;
    }
