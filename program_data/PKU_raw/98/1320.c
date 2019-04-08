int main()
{
	char verb[42], m;
	int num, size, sum = 0;
	cin >> num;
	while (1)
	{
		cin >> verb;
		m = cin.get();
		size = strlen(verb);
		if (sum == 0)
		{
			cout << verb;
			sum += size;
		}
		else
		{
			sum += (size + 1);
			if (sum <= 80)
			{
				cout << " " << verb;
			}
			else 
			{
				cout << endl;
				cout << verb;
				sum = size;
			}
		}
		if (m == '\n')
			break;
	}
	return 0;
}



		
