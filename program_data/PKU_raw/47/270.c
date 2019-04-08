int main()
{
   int n=0,i=0;
   int a[101];
   for(i=1;i<=100;i++)
      a[i]=0;
   cin>>n;
   for(i=1;i<=n;i++)
      cin>>a[i];
   for(i=n;i>1;i--)
      cout<<a[i]<<" ";
   cout<<a[1];
   return 0;
}      
