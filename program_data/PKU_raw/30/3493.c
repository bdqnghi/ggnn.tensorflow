int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int a;
	for(a = 1; a <= n; a++)
	{
		if(a == 17 || a == 27 || a == 37 || a == 47 || a == 57 || a == 67 || a == 87 || a == 97 || a == 7)
		{
			;
		}
		else if(a >= 70 && a < 80)
		{
			;
		}
		else if(a % 7 == 0)
		{
			;
		}
		else
		{
			sum = sum + a * a;
		}
	}
	cout << sum << endl;
}