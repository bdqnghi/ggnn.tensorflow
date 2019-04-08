int i,j,n;
int prime(int a)
{
	for(i=2;i*i<=a;i++)
		if(a%i==0) return(0);
}
int main()
{
	cin>>n;
	for(j=2;j<=n/2;j++)
	{
		if(prime(j)*prime(n-j)!=0) cout<<j<<" "<<n-j<<endl;
	}
    return 0;
}