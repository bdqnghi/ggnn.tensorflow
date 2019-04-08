int a[30] = {0};
int fibo(int n)
{
	if(a[n] != 0)
		return a[n];
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	a[1] =1;
	a[2] = 1;
	
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		cout<<fibo(k)<<endl;
	}
	return 0;
}