int count(int,int);
int main()
{
	
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			int m,n;
			cin>>m>>n;
			cout<<count(m,n)<<endl;
		}
	return 0;
}
int count(int m,int n)
{
	if(n==1||m==0)
		return 1;
	if(n>m)
		return count(m,m);
	return count(m,n-1)+count(m-n,n);
}