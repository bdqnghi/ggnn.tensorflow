//????
//2010?12?03?
//1000012753 ???
int deal(int num, int p)
{
	int i, sum = 0;
	if(num == 1)
		return 1;
	for(i = p; i <= num; ++i)
		if(num % i == 0)
			sum += deal(num / i, i);
	return sum;
}
int main()
{
	int n, a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		cout << deal(a, 2) << endl;
	}
	return 0;
}  
