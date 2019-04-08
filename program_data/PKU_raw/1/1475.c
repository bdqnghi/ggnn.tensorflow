//**********************
//* ???   ????  *
//* 1200012878 ???  *
//* 12?1?            *
//**********************
int fengjie(int a, int b)
{
	if (a ==2 || a == 3)
		return 1;
	int sum = 1;
	int c = sqrt(a);
	for (int i = b; i <= c; i++)
	{
		if (a % i == 0)
		{
			sum = sum + fengjie(a / i, i);
		}
	}
	return sum;
}
int main()
{
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		cout << fengjie(a, 2) << endl;
	}
	return 0;
}
		
		
