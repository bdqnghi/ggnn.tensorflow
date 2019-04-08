int main()
{
  int n , i , j , t , x ;
  cin>>n;
  int a[n];
  for ( i=0;i<n;i++)
   {
     cin>>x;
     a[i]=x;
    }
  for( i=0;i<n;i++)
    { 
      for ( j=i+1;j<n;j++)
        {
           if (a[i]==a[j])
            {
              for ( t=j;t<n;t++)
               {
                 a[t]=a[t+1];
               }
               n--;
               j--;
            }
         }
     }
  for (i=0;i<n-1;i++)
    {
      cout<<a[i]<<" ";
    }
  cout<<a[n-1]<<endl;
  return 0;
}