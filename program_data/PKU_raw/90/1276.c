int f(int m,int n) 
{
    if(m==0||m==1) return 1;
	if(n==1) return 1;
	if(m<n) n=m;
	return f(m,n-1)+f(m-n,n); 

}

int main()
{
	int i=0,t,m,n;
	cin>>t;
	while(i<t)
	{
	   cin>>m>>n;
	   cout<<f(m,n)<<endl;
	  i++;
	}
	
	return 0;
}