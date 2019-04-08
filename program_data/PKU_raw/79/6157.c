
int main()
{
  int n, m, i, s=0;
  while(cin>>n>>m && n!=0 && m!=0)
  {
          s=0;
          for(i=2; i<=n; i++) 
              s=(s+m)%i;
          cout<<s+1<<endl;
  }
  return 0;
}
