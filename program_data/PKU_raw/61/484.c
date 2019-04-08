

int main()
{
	int n;
	cin >> n;
	while (n --)
	{
		int num;
		cin >> num;
		if (num == 1 || num == 2)
			cout << "1" << endl;
		else
		{
			int f1, f2, result;
			f1 = 1;
			f2 = 1;
			while (num > 2)
			{
				result = f1 + f2;
				f1 = f2;
				f2 = result;
				num --;
			}
			cout << result << endl;
		}
	}
	return 0;
}
