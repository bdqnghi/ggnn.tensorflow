int main()
{
  int n,t=500,q=0,w,m=0;
  cin>>n;
  int a[n],b[t];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int j=0;j<n;j++)
    if(a[j]%2!=0)
      {
       b[m]=a[j];
       q++;
       m++;
      }
  for(int i=1;i<=q-1;i++)
    for(int j=0;j<=q-i;j++)
      if(b[j]>b[j+1])
        {
         w=b[j];
         b[j]=b[j+1];
         b[j+1]=w;
        }    
  cout<<b[0];
  for(int k=1;k<=q-1;k++)
    cout<<","<<b[k];
  
  return 0;
}

