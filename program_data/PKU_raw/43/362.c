int main()
{
	int find(int n);
	int m,k;
	cin>>m;
	for(k=3;k<=(m/2);k=k+2)
	{
		if(k==find(k)&&(m-k)==find(m-k)) 
			cout<<k<<" "<<m-k<<endl;
	}
	return 0;
}
int find(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0) c=c+1;
	}
	if(c==2) return (n);
	else return 0;
}
