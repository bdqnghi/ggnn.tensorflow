void Factorize(int n, int fact);
int number = 0;
int main()
{
	int times, num, i;
	cin >> times;
	for (i = 0; i < times; i++)
	{
		cin >> num;
		Factorize(num, 2);
		cout << number << endl;
		number = 0;
	}
	return  0;
}
void Factorize(int n, int fact)
{
	int i;
	for (i = fact; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			Factorize(n / i, i);
	}
	number++;
}
