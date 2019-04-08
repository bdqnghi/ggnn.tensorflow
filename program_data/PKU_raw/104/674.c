void gaoxiao(int m,int n)
{
	if(m>n)
		m=m/2;
	if(m<n)
		n=n/2;
	if(m==n)
		cout<<m<<endl;
	else
		gaoxiao(m,n);
}
int main()
{
	int m,n;
	cin>>m>>n;
	gaoxiao(m,n);
	char mm;
	cin>>mm;
	return 0;
}

