int num[MAX] = {0};
int f(int x)
{
	if( x == 1 || x == 2)
		return 1;
	return f(x-1) + f(x-2);
}
int main()
{
	int n = 0 ;
	cin>> n;
	while(n--)
	{
		int a = 0;
		cin>>a;
		cout<< f(a) <<endl;
	}
	return 0;
}