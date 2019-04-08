int main()
{
	int num, k = 0;
	cin >> num;
	if(num % 3 == 0)
		cout << "3";
	else
		k++;
	if(num % 5 == 0)
	{
		if(k == 1)
			cout << "5";
		else
			cout << " 5";
	}
	else
		k++;
	if(num % 7 == 0)
	{
		if(k == 2)
			cout << "7";
		else
			cout << " 7";
	}
	else
		k++;
	if(k == 3)
		cout << "n" << endl;
	else 
		cout << "\n";
	return 0;
}