int main()
{
	int x;
	cin >> x;
	if (x % 3 == 0)
	{
		if (x % 5 == 0)
		{
			if (x % 7 == 0)
				cout << "3" << " " << "5" << " " << "7" << endl;
			else
				cout << "3" << " " << "5" << endl;
		}
		else
		{
			if (x % 7 == 0)
				cout << "3" << " " << "7" << endl;
			else
				cout << "3" << endl;
		}
	}
	else
	{
		if (x % 5 == 0)
		{
			if (x % 7 == 0)
				cout << "5" << " " << "7" << endl;
			else
				cout << "5" << endl;
		}
		else
		{
			if (x % 7 == 0)
				cout << "7" << endl;
			else
				cout << "n" << endl;
		}
	}
	return 0;
}