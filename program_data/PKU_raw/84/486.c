int main()
{
    int i=0,j=0,p=0,a[101],n=0;
    memset(a,0,sizeof(a));
    cin>>n;
    for(i=1;i<=n;i++)
    {
          cin>>a[i];
    }
    
    
    for(j=1;j<=n-1;j++)
    {
          for(i=1;i<=n-j;i++)
          {
                if(a[i]<a[i+1])
                {
                      p=a[i];
                      a[i]=a[i+1];
                      a[i+1]=p;
                }
          }
    }
    cout<<a[1]<<endl;
    cout<<a[2];
    return 0;
} 
