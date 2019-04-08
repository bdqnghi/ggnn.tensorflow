int num[100000] = {0};
int f(int n)
{
	if(num[n]>0)
		return num[n];
	else
		return(f(n-1)+f(n-2));
}
int main()
{
	int n;
	cin >> n;
	int a;
	int out;
	num[1] = 1;
	num[2] = 1;
	while(n--)
	{
		cin >> a;
		if(a==1 || a==2)
			cout << 1 << endl;
		else
		{
			out = f(a);
			cout << out << endl;
		}
	}
	return 0;
}