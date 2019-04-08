
int main()
{ const int max=100;
  int i,n,m,a[max];
  
  cin>>n>>m;
  for(i=m;i<n;i++) cin>>a[i];
  for(i=0;i<m;i++) cin>>a[i];
  cout<<a[0];
  for(i=1;i<n;i++) cout<<" "<<a[i];
  return 0;
}