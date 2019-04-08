int main()
{
 int m;
 cin>>m;
 const int n=m;
 int a[n+1];
 for(int i=n;i>=1;i--)cin>>a[i];
 for(int i=1;i<n;i++)cout<<a[i]<<' ';
 cout<<a[n];
 return 0;  
} 
