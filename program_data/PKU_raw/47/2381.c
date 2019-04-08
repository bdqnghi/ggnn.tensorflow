int main()
{
    int n; 
    int a[100]={0};
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
   }  
   for (int i=n-1;i>0;i--)
   cout<<a[i]<<" ";
   cout<<a[0];
   return 0;
}     
        
