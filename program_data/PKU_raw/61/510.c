int num[30]={0,1,1};
void fib()
{
for(int i=2;i<30;i++)
	num[i]=num[i-1]+num[i-2];	
	
}
int main()
{
	int n;
	cin>>n;
	fib();
	while(n--)
	{
		int a;
		cin>>a;
		cout<<num[a]<<endl;
	}
	return 0;
}
