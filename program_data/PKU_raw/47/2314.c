void get(int);
int i=1;
int main()
{   
	int n;
	cin>>n;
	get(n);
	return 0;
}
void get(int n)
{
  int a,m;
  cin>>a;i++;
  if(i<n)get(n);
  else if(i==n){cin>>m;cout<<m;}
  cout<<" "<<a;  
}