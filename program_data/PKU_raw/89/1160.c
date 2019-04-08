int main()
{
  int n,a,b;    
  struct p
  {
      int k;
      int count;  
  }p[10000];
  cin>>n>>a>>b;
  for(int i=0;i<n;i++)
	  p[i].count=0;
  while(!(a==0 && b==0))
  {
      p[b].count++;
      cin>>a>>b;
  }
  for(int i=0;i<n;i++)
	  if(p[i].count == n-1)
	  {    
		  cout<<i;
          return 0;
      }
  cout<<"NOT FOUND";
}