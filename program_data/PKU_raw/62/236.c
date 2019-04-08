
int main()
{
	char str[1000];
	for(int i = 0; cin >> str; i++)
	{
		if(i == 0)
			cout << str;
		else
			cout << " " << str;
	}
	cout << endl;

	return 0;
}
