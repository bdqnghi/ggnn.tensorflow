int main()
{
    int n,a[100];
    cin>>n;
    int *p;
    p=a; 
    for (int i=0;i<n;i++)
      {
        int x;
        cin>>x;
        *p=x;
        p++;
      }
     for (int i=n-1;i>0;i--)
      {
          p--;    
         cout<<*p<<" ";
      }
      p--;
      cout<<*p;
      return 0;
}                      
